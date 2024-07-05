#ifndef __GNSS_HW_CONNECTION_HPP__
#define __GNSS_HW_CONNECTION_HPP__

#include <string_view>
#include <memory>

#include "Constants.h"


namespace aidl::android::hardware::gnss::implemenation {
/**
 * Represents a pipeline to GNSS harware.
 */
    class GnssHwConnection {
    private:
        static const std::string_view& s_kGnssFd;
        static const std::shared_ptr<GnssHwConnection> s_mInstance;

        GnssHwConnection();

    public:
        // Prevents Copies
        GnssHwConnection(const GnssHwConnection&) = deleted;
        GnssHwConnection& operator=(const GnssHwConnection&) = deleted;

        // The class is a singleton
        static std::shared_ptr<GnssHwConnection> getInstance(){
            if (!s_mInstance) {
                s_mInstance = std::make_shared<GnssHwConnection>();
            }
            return s_mInstance;
        }
        bool connectToHw();
    };

}

#endif //__GNSS_HW_CONNECTION_HPP__