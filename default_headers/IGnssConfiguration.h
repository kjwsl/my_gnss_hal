/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssConfiguration.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssConfiguration.aidl
 */
#pragma once

#include <android/hardware/gnss/BlocklistedSource.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <utils/String16.h>
#include <utils/StrongPointer.h>
#include <vector>

namespace android::hardware::gnss {
class BlocklistedSource;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class IGnssConfigurationDelegator;

class IGnssConfiguration : public ::android::IInterface {
public:
  typedef IGnssConfigurationDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(GnssConfiguration)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  enum : int32_t { SUPL_MODE_MSB = 1 };
  enum : int32_t { SUPL_MODE_MSA = 2 };
  enum : int32_t { LPP_PROFILE_USER_PLANE = 1 };
  enum : int32_t { LPP_PROFILE_CONTROL_PLANE = 2 };
  enum : int32_t { GLONASS_POS_PROTOCOL_RRC_CPLANE = 1 };
  enum : int32_t { GLONASS_POS_PROTOCOL_RRLP_UPLANE = 2 };
  enum : int32_t { GLONASS_POS_PROTOCOL_LPP_UPLANE = 4 };
  virtual ::android::binder::Status setSuplVersion(int32_t version) = 0;
  virtual ::android::binder::Status setSuplMode(int32_t mode) = 0;
  virtual ::android::binder::Status setLppProfile(int32_t lppProfile) = 0;
  virtual ::android::binder::Status setGlonassPositioningProtocol(int32_t protocol) = 0;
  virtual ::android::binder::Status setEmergencySuplPdn(bool enable) = 0;
  virtual ::android::binder::Status setEsExtensionSec(int32_t emergencyExtensionSeconds) = 0;
  virtual ::android::binder::Status setBlocklist(const ::std::vector<::android::hardware::gnss::BlocklistedSource>& blocklist) = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IGnssConfiguration

class IGnssConfigurationDefault : public IGnssConfiguration {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status setSuplVersion(int32_t /*version*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setSuplMode(int32_t /*mode*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setLppProfile(int32_t /*lppProfile*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setGlonassPositioningProtocol(int32_t /*protocol*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setEmergencySuplPdn(bool /*enable*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setEsExtensionSec(int32_t /*emergencyExtensionSeconds*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setBlocklist(const ::std::vector<::android::hardware::gnss::BlocklistedSource>& /*blocklist*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IGnssConfigurationDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android
