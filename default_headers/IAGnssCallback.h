/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IAGnssCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IAGnssCallback.aidl
 */
#pragma once

#include <android/hardware/gnss/IAGnssCallback.h>
#include <array>
#include <binder/Enums.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <string>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace android {
namespace hardware {
namespace gnss {
class IAGnssCallbackDelegator;

class IAGnssCallback : public ::android::IInterface {
public:
  typedef IAGnssCallbackDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(AGnssCallback)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  enum class AGnssType : int32_t {
    SUPL = 1,
    C2K = 2,
    SUPL_EIMS = 3,
    SUPL_IMS = 4,
  };
  enum class AGnssStatusValue : int32_t {
    REQUEST_AGNSS_DATA_CONN = 1,
    RELEASE_AGNSS_DATA_CONN = 2,
    AGNSS_DATA_CONNECTED = 3,
    AGNSS_DATA_CONN_DONE = 4,
    AGNSS_DATA_CONN_FAILED = 5,
  };
  virtual ::android::binder::Status agnssStatusCb(::android::hardware::gnss::IAGnssCallback::AGnssType type, ::android::hardware::gnss::IAGnssCallback::AGnssStatusValue status) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IAGnssCallback

class IAGnssCallbackDefault : public IAGnssCallback {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status agnssStatusCb(::android::hardware::gnss::IAGnssCallback::AGnssType /*type*/, ::android::hardware::gnss::IAGnssCallback::AGnssStatusValue /*status*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IAGnssCallbackDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(IAGnssCallback::AGnssType val) {
  switch(val) {
  case IAGnssCallback::AGnssType::SUPL:
    return "SUPL";
  case IAGnssCallback::AGnssType::C2K:
    return "C2K";
  case IAGnssCallback::AGnssType::SUPL_EIMS:
    return "SUPL_EIMS";
  case IAGnssCallback::AGnssType::SUPL_IMS:
    return "SUPL_IMS";
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
constexpr inline std::array<::android::hardware::gnss::IAGnssCallback::AGnssType, 4> enum_values<::android::hardware::gnss::IAGnssCallback::AGnssType> = {
  ::android::hardware::gnss::IAGnssCallback::AGnssType::SUPL,
  ::android::hardware::gnss::IAGnssCallback::AGnssType::C2K,
  ::android::hardware::gnss::IAGnssCallback::AGnssType::SUPL_EIMS,
  ::android::hardware::gnss::IAGnssCallback::AGnssType::SUPL_IMS,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(IAGnssCallback::AGnssStatusValue val) {
  switch(val) {
  case IAGnssCallback::AGnssStatusValue::REQUEST_AGNSS_DATA_CONN:
    return "REQUEST_AGNSS_DATA_CONN";
  case IAGnssCallback::AGnssStatusValue::RELEASE_AGNSS_DATA_CONN:
    return "RELEASE_AGNSS_DATA_CONN";
  case IAGnssCallback::AGnssStatusValue::AGNSS_DATA_CONNECTED:
    return "AGNSS_DATA_CONNECTED";
  case IAGnssCallback::AGnssStatusValue::AGNSS_DATA_CONN_DONE:
    return "AGNSS_DATA_CONN_DONE";
  case IAGnssCallback::AGnssStatusValue::AGNSS_DATA_CONN_FAILED:
    return "AGNSS_DATA_CONN_FAILED";
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
constexpr inline std::array<::android::hardware::gnss::IAGnssCallback::AGnssStatusValue, 5> enum_values<::android::hardware::gnss::IAGnssCallback::AGnssStatusValue> = {
  ::android::hardware::gnss::IAGnssCallback::AGnssStatusValue::REQUEST_AGNSS_DATA_CONN,
  ::android::hardware::gnss::IAGnssCallback::AGnssStatusValue::RELEASE_AGNSS_DATA_CONN,
  ::android::hardware::gnss::IAGnssCallback::AGnssStatusValue::AGNSS_DATA_CONNECTED,
  ::android::hardware::gnss::IAGnssCallback::AGnssStatusValue::AGNSS_DATA_CONN_DONE,
  ::android::hardware::gnss::IAGnssCallback::AGnssStatusValue::AGNSS_DATA_CONN_FAILED,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
