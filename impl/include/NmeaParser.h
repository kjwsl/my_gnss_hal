#ifndef __NMEA_PARSER_H__
#define __NMEA_PARSER_H__

#include <optional>
#include <string>
#include <functional>
#include <memory>

namespace gnss::impl {

using namespace std;

struct UtcTime {
    int hour;
    int minute;
    double second;
};

enum class FixMode {
    NO_FIX,
    GPS_FIX,
    DGPS_FIX,
    UNSUPPORTED_FIX,
    DEAD_RECKONING_FIX,
};

enum class PositionMode {
    AUTONOMOUS,
    DGPS,
    /* Dead reckoning */
    ESTIMATED,
};

struct Date {
    int day;
    int month;
    int year;
};


struct NmeaEvent {
    bool isValid{false};
};

struct FixEvent : public NmeaEvent {
    UtcTime time;
    double latitude;
    double longitude;
};

struct GgaEvent : public FixEvent {
    FixMode fixMode;
    int numSatellites;
    double hdop;
    double altitude;
    double geoidHeight;
    string dgpsAge;
    string dgpsStationId;
};

struct RmcEvent : public FixEvent {
    bool isDataValid{false};
    double speed;
    double course;
    Date date;
    optional<double> magneticVariation;
    optional<PositionMode> positionMode;
};

using NmeaCallback = function<void(const unique_ptr<NmeaEvent>)>;

struct NmeaCallbacks {
    optional<NmeaCallback> ggaCallback;
    optional<NmeaCallback> rmcCallback;
    optional<NmeaCallback> unknownCallback;
};
class NmeaParser {
    public:
        NmeaParser() = default;
        explicit NmeaParser(const string& sentence, const NmeaCallbacks& callbacks = {});

        void setSentence(const string& sentence);
        void parse();
        void setCallbacks(const NmeaCallbacks& callbacks);
        void reset();
        bool isReady() const;

    
    private:
        string m_sentence;
        NmeaCallbacks m_callbacks;

        unique_ptr<GgaEvent> parseGga_(const vector<string>& tokens);
        unique_ptr<RmcEvent> parseRmc_(const vector<string>& tokens);
        Date parseDate_(const string& date);
        UtcTime parseUtcTime_(const string& time);
        double parseLatitude_(const string& latitude, const string& latDir);
        double parseLongitude_(const string& longitude, const string& lonDir);
        FixMode parseFixMode_(const string& fixMode);
        PositionMode parsePositionMode_(const string& mode);
        double parseDouble_(const string& str);
        int parseInt_(const string& str, int base = 10);

        bool hasAnyCallback_() const noexcept;
        bool hasValidChecksum(const string& sentence);
};

}

#endif // __NMEA_PARSER_H__
