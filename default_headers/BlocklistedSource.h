/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/BlocklistedSource.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/BlocklistedSource.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/GnssConstellationType.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace hardware {
namespace gnss {
class BlocklistedSource : public ::android::Parcelable {
public:
  ::android::hardware::gnss::GnssConstellationType constellation = ::android::hardware::gnss::GnssConstellationType::UNKNOWN;
  int32_t svid = 0;
  inline bool operator!=(const BlocklistedSource& rhs) const {
    return std::tie(constellation, svid) != std::tie(rhs.constellation, rhs.svid);
  }
  inline bool operator<(const BlocklistedSource& rhs) const {
    return std::tie(constellation, svid) < std::tie(rhs.constellation, rhs.svid);
  }
  inline bool operator<=(const BlocklistedSource& rhs) const {
    return std::tie(constellation, svid) <= std::tie(rhs.constellation, rhs.svid);
  }
  inline bool operator==(const BlocklistedSource& rhs) const {
    return std::tie(constellation, svid) == std::tie(rhs.constellation, rhs.svid);
  }
  inline bool operator>(const BlocklistedSource& rhs) const {
    return std::tie(constellation, svid) > std::tie(rhs.constellation, rhs.svid);
  }
  inline bool operator>=(const BlocklistedSource& rhs) const {
    return std::tie(constellation, svid) >= std::tie(rhs.constellation, rhs.svid);
  }

  ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.BlocklistedSource");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "BlocklistedSource{";
    _aidl_os << "constellation: " << ::android::internal::ToString(constellation);
    _aidl_os << ", svid: " << ::android::internal::ToString(svid);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class BlocklistedSource
}  // namespace gnss
}  // namespace hardware
}  // namespace android
