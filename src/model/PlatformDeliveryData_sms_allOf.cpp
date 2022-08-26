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



#include "CppRestOneSignalAPIClient/model/PlatformDeliveryData_sms_allOf.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



PlatformDeliveryData_sms_allOf::PlatformDeliveryData_sms_allOf()
{
    m_Provider_successful = 0;
    m_Provider_successfulIsSet = false;
    m_Provider_failed = 0;
    m_Provider_failedIsSet = false;
    m_Provider_errored = 0;
    m_Provider_erroredIsSet = false;
}

PlatformDeliveryData_sms_allOf::~PlatformDeliveryData_sms_allOf()
{
}

void PlatformDeliveryData_sms_allOf::validate()
{
    // TODO: implement validation
}

web::json::value PlatformDeliveryData_sms_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Provider_successfulIsSet)
    {
        val[utility::conversions::to_string_t(U("provider_successful"))] = ModelBase::toJson(m_Provider_successful);
    }
    if(m_Provider_failedIsSet)
    {
        val[utility::conversions::to_string_t(U("provider_failed"))] = ModelBase::toJson(m_Provider_failed);
    }
    if(m_Provider_erroredIsSet)
    {
        val[utility::conversions::to_string_t(U("provider_errored"))] = ModelBase::toJson(m_Provider_errored);
    }

    return val;
}

bool PlatformDeliveryData_sms_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("provider_successful"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("provider_successful")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setProviderSuccessful;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProviderSuccessful);
            setProviderSuccessful(refVal_setProviderSuccessful);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("provider_failed"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("provider_failed")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setProviderFailed;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProviderFailed);
            setProviderFailed(refVal_setProviderFailed);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("provider_errored"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("provider_errored")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setProviderErrored;
            ok &= ModelBase::fromJson(fieldValue, refVal_setProviderErrored);
            setProviderErrored(refVal_setProviderErrored);
        }
    }
    return ok;
}

void PlatformDeliveryData_sms_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Provider_successfulIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("provider_successful")), m_Provider_successful));
    }
    if(m_Provider_failedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("provider_failed")), m_Provider_failed));
    }
    if(m_Provider_erroredIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("provider_errored")), m_Provider_errored));
    }
}

bool PlatformDeliveryData_sms_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("provider_successful"))))
    {
        int32_t refVal_setProviderSuccessful;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("provider_successful"))), refVal_setProviderSuccessful );
        setProviderSuccessful(refVal_setProviderSuccessful);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("provider_failed"))))
    {
        int32_t refVal_setProviderFailed;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("provider_failed"))), refVal_setProviderFailed );
        setProviderFailed(refVal_setProviderFailed);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("provider_errored"))))
    {
        int32_t refVal_setProviderErrored;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("provider_errored"))), refVal_setProviderErrored );
        setProviderErrored(refVal_setProviderErrored);
    }
    return ok;
}

int32_t PlatformDeliveryData_sms_allOf::getProviderSuccessful() const
{
    return m_Provider_successful;
}

void PlatformDeliveryData_sms_allOf::setProviderSuccessful(int32_t value)
{
    m_Provider_successful = value;
    m_Provider_successfulIsSet = true;
}

bool PlatformDeliveryData_sms_allOf::providerSuccessfulIsSet() const
{
    return m_Provider_successfulIsSet;
}

void PlatformDeliveryData_sms_allOf::unsetProvider_successful()
{
    m_Provider_successfulIsSet = false;
}
int32_t PlatformDeliveryData_sms_allOf::getProviderFailed() const
{
    return m_Provider_failed;
}

void PlatformDeliveryData_sms_allOf::setProviderFailed(int32_t value)
{
    m_Provider_failed = value;
    m_Provider_failedIsSet = true;
}

bool PlatformDeliveryData_sms_allOf::providerFailedIsSet() const
{
    return m_Provider_failedIsSet;
}

void PlatformDeliveryData_sms_allOf::unsetProvider_failed()
{
    m_Provider_failedIsSet = false;
}
int32_t PlatformDeliveryData_sms_allOf::getProviderErrored() const
{
    return m_Provider_errored;
}

void PlatformDeliveryData_sms_allOf::setProviderErrored(int32_t value)
{
    m_Provider_errored = value;
    m_Provider_erroredIsSet = true;
}

bool PlatformDeliveryData_sms_allOf::providerErroredIsSet() const
{
    return m_Provider_erroredIsSet;
}

void PlatformDeliveryData_sms_allOf::unsetProvider_errored()
{
    m_Provider_erroredIsSet = false;
}
}
}
}
}


