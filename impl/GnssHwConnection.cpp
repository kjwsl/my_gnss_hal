#include <cstdio>
#include <mutex>
#include <unistd.h>
#include <iomanip>
#include <thread>
#include <map>
#include <termios.h>
#include <cutils/properties.h>
#include <utils/Log.h>

#include "include/GnssHwConnection.hpp"
#include "include/Constants.h"

#if DEBUG
#define DEBUG(...) ALOGD(##__VA_ARGS__)
#else
#define DEBUG(...) (void)(0)
#endif


namespace aidl::android::hardware::gnss::implemenation {
    std::shared_ptr<GnssHwConnection> GnssHwConnection::s_pInstance{nullptr};
    std::once_flag GnssHwConnection::s_initFlag;

    std::shared_ptr<GnssHwConnection> GnssHwConnection::getInstance() {
        DEBUG("GnssHwConnection is instantiated");
        std::call_once(s_initFlag, [](){ 
            s_pInstance.reset(new GnssHwConnection); 
        });
        return s_pInstance;
    }

    void GnssHwConnection::init() {
        const char* path{};
        if (property_get(DEFAULT_PROPERTY_GPS_DEVICE_PATH, path) <= 0) {
            ALOGE("Couldn't find property for GPS device (%s)", std::quoted(path));
            return false;
        } 

        int fd{};
        if (fd = open(path, O_RDWR | O_NOCTTY | O_NDELAY | O_NONBLOCK); fd < 0) {
            ALOGE("Couldn't open path %s (%d)", std::quoted(path), errno);
            return false;
        }

        std::string baud{};
        if (property_get(DEFAULT_PROPERTY_GPS_DEVICE_BAUDRATE, &baud, B9600) <= 0) {
            ALOGW("Couldn't find property for baud rate (%s), Baud rate defaults to `9600`", DEFAULT_PROPERTY_GPS_DEVICE_BAUDRATE);
        }

        struct termios options;
        tcgetattr(fd, &options);
        cfsetispeed(&options, convertStrToBaud(baud));
        cfsetospeed(&options, convertStrToBaud(baud));
        options.c_cflag |= (CLOCAL | CREAD);
        tcsetattr(fd, TCSANOW, &options);
    }


    bool GnssHwConnection::start() {
        if (m_bIsRunning) {
            return true;
        }
        
        init();

        m_thread = std::thread(&GnssHwConnection::readThread, this);
        m_bIsRunning = true;

        return true;
    }

    bool GnssHwConnection::stop() {
        if (!m_bIsRunning) {
            return true;
        }

        // TODO: Think about whether this is really necessary
        if (!m_svGnssFd) {
            ALOGE("The file descriptor is missing");
            return false;
        }

        if (!m_bIsRunning) {
            ALOGE("The connection is not active");
            return false;
        }

        if (close(m_svGnssFd) == -1) {
            ALOGE("Failed to close the file descriptor");
            return false;
        }

        m_bIsRunning = false;
        if (m_thread.joinable()) {
            m_thread.join();
        }


        return true;
    }

    void GnssHwConnection::readThread() {


    }

    ssize_t GnssHwConnection::readDev(void* buffer, size_t size) {
        
        

    }

    ssize_t GnssHwConnection::writeDev() {
        

    }



    GnssHwConnection::~GnssHwConnection() {
        if (!stop() && !m_bIsRunning) {
            // TODO: What should I do to resolve this
            ALOGE("Failed to stop Gnss Hardware Connection");
        }
    }

    speed_t GnssHwConnection::convertStrToBaud(const std::string& str) {
         static const std::map<std::string, speed_t> s_baudMap = {
            {"0", B0}, {"50", B50}, {"75", B75}, {"110", B110}, {"134", B134}, {"150", B150},
            {"200", B200}, {"300", B300}, {"600", B600}, {"1200", B1200}, {"1800", B1800},
            {"2400", B2400}, {"4800", B4800}, {"9600", B9600}, {"19200", B19200}, {"38400", B38400},
            {"57600", B57600}, {"115200", B115200}, {"230400", B230400}
         };
         return s_baudMap.find(str)->second;
    }
}
