#include <cstring>
#include <vector>
#include <string>
#include <string_view>
#include <optional>
#include <aidl/android/hardware/gnss/GnssData.h>
#include <aidl/android/hardware/gnss/GnssSignalType.h>
#include <aidl/android/hardware/gnss/GnssClock.h>

struct ParsingResult {
    bool isValidHash;
    bool isValidTalkerId;
    bool isValidMessageId;
};

struct NmeaSentence {
    char                           talkerId[2];
    char                           messageId[3];
    int                            numField{};
    char                           hash{};
    std::vector<std::string_view>&&       tokens{};
    std::optional<ParsingResult>   result{};
    NmeaSentence& rest;
};

struct GGASentence : public NmeaSentence {
    int       hour;
    int       minute;
    float     seconds;
    double    latitude;
    double    longitude;
    int       positionMode;
    int       numSatellites;
    float     hdop;
    float     altitude;
    float     geoidSeparation;
    int       diffStationId;
};

class NmeaParser {
    public:
    std::optional<ParsingResult> parse(std::string_view msg) {
        if (msg.empty()) {
            return std::nullopt; 
        } 

        if (msg[0] != '$'){
            return std::nullopt;
        }

        NmeaSentence sentence{};
        auto tokens { tokenize(msg)};
        if (tokens.size() < 3 || tokens.size() > 32) {
            return std::nullopt;
        }
        std::string_view talkerId {tokens[0].substr(1,2)};
        std::string_view messageId {tokens[0].substr(3)};
        sentence.tokens{ tokens };
        sentence.numField{ tokens.size() };
        sentence.talkerId{talkerId};
        sentence.messageId{messageId};
        if (messageId == "GGA") {
            parseGGA(sentence);
        }


    }

    private:
    bool checkValidity(std::string_view msg) {

    }
    std::vector<std::string> tokenize(std::string_view msg) {
        std::vector<std::string> tokens{};
        int pos{};
        for (int length{};(length = msg.find(',', pos)) != std::string::npos; pos += length) {
            std::string_view token{msg.substr(pos, length)};
            tokens.emplace_back(token);
        }

        return tokens;
    }

    void parseGGA(NmeaSentence& sentence){


    }
    




};
