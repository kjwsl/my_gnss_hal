#ifndef __NMEA_TYPES_H__
#define __NMEA_TYPES_H__

enum class MessageType { GGA, GLL, GSA, GSV, MSS, RMC, VTG, ZDA, N151, N152, N154, };

enum class TalkerId { GALILEO, BEIDOU, GPS, GLONASS, COMBINED, QZSS, };


class NmeaMessage {
    public:
        NmeaMessage();
        NmeaMessage(const NmeaMessage& other);
        NmeaMessage(const NmeaMessage&& other);
        virtual void operator=(const NmeaMessage& other);
        virtual void operator=(const NmeaMessage&& other);
        virtual ~NmeaMessage() = default;
        virtual NmeaMessage parse();

    private:
        static const MessageType m_MsgType;
        static const TalkerId s_TalkerId;
        static int s_numField;
};


#endif // __NMEA_MESSAGE_H__
