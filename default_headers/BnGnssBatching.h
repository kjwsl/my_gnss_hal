/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssBatching.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssBatching.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/hardware/gnss/IGnssBatching.h>
#include <android/hardware/gnss/BnGnssBatching.h>
#include <android/hardware/gnss/BnGnssBatchingCallback.h>
#include <binder/Delegate.h>


namespace android {
namespace hardware {
namespace gnss {
class BnGnssBatching : public ::android::BnInterface<IGnssBatching> {
public:
  static constexpr uint32_t TRANSACTION_init = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_getBatchSize = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_start = ::android::IBinder::FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_flush = ::android::IBinder::FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_stop = ::android::IBinder::FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_cleanup = ::android::IBinder::FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_getInterfaceVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777214;
  static constexpr uint32_t TRANSACTION_getInterfaceHash = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777213;
  explicit BnGnssBatching();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  int32_t getInterfaceVersion();
  std::string getInterfaceHash();
};  // class BnGnssBatching

class IGnssBatchingDelegator : public BnGnssBatching {
public:
  explicit IGnssBatchingDelegator(const ::android::sp<IGnssBatching> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IGnssBatching> getImpl() { return _aidl_delegate; }
  ::android::binder::Status init(const ::android::sp<::android::hardware::gnss::IGnssBatchingCallback>& callback) override {
    ::android::sp<::android::hardware::gnss::IGnssBatchingCallbackDelegator> _callback;
    if (callback) {
      _callback = ::android::sp<::android::hardware::gnss::IGnssBatchingCallbackDelegator>::cast(delegate(callback));
    }
    return _aidl_delegate->init(_callback);
  }
  ::android::binder::Status getBatchSize(int32_t* _aidl_return) override {
    return _aidl_delegate->getBatchSize(_aidl_return);
  }
  ::android::binder::Status start(const ::android::hardware::gnss::IGnssBatching::Options& options) override {
    return _aidl_delegate->start(options);
  }
  ::android::binder::Status flush() override {
    return _aidl_delegate->flush();
  }
  ::android::binder::Status stop() override {
    return _aidl_delegate->stop();
  }
  ::android::binder::Status cleanup() override {
    return _aidl_delegate->cleanup();
  }
  int32_t getInterfaceVersion() override {
    int32_t _delegator_ver = BnGnssBatching::getInterfaceVersion();
    int32_t _impl_ver = _aidl_delegate->getInterfaceVersion();
    return _delegator_ver < _impl_ver ? _delegator_ver : _impl_ver;
  }
  std::string getInterfaceHash() override {
    return _aidl_delegate->getInterfaceHash();
  }
private:
  ::android::sp<IGnssBatching> _aidl_delegate;
};  // class IGnssBatchingDelegator
}  // namespace gnss
}  // namespace hardware
}  // namespace android
