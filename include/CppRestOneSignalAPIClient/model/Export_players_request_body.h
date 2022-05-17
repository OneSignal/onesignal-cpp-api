/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.0.1
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Export_players_request_body.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_Export_players_request_body_H_
#define COM_ONESIGNAL_CLIENT_MODEL_Export_players_request_body_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Export_players_request_body
    : public ModelBase
{
public:
    Export_players_request_body();
    virtual ~Export_players_request_body();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Export_players_request_body members

    /// <summary>
    /// Additional fields that you wish to include. Currently supports location, country, rooted, notification_types, ip, external_user_id, web_auth, and web_p256.
    /// </summary>
    std::vector<utility::string_t>& getExtraFields();
    bool extraFieldsIsSet() const;
    void unsetExtra_fields();

    void setExtraFields(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Export all devices with a last_active timestamp greater than this time.  Unixtime in seconds.
    /// </summary>
    int32_t getLastActiveSince() const;
    bool lastActiveSinceIsSet() const;
    void unsetLast_active_since();

    void setLastActiveSince(int32_t value);

    /// <summary>
    /// Export al ldevices belonging to the segment.
    /// </summary>
    utility::string_t getSegmentName() const;
    bool segmentNameIsSet() const;
    void unsetSegment_name();

    void setSegmentName(const utility::string_t& value);


protected:
    std::vector<utility::string_t> m_Extra_fields;
    bool m_Extra_fieldsIsSet;
    int32_t m_Last_active_since;
    bool m_Last_active_sinceIsSet;
    utility::string_t m_Segment_name;
    bool m_Segment_nameIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_Export_players_request_body_H_ */
