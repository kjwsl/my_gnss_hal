/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IAGnss.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IAGnss.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/hardware/gnss/IAGnss.h>
#include <android/hardware/gnss/BnAGnss.h>
#include <android/hardware/gnss/BnAGnssCallback.h>
#include <binder/Delegate.h>


namespace android {
namespace hardware {
namespace gnss {
class BnAGnss : public ::android::BnInterface<IAGnss> {
public:
  static constexpr uint32_t TRANSACTION_setCallback = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_dataConnClosed = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_dataConnFailed = ::android::IBinder::FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_setServer = ::android::IBinder::FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_dataConnOpen = ::android::IBinder::FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_getInterfaceVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777214;
  static constexpr uint32_t TRANSACTION_getInterfaceHash = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777213;
  explicit BnAGnss();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  int32_t getInterfaceVersion();
  std::string getInterfaceHash();
};  // class BnAGnss

class IAGnssDelegator : public BnAGnss {
public:
  explicit IAGnssDelegator(const ::android::sp<IAGnss> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IAGnss> getImpl() { return _aidl_delegate; }
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IAGnssCallback>& callback) override {
    ::android::sp<::android::hardware::gnss::IAGnssCallbackDelegator> _callback;
    if (callback) {
      _callback = ::android::sp<::android::hardware::gnss::IAGnssCallbackDelegator>::cast(delegate(callback));
    }
    return _aidl_delegate->setCallback(_callback);
  }
  ::android::binder::Status dataConnClosed() override {
    return _aidl_delegate->dataConnClosed();
  }
  ::android::binder::Status dataConnFailed() override {
    return _aidl_delegate->dataConnFailed();
  }
  ::android::binder::Status setServer(::android::hardware::gnss::IAGnssCallback::AGnssType type, const ::std::string& hostname, int32_t port) override {
    return _aidl_delegate->setServer(type, hostname, port);
  }
  ::android::binder::Status dataConnOpen(int64_t networkHandle, const ::std::string& apn, ::android::hardware::gnss::IAGnss::ApnIpType apnIpType) override {
    return _aidl_delegate->dataConnOpen(networkHandle, apn, apnIpType);
  }
  int32_t getInterfaceVersion() override {
    int32_t _delegator_ver = BnAGnss::getInterfaceVersion();
    int32_t _impl_ver = _aidl_delegate->getInterfaceVersion();
    return _delegator_ver < _impl_ver ? _delegator_ver : _impl_ver;
  }
  std::string getInterfaceHash() override {
    return _aidl_delegate->getInterfaceHash();
  }
private:
  ::android::sp<IAGnss> _aidl_delegate;
};  // class IAGnssDelegator
}  // namespace gnss
}  // namespace hardware
}  // namespace android
