/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 5.2.0
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOneSignalAPIClient/model/CreateUserConflictResponse_errors_inner.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



CreateUserConflictResponse_errors_inner::CreateUserConflictResponse_errors_inner()
{
    m_Code = utility::conversions::to_string_t("");
    m_CodeIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_MetaIsSet = false;
}

CreateUserConflictResponse_errors_inner::~CreateUserConflictResponse_errors_inner()
{
}

void CreateUserConflictResponse_errors_inner::validate()
{
    // TODO: implement validation
}

web::json::value CreateUserConflictResponse_errors_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CodeIsSet)
    {
        val[utility::conversions::to_string_t(U("code"))] = ModelBase::toJson(m_Code);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t(U("title"))] = ModelBase::toJson(m_Title);
    }
    if(m_MetaIsSet)
    {
        val[utility::conversions::to_string_t(U("meta"))] = ModelBase::toJson(m_Meta);
    }

    return val;
}

bool CreateUserConflictResponse_errors_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("code"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("code")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCode;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCode);
            setCode(refVal_setCode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("title"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("title")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTitle;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTitle);
            setTitle(refVal_setTitle);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("meta"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("meta")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<CreateUserConflictResponse_errorsItems_meta> refVal_setMeta;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMeta);
            setMeta(refVal_setMeta);
        }
    }
    return ok;
}

void CreateUserConflictResponse_errors_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_CodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("code")), m_Code));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("title")), m_Title));
    }
    if(m_MetaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("meta")), m_Meta));
    }
}

bool CreateUserConflictResponse_errors_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("code"))))
    {
        utility::string_t refVal_setCode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("code"))), refVal_setCode );
        setCode(refVal_setCode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("title"))))
    {
        utility::string_t refVal_setTitle;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("title"))), refVal_setTitle );
        setTitle(refVal_setTitle);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("meta"))))
    {
        std::shared_ptr<CreateUserConflictResponse_errorsItems_meta> refVal_setMeta;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("meta"))), refVal_setMeta );
        setMeta(refVal_setMeta);
    }
    return ok;
}

utility::string_t CreateUserConflictResponse_errors_inner::getCode() const
{
    return m_Code;
}

void CreateUserConflictResponse_errors_inner::setCode(const utility::string_t& value)
{
    m_Code = value;
    m_CodeIsSet = true;
}

bool CreateUserConflictResponse_errors_inner::codeIsSet() const
{
    return m_CodeIsSet;
}

void CreateUserConflictResponse_errors_inner::unsetCode()
{
    m_CodeIsSet = false;
}
utility::string_t CreateUserConflictResponse_errors_inner::getTitle() const
{
    return m_Title;
}

void CreateUserConflictResponse_errors_inner::setTitle(const utility::string_t& value)
{
    m_Title = value;
    m_TitleIsSet = true;
}

bool CreateUserConflictResponse_errors_inner::titleIsSet() const
{
    return m_TitleIsSet;
}

void CreateUserConflictResponse_errors_inner::unsetTitle()
{
    m_TitleIsSet = false;
}
std::shared_ptr<CreateUserConflictResponse_errorsItems_meta> CreateUserConflictResponse_errors_inner::getMeta() const
{
    return m_Meta;
}

void CreateUserConflictResponse_errors_inner::setMeta(const std::shared_ptr<CreateUserConflictResponse_errorsItems_meta>& value)
{
    m_Meta = value;
    m_MetaIsSet = true;
}

bool CreateUserConflictResponse_errors_inner::metaIsSet() const
{
    return m_MetaIsSet;
}

void CreateUserConflictResponse_errors_inner::unsetMeta()
{
    m_MetaIsSet = false;
}
}
}
}
}


