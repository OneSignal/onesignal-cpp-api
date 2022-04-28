/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.0.2
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOneSignalAPIClient/model/Inline_response_200_2.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



Inline_response_200_2::Inline_response_200_2()
{
    m_Success = utility::conversions::to_string_t("");
    m_SuccessIsSet = false;
    m_Destination_url = utility::conversions::to_string_t("");
    m_Destination_urlIsSet = false;
}

Inline_response_200_2::~Inline_response_200_2()
{
}

void Inline_response_200_2::validate()
{
    // TODO: implement validation
}

web::json::value Inline_response_200_2::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SuccessIsSet)
    {
        val[utility::conversions::to_string_t(U("success"))] = ModelBase::toJson(m_Success);
    }
    if(m_Destination_urlIsSet)
    {
        val[utility::conversions::to_string_t(U("destination_url"))] = ModelBase::toJson(m_Destination_url);
    }

    return val;
}

bool Inline_response_200_2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("success"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("success")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_success;
            ok &= ModelBase::fromJson(fieldValue, refVal_success);
            setSuccess(refVal_success);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("destination_url"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("destination_url")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_destination_url;
            ok &= ModelBase::fromJson(fieldValue, refVal_destination_url);
            setDestinationUrl(refVal_destination_url);
        }
    }
    return ok;
}

void Inline_response_200_2::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_SuccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("success")), m_Success));
    }
    if(m_Destination_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("destination_url")), m_Destination_url));
    }
}

bool Inline_response_200_2::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("success"))))
    {
        utility::string_t refVal_success;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("success"))), refVal_success );
        setSuccess(refVal_success);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("destination_url"))))
    {
        utility::string_t refVal_destination_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("destination_url"))), refVal_destination_url );
        setDestinationUrl(refVal_destination_url);
    }
    return ok;
}

utility::string_t Inline_response_200_2::getSuccess() const
{
    return m_Success;
}

void Inline_response_200_2::setSuccess(const utility::string_t& value)
{
    m_Success = value;
    m_SuccessIsSet = true;
}

bool Inline_response_200_2::successIsSet() const
{
    return m_SuccessIsSet;
}

void Inline_response_200_2::unsetSuccess()
{
    m_SuccessIsSet = false;
}
utility::string_t Inline_response_200_2::getDestinationUrl() const
{
    return m_Destination_url;
}

void Inline_response_200_2::setDestinationUrl(const utility::string_t& value)
{
    m_Destination_url = value;
    m_Destination_urlIsSet = true;
}

bool Inline_response_200_2::destinationUrlIsSet() const
{
    return m_Destination_urlIsSet;
}

void Inline_response_200_2::unsetDestination_url()
{
    m_Destination_urlIsSet = false;
}
}
}
}
}

