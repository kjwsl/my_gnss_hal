#include <string>
#include <string_view>
#include <memory>
#include <utils/Log.h>
#include <android/hardware/gnss/GnssSignalType.h>
#include <android/hardware/gnss/GnssConstellationType.h>

#include "include/NmeaParser.hpp"

namespace android::hardware::gnss::utils {
    using ::aidl::android::hardware::gnss::GnssSignalType;
    using ::aidl::android::hardware::gnss::GnssConstellationType;

    std::unique_ptr <GnssMeasurement> NmeaParser::getLocationFromNmeaMsg(const std::string_view msg) {
        if (msg.empty()) {
            ALOGW("Couldn't Get Any NMEA Message");
            return nullptr;
        }

        auto resData{std::make_unique<GnssMeasurement>()};
        NmeaTokenizer tokenizer{};
        if (tokenizer.tokenizeNmeaMsg(s)) {
            size_t numTokens{tokenizer.getNumTokens()};
            if (numTokens < skMinNumField)
        }



        // TODO: Add Parsing Features for Popular Proprietary Types
        if (token[1] == 'P') {  // Proprietary Message
            ALOGE("Not Implemented");
            return nullptr;
        } else {
            switch (token.substr(1, 3)) {
                case "GP":
                    // TODO: Figure out if GN actually falls into GPS. It's a Combined GNSS Constellation, including GPS and GLONASS
                case "GN":
                    resData->signalType.constellation = GnssConstellationType.GPS;
                    break;
                case "GA":
                    resData->signalType.constellation = GnssConstellationType.GALILEO;
                    break;
                case "GB":
                case "BD":
                    resData->signalType.constellation = GnssConstellationType.BEIDOU;
                    break;
                case "GL":
                    resData->signalType.constellation = GnssConstellationType.GLONASS;
                    break;
                case "GQ":
                    resData->signalType.constellation = GnssConstellationType.QZSS;
                    break;
                default:
                    ALOGW("Unrecognized Talker ID from NMEA Message");
                    resData->signalType.constellation = GnssConstellationType.UNKNOWN;
            }
        }

    }

    // TODO: Figure out which class can contain info from GSV Message
    void parseGSV(const string_view msg) {
    }

    bool NmeaParser::validateHash(char hash) {
        

    }

    bool NmeaParser::NmeaTokenizer::tokenizeNmeaMsg(const std::string_view msg) {
        // TODO: Thought it made sense to make it static because every time it's called it has to be created over and over again. Needs to check if this is necessary.
        size_t pos{}, newPos{};

        if (msg.empty()) {
            ALOGW("Couldn't tokenize NMEA Message");
            return false;
        }

        while ((newPos = msg.find(skDelimter, pos)) != std::string::npos) {
            tokens.emplace_back(msg.substr(pos++, newPos));
        }

        numTokens = tockens.size();
        return true;
    }

}
