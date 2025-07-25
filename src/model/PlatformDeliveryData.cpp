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



#include "CppRestOneSignalAPIClient/model/PlatformDeliveryData.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



PlatformDeliveryData::PlatformDeliveryData()
{
    m_Edge_web_pushIsSet = false;
    m_Chrome_web_pushIsSet = false;
    m_Firefox_web_pushIsSet = false;
    m_Safari_web_pushIsSet = false;
    m_AndroidIsSet = false;
    m_IosIsSet = false;
    m_SmsIsSet = false;
    m_EmailIsSet = false;
}

PlatformDeliveryData::~PlatformDeliveryData()
{
}

void PlatformDeliveryData::validate()
{
    // TODO: implement validation
}

web::json::value PlatformDeliveryData::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Edge_web_pushIsSet)
    {
        val[utility::conversions::to_string_t(U("edge_web_push"))] = ModelBase::toJson(m_Edge_web_push);
    }
    if(m_Chrome_web_pushIsSet)
    {
        val[utility::conversions::to_string_t(U("chrome_web_push"))] = ModelBase::toJson(m_Chrome_web_push);
    }
    if(m_Firefox_web_pushIsSet)
    {
        val[utility::conversions::to_string_t(U("firefox_web_push"))] = ModelBase::toJson(m_Firefox_web_push);
    }
    if(m_Safari_web_pushIsSet)
    {
        val[utility::conversions::to_string_t(U("safari_web_push"))] = ModelBase::toJson(m_Safari_web_push);
    }
    if(m_AndroidIsSet)
    {
        val[utility::conversions::to_string_t(U("android"))] = ModelBase::toJson(m_Android);
    }
    if(m_IosIsSet)
    {
        val[utility::conversions::to_string_t(U("ios"))] = ModelBase::toJson(m_Ios);
    }
    if(m_SmsIsSet)
    {
        val[utility::conversions::to_string_t(U("sms"))] = ModelBase::toJson(m_Sms);
    }
    if(m_EmailIsSet)
    {
        val[utility::conversions::to_string_t(U("email"))] = ModelBase::toJson(m_Email);
    }

    return val;
}

bool PlatformDeliveryData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("edge_web_push"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("edge_web_push")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DeliveryData> refVal_setEdgeWebPush;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEdgeWebPush);
            setEdgeWebPush(refVal_setEdgeWebPush);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("chrome_web_push"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("chrome_web_push")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DeliveryData> refVal_setChromeWebPush;
            ok &= ModelBase::fromJson(fieldValue, refVal_setChromeWebPush);
            setChromeWebPush(refVal_setChromeWebPush);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("firefox_web_push"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("firefox_web_push")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DeliveryData> refVal_setFirefoxWebPush;
            ok &= ModelBase::fromJson(fieldValue, refVal_setFirefoxWebPush);
            setFirefoxWebPush(refVal_setFirefoxWebPush);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("safari_web_push"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("safari_web_push")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DeliveryData> refVal_setSafariWebPush;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSafariWebPush);
            setSafariWebPush(refVal_setSafariWebPush);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("android"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("android")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DeliveryData> refVal_setAndroid;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAndroid);
            setAndroid(refVal_setAndroid);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("ios"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("ios")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DeliveryData> refVal_setIos;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIos);
            setIos(refVal_setIos);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("sms"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sms")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DeliveryData> refVal_setSms;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSms);
            setSms(refVal_setSms);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("email"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("email")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DeliveryData> refVal_setEmail;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEmail);
            setEmail(refVal_setEmail);
        }
    }
    return ok;
}

void PlatformDeliveryData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Edge_web_pushIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("edge_web_push")), m_Edge_web_push));
    }
    if(m_Chrome_web_pushIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("chrome_web_push")), m_Chrome_web_push));
    }
    if(m_Firefox_web_pushIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("firefox_web_push")), m_Firefox_web_push));
    }
    if(m_Safari_web_pushIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("safari_web_push")), m_Safari_web_push));
    }
    if(m_AndroidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("android")), m_Android));
    }
    if(m_IosIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("ios")), m_Ios));
    }
    if(m_SmsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sms")), m_Sms));
    }
    if(m_EmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("email")), m_Email));
    }
}

bool PlatformDeliveryData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("edge_web_push"))))
    {
        std::shared_ptr<DeliveryData> refVal_setEdgeWebPush;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("edge_web_push"))), refVal_setEdgeWebPush );
        setEdgeWebPush(refVal_setEdgeWebPush);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("chrome_web_push"))))
    {
        std::shared_ptr<DeliveryData> refVal_setChromeWebPush;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("chrome_web_push"))), refVal_setChromeWebPush );
        setChromeWebPush(refVal_setChromeWebPush);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("firefox_web_push"))))
    {
        std::shared_ptr<DeliveryData> refVal_setFirefoxWebPush;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("firefox_web_push"))), refVal_setFirefoxWebPush );
        setFirefoxWebPush(refVal_setFirefoxWebPush);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("safari_web_push"))))
    {
        std::shared_ptr<DeliveryData> refVal_setSafariWebPush;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("safari_web_push"))), refVal_setSafariWebPush );
        setSafariWebPush(refVal_setSafariWebPush);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("android"))))
    {
        std::shared_ptr<DeliveryData> refVal_setAndroid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("android"))), refVal_setAndroid );
        setAndroid(refVal_setAndroid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("ios"))))
    {
        std::shared_ptr<DeliveryData> refVal_setIos;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("ios"))), refVal_setIos );
        setIos(refVal_setIos);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sms"))))
    {
        std::shared_ptr<DeliveryData> refVal_setSms;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sms"))), refVal_setSms );
        setSms(refVal_setSms);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("email"))))
    {
        std::shared_ptr<DeliveryData> refVal_setEmail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("email"))), refVal_setEmail );
        setEmail(refVal_setEmail);
    }
    return ok;
}

std::shared_ptr<DeliveryData> PlatformDeliveryData::getEdgeWebPush() const
{
    return m_Edge_web_push;
}

void PlatformDeliveryData::setEdgeWebPush(const std::shared_ptr<DeliveryData>& value)
{
    m_Edge_web_push = value;
    m_Edge_web_pushIsSet = true;
}

bool PlatformDeliveryData::edgeWebPushIsSet() const
{
    return m_Edge_web_pushIsSet;
}

void PlatformDeliveryData::unsetEdge_web_push()
{
    m_Edge_web_pushIsSet = false;
}
std::shared_ptr<DeliveryData> PlatformDeliveryData::getChromeWebPush() const
{
    return m_Chrome_web_push;
}

void PlatformDeliveryData::setChromeWebPush(const std::shared_ptr<DeliveryData>& value)
{
    m_Chrome_web_push = value;
    m_Chrome_web_pushIsSet = true;
}

bool PlatformDeliveryData::chromeWebPushIsSet() const
{
    return m_Chrome_web_pushIsSet;
}

void PlatformDeliveryData::unsetChrome_web_push()
{
    m_Chrome_web_pushIsSet = false;
}
std::shared_ptr<DeliveryData> PlatformDeliveryData::getFirefoxWebPush() const
{
    return m_Firefox_web_push;
}

void PlatformDeliveryData::setFirefoxWebPush(const std::shared_ptr<DeliveryData>& value)
{
    m_Firefox_web_push = value;
    m_Firefox_web_pushIsSet = true;
}

bool PlatformDeliveryData::firefoxWebPushIsSet() const
{
    return m_Firefox_web_pushIsSet;
}

void PlatformDeliveryData::unsetFirefox_web_push()
{
    m_Firefox_web_pushIsSet = false;
}
std::shared_ptr<DeliveryData> PlatformDeliveryData::getSafariWebPush() const
{
    return m_Safari_web_push;
}

void PlatformDeliveryData::setSafariWebPush(const std::shared_ptr<DeliveryData>& value)
{
    m_Safari_web_push = value;
    m_Safari_web_pushIsSet = true;
}

bool PlatformDeliveryData::safariWebPushIsSet() const
{
    return m_Safari_web_pushIsSet;
}

void PlatformDeliveryData::unsetSafari_web_push()
{
    m_Safari_web_pushIsSet = false;
}
std::shared_ptr<DeliveryData> PlatformDeliveryData::getAndroid() const
{
    return m_Android;
}

void PlatformDeliveryData::setAndroid(const std::shared_ptr<DeliveryData>& value)
{
    m_Android = value;
    m_AndroidIsSet = true;
}

bool PlatformDeliveryData::androidIsSet() const
{
    return m_AndroidIsSet;
}

void PlatformDeliveryData::unsetAndroid()
{
    m_AndroidIsSet = false;
}
std::shared_ptr<DeliveryData> PlatformDeliveryData::getIos() const
{
    return m_Ios;
}

void PlatformDeliveryData::setIos(const std::shared_ptr<DeliveryData>& value)
{
    m_Ios = value;
    m_IosIsSet = true;
}

bool PlatformDeliveryData::iosIsSet() const
{
    return m_IosIsSet;
}

void PlatformDeliveryData::unsetIos()
{
    m_IosIsSet = false;
}
std::shared_ptr<DeliveryData> PlatformDeliveryData::getSms() const
{
    return m_Sms;
}

void PlatformDeliveryData::setSms(const std::shared_ptr<DeliveryData>& value)
{
    m_Sms = value;
    m_SmsIsSet = true;
}

bool PlatformDeliveryData::smsIsSet() const
{
    return m_SmsIsSet;
}

void PlatformDeliveryData::unsetSms()
{
    m_SmsIsSet = false;
}
std::shared_ptr<DeliveryData> PlatformDeliveryData::getEmail() const
{
    return m_Email;
}

void PlatformDeliveryData::setEmail(const std::shared_ptr<DeliveryData>& value)
{
    m_Email = value;
    m_EmailIsSet = true;
}

bool PlatformDeliveryData::emailIsSet() const
{
    return m_EmailIsSet;
}

void PlatformDeliveryData::unsetEmail()
{
    m_EmailIsSet = false;
}
}
}
}
}


