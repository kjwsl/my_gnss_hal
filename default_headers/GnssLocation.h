/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/GnssLocation.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/GnssLocation.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/ElapsedRealtime.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>

namespace android::hardware::gnss {
class ElapsedRealtime;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class GnssLocation : public ::android::Parcelable {
public:
  int32_t gnssLocationFlags = 0;
  double latitudeDegrees = 0.000000;
  double longitudeDegrees = 0.000000;
  double altitudeMeters = 0.000000;
  double speedMetersPerSec = 0.000000;
  double bearingDegrees = 0.000000;
  double horizontalAccuracyMeters = 0.000000;
  double verticalAccuracyMeters = 0.000000;
  double speedAccuracyMetersPerSecond = 0.000000;
  double bearingAccuracyDegrees = 0.000000;
  int64_t timestampMillis = 0L;
  ::android::hardware::gnss::ElapsedRealtime elapsedRealtime;
  inline bool operator!=(const GnssLocation& rhs) const {
    return std::tie(gnssLocationFlags, latitudeDegrees, longitudeDegrees, altitudeMeters, speedMetersPerSec, bearingDegrees, horizontalAccuracyMeters, verticalAccuracyMeters, speedAccuracyMetersPerSecond, bearingAccuracyDegrees, timestampMillis, elapsedRealtime) != std::tie(rhs.gnssLocationFlags, rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.speedMetersPerSec, rhs.bearingDegrees, rhs.horizontalAccuracyMeters, rhs.verticalAccuracyMeters, rhs.speedAccuracyMetersPerSecond, rhs.bearingAccuracyDegrees, rhs.timestampMillis, rhs.elapsedRealtime);
  }
  inline bool operator<(const GnssLocation& rhs) const {
    return std::tie(gnssLocationFlags, latitudeDegrees, longitudeDegrees, altitudeMeters, speedMetersPerSec, bearingDegrees, horizontalAccuracyMeters, verticalAccuracyMeters, speedAccuracyMetersPerSecond, bearingAccuracyDegrees, timestampMillis, elapsedRealtime) < std::tie(rhs.gnssLocationFlags, rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.speedMetersPerSec, rhs.bearingDegrees, rhs.horizontalAccuracyMeters, rhs.verticalAccuracyMeters, rhs.speedAccuracyMetersPerSecond, rhs.bearingAccuracyDegrees, rhs.timestampMillis, rhs.elapsedRealtime);
  }
  inline bool operator<=(const GnssLocation& rhs) const {
    return std::tie(gnssLocationFlags, latitudeDegrees, longitudeDegrees, altitudeMeters, speedMetersPerSec, bearingDegrees, horizontalAccuracyMeters, verticalAccuracyMeters, speedAccuracyMetersPerSecond, bearingAccuracyDegrees, timestampMillis, elapsedRealtime) <= std::tie(rhs.gnssLocationFlags, rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.speedMetersPerSec, rhs.bearingDegrees, rhs.horizontalAccuracyMeters, rhs.verticalAccuracyMeters, rhs.speedAccuracyMetersPerSecond, rhs.bearingAccuracyDegrees, rhs.timestampMillis, rhs.elapsedRealtime);
  }
  inline bool operator==(const GnssLocation& rhs) const {
    return std::tie(gnssLocationFlags, latitudeDegrees, longitudeDegrees, altitudeMeters, speedMetersPerSec, bearingDegrees, horizontalAccuracyMeters, verticalAccuracyMeters, speedAccuracyMetersPerSecond, bearingAccuracyDegrees, timestampMillis, elapsedRealtime) == std::tie(rhs.gnssLocationFlags, rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.speedMetersPerSec, rhs.bearingDegrees, rhs.horizontalAccuracyMeters, rhs.verticalAccuracyMeters, rhs.speedAccuracyMetersPerSecond, rhs.bearingAccuracyDegrees, rhs.timestampMillis, rhs.elapsedRealtime);
  }
  inline bool operator>(const GnssLocation& rhs) const {
    return std::tie(gnssLocationFlags, latitudeDegrees, longitudeDegrees, altitudeMeters, speedMetersPerSec, bearingDegrees, horizontalAccuracyMeters, verticalAccuracyMeters, speedAccuracyMetersPerSecond, bearingAccuracyDegrees, timestampMillis, elapsedRealtime) > std::tie(rhs.gnssLocationFlags, rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.speedMetersPerSec, rhs.bearingDegrees, rhs.horizontalAccuracyMeters, rhs.verticalAccuracyMeters, rhs.speedAccuracyMetersPerSecond, rhs.bearingAccuracyDegrees, rhs.timestampMillis, rhs.elapsedRealtime);
  }
  inline bool operator>=(const GnssLocation& rhs) const {
    return std::tie(gnssLocationFlags, latitudeDegrees, longitudeDegrees, altitudeMeters, speedMetersPerSec, bearingDegrees, horizontalAccuracyMeters, verticalAccuracyMeters, speedAccuracyMetersPerSecond, bearingAccuracyDegrees, timestampMillis, elapsedRealtime) >= std::tie(rhs.gnssLocationFlags, rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.speedMetersPerSec, rhs.bearingDegrees, rhs.horizontalAccuracyMeters, rhs.verticalAccuracyMeters, rhs.speedAccuracyMetersPerSecond, rhs.bearingAccuracyDegrees, rhs.timestampMillis, rhs.elapsedRealtime);
  }

  enum : int32_t { HAS_LAT_LONG = 1 };
  enum : int32_t { HAS_ALTITUDE = 2 };
  enum : int32_t { HAS_SPEED = 4 };
  enum : int32_t { HAS_BEARING = 8 };
  enum : int32_t { HAS_HORIZONTAL_ACCURACY = 16 };
  enum : int32_t { HAS_VERTICAL_ACCURACY = 32 };
  enum : int32_t { HAS_SPEED_ACCURACY = 64 };
  enum : int32_t { HAS_BEARING_ACCURACY = 128 };
  ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.GnssLocation");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "GnssLocation{";
    _aidl_os << "gnssLocationFlags: " << ::android::internal::ToString(gnssLocationFlags);
    _aidl_os << ", latitudeDegrees: " << ::android::internal::ToString(latitudeDegrees);
    _aidl_os << ", longitudeDegrees: " << ::android::internal::ToString(longitudeDegrees);
    _aidl_os << ", altitudeMeters: " << ::android::internal::ToString(altitudeMeters);
    _aidl_os << ", speedMetersPerSec: " << ::android::internal::ToString(speedMetersPerSec);
    _aidl_os << ", bearingDegrees: " << ::android::internal::ToString(bearingDegrees);
    _aidl_os << ", horizontalAccuracyMeters: " << ::android::internal::ToString(horizontalAccuracyMeters);
    _aidl_os << ", verticalAccuracyMeters: " << ::android::internal::ToString(verticalAccuracyMeters);
    _aidl_os << ", speedAccuracyMetersPerSecond: " << ::android::internal::ToString(speedAccuracyMetersPerSecond);
    _aidl_os << ", bearingAccuracyDegrees: " << ::android::internal::ToString(bearingAccuracyDegrees);
    _aidl_os << ", timestampMillis: " << ::android::internal::ToString(timestampMillis);
    _aidl_os << ", elapsedRealtime: " << ::android::internal::ToString(elapsedRealtime);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class GnssLocation
}  // namespace gnss
}  // namespace hardware
}  // namespace android
