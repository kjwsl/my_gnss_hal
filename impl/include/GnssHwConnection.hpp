#ifndef __GNSS_HW_CONNECTION_HPP__
#define __GNSS_HW_CONNECTION_HPP__

#include <string_view>
#define GUARDED_BY(x) __attribute__((guarded_by(x)))

#include <mutex>
#include <memory>
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
            bool connect();

            bool disconnect();

            inline bool isActive() {
                return s_bIsActive;
            }

        private:
            static std::mutex s_mutex;
            static std::shared_ptr<GnssHwConnection> s_pInstance;
            static std::once_flag s_initFlag;

            int s_svGnssFd;
            bool s_bIsActive{false};


            GnssHwConnection() = default;
            virtual ~GnssHwConnection();

            speed_t convertStrToBaud(const std::string& str);
    };

}

#endif //__GNSS_HW_CONNECTION_HPP__
