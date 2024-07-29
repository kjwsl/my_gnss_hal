/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssAntennaInfoCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssAntennaInfoCallback.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/hardware/gnss/IGnssAntennaInfoCallback.h>
#include <android/hardware/gnss/BnGnssAntennaInfoCallback.h>
#include <binder/Delegate.h>


namespace android {
namespace hardware {
namespace gnss {
class BnGnssAntennaInfoCallback : public ::android::BnInterface<IGnssAntennaInfoCallback> {
public:
  static constexpr uint32_t TRANSACTION_gnssAntennaInfoCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_getInterfaceVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777214;
  static constexpr uint32_t TRANSACTION_getInterfaceHash = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777213;
  explicit BnGnssAntennaInfoCallback();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  int32_t getInterfaceVersion();
  std::string getInterfaceHash();
};  // class BnGnssAntennaInfoCallback

class IGnssAntennaInfoCallbackDelegator : public BnGnssAntennaInfoCallback {
public:
  explicit IGnssAntennaInfoCallbackDelegator(const ::android::sp<IGnssAntennaInfoCallback> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IGnssAntennaInfoCallback> getImpl() { return _aidl_delegate; }
  ::android::binder::Status gnssAntennaInfoCb(const ::std::vector<::android::hardware::gnss::IGnssAntennaInfoCallback::GnssAntennaInfo>& gnssAntennaInfos) override {
    return _aidl_delegate->gnssAntennaInfoCb(gnssAntennaInfos);
  }
  int32_t getInterfaceVersion() override {
    int32_t _delegator_ver = BnGnssAntennaInfoCallback::getInterfaceVersion();
    int32_t _impl_ver = _aidl_delegate->getInterfaceVersion();
    return _delegator_ver < _impl_ver ? _delegator_ver : _impl_ver;
  }
  std::string getInterfaceHash() override {
    return _aidl_delegate->getInterfaceHash();
  }
private:
  ::android::sp<IGnssAntennaInfoCallback> _aidl_delegate;
};  // class IGnssAntennaInfoCallbackDelegator
}  // namespace gnss
}  // namespace hardware
}  // namespace android
