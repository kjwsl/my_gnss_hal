/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/GnssPowerStats.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/GnssPowerStats.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/ElapsedRealtime.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <tuple>
#include <utils/String16.h>
#include <vector>

namespace android::hardware::gnss {
class ElapsedRealtime;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class GnssPowerStats : public ::android::Parcelable {
public:
  ::android::hardware::gnss::ElapsedRealtime elapsedRealtime;
  double totalEnergyMilliJoule = 0.000000;
  double singlebandTrackingModeEnergyMilliJoule = 0.000000;
  double multibandTrackingModeEnergyMilliJoule = 0.000000;
  double singlebandAcquisitionModeEnergyMilliJoule = 0.000000;
  double multibandAcquisitionModeEnergyMilliJoule = 0.000000;
  ::std::vector<double> otherModesEnergyMilliJoule;
  inline bool operator!=(const GnssPowerStats& rhs) const {
    return std::tie(elapsedRealtime, totalEnergyMilliJoule, singlebandTrackingModeEnergyMilliJoule, multibandTrackingModeEnergyMilliJoule, singlebandAcquisitionModeEnergyMilliJoule, multibandAcquisitionModeEnergyMilliJoule, otherModesEnergyMilliJoule) != std::tie(rhs.elapsedRealtime, rhs.totalEnergyMilliJoule, rhs.singlebandTrackingModeEnergyMilliJoule, rhs.multibandTrackingModeEnergyMilliJoule, rhs.singlebandAcquisitionModeEnergyMilliJoule, rhs.multibandAcquisitionModeEnergyMilliJoule, rhs.otherModesEnergyMilliJoule);
  }
  inline bool operator<(const GnssPowerStats& rhs) const {
    return std::tie(elapsedRealtime, totalEnergyMilliJoule, singlebandTrackingModeEnergyMilliJoule, multibandTrackingModeEnergyMilliJoule, singlebandAcquisitionModeEnergyMilliJoule, multibandAcquisitionModeEnergyMilliJoule, otherModesEnergyMilliJoule) < std::tie(rhs.elapsedRealtime, rhs.totalEnergyMilliJoule, rhs.singlebandTrackingModeEnergyMilliJoule, rhs.multibandTrackingModeEnergyMilliJoule, rhs.singlebandAcquisitionModeEnergyMilliJoule, rhs.multibandAcquisitionModeEnergyMilliJoule, rhs.otherModesEnergyMilliJoule);
  }
  inline bool operator<=(const GnssPowerStats& rhs) const {
    return std::tie(elapsedRealtime, totalEnergyMilliJoule, singlebandTrackingModeEnergyMilliJoule, multibandTrackingModeEnergyMilliJoule, singlebandAcquisitionModeEnergyMilliJoule, multibandAcquisitionModeEnergyMilliJoule, otherModesEnergyMilliJoule) <= std::tie(rhs.elapsedRealtime, rhs.totalEnergyMilliJoule, rhs.singlebandTrackingModeEnergyMilliJoule, rhs.multibandTrackingModeEnergyMilliJoule, rhs.singlebandAcquisitionModeEnergyMilliJoule, rhs.multibandAcquisitionModeEnergyMilliJoule, rhs.otherModesEnergyMilliJoule);
  }
  inline bool operator==(const GnssPowerStats& rhs) const {
    return std::tie(elapsedRealtime, totalEnergyMilliJoule, singlebandTrackingModeEnergyMilliJoule, multibandTrackingModeEnergyMilliJoule, singlebandAcquisitionModeEnergyMilliJoule, multibandAcquisitionModeEnergyMilliJoule, otherModesEnergyMilliJoule) == std::tie(rhs.elapsedRealtime, rhs.totalEnergyMilliJoule, rhs.singlebandTrackingModeEnergyMilliJoule, rhs.multibandTrackingModeEnergyMilliJoule, rhs.singlebandAcquisitionModeEnergyMilliJoule, rhs.multibandAcquisitionModeEnergyMilliJoule, rhs.otherModesEnergyMilliJoule);
  }
  inline bool operator>(const GnssPowerStats& rhs) const {
    return std::tie(elapsedRealtime, totalEnergyMilliJoule, singlebandTrackingModeEnergyMilliJoule, multibandTrackingModeEnergyMilliJoule, singlebandAcquisitionModeEnergyMilliJoule, multibandAcquisitionModeEnergyMilliJoule, otherModesEnergyMilliJoule) > std::tie(rhs.elapsedRealtime, rhs.totalEnergyMilliJoule, rhs.singlebandTrackingModeEnergyMilliJoule, rhs.multibandTrackingModeEnergyMilliJoule, rhs.singlebandAcquisitionModeEnergyMilliJoule, rhs.multibandAcquisitionModeEnergyMilliJoule, rhs.otherModesEnergyMilliJoule);
  }
  inline bool operator>=(const GnssPowerStats& rhs) const {
    return std::tie(elapsedRealtime, totalEnergyMilliJoule, singlebandTrackingModeEnergyMilliJoule, multibandTrackingModeEnergyMilliJoule, singlebandAcquisitionModeEnergyMilliJoule, multibandAcquisitionModeEnergyMilliJoule, otherModesEnergyMilliJoule) >= std::tie(rhs.elapsedRealtime, rhs.totalEnergyMilliJoule, rhs.singlebandTrackingModeEnergyMilliJoule, rhs.multibandTrackingModeEnergyMilliJoule, rhs.singlebandAcquisitionModeEnergyMilliJoule, rhs.multibandAcquisitionModeEnergyMilliJoule, rhs.otherModesEnergyMilliJoule);
  }

  ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.GnssPowerStats");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "GnssPowerStats{";
    _aidl_os << "elapsedRealtime: " << ::android::internal::ToString(elapsedRealtime);
    _aidl_os << ", totalEnergyMilliJoule: " << ::android::internal::ToString(totalEnergyMilliJoule);
    _aidl_os << ", singlebandTrackingModeEnergyMilliJoule: " << ::android::internal::ToString(singlebandTrackingModeEnergyMilliJoule);
    _aidl_os << ", multibandTrackingModeEnergyMilliJoule: " << ::android::internal::ToString(multibandTrackingModeEnergyMilliJoule);
    _aidl_os << ", singlebandAcquisitionModeEnergyMilliJoule: " << ::android::internal::ToString(singlebandAcquisitionModeEnergyMilliJoule);
    _aidl_os << ", multibandAcquisitionModeEnergyMilliJoule: " << ::android::internal::ToString(multibandAcquisitionModeEnergyMilliJoule);
    _aidl_os << ", otherModesEnergyMilliJoule: " << ::android::internal::ToString(otherModesEnergyMilliJoule);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class GnssPowerStats
}  // namespace gnss
}  // namespace hardware
}  // namespace android
