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



#include "CppRestOneSignalAPIClient/model/DeleteSegmentNotFoundResponse.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



DeleteSegmentNotFoundResponse::DeleteSegmentNotFoundResponse()
{
    m_Success = false;
    m_SuccessIsSet = false;
}

DeleteSegmentNotFoundResponse::~DeleteSegmentNotFoundResponse()
{
}

void DeleteSegmentNotFoundResponse::validate()
{
    // TODO: implement validation
}

web::json::value DeleteSegmentNotFoundResponse::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SuccessIsSet)
    {
        val[utility::conversions::to_string_t(U("success"))] = ModelBase::toJson(m_Success);
    }

    return val;
}

bool DeleteSegmentNotFoundResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("success"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("success")));
        if(!fieldValue.is_null())
        {
            bool refVal_setSuccess;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSuccess);
            setSuccess(refVal_setSuccess);
        }
    }
    return ok;
}

void DeleteSegmentNotFoundResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool DeleteSegmentNotFoundResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("success"))))
    {
        bool refVal_setSuccess;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("success"))), refVal_setSuccess );
        setSuccess(refVal_setSuccess);
    }
    return ok;
}

bool DeleteSegmentNotFoundResponse::isSuccess() const
{
    return m_Success;
}

void DeleteSegmentNotFoundResponse::setSuccess(bool value)
{
    m_Success = value;
    m_SuccessIsSet = true;
}

bool DeleteSegmentNotFoundResponse::successIsSet() const
{
    return m_SuccessIsSet;
}

void DeleteSegmentNotFoundResponse::unsetSuccess()
{
    m_SuccessIsSet = false;
}
}
}
}
}


