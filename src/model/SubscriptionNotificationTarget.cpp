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



#include "CppRestOneSignalAPIClient/model/SubscriptionNotificationTarget.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



SubscriptionNotificationTarget::SubscriptionNotificationTarget()
{
    m_Include_subscription_idsIsSet = false;
    m_Include_email_tokensIsSet = false;
    m_Include_phone_numbersIsSet = false;
    m_Include_ios_tokensIsSet = false;
    m_Include_wp_wns_urisIsSet = false;
    m_Include_amazon_reg_idsIsSet = false;
    m_Include_chrome_reg_idsIsSet = false;
    m_Include_chrome_web_reg_idsIsSet = false;
    m_Include_android_reg_idsIsSet = false;
    m_Include_aliasesIsSet = false;
    m_Target_channel = utility::conversions::to_string_t("");
    m_Target_channelIsSet = false;
}

SubscriptionNotificationTarget::~SubscriptionNotificationTarget()
{
}

void SubscriptionNotificationTarget::validate()
{
    // TODO: implement validation
}

web::json::value SubscriptionNotificationTarget::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Include_subscription_idsIsSet)
    {
        val[utility::conversions::to_string_t(U("include_subscription_ids"))] = ModelBase::toJson(m_Include_subscription_ids);
    }
    if(m_Include_email_tokensIsSet)
    {
        val[utility::conversions::to_string_t(U("include_email_tokens"))] = ModelBase::toJson(m_Include_email_tokens);
    }
    if(m_Include_phone_numbersIsSet)
    {
        val[utility::conversions::to_string_t(U("include_phone_numbers"))] = ModelBase::toJson(m_Include_phone_numbers);
    }
    if(m_Include_ios_tokensIsSet)
    {
        val[utility::conversions::to_string_t(U("include_ios_tokens"))] = ModelBase::toJson(m_Include_ios_tokens);
    }
    if(m_Include_wp_wns_urisIsSet)
    {
        val[utility::conversions::to_string_t(U("include_wp_wns_uris"))] = ModelBase::toJson(m_Include_wp_wns_uris);
    }
    if(m_Include_amazon_reg_idsIsSet)
    {
        val[utility::conversions::to_string_t(U("include_amazon_reg_ids"))] = ModelBase::toJson(m_Include_amazon_reg_ids);
    }
    if(m_Include_chrome_reg_idsIsSet)
    {
        val[utility::conversions::to_string_t(U("include_chrome_reg_ids"))] = ModelBase::toJson(m_Include_chrome_reg_ids);
    }
    if(m_Include_chrome_web_reg_idsIsSet)
    {
        val[utility::conversions::to_string_t(U("include_chrome_web_reg_ids"))] = ModelBase::toJson(m_Include_chrome_web_reg_ids);
    }
    if(m_Include_android_reg_idsIsSet)
    {
        val[utility::conversions::to_string_t(U("include_android_reg_ids"))] = ModelBase::toJson(m_Include_android_reg_ids);
    }
    if(m_Include_aliasesIsSet)
    {
        val[utility::conversions::to_string_t(U("include_aliases"))] = ModelBase::toJson(m_Include_aliases);
    }
    if(m_Target_channelIsSet)
    {
        val[utility::conversions::to_string_t(U("target_channel"))] = ModelBase::toJson(m_Target_channel);
    }

    return val;
}

bool SubscriptionNotificationTarget::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("include_subscription_ids"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_subscription_ids")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeSubscriptionIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeSubscriptionIds);
            setIncludeSubscriptionIds(refVal_setIncludeSubscriptionIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_email_tokens"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_email_tokens")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeEmailTokens;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeEmailTokens);
            setIncludeEmailTokens(refVal_setIncludeEmailTokens);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_phone_numbers"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_phone_numbers")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludePhoneNumbers;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludePhoneNumbers);
            setIncludePhoneNumbers(refVal_setIncludePhoneNumbers);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_ios_tokens"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_ios_tokens")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeIosTokens;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeIosTokens);
            setIncludeIosTokens(refVal_setIncludeIosTokens);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_wp_wns_uris"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_wp_wns_uris")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeWpWnsUris;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeWpWnsUris);
            setIncludeWpWnsUris(refVal_setIncludeWpWnsUris);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_amazon_reg_ids"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_amazon_reg_ids")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeAmazonRegIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeAmazonRegIds);
            setIncludeAmazonRegIds(refVal_setIncludeAmazonRegIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_chrome_reg_ids"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_chrome_reg_ids")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeChromeRegIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeChromeRegIds);
            setIncludeChromeRegIds(refVal_setIncludeChromeRegIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_chrome_web_reg_ids"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_chrome_web_reg_ids")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeChromeWebRegIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeChromeWebRegIds);
            setIncludeChromeWebRegIds(refVal_setIncludeChromeWebRegIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_android_reg_ids"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_android_reg_ids")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setIncludeAndroidRegIds;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeAndroidRegIds);
            setIncludeAndroidRegIds(refVal_setIncludeAndroidRegIds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("include_aliases"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("include_aliases")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_setIncludeAliases;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIncludeAliases);
            setIncludeAliases(refVal_setIncludeAliases);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("target_channel"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("target_channel")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setTargetChannel;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTargetChannel);
            setTargetChannel(refVal_setTargetChannel);
        }
    }
    return ok;
}

void SubscriptionNotificationTarget::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Include_subscription_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_subscription_ids")), m_Include_subscription_ids));
    }
    if(m_Include_email_tokensIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_email_tokens")), m_Include_email_tokens));
    }
    if(m_Include_phone_numbersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_phone_numbers")), m_Include_phone_numbers));
    }
    if(m_Include_ios_tokensIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_ios_tokens")), m_Include_ios_tokens));
    }
    if(m_Include_wp_wns_urisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_wp_wns_uris")), m_Include_wp_wns_uris));
    }
    if(m_Include_amazon_reg_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_amazon_reg_ids")), m_Include_amazon_reg_ids));
    }
    if(m_Include_chrome_reg_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_chrome_reg_ids")), m_Include_chrome_reg_ids));
    }
    if(m_Include_chrome_web_reg_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_chrome_web_reg_ids")), m_Include_chrome_web_reg_ids));
    }
    if(m_Include_android_reg_idsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_android_reg_ids")), m_Include_android_reg_ids));
    }
    if(m_Include_aliasesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("include_aliases")), m_Include_aliases));
    }
    if(m_Target_channelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("target_channel")), m_Target_channel));
    }
}

bool SubscriptionNotificationTarget::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("include_subscription_ids"))))
    {
        std::vector<utility::string_t> refVal_setIncludeSubscriptionIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_subscription_ids"))), refVal_setIncludeSubscriptionIds );
        setIncludeSubscriptionIds(refVal_setIncludeSubscriptionIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_email_tokens"))))
    {
        std::vector<utility::string_t> refVal_setIncludeEmailTokens;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_email_tokens"))), refVal_setIncludeEmailTokens );
        setIncludeEmailTokens(refVal_setIncludeEmailTokens);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_phone_numbers"))))
    {
        std::vector<utility::string_t> refVal_setIncludePhoneNumbers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_phone_numbers"))), refVal_setIncludePhoneNumbers );
        setIncludePhoneNumbers(refVal_setIncludePhoneNumbers);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_ios_tokens"))))
    {
        std::vector<utility::string_t> refVal_setIncludeIosTokens;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_ios_tokens"))), refVal_setIncludeIosTokens );
        setIncludeIosTokens(refVal_setIncludeIosTokens);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_wp_wns_uris"))))
    {
        std::vector<utility::string_t> refVal_setIncludeWpWnsUris;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_wp_wns_uris"))), refVal_setIncludeWpWnsUris );
        setIncludeWpWnsUris(refVal_setIncludeWpWnsUris);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_amazon_reg_ids"))))
    {
        std::vector<utility::string_t> refVal_setIncludeAmazonRegIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_amazon_reg_ids"))), refVal_setIncludeAmazonRegIds );
        setIncludeAmazonRegIds(refVal_setIncludeAmazonRegIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_chrome_reg_ids"))))
    {
        std::vector<utility::string_t> refVal_setIncludeChromeRegIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_chrome_reg_ids"))), refVal_setIncludeChromeRegIds );
        setIncludeChromeRegIds(refVal_setIncludeChromeRegIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_chrome_web_reg_ids"))))
    {
        std::vector<utility::string_t> refVal_setIncludeChromeWebRegIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_chrome_web_reg_ids"))), refVal_setIncludeChromeWebRegIds );
        setIncludeChromeWebRegIds(refVal_setIncludeChromeWebRegIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_android_reg_ids"))))
    {
        std::vector<utility::string_t> refVal_setIncludeAndroidRegIds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_android_reg_ids"))), refVal_setIncludeAndroidRegIds );
        setIncludeAndroidRegIds(refVal_setIncludeAndroidRegIds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("include_aliases"))))
    {
        std::map<utility::string_t, utility::string_t> refVal_setIncludeAliases;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("include_aliases"))), refVal_setIncludeAliases );
        setIncludeAliases(refVal_setIncludeAliases);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("target_channel"))))
    {
        utility::string_t refVal_setTargetChannel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("target_channel"))), refVal_setTargetChannel );
        setTargetChannel(refVal_setTargetChannel);
    }
    return ok;
}

std::vector<utility::string_t>& SubscriptionNotificationTarget::getIncludeSubscriptionIds()
{
    return m_Include_subscription_ids;
}

void SubscriptionNotificationTarget::setIncludeSubscriptionIds(const std::vector<utility::string_t>& value)
{
    m_Include_subscription_ids = value;
    m_Include_subscription_idsIsSet = true;
}

bool SubscriptionNotificationTarget::includeSubscriptionIdsIsSet() const
{
    return m_Include_subscription_idsIsSet;
}

void SubscriptionNotificationTarget::unsetInclude_subscription_ids()
{
    m_Include_subscription_idsIsSet = false;
}
std::vector<utility::string_t>& SubscriptionNotificationTarget::getIncludeEmailTokens()
{
    return m_Include_email_tokens;
}

void SubscriptionNotificationTarget::setIncludeEmailTokens(const std::vector<utility::string_t>& value)
{
    m_Include_email_tokens = value;
    m_Include_email_tokensIsSet = true;
}

bool SubscriptionNotificationTarget::includeEmailTokensIsSet() const
{
    return m_Include_email_tokensIsSet;
}

void SubscriptionNotificationTarget::unsetInclude_email_tokens()
{
    m_Include_email_tokensIsSet = false;
}
std::vector<utility::string_t>& SubscriptionNotificationTarget::getIncludePhoneNumbers()
{
    return m_Include_phone_numbers;
}

void SubscriptionNotificationTarget::setIncludePhoneNumbers(const std::vector<utility::string_t>& value)
{
    m_Include_phone_numbers = value;
    m_Include_phone_numbersIsSet = true;
}

bool SubscriptionNotificationTarget::includePhoneNumbersIsSet() const
{
    return m_Include_phone_numbersIsSet;
}

void SubscriptionNotificationTarget::unsetInclude_phone_numbers()
{
    m_Include_phone_numbersIsSet = false;
}
std::vector<utility::string_t>& SubscriptionNotificationTarget::getIncludeIosTokens()
{
    return m_Include_ios_tokens;
}

void SubscriptionNotificationTarget::setIncludeIosTokens(const std::vector<utility::string_t>& value)
{
    m_Include_ios_tokens = value;
    m_Include_ios_tokensIsSet = true;
}

bool SubscriptionNotificationTarget::includeIosTokensIsSet() const
{
    return m_Include_ios_tokensIsSet;
}

void SubscriptionNotificationTarget::unsetInclude_ios_tokens()
{
    m_Include_ios_tokensIsSet = false;
}
std::vector<utility::string_t>& SubscriptionNotificationTarget::getIncludeWpWnsUris()
{
    return m_Include_wp_wns_uris;
}

void SubscriptionNotificationTarget::setIncludeWpWnsUris(const std::vector<utility::string_t>& value)
{
    m_Include_wp_wns_uris = value;
    m_Include_wp_wns_urisIsSet = true;
}

bool SubscriptionNotificationTarget::includeWpWnsUrisIsSet() const
{
    return m_Include_wp_wns_urisIsSet;
}

void SubscriptionNotificationTarget::unsetInclude_wp_wns_uris()
{
    m_Include_wp_wns_urisIsSet = false;
}
std::vector<utility::string_t>& SubscriptionNotificationTarget::getIncludeAmazonRegIds()
{
    return m_Include_amazon_reg_ids;
}

void SubscriptionNotificationTarget::setIncludeAmazonRegIds(const std::vector<utility::string_t>& value)
{
    m_Include_amazon_reg_ids = value;
    m_Include_amazon_reg_idsIsSet = true;
}

bool SubscriptionNotificationTarget::includeAmazonRegIdsIsSet() const
{
    return m_Include_amazon_reg_idsIsSet;
}

void SubscriptionNotificationTarget::unsetInclude_amazon_reg_ids()
{
    m_Include_amazon_reg_idsIsSet = false;
}
std::vector<utility::string_t>& SubscriptionNotificationTarget::getIncludeChromeRegIds()
{
    return m_Include_chrome_reg_ids;
}

void SubscriptionNotificationTarget::setIncludeChromeRegIds(const std::vector<utility::string_t>& value)
{
    m_Include_chrome_reg_ids = value;
    m_Include_chrome_reg_idsIsSet = true;
}

bool SubscriptionNotificationTarget::includeChromeRegIdsIsSet() const
{
    return m_Include_chrome_reg_idsIsSet;
}

void SubscriptionNotificationTarget::unsetInclude_chrome_reg_ids()
{
    m_Include_chrome_reg_idsIsSet = false;
}
std::vector<utility::string_t>& SubscriptionNotificationTarget::getIncludeChromeWebRegIds()
{
    return m_Include_chrome_web_reg_ids;
}

void SubscriptionNotificationTarget::setIncludeChromeWebRegIds(const std::vector<utility::string_t>& value)
{
    m_Include_chrome_web_reg_ids = value;
    m_Include_chrome_web_reg_idsIsSet = true;
}

bool SubscriptionNotificationTarget::includeChromeWebRegIdsIsSet() const
{
    return m_Include_chrome_web_reg_idsIsSet;
}

void SubscriptionNotificationTarget::unsetInclude_chrome_web_reg_ids()
{
    m_Include_chrome_web_reg_idsIsSet = false;
}
std::vector<utility::string_t>& SubscriptionNotificationTarget::getIncludeAndroidRegIds()
{
    return m_Include_android_reg_ids;
}

void SubscriptionNotificationTarget::setIncludeAndroidRegIds(const std::vector<utility::string_t>& value)
{
    m_Include_android_reg_ids = value;
    m_Include_android_reg_idsIsSet = true;
}

bool SubscriptionNotificationTarget::includeAndroidRegIdsIsSet() const
{
    return m_Include_android_reg_idsIsSet;
}

void SubscriptionNotificationTarget::unsetInclude_android_reg_ids()
{
    m_Include_android_reg_idsIsSet = false;
}
std::map<utility::string_t, utility::string_t>& SubscriptionNotificationTarget::getIncludeAliases()
{
    return m_Include_aliases;
}

void SubscriptionNotificationTarget::setIncludeAliases(const std::map<utility::string_t, utility::string_t>& value)
{
    m_Include_aliases = value;
    m_Include_aliasesIsSet = true;
}

bool SubscriptionNotificationTarget::includeAliasesIsSet() const
{
    return m_Include_aliasesIsSet;
}

void SubscriptionNotificationTarget::unsetInclude_aliases()
{
    m_Include_aliasesIsSet = false;
}
utility::string_t SubscriptionNotificationTarget::getTargetChannel() const
{
    return m_Target_channel;
}

void SubscriptionNotificationTarget::setTargetChannel(const utility::string_t& value)
{
    m_Target_channel = value;
    m_Target_channelIsSet = true;
}

bool SubscriptionNotificationTarget::targetChannelIsSet() const
{
    return m_Target_channelIsSet;
}

void SubscriptionNotificationTarget::unsetTarget_channel()
{
    m_Target_channelIsSet = false;
}
}
}
}
}


