/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/measurement_corrections/MeasurementCorrections.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/measurement_corrections/MeasurementCorrections.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/measurement_corrections/SingleSatCorrection.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>
#include <vector>

namespace android::hardware::gnss::measurement_corrections {
class SingleSatCorrection;
}  // namespace android::hardware::gnss::measurement_corrections
namespace android {
namespace hardware {
namespace gnss {
namespace measurement_corrections {
class MeasurementCorrections : public ::android::Parcelable {
public:
  double latitudeDegrees = 0.000000;
  double longitudeDegrees = 0.000000;
  double altitudeMeters = 0.000000;
  double horizontalPositionUncertaintyMeters = 0.000000;
  double verticalPositionUncertaintyMeters = 0.000000;
  int64_t toaGpsNanosecondsOfWeek = 0L;
  ::std::vector<::android::hardware::gnss::measurement_corrections::SingleSatCorrection> satCorrections;
  bool hasEnvironmentBearing = false;
  float environmentBearingDegrees = 0.000000f;
  float environmentBearingUncertaintyDegrees = 0.000000f;
  inline bool operator!=(const MeasurementCorrections& rhs) const {
    return std::tie(latitudeDegrees, longitudeDegrees, altitudeMeters, horizontalPositionUncertaintyMeters, verticalPositionUncertaintyMeters, toaGpsNanosecondsOfWeek, satCorrections, hasEnvironmentBearing, environmentBearingDegrees, environmentBearingUncertaintyDegrees) != std::tie(rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.horizontalPositionUncertaintyMeters, rhs.verticalPositionUncertaintyMeters, rhs.toaGpsNanosecondsOfWeek, rhs.satCorrections, rhs.hasEnvironmentBearing, rhs.environmentBearingDegrees, rhs.environmentBearingUncertaintyDegrees);
  }
  inline bool operator<(const MeasurementCorrections& rhs) const {
    return std::tie(latitudeDegrees, longitudeDegrees, altitudeMeters, horizontalPositionUncertaintyMeters, verticalPositionUncertaintyMeters, toaGpsNanosecondsOfWeek, satCorrections, hasEnvironmentBearing, environmentBearingDegrees, environmentBearingUncertaintyDegrees) < std::tie(rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.horizontalPositionUncertaintyMeters, rhs.verticalPositionUncertaintyMeters, rhs.toaGpsNanosecondsOfWeek, rhs.satCorrections, rhs.hasEnvironmentBearing, rhs.environmentBearingDegrees, rhs.environmentBearingUncertaintyDegrees);
  }
  inline bool operator<=(const MeasurementCorrections& rhs) const {
    return std::tie(latitudeDegrees, longitudeDegrees, altitudeMeters, horizontalPositionUncertaintyMeters, verticalPositionUncertaintyMeters, toaGpsNanosecondsOfWeek, satCorrections, hasEnvironmentBearing, environmentBearingDegrees, environmentBearingUncertaintyDegrees) <= std::tie(rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.horizontalPositionUncertaintyMeters, rhs.verticalPositionUncertaintyMeters, rhs.toaGpsNanosecondsOfWeek, rhs.satCorrections, rhs.hasEnvironmentBearing, rhs.environmentBearingDegrees, rhs.environmentBearingUncertaintyDegrees);
  }
  inline bool operator==(const MeasurementCorrections& rhs) const {
    return std::tie(latitudeDegrees, longitudeDegrees, altitudeMeters, horizontalPositionUncertaintyMeters, verticalPositionUncertaintyMeters, toaGpsNanosecondsOfWeek, satCorrections, hasEnvironmentBearing, environmentBearingDegrees, environmentBearingUncertaintyDegrees) == std::tie(rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.horizontalPositionUncertaintyMeters, rhs.verticalPositionUncertaintyMeters, rhs.toaGpsNanosecondsOfWeek, rhs.satCorrections, rhs.hasEnvironmentBearing, rhs.environmentBearingDegrees, rhs.environmentBearingUncertaintyDegrees);
  }
  inline bool operator>(const MeasurementCorrections& rhs) const {
    return std::tie(latitudeDegrees, longitudeDegrees, altitudeMeters, horizontalPositionUncertaintyMeters, verticalPositionUncertaintyMeters, toaGpsNanosecondsOfWeek, satCorrections, hasEnvironmentBearing, environmentBearingDegrees, environmentBearingUncertaintyDegrees) > std::tie(rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.horizontalPositionUncertaintyMeters, rhs.verticalPositionUncertaintyMeters, rhs.toaGpsNanosecondsOfWeek, rhs.satCorrections, rhs.hasEnvironmentBearing, rhs.environmentBearingDegrees, rhs.environmentBearingUncertaintyDegrees);
  }
  inline bool operator>=(const MeasurementCorrections& rhs) const {
    return std::tie(latitudeDegrees, longitudeDegrees, altitudeMeters, horizontalPositionUncertaintyMeters, verticalPositionUncertaintyMeters, toaGpsNanosecondsOfWeek, satCorrections, hasEnvironmentBearing, environmentBearingDegrees, environmentBearingUncertaintyDegrees) >= std::tie(rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.horizontalPositionUncertaintyMeters, rhs.verticalPositionUncertaintyMeters, rhs.toaGpsNanosecondsOfWeek, rhs.satCorrections, rhs.hasEnvironmentBearing, rhs.environmentBearingDegrees, rhs.environmentBearingUncertaintyDegrees);
  }

  ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.measurement_corrections.MeasurementCorrections");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "MeasurementCorrections{";
    _aidl_os << "latitudeDegrees: " << ::android::internal::ToString(latitudeDegrees);
    _aidl_os << ", longitudeDegrees: " << ::android::internal::ToString(longitudeDegrees);
    _aidl_os << ", altitudeMeters: " << ::android::internal::ToString(altitudeMeters);
    _aidl_os << ", horizontalPositionUncertaintyMeters: " << ::android::internal::ToString(horizontalPositionUncertaintyMeters);
    _aidl_os << ", verticalPositionUncertaintyMeters: " << ::android::internal::ToString(verticalPositionUncertaintyMeters);
    _aidl_os << ", toaGpsNanosecondsOfWeek: " << ::android::internal::ToString(toaGpsNanosecondsOfWeek);
    _aidl_os << ", satCorrections: " << ::android::internal::ToString(satCorrections);
    _aidl_os << ", hasEnvironmentBearing: " << ::android::internal::ToString(hasEnvironmentBearing);
    _aidl_os << ", environmentBearingDegrees: " << ::android::internal::ToString(environmentBearingDegrees);
    _aidl_os << ", environmentBearingUncertaintyDegrees: " << ::android::internal::ToString(environmentBearingUncertaintyDegrees);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class MeasurementCorrections
}  // namespace measurement_corrections
}  // namespace gnss
}  // namespace hardware
}  // namespace android
