#ifndef __GNSS_HW_CONNECTION_HPP__
#define __GNSS_HW_CONNECTION_HPP__

#include <string_view>
#define GUARDED_BY(x) __attribute__((guarded_by(x)))

#include <mutex>
#include <memory>
#include <thread>
#include <fcntl.h>
#include <termios.h>

namespace aidl::android::hardware::gnss::implemenation {
    /**
     * [Singleton]
     * Represents a pipeline to GNSS hardware.
     */
    class GnssHwConnection {
        public:
            // Prevents Copies
            GnssHwConnection(const GnssHwConnection&) = delete;
            GnssHwConnection& operator=(const GnssHwConnection&) = delete;

            // The class is a singleton
            static std::shared_ptr<GnssHwConnection> getInstance();
            /**
             * Connects to the GNSS Sensor Hardware, and Update `s_svGnssFd`, and `s_bIsActive`.
             * 
             * @return bool Whether connection was successful
             */
            bool start();

            bool stop();

            inline bool isActive() {
                return m_bIsRunning;
            }

            /**
             * Read Gnss Device File
             * 
             * @param [in] buffer Buffer to take read data
             * @param [out] size Size of the buffer
             */
            ssize_t readDev(void* buffer, size_t size);

            ssize_t writeDev();

        private:
            static std::mutex s_mutex;
            static std::shared_ptr<GnssHwConnection> s_pInstance;
            static std::once_flag s_initFlag;
            std::thread m_thread;

            int m_svGnssFd;
            bool m_bIsRunning{false};

            GnssHwConnection() = default;
            virtual ~GnssHwConnection();

            speed_t convertStrToBaud(const std::string& str);
            void readThread();

            bool init();
    };

}

#endif //__GNSS_HW_CONNECTION_HPP__
