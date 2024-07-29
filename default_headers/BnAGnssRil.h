/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IAGnssRil.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IAGnssRil.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/hardware/gnss/IAGnssRil.h>
#include <android/hardware/gnss/BnAGnssRil.h>
#include <android/hardware/gnss/BnAGnssRilCallback.h>
#include <binder/Delegate.h>


namespace android {
namespace hardware {
namespace gnss {
class BnAGnssRil : public ::android::BnInterface<IAGnssRil> {
public:
  static constexpr uint32_t TRANSACTION_setCallback = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_setRefLocation = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_setSetId = ::android::IBinder::FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_updateNetworkState = ::android::IBinder::FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_injectNiSuplMessageData = ::android::IBinder::FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_getInterfaceVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777214;
  static constexpr uint32_t TRANSACTION_getInterfaceHash = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777213;
  explicit BnAGnssRil();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  int32_t getInterfaceVersion();
  std::string getInterfaceHash();
};  // class BnAGnssRil

class IAGnssRilDelegator : public BnAGnssRil {
public:
  explicit IAGnssRilDelegator(const ::android::sp<IAGnssRil> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IAGnssRil> getImpl() { return _aidl_delegate; }
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IAGnssRilCallback>& callback) override {
    ::android::sp<::android::hardware::gnss::IAGnssRilCallbackDelegator> _callback;
    if (callback) {
      _callback = ::android::sp<::android::hardware::gnss::IAGnssRilCallbackDelegator>::cast(delegate(callback));
    }
    return _aidl_delegate->setCallback(_callback);
  }
  ::android::binder::Status setRefLocation(const ::android::hardware::gnss::IAGnssRil::AGnssRefLocation& agnssReflocation) override {
    return _aidl_delegate->setRefLocation(agnssReflocation);
  }
  ::android::binder::Status setSetId(::android::hardware::gnss::IAGnssRil::SetIdType type, const ::std::string& setid) override {
    return _aidl_delegate->setSetId(type, setid);
  }
  ::android::binder::Status updateNetworkState(const ::android::hardware::gnss::IAGnssRil::NetworkAttributes& attributes) override {
    return _aidl_delegate->updateNetworkState(attributes);
  }
  ::android::binder::Status injectNiSuplMessageData(const ::std::vector<uint8_t>& msgData, int32_t slotIndex) override {
    return _aidl_delegate->injectNiSuplMessageData(msgData, slotIndex);
  }
  int32_t getInterfaceVersion() override {
    int32_t _delegator_ver = BnAGnssRil::getInterfaceVersion();
    int32_t _impl_ver = _aidl_delegate->getInterfaceVersion();
    return _delegator_ver < _impl_ver ? _delegator_ver : _impl_ver;
  }
  std::string getInterfaceHash() override {
    return _aidl_delegate->getInterfaceHash();
  }
private:
  ::android::sp<IAGnssRil> _aidl_delegate;
};  // class IAGnssRilDelegator
}  // namespace gnss
}  // namespace hardware
}  // namespace android
