/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/GnssClock.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/GnssClock.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/GnssSignalType.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>

namespace android::hardware::gnss {
class GnssSignalType;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class GnssClock : public ::android::Parcelable {
public:
  int32_t gnssClockFlags = 0;
  int32_t leapSecond = 0;
  int64_t timeNs = 0L;
  double timeUncertaintyNs = 0.000000;
  int64_t fullBiasNs = 0L;
  double biasNs = 0.000000;
  double biasUncertaintyNs = 0.000000;
  double driftNsps = 0.000000;
  double driftUncertaintyNsps = 0.000000;
  int32_t hwClockDiscontinuityCount = 0;
  ::android::hardware::gnss::GnssSignalType referenceSignalTypeForIsb;
  inline bool operator!=(const GnssClock& rhs) const {
    return std::tie(gnssClockFlags, leapSecond, timeNs, timeUncertaintyNs, fullBiasNs, biasNs, biasUncertaintyNs, driftNsps, driftUncertaintyNsps, hwClockDiscontinuityCount, referenceSignalTypeForIsb) != std::tie(rhs.gnssClockFlags, rhs.leapSecond, rhs.timeNs, rhs.timeUncertaintyNs, rhs.fullBiasNs, rhs.biasNs, rhs.biasUncertaintyNs, rhs.driftNsps, rhs.driftUncertaintyNsps, rhs.hwClockDiscontinuityCount, rhs.referenceSignalTypeForIsb);
  }
  inline bool operator<(const GnssClock& rhs) const {
    return std::tie(gnssClockFlags, leapSecond, timeNs, timeUncertaintyNs, fullBiasNs, biasNs, biasUncertaintyNs, driftNsps, driftUncertaintyNsps, hwClockDiscontinuityCount, referenceSignalTypeForIsb) < std::tie(rhs.gnssClockFlags, rhs.leapSecond, rhs.timeNs, rhs.timeUncertaintyNs, rhs.fullBiasNs, rhs.biasNs, rhs.biasUncertaintyNs, rhs.driftNsps, rhs.driftUncertaintyNsps, rhs.hwClockDiscontinuityCount, rhs.referenceSignalTypeForIsb);
  }
  inline bool operator<=(const GnssClock& rhs) const {
    return std::tie(gnssClockFlags, leapSecond, timeNs, timeUncertaintyNs, fullBiasNs, biasNs, biasUncertaintyNs, driftNsps, driftUncertaintyNsps, hwClockDiscontinuityCount, referenceSignalTypeForIsb) <= std::tie(rhs.gnssClockFlags, rhs.leapSecond, rhs.timeNs, rhs.timeUncertaintyNs, rhs.fullBiasNs, rhs.biasNs, rhs.biasUncertaintyNs, rhs.driftNsps, rhs.driftUncertaintyNsps, rhs.hwClockDiscontinuityCount, rhs.referenceSignalTypeForIsb);
  }
  inline bool operator==(const GnssClock& rhs) const {
    return std::tie(gnssClockFlags, leapSecond, timeNs, timeUncertaintyNs, fullBiasNs, biasNs, biasUncertaintyNs, driftNsps, driftUncertaintyNsps, hwClockDiscontinuityCount, referenceSignalTypeForIsb) == std::tie(rhs.gnssClockFlags, rhs.leapSecond, rhs.timeNs, rhs.timeUncertaintyNs, rhs.fullBiasNs, rhs.biasNs, rhs.biasUncertaintyNs, rhs.driftNsps, rhs.driftUncertaintyNsps, rhs.hwClockDiscontinuityCount, rhs.referenceSignalTypeForIsb);
  }
  inline bool operator>(const GnssClock& rhs) const {
    return std::tie(gnssClockFlags, leapSecond, timeNs, timeUncertaintyNs, fullBiasNs, biasNs, biasUncertaintyNs, driftNsps, driftUncertaintyNsps, hwClockDiscontinuityCount, referenceSignalTypeForIsb) > std::tie(rhs.gnssClockFlags, rhs.leapSecond, rhs.timeNs, rhs.timeUncertaintyNs, rhs.fullBiasNs, rhs.biasNs, rhs.biasUncertaintyNs, rhs.driftNsps, rhs.driftUncertaintyNsps, rhs.hwClockDiscontinuityCount, rhs.referenceSignalTypeForIsb);
  }
  inline bool operator>=(const GnssClock& rhs) const {
    return std::tie(gnssClockFlags, leapSecond, timeNs, timeUncertaintyNs, fullBiasNs, biasNs, biasUncertaintyNs, driftNsps, driftUncertaintyNsps, hwClockDiscontinuityCount, referenceSignalTypeForIsb) >= std::tie(rhs.gnssClockFlags, rhs.leapSecond, rhs.timeNs, rhs.timeUncertaintyNs, rhs.fullBiasNs, rhs.biasNs, rhs.biasUncertaintyNs, rhs.driftNsps, rhs.driftUncertaintyNsps, rhs.hwClockDiscontinuityCount, rhs.referenceSignalTypeForIsb);
  }

  enum : int32_t { HAS_LEAP_SECOND = 1 };
  enum : int32_t { HAS_TIME_UNCERTAINTY = 2 };
  enum : int32_t { HAS_FULL_BIAS = 4 };
  enum : int32_t { HAS_BIAS = 8 };
  enum : int32_t { HAS_BIAS_UNCERTAINTY = 16 };
  enum : int32_t { HAS_DRIFT = 32 };
  enum : int32_t { HAS_DRIFT_UNCERTAINTY = 64 };
  ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.GnssClock");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "GnssClock{";
    _aidl_os << "gnssClockFlags: " << ::android::internal::ToString(gnssClockFlags);
    _aidl_os << ", leapSecond: " << ::android::internal::ToString(leapSecond);
    _aidl_os << ", timeNs: " << ::android::internal::ToString(timeNs);
    _aidl_os << ", timeUncertaintyNs: " << ::android::internal::ToString(timeUncertaintyNs);
    _aidl_os << ", fullBiasNs: " << ::android::internal::ToString(fullBiasNs);
    _aidl_os << ", biasNs: " << ::android::internal::ToString(biasNs);
    _aidl_os << ", biasUncertaintyNs: " << ::android::internal::ToString(biasUncertaintyNs);
    _aidl_os << ", driftNsps: " << ::android::internal::ToString(driftNsps);
    _aidl_os << ", driftUncertaintyNsps: " << ::android::internal::ToString(driftUncertaintyNsps);
    _aidl_os << ", hwClockDiscontinuityCount: " << ::android::internal::ToString(hwClockDiscontinuityCount);
    _aidl_os << ", referenceSignalTypeForIsb: " << ::android::internal::ToString(referenceSignalTypeForIsb);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class GnssClock
}  // namespace gnss
}  // namespace hardware
}  // namespace android
