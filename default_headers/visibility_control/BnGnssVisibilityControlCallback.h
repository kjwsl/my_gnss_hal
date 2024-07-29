/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/visibility_control/IGnssVisibilityControlCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/visibility_control/IGnssVisibilityControlCallback.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/hardware/gnss/visibility_control/IGnssVisibilityControlCallback.h>
#include <android/hardware/gnss/visibility_control/BnGnssVisibilityControlCallback.h>
#include <binder/Delegate.h>


namespace android {
namespace hardware {
namespace gnss {
namespace visibility_control {
class BnGnssVisibilityControlCallback : public ::android::BnInterface<IGnssVisibilityControlCallback> {
public:
  static constexpr uint32_t TRANSACTION_nfwNotifyCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_isInEmergencySession = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_getInterfaceVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777214;
  static constexpr uint32_t TRANSACTION_getInterfaceHash = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777213;
  explicit BnGnssVisibilityControlCallback();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  int32_t getInterfaceVersion();
  std::string getInterfaceHash();
};  // class BnGnssVisibilityControlCallback

class IGnssVisibilityControlCallbackDelegator : public BnGnssVisibilityControlCallback {
public:
  explicit IGnssVisibilityControlCallbackDelegator(const ::android::sp<IGnssVisibilityControlCallback> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IGnssVisibilityControlCallback> getImpl() { return _aidl_delegate; }
  ::android::binder::Status nfwNotifyCb(const ::android::hardware::gnss::visibility_control::IGnssVisibilityControlCallback::NfwNotification& notification) override {
    return _aidl_delegate->nfwNotifyCb(notification);
  }
  ::android::binder::Status isInEmergencySession(bool* _aidl_return) override {
    return _aidl_delegate->isInEmergencySession(_aidl_return);
  }
  int32_t getInterfaceVersion() override {
    int32_t _delegator_ver = BnGnssVisibilityControlCallback::getInterfaceVersion();
    int32_t _impl_ver = _aidl_delegate->getInterfaceVersion();
    return _delegator_ver < _impl_ver ? _delegator_ver : _impl_ver;
  }
  std::string getInterfaceHash() override {
    return _aidl_delegate->getInterfaceHash();
  }
private:
  ::android::sp<IGnssVisibilityControlCallback> _aidl_delegate;
};  // class IGnssVisibilityControlCallbackDelegator
}  // namespace visibility_control
}  // namespace gnss
}  // namespace hardware
}  // namespace android
