/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/SatelliteClockInfo.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/SatelliteClockInfo.aidl
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
class SatelliteClockInfo : public ::android::Parcelable {
public:
  double satHardwareCodeBiasMeters = 0.000000;
  double satTimeCorrectionMeters = 0.000000;
  double satClkDriftMps = 0.000000;
  inline bool operator!=(const SatelliteClockInfo& rhs) const {
    return std::tie(satHardwareCodeBiasMeters, satTimeCorrectionMeters, satClkDriftMps) != std::tie(rhs.satHardwareCodeBiasMeters, rhs.satTimeCorrectionMeters, rhs.satClkDriftMps);
  }
  inline bool operator<(const SatelliteClockInfo& rhs) const {
    return std::tie(satHardwareCodeBiasMeters, satTimeCorrectionMeters, satClkDriftMps) < std::tie(rhs.satHardwareCodeBiasMeters, rhs.satTimeCorrectionMeters, rhs.satClkDriftMps);
  }
  inline bool operator<=(const SatelliteClockInfo& rhs) const {
    return std::tie(satHardwareCodeBiasMeters, satTimeCorrectionMeters, satClkDriftMps) <= std::tie(rhs.satHardwareCodeBiasMeters, rhs.satTimeCorrectionMeters, rhs.satClkDriftMps);
  }
  inline bool operator==(const SatelliteClockInfo& rhs) const {
    return std::tie(satHardwareCodeBiasMeters, satTimeCorrectionMeters, satClkDriftMps) == std::tie(rhs.satHardwareCodeBiasMeters, rhs.satTimeCorrectionMeters, rhs.satClkDriftMps);
  }
  inline bool operator>(const SatelliteClockInfo& rhs) const {
    return std::tie(satHardwareCodeBiasMeters, satTimeCorrectionMeters, satClkDriftMps) > std::tie(rhs.satHardwareCodeBiasMeters, rhs.satTimeCorrectionMeters, rhs.satClkDriftMps);
  }
  inline bool operator>=(const SatelliteClockInfo& rhs) const {
    return std::tie(satHardwareCodeBiasMeters, satTimeCorrectionMeters, satClkDriftMps) >= std::tie(rhs.satHardwareCodeBiasMeters, rhs.satTimeCorrectionMeters, rhs.satClkDriftMps);
  }

  ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.SatelliteClockInfo");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "SatelliteClockInfo{";
    _aidl_os << "satHardwareCodeBiasMeters: " << ::android::internal::ToString(satHardwareCodeBiasMeters);
    _aidl_os << ", satTimeCorrectionMeters: " << ::android::internal::ToString(satTimeCorrectionMeters);
    _aidl_os << ", satClkDriftMps: " << ::android::internal::ToString(satClkDriftMps);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class SatelliteClockInfo
}  // namespace gnss
}  // namespace hardware
}  // namespace android
