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



#include "CppRestOneSignalAPIClient/model/User.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



User::User()
{
    m_PropertiesIsSet = false;
    m_IdentityIsSet = false;
    m_SubscriptionsIsSet = false;
}

User::~User()
{
}

void User::validate()
{
    // TODO: implement validation
}

web::json::value User::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PropertiesIsSet)
    {
        val[utility::conversions::to_string_t(U("properties"))] = ModelBase::toJson(m_Properties);
    }
    if(m_IdentityIsSet)
    {
        val[utility::conversions::to_string_t(U("identity"))] = ModelBase::toJson(m_Identity);
    }
    if(m_SubscriptionsIsSet)
    {
        val[utility::conversions::to_string_t(U("subscriptions"))] = ModelBase::toJson(m_Subscriptions);
    }

    return val;
}

bool User::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("identity"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("identity")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_setIdentity;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIdentity);
            setIdentity(refVal_setIdentity);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subscriptions"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subscriptions")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Subscription>> refVal_setSubscriptions;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubscriptions);
            setSubscriptions(refVal_setSubscriptions);
        }
    }
    return ok;
}

void User::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_IdentityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("identity")), m_Identity));
    }
    if(m_SubscriptionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subscriptions")), m_Subscriptions));
    }
}

bool User::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("identity"))))
    {
        std::map<utility::string_t, utility::string_t> refVal_setIdentity;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("identity"))), refVal_setIdentity );
        setIdentity(refVal_setIdentity);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subscriptions"))))
    {
        std::vector<std::shared_ptr<Subscription>> refVal_setSubscriptions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subscriptions"))), refVal_setSubscriptions );
        setSubscriptions(refVal_setSubscriptions);
    }
    return ok;
}

std::shared_ptr<PropertiesObject> User::getProperties() const
{
    return m_Properties;
}

void User::setProperties(const std::shared_ptr<PropertiesObject>& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}

bool User::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void User::unsetProperties()
{
    m_PropertiesIsSet = false;
}
std::map<utility::string_t, utility::string_t>& User::getIdentity()
{
    return m_Identity;
}

void User::setIdentity(const std::map<utility::string_t, utility::string_t>& value)
{
    m_Identity = value;
    m_IdentityIsSet = true;
}

bool User::identityIsSet() const
{
    return m_IdentityIsSet;
}

void User::unsetIdentity()
{
    m_IdentityIsSet = false;
}
std::vector<std::shared_ptr<Subscription>>& User::getSubscriptions()
{
    return m_Subscriptions;
}

void User::setSubscriptions(const std::vector<std::shared_ptr<Subscription>>& value)
{
    m_Subscriptions = value;
    m_SubscriptionsIsSet = true;
}

bool User::subscriptionsIsSet() const
{
    return m_SubscriptionsIsSet;
}

void User::unsetSubscriptions()
{
    m_SubscriptionsIsSet = false;
}
}
}
}
}


