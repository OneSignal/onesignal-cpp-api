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

/*
 * NotificationTarget.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_NotificationTarget_H_
#define COM_ONESIGNAL_CLIENT_MODEL_NotificationTarget_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include "CppRestOneSignalAPIClient/model/SubscriptionNotificationTarget.h"
#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>
#include "CppRestOneSignalAPIClient/model/SegmentNotificationTarget.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  NotificationTarget
    : public ModelBase
{
public:
    NotificationTarget();
    virtual ~NotificationTarget();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NotificationTarget members

    /// <summary>
    /// The segment names you want to target. Users in these segments will receive a notification. This targeting parameter is only compatible with excluded_segments. Example: [\&quot;Active Users\&quot;, \&quot;Inactive Users\&quot;] 
    /// </summary>
    std::vector<utility::string_t>& getIncludedSegments();
    bool includedSegmentsIsSet() const;
    void unsetIncluded_segments();

    void setIncludedSegments(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Segment that will be excluded when sending. Users in these segments will not receive a notification, even if they were included in included_segments. This targeting parameter is only compatible with included_segments. Example: [\&quot;Active Users\&quot;, \&quot;Inactive Users\&quot;] 
    /// </summary>
    std::vector<utility::string_t>& getExcludedSegments();
    bool excludedSegmentsIsSet() const;
    void unsetExcluded_segments();

    void setExcludedSegments(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Specific subscription ids to send your notification to. _Does not require API Auth Key._ Not compatible with any other targeting parameters. Example: [\&quot;1dd608f2-c6a1-11e3-851d-000c2940e62c\&quot;] Limit of 2,000 entries per REST API call 
    /// </summary>
    std::vector<utility::string_t>& getIncludeSubscriptionIds();
    bool includeSubscriptionIdsIsSet() const;
    void unsetInclude_subscription_ids();

    void setIncludeSubscriptionIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Recommended for Sending Emails - Target specific email addresses. If an email does not correspond to an existing user, a new user will be created. Example: nick@catfac.ts Limit of 2,000 entries per REST API call 
    /// </summary>
    std::vector<utility::string_t>& getIncludeEmailTokens();
    bool includeEmailTokensIsSet() const;
    void unsetInclude_email_tokens();

    void setIncludeEmailTokens(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Recommended for Sending SMS - Target specific phone numbers. The phone number should be in the E.164 format. Phone number should be an existing subscriber on OneSignal. Refer our docs to learn how to add phone numbers to OneSignal. Example phone number: +1999999999 Limit of 2,000 entries per REST API call 
    /// </summary>
    std::vector<utility::string_t>& getIncludePhoneNumbers();
    bool includePhoneNumbersIsSet() const;
    void unsetInclude_phone_numbers();

    void setIncludePhoneNumbers(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Not Recommended: Please consider using include_subscription_ids or include_aliases instead. Target using iOS device tokens. Warning: Only works with Production tokens. All non-alphanumeric characters must be removed from each token. If a token does not correspond to an existing user, a new user will be created. Example: ce777617da7f548fe7a9ab6febb56cf39fba6d38203... Limit of 2,000 entries per REST API call 
    /// </summary>
    std::vector<utility::string_t>& getIncludeIosTokens();
    bool includeIosTokensIsSet() const;
    void unsetInclude_ios_tokens();

    void setIncludeIosTokens(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Not Recommended: Please consider using include_subscription_ids or include_aliases instead. Target using Windows URIs. If a token does not correspond to an existing user, a new user will be created. Example: http://s.notify.live.net/u/1/bn1/HmQAAACPaLDr-... Limit of 2,000 entries per REST API call 
    /// </summary>
    std::vector<utility::string_t>& getIncludeWpWnsUris();
    bool includeWpWnsUrisIsSet() const;
    void unsetInclude_wp_wns_uris();

    void setIncludeWpWnsUris(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Not Recommended: Please consider using include_subscription_ids or include_aliases instead. Target using Amazon ADM registration IDs. If a token does not correspond to an existing user, a new user will be created. Example: amzn1.adm-registration.v1.XpvSSUk0Rc3hTVVV... Limit of 2,000 entries per REST API call 
    /// </summary>
    std::vector<utility::string_t>& getIncludeAmazonRegIds();
    bool includeAmazonRegIdsIsSet() const;
    void unsetInclude_amazon_reg_ids();

    void setIncludeAmazonRegIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Not Recommended: Please consider using include_subscription_ids or include_aliases instead. Target using Chrome App registration IDs. If a token does not correspond to an existing user, a new user will be created. Example: APA91bEeiUeSukAAUdnw3O2RB45FWlSpgJ7Ji_... Limit of 2,000 entries per REST API call 
    /// </summary>
    std::vector<utility::string_t>& getIncludeChromeRegIds();
    bool includeChromeRegIdsIsSet() const;
    void unsetInclude_chrome_reg_ids();

    void setIncludeChromeRegIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Not Recommended: Please consider using include_subscription_ids or include_aliases instead. Target using Chrome Web Push registration IDs. If a token does not correspond to an existing user, a new user will be created. Example: APA91bEeiUeSukAAUdnw3O2RB45FWlSpgJ7Ji_... Limit of 2,000 entries per REST API call 
    /// </summary>
    std::vector<utility::string_t>& getIncludeChromeWebRegIds();
    bool includeChromeWebRegIdsIsSet() const;
    void unsetInclude_chrome_web_reg_ids();

    void setIncludeChromeWebRegIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Not Recommended: Please consider using include_subscription_ids or include_aliases instead. Target using Android device registration IDs. If a token does not correspond to an existing user, a new user will be created. Example: APA91bEeiUeSukAAUdnw3O2RB45FWlSpgJ7Ji_... Limit of 2,000 entries per REST API call 
    /// </summary>
    std::vector<utility::string_t>& getIncludeAndroidRegIds();
    bool includeAndroidRegIdsIsSet() const;
    void unsetInclude_android_reg_ids();

    void setIncludeAndroidRegIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Target specific users by aliases assigned via API. An alias can be an external_id, onesignal_id, or a custom alias. Accepts an object where keys are alias labels and values are arrays of alias IDs to include Example usage: { \&quot;external_id\&quot;: [\&quot;exId1\&quot;, \&quot;extId2\&quot;], \&quot;internal_label\&quot;: [\&quot;id1\&quot;, \&quot;id2\&quot;] } Not compatible with any other targeting parameters. REQUIRED: REST API Key Authentication Limit of 2,000 entries per REST API call Note: If targeting push, email, or sms subscribers with same ids, use with target_channel to indicate you are sending a push or email or sms.
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getIncludeAliases();
    bool includeAliasesIsSet() const;
    void unsetInclude_aliases();

    void setIncludeAliases(const std::map<utility::string_t, utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTargetChannel() const;
    bool targetChannelIsSet() const;
    void unsetTarget_channel();

    void setTargetChannel(const utility::string_t& value);


protected:
    std::vector<utility::string_t> m_Included_segments;
    bool m_Included_segmentsIsSet;
    std::vector<utility::string_t> m_Excluded_segments;
    bool m_Excluded_segmentsIsSet;
    std::vector<utility::string_t> m_Include_subscription_ids;
    bool m_Include_subscription_idsIsSet;
    std::vector<utility::string_t> m_Include_email_tokens;
    bool m_Include_email_tokensIsSet;
    std::vector<utility::string_t> m_Include_phone_numbers;
    bool m_Include_phone_numbersIsSet;
    std::vector<utility::string_t> m_Include_ios_tokens;
    bool m_Include_ios_tokensIsSet;
    std::vector<utility::string_t> m_Include_wp_wns_uris;
    bool m_Include_wp_wns_urisIsSet;
    std::vector<utility::string_t> m_Include_amazon_reg_ids;
    bool m_Include_amazon_reg_idsIsSet;
    std::vector<utility::string_t> m_Include_chrome_reg_ids;
    bool m_Include_chrome_reg_idsIsSet;
    std::vector<utility::string_t> m_Include_chrome_web_reg_ids;
    bool m_Include_chrome_web_reg_idsIsSet;
    std::vector<utility::string_t> m_Include_android_reg_ids;
    bool m_Include_android_reg_idsIsSet;
    std::map<utility::string_t, utility::string_t> m_Include_aliases;
    bool m_Include_aliasesIsSet;
    utility::string_t m_Target_channel;
    bool m_Target_channelIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_NotificationTarget_H_ */
