/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssCallback.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/hardware/gnss/IGnssCallback.h>
#include <android/hardware/gnss/BnGnssCallback.h>
#include <binder/Delegate.h>


namespace android {
namespace hardware {
namespace gnss {
class BnGnssCallback : public ::android::BnInterface<IGnssCallback> {
public:
  static constexpr uint32_t TRANSACTION_gnssSetCapabilitiesCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_gnssStatusCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_gnssSvStatusCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_gnssLocationCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_gnssNmeaCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_gnssAcquireWakelockCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_gnssReleaseWakelockCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 6;
  static constexpr uint32_t TRANSACTION_gnssSetSystemInfoCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 7;
  static constexpr uint32_t TRANSACTION_gnssRequestTimeCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 8;
  static constexpr uint32_t TRANSACTION_gnssRequestLocationCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 9;
  static constexpr uint32_t TRANSACTION_gnssSetSignalTypeCapabilitiesCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 10;
  static constexpr uint32_t TRANSACTION_getInterfaceVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777214;
  static constexpr uint32_t TRANSACTION_getInterfaceHash = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777213;
  explicit BnGnssCallback();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  int32_t getInterfaceVersion();
  std::string getInterfaceHash();
};  // class BnGnssCallback

class IGnssCallbackDelegator : public BnGnssCallback {
public:
  explicit IGnssCallbackDelegator(const ::android::sp<IGnssCallback> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IGnssCallback> getImpl() { return _aidl_delegate; }
  ::android::binder::Status gnssSetCapabilitiesCb(int32_t capabilities) override {
    return _aidl_delegate->gnssSetCapabilitiesCb(capabilities);
  }
  ::android::binder::Status gnssStatusCb(::android::hardware::gnss::IGnssCallback::GnssStatusValue status) override {
    return _aidl_delegate->gnssStatusCb(status);
  }
  ::android::binder::Status gnssSvStatusCb(const ::std::vector<::android::hardware::gnss::IGnssCallback::GnssSvInfo>& svInfoList) override {
    return _aidl_delegate->gnssSvStatusCb(svInfoList);
  }
  ::android::binder::Status gnssLocationCb(const ::android::hardware::gnss::GnssLocation& location) override {
    return _aidl_delegate->gnssLocationCb(location);
  }
  ::android::binder::Status gnssNmeaCb(int64_t timestamp, const ::std::string& nmea) override {
    return _aidl_delegate->gnssNmeaCb(timestamp, nmea);
  }
  ::android::binder::Status gnssAcquireWakelockCb() override {
    return _aidl_delegate->gnssAcquireWakelockCb();
  }
  ::android::binder::Status gnssReleaseWakelockCb() override {
    return _aidl_delegate->gnssReleaseWakelockCb();
  }
  ::android::binder::Status gnssSetSystemInfoCb(const ::android::hardware::gnss::IGnssCallback::GnssSystemInfo& info) override {
    return _aidl_delegate->gnssSetSystemInfoCb(info);
  }
  ::android::binder::Status gnssRequestTimeCb() override {
    return _aidl_delegate->gnssRequestTimeCb();
  }
  ::android::binder::Status gnssRequestLocationCb(bool independentFromGnss, bool isUserEmergency) override {
    return _aidl_delegate->gnssRequestLocationCb(independentFromGnss, isUserEmergency);
  }
  ::android::binder::Status gnssSetSignalTypeCapabilitiesCb(const ::std::vector<::android::hardware::gnss::GnssSignalType>& gnssSignalTypes) override {
    return _aidl_delegate->gnssSetSignalTypeCapabilitiesCb(gnssSignalTypes);
  }
  int32_t getInterfaceVersion() override {
    int32_t _delegator_ver = BnGnssCallback::getInterfaceVersion();
    int32_t _impl_ver = _aidl_delegate->getInterfaceVersion();
    return _delegator_ver < _impl_ver ? _delegator_ver : _impl_ver;
  }
  std::string getInterfaceHash() override {
    return _aidl_delegate->getInterfaceHash();
  }
private:
  ::android::sp<IGnssCallback> _aidl_delegate;
};  // class IGnssCallbackDelegator
}  // namespace gnss
}  // namespace hardware
}  // namespace android
