/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/measurement_corrections/IMeasurementCorrectionsCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/measurement_corrections/IMeasurementCorrectionsCallback.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/hardware/gnss/measurement_corrections/IMeasurementCorrectionsCallback.h>
#include <android/hardware/gnss/measurement_corrections/BnMeasurementCorrectionsCallback.h>
#include <binder/Delegate.h>


namespace android {
namespace hardware {
namespace gnss {
namespace measurement_corrections {
class BnMeasurementCorrectionsCallback : public ::android::BnInterface<IMeasurementCorrectionsCallback> {
public:
  static constexpr uint32_t TRANSACTION_setCapabilitiesCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_getInterfaceVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777214;
  static constexpr uint32_t TRANSACTION_getInterfaceHash = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777213;
  explicit BnMeasurementCorrectionsCallback();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  int32_t getInterfaceVersion();
  std::string getInterfaceHash();
};  // class BnMeasurementCorrectionsCallback

class IMeasurementCorrectionsCallbackDelegator : public BnMeasurementCorrectionsCallback {
public:
  explicit IMeasurementCorrectionsCallbackDelegator(const ::android::sp<IMeasurementCorrectionsCallback> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IMeasurementCorrectionsCallback> getImpl() { return _aidl_delegate; }
  ::android::binder::Status setCapabilitiesCb(int32_t capabilities) override {
    return _aidl_delegate->setCapabilitiesCb(capabilities);
  }
  int32_t getInterfaceVersion() override {
    int32_t _delegator_ver = BnMeasurementCorrectionsCallback::getInterfaceVersion();
    int32_t _impl_ver = _aidl_delegate->getInterfaceVersion();
    return _delegator_ver < _impl_ver ? _delegator_ver : _impl_ver;
  }
  std::string getInterfaceHash() override {
    return _aidl_delegate->getInterfaceHash();
  }
private:
  ::android::sp<IMeasurementCorrectionsCallback> _aidl_delegate;
};  // class IMeasurementCorrectionsCallbackDelegator
}  // namespace measurement_corrections
}  // namespace gnss
}  // namespace hardware
}  // namespace android
