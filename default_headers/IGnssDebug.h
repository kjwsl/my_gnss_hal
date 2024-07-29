/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssDebug.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssDebug.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/GnssConstellationType.h>
#include <android/hardware/gnss/IGnssDebug.h>
#include <android/hardware/gnss/SatellitePvt.h>
#include <array>
#include <binder/Enums.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <string>
#include <tuple>
#include <utils/String16.h>
#include <utils/StrongPointer.h>
#include <vector>

namespace android {
namespace hardware {
namespace gnss {
class IGnssDebugDelegator;

class IGnssDebug : public ::android::IInterface {
public:
  typedef IGnssDebugDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(GnssDebug)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  enum class SatelliteEphemerisType : int32_t {
    EPHEMERIS = 0,
    ALMANAC_ONLY = 1,
    NOT_AVAILABLE = 2,
  };
  enum class SatelliteEphemerisHealth : int32_t {
    GOOD = 0,
    BAD = 1,
    UNKNOWN = 2,
  };
  class TimeDebug : public ::android::Parcelable {
  public:
    int64_t timeEstimateMs = 0L;
    float timeUncertaintyNs = 0.000000f;
    float frequencyUncertaintyNsPerSec = 0.000000f;
    inline bool operator!=(const TimeDebug& rhs) const {
      return std::tie(timeEstimateMs, timeUncertaintyNs, frequencyUncertaintyNsPerSec) != std::tie(rhs.timeEstimateMs, rhs.timeUncertaintyNs, rhs.frequencyUncertaintyNsPerSec);
    }
    inline bool operator<(const TimeDebug& rhs) const {
      return std::tie(timeEstimateMs, timeUncertaintyNs, frequencyUncertaintyNsPerSec) < std::tie(rhs.timeEstimateMs, rhs.timeUncertaintyNs, rhs.frequencyUncertaintyNsPerSec);
    }
    inline bool operator<=(const TimeDebug& rhs) const {
      return std::tie(timeEstimateMs, timeUncertaintyNs, frequencyUncertaintyNsPerSec) <= std::tie(rhs.timeEstimateMs, rhs.timeUncertaintyNs, rhs.frequencyUncertaintyNsPerSec);
    }
    inline bool operator==(const TimeDebug& rhs) const {
      return std::tie(timeEstimateMs, timeUncertaintyNs, frequencyUncertaintyNsPerSec) == std::tie(rhs.timeEstimateMs, rhs.timeUncertaintyNs, rhs.frequencyUncertaintyNsPerSec);
    }
    inline bool operator>(const TimeDebug& rhs) const {
      return std::tie(timeEstimateMs, timeUncertaintyNs, frequencyUncertaintyNsPerSec) > std::tie(rhs.timeEstimateMs, rhs.timeUncertaintyNs, rhs.frequencyUncertaintyNsPerSec);
    }
    inline bool operator>=(const TimeDebug& rhs) const {
      return std::tie(timeEstimateMs, timeUncertaintyNs, frequencyUncertaintyNsPerSec) >= std::tie(rhs.timeEstimateMs, rhs.timeUncertaintyNs, rhs.frequencyUncertaintyNsPerSec);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IGnssDebug.TimeDebug");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "TimeDebug{";
      _aidl_os << "timeEstimateMs: " << ::android::internal::ToString(timeEstimateMs);
      _aidl_os << ", timeUncertaintyNs: " << ::android::internal::ToString(timeUncertaintyNs);
      _aidl_os << ", frequencyUncertaintyNsPerSec: " << ::android::internal::ToString(frequencyUncertaintyNsPerSec);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class TimeDebug
  class PositionDebug : public ::android::Parcelable {
  public:
    bool valid = false;
    double latitudeDegrees = 0.000000;
    double longitudeDegrees = 0.000000;
    float altitudeMeters = 0.000000f;
    float speedMetersPerSec = 0.000000f;
    float bearingDegrees = 0.000000f;
    double horizontalAccuracyMeters = 0.000000;
    double verticalAccuracyMeters = 0.000000;
    double speedAccuracyMetersPerSecond = 0.000000;
    double bearingAccuracyDegrees = 0.000000;
    float ageSeconds = 0.000000f;
    inline bool operator!=(const PositionDebug& rhs) const {
      return std::tie(valid, latitudeDegrees, longitudeDegrees, altitudeMeters, speedMetersPerSec, bearingDegrees, horizontalAccuracyMeters, verticalAccuracyMeters, speedAccuracyMetersPerSecond, bearingAccuracyDegrees, ageSeconds) != std::tie(rhs.valid, rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.speedMetersPerSec, rhs.bearingDegrees, rhs.horizontalAccuracyMeters, rhs.verticalAccuracyMeters, rhs.speedAccuracyMetersPerSecond, rhs.bearingAccuracyDegrees, rhs.ageSeconds);
    }
    inline bool operator<(const PositionDebug& rhs) const {
      return std::tie(valid, latitudeDegrees, longitudeDegrees, altitudeMeters, speedMetersPerSec, bearingDegrees, horizontalAccuracyMeters, verticalAccuracyMeters, speedAccuracyMetersPerSecond, bearingAccuracyDegrees, ageSeconds) < std::tie(rhs.valid, rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.speedMetersPerSec, rhs.bearingDegrees, rhs.horizontalAccuracyMeters, rhs.verticalAccuracyMeters, rhs.speedAccuracyMetersPerSecond, rhs.bearingAccuracyDegrees, rhs.ageSeconds);
    }
    inline bool operator<=(const PositionDebug& rhs) const {
      return std::tie(valid, latitudeDegrees, longitudeDegrees, altitudeMeters, speedMetersPerSec, bearingDegrees, horizontalAccuracyMeters, verticalAccuracyMeters, speedAccuracyMetersPerSecond, bearingAccuracyDegrees, ageSeconds) <= std::tie(rhs.valid, rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.speedMetersPerSec, rhs.bearingDegrees, rhs.horizontalAccuracyMeters, rhs.verticalAccuracyMeters, rhs.speedAccuracyMetersPerSecond, rhs.bearingAccuracyDegrees, rhs.ageSeconds);
    }
    inline bool operator==(const PositionDebug& rhs) const {
      return std::tie(valid, latitudeDegrees, longitudeDegrees, altitudeMeters, speedMetersPerSec, bearingDegrees, horizontalAccuracyMeters, verticalAccuracyMeters, speedAccuracyMetersPerSecond, bearingAccuracyDegrees, ageSeconds) == std::tie(rhs.valid, rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.speedMetersPerSec, rhs.bearingDegrees, rhs.horizontalAccuracyMeters, rhs.verticalAccuracyMeters, rhs.speedAccuracyMetersPerSecond, rhs.bearingAccuracyDegrees, rhs.ageSeconds);
    }
    inline bool operator>(const PositionDebug& rhs) const {
      return std::tie(valid, latitudeDegrees, longitudeDegrees, altitudeMeters, speedMetersPerSec, bearingDegrees, horizontalAccuracyMeters, verticalAccuracyMeters, speedAccuracyMetersPerSecond, bearingAccuracyDegrees, ageSeconds) > std::tie(rhs.valid, rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.speedMetersPerSec, rhs.bearingDegrees, rhs.horizontalAccuracyMeters, rhs.verticalAccuracyMeters, rhs.speedAccuracyMetersPerSecond, rhs.bearingAccuracyDegrees, rhs.ageSeconds);
    }
    inline bool operator>=(const PositionDebug& rhs) const {
      return std::tie(valid, latitudeDegrees, longitudeDegrees, altitudeMeters, speedMetersPerSec, bearingDegrees, horizontalAccuracyMeters, verticalAccuracyMeters, speedAccuracyMetersPerSecond, bearingAccuracyDegrees, ageSeconds) >= std::tie(rhs.valid, rhs.latitudeDegrees, rhs.longitudeDegrees, rhs.altitudeMeters, rhs.speedMetersPerSec, rhs.bearingDegrees, rhs.horizontalAccuracyMeters, rhs.verticalAccuracyMeters, rhs.speedAccuracyMetersPerSecond, rhs.bearingAccuracyDegrees, rhs.ageSeconds);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IGnssDebug.PositionDebug");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "PositionDebug{";
      _aidl_os << "valid: " << ::android::internal::ToString(valid);
      _aidl_os << ", latitudeDegrees: " << ::android::internal::ToString(latitudeDegrees);
      _aidl_os << ", longitudeDegrees: " << ::android::internal::ToString(longitudeDegrees);
      _aidl_os << ", altitudeMeters: " << ::android::internal::ToString(altitudeMeters);
      _aidl_os << ", speedMetersPerSec: " << ::android::internal::ToString(speedMetersPerSec);
      _aidl_os << ", bearingDegrees: " << ::android::internal::ToString(bearingDegrees);
      _aidl_os << ", horizontalAccuracyMeters: " << ::android::internal::ToString(horizontalAccuracyMeters);
      _aidl_os << ", verticalAccuracyMeters: " << ::android::internal::ToString(verticalAccuracyMeters);
      _aidl_os << ", speedAccuracyMetersPerSecond: " << ::android::internal::ToString(speedAccuracyMetersPerSecond);
      _aidl_os << ", bearingAccuracyDegrees: " << ::android::internal::ToString(bearingAccuracyDegrees);
      _aidl_os << ", ageSeconds: " << ::android::internal::ToString(ageSeconds);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class PositionDebug
  class SatelliteData : public ::android::Parcelable {
  public:
    int32_t svid = 0;
    ::android::hardware::gnss::GnssConstellationType constellation = ::android::hardware::gnss::GnssConstellationType(0);
    ::android::hardware::gnss::IGnssDebug::SatelliteEphemerisType ephemerisType = ::android::hardware::gnss::IGnssDebug::SatelliteEphemerisType(0);
    ::android::hardware::gnss::SatellitePvt::SatelliteEphemerisSource ephemerisSource = ::android::hardware::gnss::SatellitePvt::SatelliteEphemerisSource(0);
    ::android::hardware::gnss::IGnssDebug::SatelliteEphemerisHealth ephemerisHealth = ::android::hardware::gnss::IGnssDebug::SatelliteEphemerisHealth(0);
    float ephemerisAgeSeconds = 0.000000f;
    bool serverPredictionIsAvailable = false;
    float serverPredictionAgeSeconds = 0.000000f;
    inline bool operator!=(const SatelliteData& rhs) const {
      return std::tie(svid, constellation, ephemerisType, ephemerisSource, ephemerisHealth, ephemerisAgeSeconds, serverPredictionIsAvailable, serverPredictionAgeSeconds) != std::tie(rhs.svid, rhs.constellation, rhs.ephemerisType, rhs.ephemerisSource, rhs.ephemerisHealth, rhs.ephemerisAgeSeconds, rhs.serverPredictionIsAvailable, rhs.serverPredictionAgeSeconds);
    }
    inline bool operator<(const SatelliteData& rhs) const {
      return std::tie(svid, constellation, ephemerisType, ephemerisSource, ephemerisHealth, ephemerisAgeSeconds, serverPredictionIsAvailable, serverPredictionAgeSeconds) < std::tie(rhs.svid, rhs.constellation, rhs.ephemerisType, rhs.ephemerisSource, rhs.ephemerisHealth, rhs.ephemerisAgeSeconds, rhs.serverPredictionIsAvailable, rhs.serverPredictionAgeSeconds);
    }
    inline bool operator<=(const SatelliteData& rhs) const {
      return std::tie(svid, constellation, ephemerisType, ephemerisSource, ephemerisHealth, ephemerisAgeSeconds, serverPredictionIsAvailable, serverPredictionAgeSeconds) <= std::tie(rhs.svid, rhs.constellation, rhs.ephemerisType, rhs.ephemerisSource, rhs.ephemerisHealth, rhs.ephemerisAgeSeconds, rhs.serverPredictionIsAvailable, rhs.serverPredictionAgeSeconds);
    }
    inline bool operator==(const SatelliteData& rhs) const {
      return std::tie(svid, constellation, ephemerisType, ephemerisSource, ephemerisHealth, ephemerisAgeSeconds, serverPredictionIsAvailable, serverPredictionAgeSeconds) == std::tie(rhs.svid, rhs.constellation, rhs.ephemerisType, rhs.ephemerisSource, rhs.ephemerisHealth, rhs.ephemerisAgeSeconds, rhs.serverPredictionIsAvailable, rhs.serverPredictionAgeSeconds);
    }
    inline bool operator>(const SatelliteData& rhs) const {
      return std::tie(svid, constellation, ephemerisType, ephemerisSource, ephemerisHealth, ephemerisAgeSeconds, serverPredictionIsAvailable, serverPredictionAgeSeconds) > std::tie(rhs.svid, rhs.constellation, rhs.ephemerisType, rhs.ephemerisSource, rhs.ephemerisHealth, rhs.ephemerisAgeSeconds, rhs.serverPredictionIsAvailable, rhs.serverPredictionAgeSeconds);
    }
    inline bool operator>=(const SatelliteData& rhs) const {
      return std::tie(svid, constellation, ephemerisType, ephemerisSource, ephemerisHealth, ephemerisAgeSeconds, serverPredictionIsAvailable, serverPredictionAgeSeconds) >= std::tie(rhs.svid, rhs.constellation, rhs.ephemerisType, rhs.ephemerisSource, rhs.ephemerisHealth, rhs.ephemerisAgeSeconds, rhs.serverPredictionIsAvailable, rhs.serverPredictionAgeSeconds);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IGnssDebug.SatelliteData");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "SatelliteData{";
      _aidl_os << "svid: " << ::android::internal::ToString(svid);
      _aidl_os << ", constellation: " << ::android::internal::ToString(constellation);
      _aidl_os << ", ephemerisType: " << ::android::internal::ToString(ephemerisType);
      _aidl_os << ", ephemerisSource: " << ::android::internal::ToString(ephemerisSource);
      _aidl_os << ", ephemerisHealth: " << ::android::internal::ToString(ephemerisHealth);
      _aidl_os << ", ephemerisAgeSeconds: " << ::android::internal::ToString(ephemerisAgeSeconds);
      _aidl_os << ", serverPredictionIsAvailable: " << ::android::internal::ToString(serverPredictionIsAvailable);
      _aidl_os << ", serverPredictionAgeSeconds: " << ::android::internal::ToString(serverPredictionAgeSeconds);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class SatelliteData
  class DebugData : public ::android::Parcelable {
  public:
    ::android::hardware::gnss::IGnssDebug::PositionDebug position;
    ::android::hardware::gnss::IGnssDebug::TimeDebug time;
    ::std::vector<::android::hardware::gnss::IGnssDebug::SatelliteData> satelliteDataArray;
    inline bool operator!=(const DebugData& rhs) const {
      return std::tie(position, time, satelliteDataArray) != std::tie(rhs.position, rhs.time, rhs.satelliteDataArray);
    }
    inline bool operator<(const DebugData& rhs) const {
      return std::tie(position, time, satelliteDataArray) < std::tie(rhs.position, rhs.time, rhs.satelliteDataArray);
    }
    inline bool operator<=(const DebugData& rhs) const {
      return std::tie(position, time, satelliteDataArray) <= std::tie(rhs.position, rhs.time, rhs.satelliteDataArray);
    }
    inline bool operator==(const DebugData& rhs) const {
      return std::tie(position, time, satelliteDataArray) == std::tie(rhs.position, rhs.time, rhs.satelliteDataArray);
    }
    inline bool operator>(const DebugData& rhs) const {
      return std::tie(position, time, satelliteDataArray) > std::tie(rhs.position, rhs.time, rhs.satelliteDataArray);
    }
    inline bool operator>=(const DebugData& rhs) const {
      return std::tie(position, time, satelliteDataArray) >= std::tie(rhs.position, rhs.time, rhs.satelliteDataArray);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IGnssDebug.DebugData");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "DebugData{";
      _aidl_os << "position: " << ::android::internal::ToString(position);
      _aidl_os << ", time: " << ::android::internal::ToString(time);
      _aidl_os << ", satelliteDataArray: " << ::android::internal::ToString(satelliteDataArray);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class DebugData
  virtual ::android::binder::Status getDebugData(::android::hardware::gnss::IGnssDebug::DebugData* _aidl_return) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IGnssDebug

class IGnssDebugDefault : public IGnssDebug {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status getDebugData(::android::hardware::gnss::IGnssDebug::DebugData* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IGnssDebugDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(IGnssDebug::SatelliteEphemerisType val) {
  switch(val) {
  case IGnssDebug::SatelliteEphemerisType::EPHEMERIS:
    return "EPHEMERIS";
  case IGnssDebug::SatelliteEphemerisType::ALMANAC_ONLY:
    return "ALMANAC_ONLY";
  case IGnssDebug::SatelliteEphemerisType::NOT_AVAILABLE:
    return "NOT_AVAILABLE";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<::android::hardware::gnss::IGnssDebug::SatelliteEphemerisType, 3> enum_values<::android::hardware::gnss::IGnssDebug::SatelliteEphemerisType> = {
  ::android::hardware::gnss::IGnssDebug::SatelliteEphemerisType::EPHEMERIS,
  ::android::hardware::gnss::IGnssDebug::SatelliteEphemerisType::ALMANAC_ONLY,
  ::android::hardware::gnss::IGnssDebug::SatelliteEphemerisType::NOT_AVAILABLE,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(IGnssDebug::SatelliteEphemerisHealth val) {
  switch(val) {
  case IGnssDebug::SatelliteEphemerisHealth::GOOD:
    return "GOOD";
  case IGnssDebug::SatelliteEphemerisHealth::BAD:
    return "BAD";
  case IGnssDebug::SatelliteEphemerisHealth::UNKNOWN:
    return "UNKNOWN";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<::android::hardware::gnss::IGnssDebug::SatelliteEphemerisHealth, 3> enum_values<::android::hardware::gnss::IGnssDebug::SatelliteEphemerisHealth> = {
  ::android::hardware::gnss::IGnssDebug::SatelliteEphemerisHealth::GOOD,
  ::android::hardware::gnss::IGnssDebug::SatelliteEphemerisHealth::BAD,
  ::android::hardware::gnss::IGnssDebug::SatelliteEphemerisHealth::UNKNOWN,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
