/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnss.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnss.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/GnssLocation.h>
#include <android/hardware/gnss/IAGnss.h>
#include <android/hardware/gnss/IAGnssRil.h>
#include <android/hardware/gnss/IGnss.h>
#include <android/hardware/gnss/IGnssAntennaInfo.h>
#include <android/hardware/gnss/IGnssBatching.h>
#include <android/hardware/gnss/IGnssCallback.h>
#include <android/hardware/gnss/IGnssConfiguration.h>
#include <android/hardware/gnss/IGnssDebug.h>
#include <android/hardware/gnss/IGnssGeofence.h>
#include <android/hardware/gnss/IGnssMeasurementInterface.h>
#include <android/hardware/gnss/IGnssNavigationMessageInterface.h>
#include <android/hardware/gnss/IGnssPowerIndication.h>
#include <android/hardware/gnss/IGnssPsds.h>
#include <android/hardware/gnss/measurement_corrections/IMeasurementCorrectionsInterface.h>
#include <android/hardware/gnss/visibility_control/IGnssVisibilityControl.h>
#include <array>
#include <binder/Enums.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <optional>
#include <string>
#include <tuple>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace android::hardware::gnss {
class GnssLocation;
class IAGnss;
class IAGnssRil;
class IGnssAntennaInfo;
class IGnssBatching;
class IGnssCallback;
class IGnssConfiguration;
class IGnssDebug;
class IGnssGeofence;
class IGnssMeasurementInterface;
class IGnssNavigationMessageInterface;
class IGnssPowerIndication;
class IGnssPsds;
}  // namespace android::hardware::gnss
namespace android::hardware::gnss::measurement_corrections {
class IMeasurementCorrectionsInterface;
}  // namespace android::hardware::gnss::measurement_corrections
namespace android::hardware::gnss::visibility_control {
class IGnssVisibilityControl;
}  // namespace android::hardware::gnss::visibility_control
namespace android {
namespace hardware {
namespace gnss {
class IGnssDelegator;

class IGnss : public ::android::IInterface {
public:
  typedef IGnssDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(Gnss)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  enum class GnssPositionMode : int32_t {
    STANDALONE = 0,
    MS_BASED = 1,
    MS_ASSISTED = 2,
  };
  enum class GnssPositionRecurrence : int32_t {
    RECURRENCE_PERIODIC = 0,
    RECURRENCE_SINGLE = 1,
  };
  enum class GnssAidingData : int32_t {
    EPHEMERIS = 1,
    ALMANAC = 2,
    POSITION = 4,
    TIME = 8,
    IONO = 16,
    UTC = 32,
    HEALTH = 64,
    SVDIR = 128,
    SVSTEER = 256,
    SADATA = 512,
    RTI = 1024,
    CELLDB_INFO = 32768,
    ALL = 65535,
  };
  class PositionModeOptions : public ::android::Parcelable {
  public:
    ::android::hardware::gnss::IGnss::GnssPositionMode mode = ::android::hardware::gnss::IGnss::GnssPositionMode(0);
    ::android::hardware::gnss::IGnss::GnssPositionRecurrence recurrence = ::android::hardware::gnss::IGnss::GnssPositionRecurrence(0);
    int32_t minIntervalMs = 0;
    int32_t preferredAccuracyMeters = 0;
    int32_t preferredTimeMs = 0;
    bool lowPowerMode = false;
    inline bool operator!=(const PositionModeOptions& rhs) const {
      return std::tie(mode, recurrence, minIntervalMs, preferredAccuracyMeters, preferredTimeMs, lowPowerMode) != std::tie(rhs.mode, rhs.recurrence, rhs.minIntervalMs, rhs.preferredAccuracyMeters, rhs.preferredTimeMs, rhs.lowPowerMode);
    }
    inline bool operator<(const PositionModeOptions& rhs) const {
      return std::tie(mode, recurrence, minIntervalMs, preferredAccuracyMeters, preferredTimeMs, lowPowerMode) < std::tie(rhs.mode, rhs.recurrence, rhs.minIntervalMs, rhs.preferredAccuracyMeters, rhs.preferredTimeMs, rhs.lowPowerMode);
    }
    inline bool operator<=(const PositionModeOptions& rhs) const {
      return std::tie(mode, recurrence, minIntervalMs, preferredAccuracyMeters, preferredTimeMs, lowPowerMode) <= std::tie(rhs.mode, rhs.recurrence, rhs.minIntervalMs, rhs.preferredAccuracyMeters, rhs.preferredTimeMs, rhs.lowPowerMode);
    }
    inline bool operator==(const PositionModeOptions& rhs) const {
      return std::tie(mode, recurrence, minIntervalMs, preferredAccuracyMeters, preferredTimeMs, lowPowerMode) == std::tie(rhs.mode, rhs.recurrence, rhs.minIntervalMs, rhs.preferredAccuracyMeters, rhs.preferredTimeMs, rhs.lowPowerMode);
    }
    inline bool operator>(const PositionModeOptions& rhs) const {
      return std::tie(mode, recurrence, minIntervalMs, preferredAccuracyMeters, preferredTimeMs, lowPowerMode) > std::tie(rhs.mode, rhs.recurrence, rhs.minIntervalMs, rhs.preferredAccuracyMeters, rhs.preferredTimeMs, rhs.lowPowerMode);
    }
    inline bool operator>=(const PositionModeOptions& rhs) const {
      return std::tie(mode, recurrence, minIntervalMs, preferredAccuracyMeters, preferredTimeMs, lowPowerMode) >= std::tie(rhs.mode, rhs.recurrence, rhs.minIntervalMs, rhs.preferredAccuracyMeters, rhs.preferredTimeMs, rhs.lowPowerMode);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IGnss.PositionModeOptions");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "PositionModeOptions{";
      _aidl_os << "mode: " << ::android::internal::ToString(mode);
      _aidl_os << ", recurrence: " << ::android::internal::ToString(recurrence);
      _aidl_os << ", minIntervalMs: " << ::android::internal::ToString(minIntervalMs);
      _aidl_os << ", preferredAccuracyMeters: " << ::android::internal::ToString(preferredAccuracyMeters);
      _aidl_os << ", preferredTimeMs: " << ::android::internal::ToString(preferredTimeMs);
      _aidl_os << ", lowPowerMode: " << ::android::internal::ToString(lowPowerMode);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class PositionModeOptions
  enum : int32_t { ERROR_INVALID_ARGUMENT = 1 };
  enum : int32_t { ERROR_ALREADY_INIT = 2 };
  enum : int32_t { ERROR_GENERIC = 3 };
  virtual ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IGnssCallback>& callback) = 0;
  virtual ::android::binder::Status close() = 0;
  virtual ::android::binder::Status getExtensionPsds(::android::sp<::android::hardware::gnss::IGnssPsds>* _aidl_return) = 0;
  virtual ::android::binder::Status getExtensionGnssConfiguration(::android::sp<::android::hardware::gnss::IGnssConfiguration>* _aidl_return) = 0;
  virtual ::android::binder::Status getExtensionGnssMeasurement(::android::sp<::android::hardware::gnss::IGnssMeasurementInterface>* _aidl_return) = 0;
  virtual ::android::binder::Status getExtensionGnssPowerIndication(::android::sp<::android::hardware::gnss::IGnssPowerIndication>* _aidl_return) = 0;
  virtual ::android::binder::Status getExtensionGnssBatching(::android::sp<::android::hardware::gnss::IGnssBatching>* _aidl_return) = 0;
  virtual ::android::binder::Status getExtensionGnssGeofence(::android::sp<::android::hardware::gnss::IGnssGeofence>* _aidl_return) = 0;
  virtual ::android::binder::Status getExtensionGnssNavigationMessage(::android::sp<::android::hardware::gnss::IGnssNavigationMessageInterface>* _aidl_return) = 0;
  virtual ::android::binder::Status getExtensionAGnss(::android::sp<::android::hardware::gnss::IAGnss>* _aidl_return) = 0;
  virtual ::android::binder::Status getExtensionAGnssRil(::android::sp<::android::hardware::gnss::IAGnssRil>* _aidl_return) = 0;
  virtual ::android::binder::Status getExtensionGnssDebug(::android::sp<::android::hardware::gnss::IGnssDebug>* _aidl_return) = 0;
  virtual ::android::binder::Status getExtensionGnssVisibilityControl(::android::sp<::android::hardware::gnss::visibility_control::IGnssVisibilityControl>* _aidl_return) = 0;
  virtual ::android::binder::Status start() = 0;
  virtual ::android::binder::Status stop() = 0;
  virtual ::android::binder::Status injectTime(int64_t timeMs, int64_t timeReferenceMs, int32_t uncertaintyMs) = 0;
  virtual ::android::binder::Status injectLocation(const ::android::hardware::gnss::GnssLocation& location) = 0;
  virtual ::android::binder::Status injectBestLocation(const ::android::hardware::gnss::GnssLocation& location) = 0;
  virtual ::android::binder::Status deleteAidingData(::android::hardware::gnss::IGnss::GnssAidingData aidingDataFlags) = 0;
  virtual ::android::binder::Status setPositionMode(const ::android::hardware::gnss::IGnss::PositionModeOptions& options) = 0;
  virtual ::android::binder::Status getExtensionGnssAntennaInfo(::android::sp<::android::hardware::gnss::IGnssAntennaInfo>* _aidl_return) = 0;
  virtual ::android::binder::Status getExtensionMeasurementCorrections(::android::sp<::android::hardware::gnss::measurement_corrections::IMeasurementCorrectionsInterface>* _aidl_return) = 0;
  virtual ::android::binder::Status startSvStatus() = 0;
  virtual ::android::binder::Status stopSvStatus() = 0;
  virtual ::android::binder::Status startNmea() = 0;
  virtual ::android::binder::Status stopNmea() = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IGnss

class IGnssDefault : public IGnss {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IGnssCallback>& /*callback*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status close() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getExtensionPsds(::android::sp<::android::hardware::gnss::IGnssPsds>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getExtensionGnssConfiguration(::android::sp<::android::hardware::gnss::IGnssConfiguration>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getExtensionGnssMeasurement(::android::sp<::android::hardware::gnss::IGnssMeasurementInterface>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getExtensionGnssPowerIndication(::android::sp<::android::hardware::gnss::IGnssPowerIndication>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getExtensionGnssBatching(::android::sp<::android::hardware::gnss::IGnssBatching>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getExtensionGnssGeofence(::android::sp<::android::hardware::gnss::IGnssGeofence>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getExtensionGnssNavigationMessage(::android::sp<::android::hardware::gnss::IGnssNavigationMessageInterface>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getExtensionAGnss(::android::sp<::android::hardware::gnss::IAGnss>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getExtensionAGnssRil(::android::sp<::android::hardware::gnss::IAGnssRil>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getExtensionGnssDebug(::android::sp<::android::hardware::gnss::IGnssDebug>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getExtensionGnssVisibilityControl(::android::sp<::android::hardware::gnss::visibility_control::IGnssVisibilityControl>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status start() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status stop() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status injectTime(int64_t /*timeMs*/, int64_t /*timeReferenceMs*/, int32_t /*uncertaintyMs*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status injectLocation(const ::android::hardware::gnss::GnssLocation& /*location*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status injectBestLocation(const ::android::hardware::gnss::GnssLocation& /*location*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status deleteAidingData(::android::hardware::gnss::IGnss::GnssAidingData /*aidingDataFlags*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setPositionMode(const ::android::hardware::gnss::IGnss::PositionModeOptions& /*options*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getExtensionGnssAntennaInfo(::android::sp<::android::hardware::gnss::IGnssAntennaInfo>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getExtensionMeasurementCorrections(::android::sp<::android::hardware::gnss::measurement_corrections::IMeasurementCorrectionsInterface>* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status startSvStatus() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status stopSvStatus() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status startNmea() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status stopNmea() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IGnssDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(IGnss::GnssPositionMode val) {
  switch(val) {
  case IGnss::GnssPositionMode::STANDALONE:
    return "STANDALONE";
  case IGnss::GnssPositionMode::MS_BASED:
    return "MS_BASED";
  case IGnss::GnssPositionMode::MS_ASSISTED:
    return "MS_ASSISTED";
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
constexpr inline std::array<::android::hardware::gnss::IGnss::GnssPositionMode, 3> enum_values<::android::hardware::gnss::IGnss::GnssPositionMode> = {
  ::android::hardware::gnss::IGnss::GnssPositionMode::STANDALONE,
  ::android::hardware::gnss::IGnss::GnssPositionMode::MS_BASED,
  ::android::hardware::gnss::IGnss::GnssPositionMode::MS_ASSISTED,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(IGnss::GnssPositionRecurrence val) {
  switch(val) {
  case IGnss::GnssPositionRecurrence::RECURRENCE_PERIODIC:
    return "RECURRENCE_PERIODIC";
  case IGnss::GnssPositionRecurrence::RECURRENCE_SINGLE:
    return "RECURRENCE_SINGLE";
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
constexpr inline std::array<::android::hardware::gnss::IGnss::GnssPositionRecurrence, 2> enum_values<::android::hardware::gnss::IGnss::GnssPositionRecurrence> = {
  ::android::hardware::gnss::IGnss::GnssPositionRecurrence::RECURRENCE_PERIODIC,
  ::android::hardware::gnss::IGnss::GnssPositionRecurrence::RECURRENCE_SINGLE,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(IGnss::GnssAidingData val) {
  switch(val) {
  case IGnss::GnssAidingData::EPHEMERIS:
    return "EPHEMERIS";
  case IGnss::GnssAidingData::ALMANAC:
    return "ALMANAC";
  case IGnss::GnssAidingData::POSITION:
    return "POSITION";
  case IGnss::GnssAidingData::TIME:
    return "TIME";
  case IGnss::GnssAidingData::IONO:
    return "IONO";
  case IGnss::GnssAidingData::UTC:
    return "UTC";
  case IGnss::GnssAidingData::HEALTH:
    return "HEALTH";
  case IGnss::GnssAidingData::SVDIR:
    return "SVDIR";
  case IGnss::GnssAidingData::SVSTEER:
    return "SVSTEER";
  case IGnss::GnssAidingData::SADATA:
    return "SADATA";
  case IGnss::GnssAidingData::RTI:
    return "RTI";
  case IGnss::GnssAidingData::CELLDB_INFO:
    return "CELLDB_INFO";
  case IGnss::GnssAidingData::ALL:
    return "ALL";
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
constexpr inline std::array<::android::hardware::gnss::IGnss::GnssAidingData, 13> enum_values<::android::hardware::gnss::IGnss::GnssAidingData> = {
  ::android::hardware::gnss::IGnss::GnssAidingData::EPHEMERIS,
  ::android::hardware::gnss::IGnss::GnssAidingData::ALMANAC,
  ::android::hardware::gnss::IGnss::GnssAidingData::POSITION,
  ::android::hardware::gnss::IGnss::GnssAidingData::TIME,
  ::android::hardware::gnss::IGnss::GnssAidingData::IONO,
  ::android::hardware::gnss::IGnss::GnssAidingData::UTC,
  ::android::hardware::gnss::IGnss::GnssAidingData::HEALTH,
  ::android::hardware::gnss::IGnss::GnssAidingData::SVDIR,
  ::android::hardware::gnss::IGnss::GnssAidingData::SVSTEER,
  ::android::hardware::gnss::IGnss::GnssAidingData::SADATA,
  ::android::hardware::gnss::IGnss::GnssAidingData::RTI,
  ::android::hardware::gnss::IGnss::GnssAidingData::CELLDB_INFO,
  ::android::hardware::gnss::IGnss::GnssAidingData::ALL,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
