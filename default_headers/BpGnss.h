/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=cpp --structured --version 3 --hash 747fa8b8b4bb55d21f2c42446dd1b31de1dfbeaa -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging/android/hardware/gnss/IGnss.cpp.d -h out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/gnss/aidl/android.hardware.gnss-V3-cpp-source/gen/staging -Nhardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3 hardware/interfaces/gnss/aidl/aidl_api/android.hardware.gnss/3/android/hardware/gnss/IGnss.aidl
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/hardware/gnss/IGnss.h>

namespace android {
namespace hardware {
namespace gnss {
class BpGnss : public ::android::BpInterface<IGnss> {
public:
  explicit BpGnss(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpGnss() = default;
  ::android::binder::Status setCallback(const ::android::sp<::android::hardware::gnss::IGnssCallback>& callback) override;
  ::android::binder::Status close() override;
  ::android::binder::Status getExtensionPsds(::android::sp<::android::hardware::gnss::IGnssPsds>* _aidl_return) override;
  ::android::binder::Status getExtensionGnssConfiguration(::android::sp<::android::hardware::gnss::IGnssConfiguration>* _aidl_return) override;
  ::android::binder::Status getExtensionGnssMeasurement(::android::sp<::android::hardware::gnss::IGnssMeasurementInterface>* _aidl_return) override;
  ::android::binder::Status getExtensionGnssPowerIndication(::android::sp<::android::hardware::gnss::IGnssPowerIndication>* _aidl_return) override;
  ::android::binder::Status getExtensionGnssBatching(::android::sp<::android::hardware::gnss::IGnssBatching>* _aidl_return) override;
  ::android::binder::Status getExtensionGnssGeofence(::android::sp<::android::hardware::gnss::IGnssGeofence>* _aidl_return) override;
  ::android::binder::Status getExtensionGnssNavigationMessage(::android::sp<::android::hardware::gnss::IGnssNavigationMessageInterface>* _aidl_return) override;
  ::android::binder::Status getExtensionAGnss(::android::sp<::android::hardware::gnss::IAGnss>* _aidl_return) override;
  ::android::binder::Status getExtensionAGnssRil(::android::sp<::android::hardware::gnss::IAGnssRil>* _aidl_return) override;
  ::android::binder::Status getExtensionGnssDebug(::android::sp<::android::hardware::gnss::IGnssDebug>* _aidl_return) override;
  ::android::binder::Status getExtensionGnssVisibilityControl(::android::sp<::android::hardware::gnss::visibility_control::IGnssVisibilityControl>* _aidl_return) override;
  ::android::binder::Status start() override;
  ::android::binder::Status stop() override;
  ::android::binder::Status injectTime(int64_t timeMs, int64_t timeReferenceMs, int32_t uncertaintyMs) override;
  ::android::binder::Status injectLocation(const ::android::hardware::gnss::GnssLocation& location) override;
  ::android::binder::Status injectBestLocation(const ::android::hardware::gnss::GnssLocation& location) override;
  ::android::binder::Status deleteAidingData(::android::hardware::gnss::IGnss::GnssAidingData aidingDataFlags) override;
  ::android::binder::Status setPositionMode(const ::android::hardware::gnss::IGnss::PositionModeOptions& options) override;
  ::android::binder::Status getExtensionGnssAntennaInfo(::android::sp<::android::hardware::gnss::IGnssAntennaInfo>* _aidl_return) override;
  ::android::binder::Status getExtensionMeasurementCorrections(::android::sp<::android::hardware::gnss::measurement_corrections::IMeasurementCorrectionsInterface>* _aidl_return) override;
  ::android::binder::Status startSvStatus() override;
  ::android::binder::Status stopSvStatus() override;
  ::android::binder::Status startNmea() override;
  ::android::binder::Status stopNmea() override;
  int32_t getInterfaceVersion() override;
  std::string getInterfaceHash() override;
private:
  int32_t cached_version_ = -1;
  std::string cached_hash_ = "-1";
  std::mutex cached_hash_mutex_;
};  // class BpGnss
}  // namespace gnss
}  // namespace hardware
}  // namespace android
