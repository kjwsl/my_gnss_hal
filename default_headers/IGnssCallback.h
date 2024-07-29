/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssCallback.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/GnssConstellationType.h>
#include <android/hardware/gnss/GnssLocation.h>
#include <android/hardware/gnss/GnssSignalType.h>
#include <android/hardware/gnss/IGnssCallback.h>
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

namespace android::hardware::gnss {
class GnssLocation;
class GnssSignalType;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class IGnssCallbackDelegator;

class IGnssCallback : public ::android::IInterface {
public:
  typedef IGnssCallbackDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(GnssCallback)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  enum class GnssStatusValue : int32_t {
    NONE = 0,
    SESSION_BEGIN = 1,
    SESSION_END = 2,
    ENGINE_ON = 3,
    ENGINE_OFF = 4,
  };
  enum class GnssSvFlags : int32_t {
    NONE = 0,
    HAS_EPHEMERIS_DATA = 1,
    HAS_ALMANAC_DATA = 2,
    USED_IN_FIX = 4,
    HAS_CARRIER_FREQUENCY = 8,
  };
  class GnssSvInfo : public ::android::Parcelable {
  public:
    int32_t svid = 0;
    ::android::hardware::gnss::GnssConstellationType constellation = ::android::hardware::gnss::GnssConstellationType(0);
    float cN0Dbhz = 0.000000f;
    float basebandCN0DbHz = 0.000000f;
    float elevationDegrees = 0.000000f;
    float azimuthDegrees = 0.000000f;
    int64_t carrierFrequencyHz = 0L;
    int32_t svFlag = 0;
    inline bool operator!=(const GnssSvInfo& rhs) const {
      return std::tie(svid, constellation, cN0Dbhz, basebandCN0DbHz, elevationDegrees, azimuthDegrees, carrierFrequencyHz, svFlag) != std::tie(rhs.svid, rhs.constellation, rhs.cN0Dbhz, rhs.basebandCN0DbHz, rhs.elevationDegrees, rhs.azimuthDegrees, rhs.carrierFrequencyHz, rhs.svFlag);
    }
    inline bool operator<(const GnssSvInfo& rhs) const {
      return std::tie(svid, constellation, cN0Dbhz, basebandCN0DbHz, elevationDegrees, azimuthDegrees, carrierFrequencyHz, svFlag) < std::tie(rhs.svid, rhs.constellation, rhs.cN0Dbhz, rhs.basebandCN0DbHz, rhs.elevationDegrees, rhs.azimuthDegrees, rhs.carrierFrequencyHz, rhs.svFlag);
    }
    inline bool operator<=(const GnssSvInfo& rhs) const {
      return std::tie(svid, constellation, cN0Dbhz, basebandCN0DbHz, elevationDegrees, azimuthDegrees, carrierFrequencyHz, svFlag) <= std::tie(rhs.svid, rhs.constellation, rhs.cN0Dbhz, rhs.basebandCN0DbHz, rhs.elevationDegrees, rhs.azimuthDegrees, rhs.carrierFrequencyHz, rhs.svFlag);
    }
    inline bool operator==(const GnssSvInfo& rhs) const {
      return std::tie(svid, constellation, cN0Dbhz, basebandCN0DbHz, elevationDegrees, azimuthDegrees, carrierFrequencyHz, svFlag) == std::tie(rhs.svid, rhs.constellation, rhs.cN0Dbhz, rhs.basebandCN0DbHz, rhs.elevationDegrees, rhs.azimuthDegrees, rhs.carrierFrequencyHz, rhs.svFlag);
    }
    inline bool operator>(const GnssSvInfo& rhs) const {
      return std::tie(svid, constellation, cN0Dbhz, basebandCN0DbHz, elevationDegrees, azimuthDegrees, carrierFrequencyHz, svFlag) > std::tie(rhs.svid, rhs.constellation, rhs.cN0Dbhz, rhs.basebandCN0DbHz, rhs.elevationDegrees, rhs.azimuthDegrees, rhs.carrierFrequencyHz, rhs.svFlag);
    }
    inline bool operator>=(const GnssSvInfo& rhs) const {
      return std::tie(svid, constellation, cN0Dbhz, basebandCN0DbHz, elevationDegrees, azimuthDegrees, carrierFrequencyHz, svFlag) >= std::tie(rhs.svid, rhs.constellation, rhs.cN0Dbhz, rhs.basebandCN0DbHz, rhs.elevationDegrees, rhs.azimuthDegrees, rhs.carrierFrequencyHz, rhs.svFlag);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IGnssCallback.GnssSvInfo");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "GnssSvInfo{";
      _aidl_os << "svid: " << ::android::internal::ToString(svid);
      _aidl_os << ", constellation: " << ::android::internal::ToString(constellation);
      _aidl_os << ", cN0Dbhz: " << ::android::internal::ToString(cN0Dbhz);
      _aidl_os << ", basebandCN0DbHz: " << ::android::internal::ToString(basebandCN0DbHz);
      _aidl_os << ", elevationDegrees: " << ::android::internal::ToString(elevationDegrees);
      _aidl_os << ", azimuthDegrees: " << ::android::internal::ToString(azimuthDegrees);
      _aidl_os << ", carrierFrequencyHz: " << ::android::internal::ToString(carrierFrequencyHz);
      _aidl_os << ", svFlag: " << ::android::internal::ToString(svFlag);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class GnssSvInfo
  class GnssSystemInfo : public ::android::Parcelable {
  public:
    int32_t yearOfHw = 0;
    ::std::string name;
    inline bool operator!=(const GnssSystemInfo& rhs) const {
      return std::tie(yearOfHw, name) != std::tie(rhs.yearOfHw, rhs.name);
    }
    inline bool operator<(const GnssSystemInfo& rhs) const {
      return std::tie(yearOfHw, name) < std::tie(rhs.yearOfHw, rhs.name);
    }
    inline bool operator<=(const GnssSystemInfo& rhs) const {
      return std::tie(yearOfHw, name) <= std::tie(rhs.yearOfHw, rhs.name);
    }
    inline bool operator==(const GnssSystemInfo& rhs) const {
      return std::tie(yearOfHw, name) == std::tie(rhs.yearOfHw, rhs.name);
    }
    inline bool operator>(const GnssSystemInfo& rhs) const {
      return std::tie(yearOfHw, name) > std::tie(rhs.yearOfHw, rhs.name);
    }
    inline bool operator>=(const GnssSystemInfo& rhs) const {
      return std::tie(yearOfHw, name) >= std::tie(rhs.yearOfHw, rhs.name);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IGnssCallback.GnssSystemInfo");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "GnssSystemInfo{";
      _aidl_os << "yearOfHw: " << ::android::internal::ToString(yearOfHw);
      _aidl_os << ", name: " << ::android::internal::ToString(name);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class GnssSystemInfo
  enum : int32_t { CAPABILITY_SCHEDULING = 1 };
  enum : int32_t { CAPABILITY_MSB = 2 };
  enum : int32_t { CAPABILITY_MSA = 4 };
  enum : int32_t { CAPABILITY_SINGLE_SHOT = 8 };
  enum : int32_t { CAPABILITY_ON_DEMAND_TIME = 16 };
  enum : int32_t { CAPABILITY_GEOFENCING = 32 };
  enum : int32_t { CAPABILITY_MEASUREMENTS = 64 };
  enum : int32_t { CAPABILITY_NAV_MESSAGES = 128 };
  enum : int32_t { CAPABILITY_LOW_POWER_MODE = 256 };
  enum : int32_t { CAPABILITY_SATELLITE_BLOCKLIST = 512 };
  enum : int32_t { CAPABILITY_MEASUREMENT_CORRECTIONS = 1024 };
  enum : int32_t { CAPABILITY_ANTENNA_INFO = 2048 };
  enum : int32_t { CAPABILITY_CORRELATION_VECTOR = 4096 };
  enum : int32_t { CAPABILITY_SATELLITE_PVT = 8192 };
  enum : int32_t { CAPABILITY_MEASUREMENT_CORRECTIONS_FOR_DRIVING = 16384 };
  enum : int32_t { CAPABILITY_ACCUMULATED_DELTA_RANGE = 32768 };
  virtual ::android::binder::Status gnssSetCapabilitiesCb(int32_t capabilities) = 0;
  virtual ::android::binder::Status gnssStatusCb(::android::hardware::gnss::IGnssCallback::GnssStatusValue status) = 0;
  virtual ::android::binder::Status gnssSvStatusCb(const ::std::vector<::android::hardware::gnss::IGnssCallback::GnssSvInfo>& svInfoList) = 0;
  virtual ::android::binder::Status gnssLocationCb(const ::android::hardware::gnss::GnssLocation& location) = 0;
  virtual ::android::binder::Status gnssNmeaCb(int64_t timestamp, const ::std::string& nmea) = 0;
  virtual ::android::binder::Status gnssAcquireWakelockCb() = 0;
  virtual ::android::binder::Status gnssReleaseWakelockCb() = 0;
  virtual ::android::binder::Status gnssSetSystemInfoCb(const ::android::hardware::gnss::IGnssCallback::GnssSystemInfo& info) = 0;
  virtual ::android::binder::Status gnssRequestTimeCb() = 0;
  virtual ::android::binder::Status gnssRequestLocationCb(bool independentFromGnss, bool isUserEmergency) = 0;
  virtual ::android::binder::Status gnssSetSignalTypeCapabilitiesCb(const ::std::vector<::android::hardware::gnss::GnssSignalType>& gnssSignalTypes) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IGnssCallback

class IGnssCallbackDefault : public IGnssCallback {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status gnssSetCapabilitiesCb(int32_t /*capabilities*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssStatusCb(::android::hardware::gnss::IGnssCallback::GnssStatusValue /*status*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssSvStatusCb(const ::std::vector<::android::hardware::gnss::IGnssCallback::GnssSvInfo>& /*svInfoList*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssLocationCb(const ::android::hardware::gnss::GnssLocation& /*location*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssNmeaCb(int64_t /*timestamp*/, const ::std::string& /*nmea*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssAcquireWakelockCb() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssReleaseWakelockCb() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssSetSystemInfoCb(const ::android::hardware::gnss::IGnssCallback::GnssSystemInfo& /*info*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssRequestTimeCb() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssRequestLocationCb(bool /*independentFromGnss*/, bool /*isUserEmergency*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status gnssSetSignalTypeCapabilitiesCb(const ::std::vector<::android::hardware::gnss::GnssSignalType>& /*gnssSignalTypes*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IGnssCallbackDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(IGnssCallback::GnssStatusValue val) {
  switch(val) {
  case IGnssCallback::GnssStatusValue::NONE:
    return "NONE";
  case IGnssCallback::GnssStatusValue::SESSION_BEGIN:
    return "SESSION_BEGIN";
  case IGnssCallback::GnssStatusValue::SESSION_END:
    return "SESSION_END";
  case IGnssCallback::GnssStatusValue::ENGINE_ON:
    return "ENGINE_ON";
  case IGnssCallback::GnssStatusValue::ENGINE_OFF:
    return "ENGINE_OFF";
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
constexpr inline std::array<::android::hardware::gnss::IGnssCallback::GnssStatusValue, 5> enum_values<::android::hardware::gnss::IGnssCallback::GnssStatusValue> = {
  ::android::hardware::gnss::IGnssCallback::GnssStatusValue::NONE,
  ::android::hardware::gnss::IGnssCallback::GnssStatusValue::SESSION_BEGIN,
  ::android::hardware::gnss::IGnssCallback::GnssStatusValue::SESSION_END,
  ::android::hardware::gnss::IGnssCallback::GnssStatusValue::ENGINE_ON,
  ::android::hardware::gnss::IGnssCallback::GnssStatusValue::ENGINE_OFF,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(IGnssCallback::GnssSvFlags val) {
  switch(val) {
  case IGnssCallback::GnssSvFlags::NONE:
    return "NONE";
  case IGnssCallback::GnssSvFlags::HAS_EPHEMERIS_DATA:
    return "HAS_EPHEMERIS_DATA";
  case IGnssCallback::GnssSvFlags::HAS_ALMANAC_DATA:
    return "HAS_ALMANAC_DATA";
  case IGnssCallback::GnssSvFlags::USED_IN_FIX:
    return "USED_IN_FIX";
  case IGnssCallback::GnssSvFlags::HAS_CARRIER_FREQUENCY:
    return "HAS_CARRIER_FREQUENCY";
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
constexpr inline std::array<::android::hardware::gnss::IGnssCallback::GnssSvFlags, 5> enum_values<::android::hardware::gnss::IGnssCallback::GnssSvFlags> = {
  ::android::hardware::gnss::IGnssCallback::GnssSvFlags::NONE,
  ::android::hardware::gnss::IGnssCallback::GnssSvFlags::HAS_EPHEMERIS_DATA,
  ::android::hardware::gnss::IGnssCallback::GnssSvFlags::HAS_ALMANAC_DATA,
  ::android::hardware::gnss::IGnssCallback::GnssSvFlags::USED_IN_FIX,
  ::android::hardware::gnss::IGnssCallback::GnssSvFlags::HAS_CARRIER_FREQUENCY,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
