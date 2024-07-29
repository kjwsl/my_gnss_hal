/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnssGeofenceCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnssGeofenceCallback.aidl
 */
#pragma once

#include <binder/IInterface.h>
#include <android/hardware/gnss/IGnssGeofenceCallback.h>
#include <android/hardware/gnss/BnGnssGeofenceCallback.h>
#include <binder/Delegate.h>


namespace android {
namespace hardware {
namespace gnss {
class BnGnssGeofenceCallback : public ::android::BnInterface<IGnssGeofenceCallback> {
public:
  static constexpr uint32_t TRANSACTION_gnssGeofenceTransitionCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_gnssGeofenceStatusCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_gnssGeofenceAddCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_gnssGeofenceRemoveCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_gnssGeofencePauseCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_gnssGeofenceResumeCb = ::android::IBinder::FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_getInterfaceVersion = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777214;
  static constexpr uint32_t TRANSACTION_getInterfaceHash = ::android::IBinder::FIRST_CALL_TRANSACTION + 16777213;
  explicit BnGnssGeofenceCallback();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
  int32_t getInterfaceVersion();
  std::string getInterfaceHash();
};  // class BnGnssGeofenceCallback

class IGnssGeofenceCallbackDelegator : public BnGnssGeofenceCallback {
public:
  explicit IGnssGeofenceCallbackDelegator(const ::android::sp<IGnssGeofenceCallback> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IGnssGeofenceCallback> getImpl() { return _aidl_delegate; }
  ::android::binder::Status gnssGeofenceTransitionCb(int32_t geofenceId, const ::android::hardware::gnss::GnssLocation& location, int32_t transition, int64_t timestampMillis) override {
    return _aidl_delegate->gnssGeofenceTransitionCb(geofenceId, location, transition, timestampMillis);
  }
  ::android::binder::Status gnssGeofenceStatusCb(int32_t availability, const ::android::hardware::gnss::GnssLocation& lastLocation) override {
    return _aidl_delegate->gnssGeofenceStatusCb(availability, lastLocation);
  }
  ::android::binder::Status gnssGeofenceAddCb(int32_t geofenceId, int32_t status) override {
    return _aidl_delegate->gnssGeofenceAddCb(geofenceId, status);
  }
  ::android::binder::Status gnssGeofenceRemoveCb(int32_t geofenceId, int32_t status) override {
    return _aidl_delegate->gnssGeofenceRemoveCb(geofenceId, status);
  }
  ::android::binder::Status gnssGeofencePauseCb(int32_t geofenceId, int32_t status) override {
    return _aidl_delegate->gnssGeofencePauseCb(geofenceId, status);
  }
  ::android::binder::Status gnssGeofenceResumeCb(int32_t geofenceId, int32_t status) override {
    return _aidl_delegate->gnssGeofenceResumeCb(geofenceId, status);
  }
  int32_t getInterfaceVersion() override {
    int32_t _delegator_ver = BnGnssGeofenceCallback::getInterfaceVersion();
    int32_t _impl_ver = _aidl_delegate->getInterfaceVersion();
    return _delegator_ver < _impl_ver ? _delegator_ver : _impl_ver;
  }
  std::string getInterfaceHash() override {
    return _aidl_delegate->getInterfaceHash();
  }
private:
  ::android::sp<IGnssGeofenceCallback> _aidl_delegate;
};  // class IGnssGeofenceCallbackDelegator
}  // namespace gnss
}  // namespace hardware
}  // namespace android
