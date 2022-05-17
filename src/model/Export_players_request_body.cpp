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



#include "CppRestOneSignalAPIClient/model/Export_players_request_body.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



Export_players_request_body::Export_players_request_body()
{
    m_Extra_fieldsIsSet = false;
    m_Last_active_since = 0;
    m_Last_active_sinceIsSet = false;
    m_Segment_name = utility::conversions::to_string_t("");
    m_Segment_nameIsSet = false;
}

Export_players_request_body::~Export_players_request_body()
{
}

void Export_players_request_body::validate()
{
    // TODO: implement validation
}

web::json::value Export_players_request_body::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Extra_fieldsIsSet)
    {
        val[utility::conversions::to_string_t(U("extra_fields"))] = ModelBase::toJson(m_Extra_fields);
    }
    if(m_Last_active_sinceIsSet)
    {
        val[utility::conversions::to_string_t(U("last_active_since"))] = ModelBase::toJson(m_Last_active_since);
    }
    if(m_Segment_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("segment_name"))] = ModelBase::toJson(m_Segment_name);
    }

    return val;
}

bool Export_players_request_body::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("extra_fields"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("extra_fields")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setExtraFields;
            ok &= ModelBase::fromJson(fieldValue, refVal_setExtraFields);
            setExtraFields(refVal_setExtraFields);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("last_active_since"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("last_active_since")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setLastActiveSince;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLastActiveSince);
            setLastActiveSince(refVal_setLastActiveSince);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("segment_name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("segment_name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSegmentName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSegmentName);
            setSegmentName(refVal_setSegmentName);
        }
    }
    return ok;
}

void Export_players_request_body::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Extra_fieldsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("extra_fields")), m_Extra_fields));
    }
    if(m_Last_active_sinceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("last_active_since")), m_Last_active_since));
    }
    if(m_Segment_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("segment_name")), m_Segment_name));
    }
}

bool Export_players_request_body::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("extra_fields"))))
    {
        std::vector<utility::string_t> refVal_setExtraFields;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("extra_fields"))), refVal_setExtraFields );
        setExtraFields(refVal_setExtraFields);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("last_active_since"))))
    {
        int32_t refVal_setLastActiveSince;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("last_active_since"))), refVal_setLastActiveSince );
        setLastActiveSince(refVal_setLastActiveSince);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("segment_name"))))
    {
        utility::string_t refVal_setSegmentName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("segment_name"))), refVal_setSegmentName );
        setSegmentName(refVal_setSegmentName);
    }
    return ok;
}

std::vector<utility::string_t>& Export_players_request_body::getExtraFields()
{
    return m_Extra_fields;
}

void Export_players_request_body::setExtraFields(const std::vector<utility::string_t>& value)
{
    m_Extra_fields = value;
    m_Extra_fieldsIsSet = true;
}

bool Export_players_request_body::extraFieldsIsSet() const
{
    return m_Extra_fieldsIsSet;
}

void Export_players_request_body::unsetExtra_fields()
{
    m_Extra_fieldsIsSet = false;
}
int32_t Export_players_request_body::getLastActiveSince() const
{
    return m_Last_active_since;
}

void Export_players_request_body::setLastActiveSince(int32_t value)
{
    m_Last_active_since = value;
    m_Last_active_sinceIsSet = true;
}

bool Export_players_request_body::lastActiveSinceIsSet() const
{
    return m_Last_active_sinceIsSet;
}

void Export_players_request_body::unsetLast_active_since()
{
    m_Last_active_sinceIsSet = false;
}
utility::string_t Export_players_request_body::getSegmentName() const
{
    return m_Segment_name;
}

void Export_players_request_body::setSegmentName(const utility::string_t& value)
{
    m_Segment_name = value;
    m_Segment_nameIsSet = true;
}

bool Export_players_request_body::segmentNameIsSet() const
{
    return m_Segment_nameIsSet;
}

void Export_players_request_body::unsetSegment_name()
{
    m_Segment_nameIsSet = false;
}
}
}
}
}


