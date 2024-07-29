/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssBatching.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssBatching.aidl
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/hardware/gnss/IGnssBatching.h>
#include <android/hardware/gnss/IGnssBatchingCallback.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace android::hardware::gnss {
class IGnssBatchingCallback;
}  // namespace android::hardware::gnss
namespace android {
namespace hardware {
namespace gnss {
class IGnssBatchingDelegator;

class IGnssBatching : public ::android::IInterface {
public:
  typedef IGnssBatchingDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(GnssBatching)
  static inline const int32_t VERSION = 3;
  static inline const std::string HASH = "747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa";
  class Options : public ::android::Parcelable {
  public:
    int64_t periodNanos = 0L;
    float minDistanceMeters = 0.000000f;
    int32_t flags = 0;
    inline bool operator!=(const Options& rhs) const {
      return std::tie(periodNanos, minDistanceMeters, flags) != std::tie(rhs.periodNanos, rhs.minDistanceMeters, rhs.flags);
    }
    inline bool operator<(const Options& rhs) const {
      return std::tie(periodNanos, minDistanceMeters, flags) < std::tie(rhs.periodNanos, rhs.minDistanceMeters, rhs.flags);
    }
    inline bool operator<=(const Options& rhs) const {
      return std::tie(periodNanos, minDistanceMeters, flags) <= std::tie(rhs.periodNanos, rhs.minDistanceMeters, rhs.flags);
    }
    inline bool operator==(const Options& rhs) const {
      return std::tie(periodNanos, minDistanceMeters, flags) == std::tie(rhs.periodNanos, rhs.minDistanceMeters, rhs.flags);
    }
    inline bool operator>(const Options& rhs) const {
      return std::tie(periodNanos, minDistanceMeters, flags) > std::tie(rhs.periodNanos, rhs.minDistanceMeters, rhs.flags);
    }
    inline bool operator>=(const Options& rhs) const {
      return std::tie(periodNanos, minDistanceMeters, flags) >= std::tie(rhs.periodNanos, rhs.minDistanceMeters, rhs.flags);
    }

    ::android::Parcelable::Stability getStability() const override { return ::android::Parcelable::Stability::STABILITY_VINTF; }
    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.hardware.gnss.IGnssBatching.Options");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "Options{";
      _aidl_os << "periodNanos: " << ::android::internal::ToString(periodNanos);
      _aidl_os << ", minDistanceMeters: " << ::android::internal::ToString(minDistanceMeters);
      _aidl_os << ", flags: " << ::android::internal::ToString(flags);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class Options
  enum : int32_t { WAKEUP_ON_FIFO_FULL = 1 };
  virtual ::android::binder::Status init(const ::android::sp<::android::hardware::gnss::IGnssBatchingCallback>& callback) = 0;
  virtual ::android::binder::Status getBatchSize(int32_t* _aidl_return) = 0;
  virtual ::android::binder::Status start(const ::android::hardware::gnss::IGnssBatching::Options& options) = 0;
  virtual ::android::binder::Status flush() = 0;
  virtual ::android::binder::Status stop() = 0;
  virtual ::android::binder::Status cleanup() = 0;
  virtual int32_t getInterfaceVersion() = 0;
  virtual std::string getInterfaceHash() = 0;
};  // class IGnssBatching

class IGnssBatchingDefault : public IGnssBatching {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status init(const ::android::sp<::android::hardware::gnss::IGnssBatchingCallback>& /*callback*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getBatchSize(int32_t* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status start(const ::android::hardware::gnss::IGnssBatching::Options& /*options*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status flush() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status stop() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status cleanup() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  int32_t getInterfaceVersion() override {
    return 0;
  }
  std::string getInterfaceHash() override {
    return "";
  }
};  // class IGnssBatchingDefault
}  // namespace gnss
}  // namespace hardware
}  // namespace android
