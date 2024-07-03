/**
 * Why can't they just implement this properly?
 */

#pragma once

#include <string_view>
#include <ctime>
#include <string>
#include <memory>

#include <android/hardware/gnss/1.0/IGnss.h>
#include <android/hardware/gnss/2.0/IGnss.h>
#include <hidl/Status.h>

#include <aidl/android/hardware/gnss/GnssLocation.h>
#include <aidl/android/hardware/gnss/GnssMeasurement.h>
#include <aidl/android/hardware/gnss/IGnss.h>


// #include "aidl/android/hardware/gnss/IGnss.h" // do we really need this?

namespace android {
    namespace hardware {
        namespace gnss {
            namespace utils {

                using ::aidl::android::hardware::gnss::GnssLocation;
                using ::aidl::android::hardware::gnss::GnssMeasurement;

                class NmeaParser {
                private:
                    std::unique_ptr <GnssMeasurement> mData;

                public:
                    static const kMinNumField{3};
                    class NmeaTokenizer;

                    NmeaParser();

                    static std::unique_ptr <GnssMeasurement> getLocationFromNmeaMsg(
                            const std::string_view s);

                private:
                    static void splitStr(const std::string &line, const char &delimiter,
                                         std::vector <std::string> &out);

                    static float checkAndConvertToFloat(const std::string &sentence);

                    static int64_t
                    nmeaPartsToTimestamp(const std::string &timeStr, const std::string &dateStr);

                    /**
                     * Extract NMEA Message Type From NMEA Message from Argument.
                     * Very Simple Function.
                     *
                     * @param nmeaMsg Takes one whole NMEA message to be parsed.
                     *
                     */
                    static std::string_view getNmeaMsgType(const std::string_view nmeaMsg);


                    std::unique_ptr <V2_0::GnssLocation> toGnssLocation() const;

                    // Getters
                    float getAltitudeMeters() const;

                    float getBearingAccuracyDegrees() const;

                    float getBearingDegrees() const;

                    uint32_t getFixId() const;

                    float getHorizontalAccuracyMeters() const;

                    float getLatDeg() const;

                    float getLngDeg() const;

                    float getSpeedAccuracyMetersPerSecond() const;

                    float getSpeedMetersPerSec() const;

                    int64_t getTimestamp() const;

                    float getVerticalAccuracyMeters() const;

                    bool isValidFix() const;

                    void reset();

                    NmeaFixInfo &operator=(const NmeaFixInfo &rhs);
                };

                class NmeaParser::NmeaTokenizer {
                public:

                    /**
                     * Tokenize NMEA Message, Package Result in #TokenResult and Return It.
                     *
                     * @param msg NMEA Message to be tokenized.
                     * @return Whether Tokenization was successful
                     */
                    bool tokenizeNmeaMsg(const std::string_view msg);

                    int getNumTokens() {
                        return numTokens;
                    }

                    TokenList getTokens() {
                        return tokens;
                    }

                    bool isSuccess() {
                        return success;
                    }

                private:
                    int numTokens{0};
                    std::vector<std::string_view> tokens{};
                    bool success{false};

                };

            }  // namespace utils
        }  // namespace gnss
    }  // namespace hardware
}  // namespace android
