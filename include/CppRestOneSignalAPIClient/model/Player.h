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
 * Player.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_Player_H_
#define COM_ONESIGNAL_CLIENT_MODEL_Player_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include "CppRestOneSignalAPIClient/Object.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Player
    : public ModelBase
{
public:
    Player();
    virtual ~Player();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Player members

    /// <summary>
    /// The device&#39;s OneSignal ID
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// If true, this is the equivalent of a user being Unsubscribed
    /// </summary>
    bool isInvalidIdentifier() const;
    bool invalidIdentifierIsSet() const;
    void unsetInvalid_identifier();

    void setInvalidIdentifier(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAppId() const;
    bool appIdIsSet() const;
    void unsetApp_id();

    void setAppId(const utility::string_t& value);

    /// <summary>
    /// Required The device&#39;s platform:   0 &#x3D; iOS   1 &#x3D; Android   2 &#x3D; Amazon   3 &#x3D; WindowsPhone (MPNS)   4 &#x3D; Chrome Apps / Extensions   5 &#x3D; Chrome Web Push   6 &#x3D; Windows (WNS)   7 &#x3D; Safari   8 &#x3D; Firefox   9 &#x3D; MacOS   10 &#x3D; Alexa   11 &#x3D; Email   13 &#x3D; For Huawei App Gallery Builds SDK Setup. Not for Huawei Devices using FCM   14 &#x3D; SMS 
    /// </summary>
    int32_t getDeviceType() const;
    bool deviceTypeIsSet() const;
    void unsetDevice_type();

    void setDeviceType(int32_t value);

    /// <summary>
    /// a custom user ID
    /// </summary>
    utility::string_t getExternalUserId() const;
    bool externalUserIdIsSet() const;
    void unsetExternal_user_id();

    void setExternalUserId(const utility::string_t& value);

    /// <summary>
    /// Only required if you have enabled Identity Verification and device_type is NOT 11 email.
    /// </summary>
    utility::string_t getExternalUserIdAuthHash() const;
    bool externalUserIdAuthHashIsSet() const;
    void unsetExternal_user_id_auth_hash();

    void setExternalUserIdAuthHash(const utility::string_t& value);

    /// <summary>
    /// Email - Only required if you have enabled Identity Verification and device_type is email (11).
    /// </summary>
    utility::string_t getEmailAuthHash() const;
    bool emailAuthHashIsSet() const;
    void unsetEmail_auth_hash();

    void setEmailAuthHash(const utility::string_t& value);

    /// <summary>
    /// Recommended: For Push Notifications, this is the Push Token Identifier from Google or Apple. For Apple Push identifiers, you must strip all non alphanumeric characters. Examples: iOS: 7abcd558f29d0b1f048083e2834ad8ea4b3d87d8ad9c088b33c132706ff445f0 Android: APA91bHbYHk7aq-Uam_2pyJ2qbZvqllyyh2wjfPRaw5gLEX2SUlQBRvOc6sck1sa7H7nGeLNlDco8lXj83HWWwzV... For Email Addresses, set the full email address email@email.com and make sure to set device_type to 11. 
    /// </summary>
    utility::string_t getIdentifier() const;
    bool identifierIsSet() const;
    void unsetIdentifier();

    void setIdentifier(const utility::string_t& value);

    /// <summary>
    /// Language code. Typically lower case two letters, except for Chinese where it must be one of zh-Hans or zh-Hant. Example: en 
    /// </summary>
    utility::string_t getLanguage() const;
    bool languageIsSet() const;
    void unsetLanguage();

    void setLanguage(const utility::string_t& value);

    /// <summary>
    /// Number of seconds away from UTC. Example: -28800 
    /// </summary>
    int32_t getTimezone() const;
    bool timezoneIsSet() const;
    void unsetTimezone();

    void setTimezone(int32_t value);

    /// <summary>
    /// Version of your app. Example: 1.1 
    /// </summary>
    utility::string_t getGameVersion() const;
    bool gameVersionIsSet() const;
    void unsetGame_version();

    void setGameVersion(const utility::string_t& value);

    /// <summary>
    /// Device make and model. Example: iPhone5,1 
    /// </summary>
    utility::string_t getDeviceModel() const;
    bool deviceModelIsSet() const;
    void unsetDevice_model();

    void setDeviceModel(const utility::string_t& value);

    /// <summary>
    /// Device operating system version. Example: 7.0.4 
    /// </summary>
    utility::string_t getDeviceOs() const;
    bool deviceOsIsSet() const;
    void unsetDevice_os();

    void setDeviceOs(const utility::string_t& value);

    /// <summary>
    /// The ad id for the device&#39;s platform: Android &#x3D; Advertising Id iOS &#x3D; identifierForVendor WP8.0 &#x3D; DeviceUniqueId WP8.1 &#x3D; AdvertisingId 
    /// </summary>
    utility::string_t getAdId() const;
    bool adIdIsSet() const;
    void unsetAd_id();

    void setAdId(const utility::string_t& value);

    /// <summary>
    /// Name and version of the sdk/plugin that&#39;s calling this API method (if any)
    /// </summary>
    utility::string_t getSdk() const;
    bool sdkIsSet() const;
    void unsetSdk();

    void setSdk(const utility::string_t& value);

    /// <summary>
    /// Number of times the user has played the game, defaults to 1
    /// </summary>
    int32_t getSessionCount() const;
    bool sessionCountIsSet() const;
    void unsetSession_count();

    void setSessionCount(int32_t value);

    /// <summary>
    /// Custom tags for the player. Only support string and integer key value pairs. Does not support arrays or other nested objects. Setting a tag value to null or an empty string will remove the tag. Example: {\&quot;foo\&quot;:\&quot;bar\&quot;,\&quot;this\&quot;:\&quot;that\&quot;} Limitations: - 100 tags per call - Android SDK users: tags cannot be removed or changed via API if set through SDK sendTag methods. Recommended to only tag devices with 1 kilobyte of data Please consider using your own Database to save more than 1 kilobyte of data. See: Internal Database &amp; CRM 
    /// </summary>
    std::shared_ptr<Object> getTags() const;
    bool tagsIsSet() const;
    void unsetTags();

    void setTags(const std::shared_ptr<Object>& value);

    /// <summary>
    /// Amount the user has spent in USD, up to two decimal places
    /// </summary>
    utility::string_t getAmountSpent() const;
    bool amountSpentIsSet() const;
    void unsetAmount_spent();

    void setAmountSpent(const utility::string_t& value);

    /// <summary>
    /// Unixtime when the player joined the game
    /// </summary>
    int32_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreated_at();

    void setCreatedAt(int32_t value);

    /// <summary>
    /// Seconds player was running your app.
    /// </summary>
    int32_t getPlaytime() const;
    bool playtimeIsSet() const;
    void unsetPlaytime();

    void setPlaytime(int32_t value);

    /// <summary>
    /// Current iOS badge count displayed on the app icon NOTE: Not supported for apps created after June 2018, since badge count for apps created after this date are handled on the client. 
    /// </summary>
    int32_t getBadgeCount() const;
    bool badgeCountIsSet() const;
    void unsetBadge_count();

    void setBadgeCount(int32_t value);

    /// <summary>
    /// Unixtime when the player was last active
    /// </summary>
    int32_t getLastActive() const;
    bool lastActiveIsSet() const;
    void unsetLast_active();

    void setLastActive(int32_t value);

    /// <summary>
    /// 1 &#x3D; subscribed -2 &#x3D; unsubscribed iOS - These values are set each time the user opens the app from the SDK. Use the SDK function set Subscription instead. Android - You may set this but you can no longer use the SDK method setSubscription later in your app as it will create synchronization issues. 
    /// </summary>
    int32_t getNotificationTypes() const;
    bool notificationTypesIsSet() const;
    void unsetNotification_types();

    void setNotificationTypes(int32_t value);

    /// <summary>
    /// This is used in deciding whether to use your iOS Sandbox or Production push certificate when sending a push when both have been uploaded. Set to the iOS provisioning profile that was used to build your app. 1 &#x3D; Development 2 &#x3D; Ad-Hoc Omit this field for App Store builds. 
    /// </summary>
    int32_t getTestType() const;
    bool testTypeIsSet() const;
    void unsetTest_type();

    void setTestType(int32_t value);

    /// <summary>
    /// Longitude of the device, used for geotagging to segment on.
    /// </summary>
    double getLong() const;
    bool r_longIsSet() const;
    void unsetlong();

    void setLong(double value);

    /// <summary>
    /// Latitude of the device, used for geotagging to segment on.
    /// </summary>
    double getLat() const;
    bool latIsSet() const;
    void unsetLat();

    void setLat(double value);

    /// <summary>
    /// Country code in the ISO 3166-1 Alpha 2 format
    /// </summary>
    utility::string_t getCountry() const;
    bool countryIsSet() const;
    void unsetCountry();

    void setCountry(const utility::string_t& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    bool m_Invalid_identifier;
    bool m_Invalid_identifierIsSet;
    utility::string_t m_App_id;
    bool m_App_idIsSet;
    int32_t m_Device_type;
    bool m_Device_typeIsSet;
    utility::string_t m_External_user_id;
    bool m_External_user_idIsSet;
    utility::string_t m_External_user_id_auth_hash;
    bool m_External_user_id_auth_hashIsSet;
    utility::string_t m_Email_auth_hash;
    bool m_Email_auth_hashIsSet;
    utility::string_t m_Identifier;
    bool m_IdentifierIsSet;
    utility::string_t m_Language;
    bool m_LanguageIsSet;
    int32_t m_Timezone;
    bool m_TimezoneIsSet;
    utility::string_t m_Game_version;
    bool m_Game_versionIsSet;
    utility::string_t m_Device_model;
    bool m_Device_modelIsSet;
    utility::string_t m_Device_os;
    bool m_Device_osIsSet;
    utility::string_t m_Ad_id;
    bool m_Ad_idIsSet;
    utility::string_t m_Sdk;
    bool m_SdkIsSet;
    int32_t m_Session_count;
    bool m_Session_countIsSet;
    std::shared_ptr<Object> m_Tags;
    bool m_TagsIsSet;
    utility::string_t m_Amount_spent;
    bool m_Amount_spentIsSet;
    int32_t m_Created_at;
    bool m_Created_atIsSet;
    int32_t m_Playtime;
    bool m_PlaytimeIsSet;
    int32_t m_Badge_count;
    bool m_Badge_countIsSet;
    int32_t m_Last_active;
    bool m_Last_activeIsSet;
    int32_t m_Notification_types;
    bool m_Notification_typesIsSet;
    int32_t m_Test_type;
    bool m_Test_typeIsSet;
    double m_long;
    bool m_longIsSet;
    double m_Lat;
    bool m_LatIsSet;
    utility::string_t m_Country;
    bool m_CountryIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_Player_H_ */
