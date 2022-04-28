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

/*
 * FilterNotificationTarget.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_FilterNotificationTarget_H_
#define COM_ONESIGNAL_CLIENT_MODEL_FilterNotificationTarget_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  FilterNotificationTarget
    : public ModelBase
{
public:
    FilterNotificationTarget();
    virtual ~FilterNotificationTarget();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FilterNotificationTarget members

    /// <summary>
    /// relation &#x3D; \&quot;&gt;\&quot; or \&quot;&lt;\&quot; hours_ago &#x3D; number of hours before or after the users last session. Example: \&quot;1.1\&quot; 
    /// </summary>
    utility::string_t getLastSession() const;
    bool lastSessionIsSet() const;
    void unsetLast_session();

    void setLastSession(const utility::string_t& value);

    /// <summary>
    /// relation &#x3D; \&quot;&gt;\&quot; or \&quot;&lt;\&quot; hours_ago &#x3D; number of hours before or after the users first session. Example: \&quot;1.1\&quot; 
    /// </summary>
    utility::string_t getFirstSession() const;
    bool firstSessionIsSet() const;
    void unsetFirst_session();

    void setFirstSession(const utility::string_t& value);

    /// <summary>
    /// relation &#x3D; \&quot;&gt;\&quot;, \&quot;&lt;\&quot;, \&quot;&#x3D;\&quot; or \&quot;!&#x3D;\&quot; value &#x3D; number sessions. Example: \&quot;1\&quot; 
    /// </summary>
    utility::string_t getSessionCount() const;
    bool sessionCountIsSet() const;
    void unsetSession_count();

    void setSessionCount(const utility::string_t& value);

    /// <summary>
    /// relation &#x3D; \&quot;&gt;\&quot;, \&quot;&lt;\&quot;, \&quot;&#x3D;\&quot; or \&quot;!&#x3D;\&quot; value &#x3D; Time in seconds the user has been in your app. Example: \&quot;3600\&quot; 
    /// </summary>
    utility::string_t getSessionTime() const;
    bool sessionTimeIsSet() const;
    void unsetSession_time();

    void setSessionTime(const utility::string_t& value);

    /// <summary>
    /// relation &#x3D; \&quot;&gt;\&quot;, \&quot;&lt;\&quot;, or \&quot;&#x3D;\&quot; value &#x3D; Amount in USD a user has spent on IAP (In App Purchases). Example: \&quot;0.99\&quot; 
    /// </summary>
    utility::string_t getAmountSpent() const;
    bool amountSpentIsSet() const;
    void unsetAmount_spent();

    void setAmountSpent(const utility::string_t& value);

    /// <summary>
    /// relation &#x3D; \&quot;&gt;\&quot;, \&quot;&lt;\&quot; or \&quot;&#x3D;\&quot; key &#x3D; SKU purchased in your app as an IAP (In App Purchases). Example: \&quot;com.domain.100coinpack\&quot; value &#x3D; value of SKU to compare to. Example: \&quot;0.99\&quot; 
    /// </summary>
    utility::string_t getBoughtSku() const;
    bool boughtSkuIsSet() const;
    void unsetBought_sku();

    void setBoughtSku(const utility::string_t& value);

    /// <summary>
    /// relation &#x3D; \&quot;&gt;\&quot;, \&quot;&lt;\&quot;, \&quot;&#x3D;\&quot;, \&quot;!&#x3D;\&quot;, \&quot;exists\&quot;, \&quot;not_exists\&quot;, \&quot;time_elapsed_gt\&quot; (paid plan only) or \&quot;time_elapsed_lt\&quot; (paid plan only) See Time Operators key &#x3D; Tag key to compare. value &#x3D; Tag value to compare. Not required for \&quot;exists\&quot; or \&quot;not_exists\&quot;. Example: See Formatting Filters 
    /// </summary>
    utility::string_t getTag() const;
    bool tagIsSet() const;
    void unsetTag();

    void setTag(const utility::string_t& value);

    /// <summary>
    /// relation &#x3D; \&quot;&#x3D;\&quot; or \&quot;!&#x3D;\&quot; value &#x3D; 2 character language code. Example: \&quot;en\&quot;. For a list of all language codes see Language &amp; Localization. 
    /// </summary>
    utility::string_t getLanguage() const;
    bool languageIsSet() const;
    void unsetLanguage();

    void setLanguage(const utility::string_t& value);

    /// <summary>
    /// relation &#x3D; \&quot;&gt;\&quot;, \&quot;&lt;\&quot;, \&quot;&#x3D;\&quot; or \&quot;!&#x3D;\&quot; value &#x3D; app version. Example: \&quot;1.0.0\&quot; 
    /// </summary>
    utility::string_t getAppVersion() const;
    bool appVersionIsSet() const;
    void unsetApp_version();

    void setAppVersion(const utility::string_t& value);

    /// <summary>
    /// radius &#x3D; in meters lat &#x3D; latitude long &#x3D; longitude 
    /// </summary>
    utility::string_t getLocation() const;
    bool locationIsSet() const;
    void unsetLocation();

    void setLocation(const utility::string_t& value);

    /// <summary>
    /// value &#x3D; email address Only for sending Push Notifications Use this for targeting push subscribers associated with an email set with all SDK setEmail methods To send emails to specific email addresses use include_email_tokens parameter 
    /// </summary>
    utility::string_t getEmail() const;
    bool emailIsSet() const;
    void unsetEmail();

    void setEmail(const utility::string_t& value);

    /// <summary>
    /// relation &#x3D; \&quot;&#x3D;\&quot; value &#x3D; 2-digit Country code Example: \&quot;field\&quot;: \&quot;country\&quot;, \&quot;relation\&quot;: \&quot;&#x3D;\&quot;, \&quot;value\&quot;, \&quot;US\&quot; 
    /// </summary>
    utility::string_t getCountry() const;
    bool countryIsSet() const;
    void unsetCountry();

    void setCountry(const utility::string_t& value);


protected:
    utility::string_t m_Last_session;
    bool m_Last_sessionIsSet;
    utility::string_t m_First_session;
    bool m_First_sessionIsSet;
    utility::string_t m_Session_count;
    bool m_Session_countIsSet;
    utility::string_t m_Session_time;
    bool m_Session_timeIsSet;
    utility::string_t m_Amount_spent;
    bool m_Amount_spentIsSet;
    utility::string_t m_Bought_sku;
    bool m_Bought_skuIsSet;
    utility::string_t m_Tag;
    bool m_TagIsSet;
    utility::string_t m_Language;
    bool m_LanguageIsSet;
    utility::string_t m_App_version;
    bool m_App_versionIsSet;
    utility::string_t m_Location;
    bool m_LocationIsSet;
    utility::string_t m_Email;
    bool m_EmailIsSet;
    utility::string_t m_Country;
    bool m_CountryIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_FilterNotificationTarget_H_ */