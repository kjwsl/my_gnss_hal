/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/SatellitePvt.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/SatellitePvt.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/SatelliteClockInfo.h>
#include <android/hardware/gnss/SatellitePositionEcef.h>
#include <android/hardware/gnss/SatellitePvt.h>
#include <android/hardware/gnss/SatelliteVelocityEcef.h>
#include <array>
#include <binder/Enums.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <string>
#include <tuple>
#include <utils/String16.h>

namespace android::hardware::gnss {
class SatelliteClockInfo;
class SatellitePositionEcef;
class SatelliteVelocityEcef;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class SatellitePvt : public ::android::Parcelable {
public:
  enum class SatelliteEphemerisSource : int32_t {
    DEMODULATED = 0,
    SERVER_NORMAL = 1,
    SERVER_LONG_TERM = 2,
    OTHER = 3,
  };
  int32_t flags = 0;
  ::android::hardware::gnss::SatellitePositionEcef satPosEcef;
  ::android::hardware::gnss::SatelliteVelocityEcef satVelEcef;
  ::android::hardware::gnss::SatelliteClockInfo satClockInfo;
  double ionoDelayMeters = 0.000000;
  double tropoDelayMeters = 0.000000;
  int64_t timeOfClockSeconds = 0L;
  int32_t issueOfDataClock = 0;
  int64_t timeOfEphemerisSeconds = 0L;
  int32_t issueOfDataEphemeris = 0;
  ::android::hardware::gnss::SatellitePvt::SatelliteEphemerisSource ephemerisSource = ::android::hardware::gnss::SatellitePvt::SatelliteEphemerisSource::OTHER;
  inline bool operator!=(const SatellitePvt& rhs) const {
    return std::tie(flags, satPosEcef, satVelEcef, satClockInfo, ionoDelayMeters, tropoDelayMeters, timeOfClockSeconds, issueOfDataClock, timeOfEphemerisSeconds, issueOfDataEphemeris, ephemerisSource) != std::tie(rhs.flags, rhs.satPosEcef, rhs.satVelEcef, rhs.satClockInfo, rhs.ionoDelayMeters, rhs.tropoDelayMeters, rhs.timeOfClockSeconds, rhs.issueOfDataClock, rhs.timeOfEphemerisSeconds, rhs.issueOfDataEphemeris, rhs.ephemerisSource);
  }
  inline bool operator<(const SatellitePvt& rhs) const {
    return std::tie(flags, satPosEcef, satVelEcef, satClockInfo, ionoDelayMeters, tropoDelayMeters, timeOfClockSeconds, issueOfDataClock, timeOfEphemerisSeconds, issueOfDataEphemeris, ephemerisSource) < std::tie(rhs.flags, rhs.satPosEcef, rhs.satVelEcef, rhs.satClockInfo, rhs.ionoDelayMeters, rhs.tropoDelayMeters, rhs.timeOfClockSeconds, rhs.issueOfDataClock, rhs.timeOfEphemerisSeconds, rhs.issueOfDataEphemeris, rhs.ephemerisSource);
  }
  inline bool operator<=(const SatellitePvt& rhs) const {
    return std::tie(flags, satPosEcef, satVelEcef, satClockInfo, ionoDelayMeters, tropoDelayMeters, timeOfClockSeconds, issueOfDataClock, timeOfEphemerisSeconds, issueOfDataEphemeris, ephemerisSource) <= std::tie(rhs.flags, rhs.satPosEcef, rhs.satVelEcef, rhs.satClockInfo, rhs.ionoDelayMeters, rhs.tropoDelayMeters, rhs.timeOfClockSeconds, rhs.issueOfDataClock, rhs.timeOfEphemerisSeconds, rhs.issueOfDataEphemeris, rhs.ephemerisSource);
  }
  inline bool operator==(const SatellitePvt& rhs) const {
    return std::tie(flags, satPosEcef, satVelEcef, satClockInfo, ionoDelayMeters, tropoDelayMeters, timeOfClockSeconds, issueOfDataClock, timeOfEphemerisSeconds, issueOfDataEphemeris, ephemerisSource) == std::tie(rhs.flags, rhs.satPosEcef, rhs.satVelEcef, rhs.satClockInfo, rhs.ionoDelayMeters, rhs.tropoDelayMeters, rhs.timeOfClockSeconds, rhs.issueOfDataClock, rhs.timeOfEphemerisSeconds, rhs.issueOfDataEphemeris, rhs.ephemerisSource);
  }
  inline bool operator>(const SatellitePvt& rhs) const {
    return std::tie(flags, satPosEcef, satVelEcef, satClockInfo, ionoDelayMeters, tropoDelayMeters, timeOfClockSeconds, issueOfDataClock, timeOfEphemerisSeconds, issueOfDataEphemeris, ephemerisSource) > std::tie(rhs.flags, rhs.satPosEcef, rhs.satVelEcef, rhs.satClockInfo, rhs.ionoDelayMeters, rhs.tropoDelayMeters, rhs.timeOfClockSeconds, rhs.issueOfDataClock, rhs.timeOfEphemerisSeconds, rhs.issueOfDataEphemeris, rhs.ephemerisSource);
  }
  inline bool operator>=(const SatellitePvt& rhs) const {
    return std::tie(flags, satPosEcef, satVelEcef, satClockInfo, ionoDelayMeters, tropoDelayMeters, timeOfClockSeconds, issueOfDataClock, timeOfEphemerisSeconds, issueOfDataEphemeris, ephemerisSource) >= std::tie(rhs.flags, rhs.satPosEcef, rhs.satVelEcef, rhs.satClockInfo, rhs.ionoDelayMeters, rhs.tropoDelayMeters, rhs.timeOfClockSeconds, rhs.issueOfDataClock, rhs.timeOfEphemerisSeconds, rhs.issueOfDataEphemeris, rhs.ephemerisSource);
  }

  enum : int32_t { HAS_POSITION_VELOCITY_CLOCK_INFO = 1 };
  enum : int32_t { HAS_IONO = 2 };
  enum : int32_t { HAS_TROPO = 4 };
  ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.SatellitePvt");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "SatellitePvt{";
    _aidl_os << "flags: " << ::android::internal::ToString(flags);
    _aidl_os << ", satPosEcef: " << ::android::internal::ToString(satPosEcef);
    _aidl_os << ", satVelEcef: " << ::android::internal::ToString(satVelEcef);
    _aidl_os << ", satClockInfo: " << ::android::internal::ToString(satClockInfo);
    _aidl_os << ", ionoDelayMeters: " << ::android::internal::ToString(ionoDelayMeters);
    _aidl_os << ", tropoDelayMeters: " << ::android::internal::ToString(tropoDelayMeters);
    _aidl_os << ", timeOfClockSeconds: " << ::android::internal::ToString(timeOfClockSeconds);
    _aidl_os << ", issueOfDataClock: " << ::android::internal::ToString(issueOfDataClock);
    _aidl_os << ", timeOfEphemerisSeconds: " << ::android::internal::ToString(timeOfEphemerisSeconds);
    _aidl_os << ", issueOfDataEphemeris: " << ::android::internal::ToString(issueOfDataEphemeris);
    _aidl_os << ", ephemerisSource: " << ::android::internal::ToString(ephemerisSource);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class SatellitePvt
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(SatellitePvt::SatelliteEphemerisSource val) {
  switch(val) {
  case SatellitePvt::SatelliteEphemerisSource::DEMODULATED:
    return "DEMODULATED";
  case SatellitePvt::SatelliteEphemerisSource::SERVER_NORMAL:
    return "SERVER_NORMAL";
  case SatellitePvt::SatelliteEphemerisSource::SERVER_LONG_TERM:
    return "SERVER_LONG_TERM";
  case SatellitePvt::SatelliteEphemerisSource::OTHER:
    return "OTHER";
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
constexpr inline std::array<::android::hardware::gnss::SatellitePvt::SatelliteEphemerisSource, 4> enum_values<::android::hardware::gnss::SatellitePvt::SatelliteEphemerisSource> = {
  ::android::hardware::gnss::SatellitePvt::SatelliteEphemerisSource::DEMODULATED,
  ::android::hardware::gnss::SatellitePvt::SatelliteEphemerisSource::SERVER_NORMAL,
  ::android::hardware::gnss::SatellitePvt::SatelliteEphemerisSource::SERVER_LONG_TERM,
  ::android::hardware::gnss::SatellitePvt::SatelliteEphemerisSource::OTHER,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
