#include <cstdio>
#include <mutex>
#include <unistd.h>
#include <iomanip>
#include <map>
#include <termios.h>
#include <cutils/properties.h>
#include <utils/Log.h>

#include "include/GnssHwConnection.hpp"
#include "include/Constants.h"


namespace aidl::android::hardware::gnss::implemenation {
    std::shared_ptr<GnssHwConnection> GnssHwConnection::s_pInstance{nullptr};
    std::once_flag GnssHwConnection::s_initFlag;

    std::shared_ptr<GnssHwConnection> GnssHwConnection::getInstance() {
        std::call_once(s_initFlag, [](){ 
            s_pInstance.reset(new GnssHwConnection); 
        });
        return s_pInstance;
    }

    bool GnssHwConnection::connect() {
        const char* path{};
        if (property_get(DEFAULT_PROPERTY_GPS_DEVICE_PATH, path) <= 0) {
            ALOGE("Couldn't find the property %s", std::quoted(path));
            return false;
        } 

        int fd{};
        if (fd = open(path, O_RDWR | O_NOCTTY | O_NDELAY); fd < 0) {
            ALOGE("Couldn't open the path %s (%d)", std::quoted(path), errno);
            return false;
        }

        std::string baud{};
        if (property_get(DEFAULT_PROPERTY_GPS_DEVICE_BAUDRATE, &baud, B9600) <= 0) {
            ALOGW("Couldn't find the property %s, Baud rate defaults to `9600`", DEFAULT_PROPERTY_GPS_DEVICE_BAUDRATE);
        }

        struct termios options;
        tcgetattr(fd, &options);
        cfsetispeed(&options, convertStrToBaud(baud));
        cfsetospeed(&options, convertStrToBaud(baud));
        options.c_cflag |= (CLOCAL | CREAD);
        tcsetattr(fd, TCSANOW, &options);

        s_bIsActive = true;
        s_svGnssFd = fd;

        return true;
    }

    bool GnssHwConnection::disconnect() {
        // TODO: Think about whether this is really necessary
        if (!s_svGnssFd) {
            ALOGE("The file descriptor is missing");
            return false;
        }

        if (!s_bIsActive) {
            ALOGE("The connection is not active");
            return false;
        }

        if (close(s_svGnssFd) == -1) {
            ALOGE("Failed to close the file descriptor");
            return false;
        }

        return true;
    }



    GnssHwConnection::~GnssHwConnection() {
        if (!disconnect()) {
            // TODO: What should I do to resolve this
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
