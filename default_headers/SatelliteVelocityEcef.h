/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/SatelliteVelocityEcef.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/SatelliteVelocityEcef.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace hardware {
namespace gnss {
class SatelliteVelocityEcef : public ::android::Parcelable {
public:
  double velXMps = 0.000000;
  double velYMps = 0.000000;
  double velZMps = 0.000000;
  double ureRateMps = 0.000000;
  inline bool operator!=(const SatelliteVelocityEcef& rhs) const {
    return std::tie(velXMps, velYMps, velZMps, ureRateMps) != std::tie(rhs.velXMps, rhs.velYMps, rhs.velZMps, rhs.ureRateMps);
  }
  inline bool operator<(const SatelliteVelocityEcef& rhs) const {
    return std::tie(velXMps, velYMps, velZMps, ureRateMps) < std::tie(rhs.velXMps, rhs.velYMps, rhs.velZMps, rhs.ureRateMps);
  }
  inline bool operator<=(const SatelliteVelocityEcef& rhs) const {
    return std::tie(velXMps, velYMps, velZMps, ureRateMps) <= std::tie(rhs.velXMps, rhs.velYMps, rhs.velZMps, rhs.ureRateMps);
  }
  inline bool operator==(const SatelliteVelocityEcef& rhs) const {
    return std::tie(velXMps, velYMps, velZMps, ureRateMps) == std::tie(rhs.velXMps, rhs.velYMps, rhs.velZMps, rhs.ureRateMps);
  }
  inline bool operator>(const SatelliteVelocityEcef& rhs) const {
    return std::tie(velXMps, velYMps, velZMps, ureRateMps) > std::tie(rhs.velXMps, rhs.velYMps, rhs.velZMps, rhs.ureRateMps);
  }
  inline bool operator>=(const SatelliteVelocityEcef& rhs) const {
    return std::tie(velXMps, velYMps, velZMps, ureRateMps) >= std::tie(rhs.velXMps, rhs.velYMps, rhs.velZMps, rhs.ureRateMps);
  }

  ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.SatelliteVelocityEcef");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "SatelliteVelocityEcef{";
    _aidl_os << "velXMps: " << ::android::internal::ToString(velXMps);
    _aidl_os << ", velYMps: " << ::android::internal::ToString(velYMps);
    _aidl_os << ", velZMps: " << ::android::internal::ToString(velZMps);
    _aidl_os << ", ureRateMps: " << ::android::internal::ToString(ureRateMps);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class SatelliteVelocityEcef
}  // namespace gnss
}  // namespace hardware
}  // namespace android
