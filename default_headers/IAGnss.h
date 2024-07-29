/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IAGnss.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IAGnss.aidl
 */
#pragma once

#include <android/hardware/gnss/IAGnss.h>
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

namespace android::hardware::gnss {
class IAGnssCallback;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class IAGnssDelegator;

class IAGnss : public ::android::IInterface {
public:
  typedef IAGnssDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(AGnss)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  enum class ApnIpType : int32_t {
    INVALID = 0,
    IPV4 = 1,
    IPV6 = 2,
    IPV4V6 = 3,
  };
  virtual ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IAGnssCallback>& callback) = 0;
  virtual ::android::binder::Status dataConnClosed() = 0;
  virtual ::android::binder::Status dataConnFailed() = 0;
  virtual ::android::binder::Status setServer(::android::hardware::gnss::IAGnssCallback::AGnssType type, const ::std::string& hostname, int32_t port) = 0;
  virtual ::android::binder::Status dataConnOpen(int64_t networkHandle, const ::std::string& apn, ::android::hardware::gnss::IAGnss::ApnIpType apnIpType) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IAGnss

class IAGnssDefault : public IAGnss {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IAGnssCallback>& /*callback*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status dataConnClosed() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status dataConnFailed() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setServer(::android::hardware::gnss::IAGnssCallback::AGnssType /*type*/, const ::std::string& /*hostname*/, int32_t /*port*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status dataConnOpen(int64_t /*networkHandle*/, const ::std::string& /*apn*/, ::android::hardware::gnss::IAGnss::ApnIpType /*apnIpType*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IAGnssDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android
namespace android {
namespace hardware {
namespace gnss {
[[nodiscard]] static inline std::string toString(IAGnss::ApnIpType val) {
  switch(val) {
  case IAGnss::ApnIpType::INVALID:
    return "INVALID";
  case IAGnss::ApnIpType::IPV4:
    return "IPV4";
  case IAGnss::ApnIpType::IPV6:
    return "IPV6";
  case IAGnss::ApnIpType::IPV4V6:
    return "IPV4V6";
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
constexpr inline std::array<::android::hardware::gnss::IAGnss::ApnIpType, 4> enum_values<::android::hardware::gnss::IAGnss::ApnIpType> = {
  ::android::hardware::gnss::IAGnss::ApnIpType::INVALID,
  ::android::hardware::gnss::IAGnss::ApnIpType::IPV4,
  ::android::hardware::gnss::IAGnss::ApnIpType::IPV6,
  ::android::hardware::gnss::IAGnss::ApnIpType::IPV4V6,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
