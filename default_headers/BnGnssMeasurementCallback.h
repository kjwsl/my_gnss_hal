/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssMeasurementCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssMeasurementCallback.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/hardware/gnss/IGnssMeasurementCallback.h>
#include <android/hardware/gnss/BnGnssMeasurementCallback.h>
#include <binder/Delegate.h>


namespace android {
namespace hardware {
namespace gnss {
class BnGnssMeasurementCallback : public ::android::BnInterface<IGnssMeasurementCallback> {
public:
  static constexpr uint32_t TRANSACTION_gnssMeasurementCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_getInterfaceVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777214;
  static constexpr uint32_t TRANSACTION_getInterfaceHash = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777213;
  explicit BnGnssMeasurementCallback();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  int32_t getInterfaceVersion();
  std::string getInterfaceHash();
};  // class BnGnssMeasurementCallback

class IGnssMeasurementCallbackDelegator : public BnGnssMeasurementCallback {
public:
  explicit IGnssMeasurementCallbackDelegator(const ::android::sp<IGnssMeasurementCallback> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IGnssMeasurementCallback> getImpl() { return _aidl_delegate; }
  ::android::binder::Status gnssMeasurementCb(const ::android::hardware::gnss::GnssData& data) override {
    return _aidl_delegate->gnssMeasurementCb(data);
  }
  int32_t getInterfaceVersion() override {
    int32_t _delegator_ver = BnGnssMeasurementCallback::getInterfaceVersion();
    int32_t _impl_ver = _aidl_delegate->getInterfaceVersion();
    return _delegator_ver < _impl_ver ? _delegator_ver : _impl_ver;
  }
  std::string getInterfaceHash() override {
    return _aidl_delegate->getInterfaceHash();
  }
private:
  ::android::sp<IGnssMeasurementCallback> _aidl_delegate;
};  // class IGnssMeasurementCallbackDelegator
}  // namespace gnss
}  // namespace hardware
}  // namespace android
