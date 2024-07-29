/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssPsds.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssPsds.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/hardware/gnss/IGnssPsds.h>
#include <android/hardware/gnss/BnGnssPsds.h>
#include <android/hardware/gnss/BnGnssPsdsCallback.h>
#include <binder/Delegate.h>


namespace android {
namespace hardware {
namespace gnss {
class BnGnssPsds : public ::android::BnInterface<IGnssPsds> {
public:
  static constexpr uint32_t TRANSACTION_injectPsdsData = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_setCallback = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_getInterfaceVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777214;
  static constexpr uint32_t TRANSACTION_getInterfaceHash = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777213;
  explicit BnGnssPsds();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  int32_t getInterfaceVersion();
  std::string getInterfaceHash();
};  // class BnGnssPsds

class IGnssPsdsDelegator : public BnGnssPsds {
public:
  explicit IGnssPsdsDelegator(const ::android::sp<IGnssPsds> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IGnssPsds> getImpl() { return _aidl_delegate; }
  ::android::binder::Status injectPsdsData(::android::hardware::gnss::PsdsType psdsType, const ::std::vector<uint8_t>& psdsData) override {
    return _aidl_delegate->injectPsdsData(psdsType, psdsData);
  }
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IGnssPsdsCallback>& callback) override {
    ::android::sp<::android::hardware::gnss::IGnssPsdsCallbackDelegator> _callback;
    if (callback) {
      _callback = ::android::sp<::android::hardware::gnss::IGnssPsdsCallbackDelegator>::cast(delegate(callback));
    }
    return _aidl_delegate->setCallback(_callback);
  }
  int32_t getInterfaceVersion() override {
    int32_t _delegator_ver = BnGnssPsds::getInterfaceVersion();
    int32_t _impl_ver = _aidl_delegate->getInterfaceVersion();
    return _delegator_ver < _impl_ver ? _delegator_ver : _impl_ver;
  }
  std::string getInterfaceHash() override {
    return _aidl_delegate->getInterfaceHash();
  }
private:
  ::android::sp<IGnssPsds> _aidl_delegate;
};  // class IGnssPsdsDelegator
}  // namespace gnss
}  // namespace hardware
}  // namespace android
