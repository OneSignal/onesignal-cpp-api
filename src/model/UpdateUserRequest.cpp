/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOneSignalAPIClient/model/UpdateUserRequest.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



UpdateUserRequest::UpdateUserRequest()
{
    m_PropertiesIsSet = false;
    m_Refresh_device_metadata = false;
    m_Refresh_device_metadataIsSet = false;
    m_DeltasIsSet = false;
}

UpdateUserRequest::~UpdateUserRequest()
{
}

void UpdateUserRequest::validate()
{
    // TODO: implement validation
}

web::json::value UpdateUserRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PropertiesIsSet)
    {
        val[utility::conversions::to_string_t(U("properties"))] = ModelBase::toJson(m_Properties);
    }
    if(m_Refresh_device_metadataIsSet)
    {
        val[utility::conversions::to_string_t(U("refresh_device_metadata"))] = ModelBase::toJson(m_Refresh_device_metadata);
    }
    if(m_DeltasIsSet)
    {
        val[utility::conversions::to_string_t(U("deltas"))] = ModelBase::toJson(m_Deltas);
    }

    return val;
}

bool UpdateUserRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("properties"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("properties")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PropertiesObject> refVal_setProperties;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProperties);
            setProperties(refVal_setProperties);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("refresh_device_metadata"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("refresh_device_metadata")));
        if(!fieldValue.is_null())
        {
            bool refVal_setRefreshDeviceMetadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRefreshDeviceMetadata);
            setRefreshDeviceMetadata(refVal_setRefreshDeviceMetadata);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("deltas"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("deltas")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PropertiesDeltas> refVal_setDeltas;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDeltas);
            setDeltas(refVal_setDeltas);
        }
    }
    return ok;
}

void UpdateUserRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PropertiesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("properties")), m_Properties));
    }
    if(m_Refresh_device_metadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("refresh_device_metadata")), m_Refresh_device_metadata));
    }
    if(m_DeltasIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("deltas")), m_Deltas));
    }
}

bool UpdateUserRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("properties"))))
    {
        std::shared_ptr<PropertiesObject> refVal_setProperties;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("properties"))), refVal_setProperties );
        setProperties(refVal_setProperties);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("refresh_device_metadata"))))
    {
        bool refVal_setRefreshDeviceMetadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("refresh_device_metadata"))), refVal_setRefreshDeviceMetadata );
        setRefreshDeviceMetadata(refVal_setRefreshDeviceMetadata);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("deltas"))))
    {
        std::shared_ptr<PropertiesDeltas> refVal_setDeltas;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("deltas"))), refVal_setDeltas );
        setDeltas(refVal_setDeltas);
    }
    return ok;
}

std::shared_ptr<PropertiesObject> UpdateUserRequest::getProperties() const
{
    return m_Properties;
}

void UpdateUserRequest::setProperties(const std::shared_ptr<PropertiesObject>& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}

bool UpdateUserRequest::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void UpdateUserRequest::unsetProperties()
{
    m_PropertiesIsSet = false;
}
bool UpdateUserRequest::isRefreshDeviceMetadata() const
{
    return m_Refresh_device_metadata;
}

void UpdateUserRequest::setRefreshDeviceMetadata(bool value)
{
    m_Refresh_device_metadata = value;
    m_Refresh_device_metadataIsSet = true;
}

bool UpdateUserRequest::refreshDeviceMetadataIsSet() const
{
    return m_Refresh_device_metadataIsSet;
}

void UpdateUserRequest::unsetRefresh_device_metadata()
{
    m_Refresh_device_metadataIsSet = false;
}
std::shared_ptr<PropertiesDeltas> UpdateUserRequest::getDeltas() const
{
    return m_Deltas;
}

void UpdateUserRequest::setDeltas(const std::shared_ptr<PropertiesDeltas>& value)
{
    m_Deltas = value;
    m_DeltasIsSet = true;
}

bool UpdateUserRequest::deltasIsSet() const
{
    return m_DeltasIsSet;
}

void UpdateUserRequest::unsetDeltas()
{
    m_DeltasIsSet = false;
}
}
}
}
}


