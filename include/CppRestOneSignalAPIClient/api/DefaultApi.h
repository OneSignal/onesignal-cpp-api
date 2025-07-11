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
 * DefaultApi.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_API_DefaultApi_H_
#define COM_ONESIGNAL_CLIENT_API_DefaultApi_H_



#include "CppRestOneSignalAPIClient/ApiClient.h"

#include "CppRestOneSignalAPIClient/model/App.h"
#include "CppRestOneSignalAPIClient/model/CreateNotificationSuccessResponse.h"
#include "CppRestOneSignalAPIClient/model/CreateSegmentConflictResponse.h"
#include "CppRestOneSignalAPIClient/model/CreateSegmentSuccessResponse.h"
#include "CppRestOneSignalAPIClient/model/CreateUserConflictResponse.h"
#include "CppRestOneSignalAPIClient/model/ExportEventsSuccessResponse.h"
#include "CppRestOneSignalAPIClient/model/ExportSubscriptionsSuccessResponse.h"
#include "CppRestOneSignalAPIClient/model/Export_subscriptions_request_body.h"
#include "CppRestOneSignalAPIClient/model/GenericError.h"
#include "CppRestOneSignalAPIClient/model/GenericSuccessBoolResponse.h"
#include "CppRestOneSignalAPIClient/model/GetSegmentsSuccessResponse.h"
#include "CppRestOneSignalAPIClient/model/Get_notification_history_request_body.h"
#include "CppRestOneSignalAPIClient/model/Notification.h"
#include "CppRestOneSignalAPIClient/model/NotificationHistorySuccessResponse.h"
#include "CppRestOneSignalAPIClient/model/NotificationSlice.h"
#include "CppRestOneSignalAPIClient/model/NotificationWithMeta.h"
#include "CppRestOneSignalAPIClient/model/OutcomesData.h"
#include "CppRestOneSignalAPIClient/model/PropertiesBody.h"
#include "CppRestOneSignalAPIClient/model/RateLimitError.h"
#include "CppRestOneSignalAPIClient/model/Segment.h"
#include "CppRestOneSignalAPIClient/model/SubscriptionBody.h"
#include "CppRestOneSignalAPIClient/model/TransferSubscriptionRequestBody.h"
#include "CppRestOneSignalAPIClient/model/UpdateLiveActivityRequest.h"
#include "CppRestOneSignalAPIClient/model/UpdateLiveActivitySuccessResponse.h"
#include "CppRestOneSignalAPIClient/model/UpdateUserRequest.h"
#include "CppRestOneSignalAPIClient/model/User.h"
#include "CppRestOneSignalAPIClient/model/UserIdentityBody.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace com {
namespace onesignal {
namespace client {
namespace api {

using namespace com::onesignal::client::model;

class  IDefaultApi
{
public:
    IDefaultApi() = default;
    virtual ~IDefaultApi() = default;

    virtual pplx::task<std::shared_ptr<GenericSuccessBoolResponse>> cancelNotification(
        utility::string_t appId,
        utility::string_t notificationId
    ) const = 0;
    virtual pplx::task<std::shared_ptr<UserIdentityBody>> createAlias(
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId,
        std::shared_ptr<UserIdentityBody> userIdentityBody
    ) const = 0;
    virtual pplx::task<std::shared_ptr<UserIdentityBody>> createAliasBySubscription(
        utility::string_t appId,
        utility::string_t subscriptionId,
        std::shared_ptr<UserIdentityBody> userIdentityBody
    ) const = 0;
    virtual pplx::task<std::shared_ptr<App>> createApp(
        std::shared_ptr<App> app
    ) const = 0;
    virtual pplx::task<std::shared_ptr<CreateNotificationSuccessResponse>> createNotification(
        std::shared_ptr<Notification> notification
    ) const = 0;
    virtual pplx::task<std::shared_ptr<CreateSegmentSuccessResponse>> createSegment(
        utility::string_t appId,
        boost::optional<std::shared_ptr<Segment>> segment
    ) const = 0;
    virtual pplx::task<std::shared_ptr<SubscriptionBody>> createSubscription(
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId,
        std::shared_ptr<SubscriptionBody> subscriptionBody
    ) const = 0;
    virtual pplx::task<std::shared_ptr<User>> createUser(
        utility::string_t appId,
        std::shared_ptr<User> user
    ) const = 0;
    virtual pplx::task<std::shared_ptr<UserIdentityBody>> deleteAlias(
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId,
        utility::string_t aliasLabelToDelete
    ) const = 0;
    virtual pplx::task<std::shared_ptr<GenericSuccessBoolResponse>> deleteSegment(
        utility::string_t appId,
        utility::string_t segmentId
    ) const = 0;
    virtual pplx::task<void> deleteSubscription(
        utility::string_t appId,
        utility::string_t subscriptionId
    ) const = 0;
    virtual pplx::task<void> deleteUser(
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId
    ) const = 0;
    virtual pplx::task<std::shared_ptr<ExportEventsSuccessResponse>> exportEvents(
        utility::string_t notificationId,
        utility::string_t appId
    ) const = 0;
    virtual pplx::task<std::shared_ptr<ExportSubscriptionsSuccessResponse>> exportSubscriptions(
        utility::string_t appId,
        boost::optional<std::shared_ptr<Export_subscriptions_request_body>> exportSubscriptionsRequestBody
    ) const = 0;
    virtual pplx::task<std::shared_ptr<UserIdentityBody>> getAliases(
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId
    ) const = 0;
    virtual pplx::task<std::shared_ptr<UserIdentityBody>> getAliasesBySubscription(
        utility::string_t appId,
        utility::string_t subscriptionId
    ) const = 0;
    virtual pplx::task<std::shared_ptr<App>> getApp(
        utility::string_t appId
    ) const = 0;
    virtual pplx::task<std::vector<std::shared_ptr<App>>> getApps(
    ) const = 0;
    virtual pplx::task<std::shared_ptr<NotificationWithMeta>> getNotification(
        utility::string_t appId,
        utility::string_t notificationId
    ) const = 0;
    virtual pplx::task<std::shared_ptr<NotificationHistorySuccessResponse>> getNotificationHistory(
        utility::string_t notificationId,
        std::shared_ptr<Get_notification_history_request_body> getNotificationHistoryRequestBody
    ) const = 0;
    virtual pplx::task<std::shared_ptr<NotificationSlice>> getNotifications(
        utility::string_t appId,
        boost::optional<int32_t> limit,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> kind
    ) const = 0;
    virtual pplx::task<std::shared_ptr<OutcomesData>> getOutcomes(
        utility::string_t appId,
        utility::string_t outcomeNames,
        boost::optional<utility::string_t> outcomeNamesLeft_Square_BracketRight_Square_Bracket,
        boost::optional<utility::string_t> outcomeTimeRange,
        boost::optional<utility::string_t> outcomePlatforms,
        boost::optional<utility::string_t> outcomeAttribution
    ) const = 0;
    virtual pplx::task<std::shared_ptr<GetSegmentsSuccessResponse>> getSegments(
        utility::string_t appId,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> limit
    ) const = 0;
    virtual pplx::task<std::shared_ptr<User>> getUser(
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId
    ) const = 0;
    virtual pplx::task<std::shared_ptr<UserIdentityBody>> transferSubscription(
        utility::string_t appId,
        utility::string_t subscriptionId,
        std::shared_ptr<TransferSubscriptionRequestBody> transferSubscriptionRequestBody
    ) const = 0;
    virtual pplx::task<std::shared_ptr<GenericSuccessBoolResponse>> unsubscribeEmailWithToken(
        utility::string_t appId,
        utility::string_t notificationId,
        utility::string_t token
    ) const = 0;
    virtual pplx::task<std::shared_ptr<App>> updateApp(
        utility::string_t appId,
        std::shared_ptr<App> app
    ) const = 0;
    virtual pplx::task<std::shared_ptr<UpdateLiveActivitySuccessResponse>> updateLiveActivity(
        utility::string_t appId,
        utility::string_t activityId,
        std::shared_ptr<UpdateLiveActivityRequest> updateLiveActivityRequest
    ) const = 0;
    virtual pplx::task<void> updateSubscription(
        utility::string_t appId,
        utility::string_t subscriptionId,
        std::shared_ptr<SubscriptionBody> subscriptionBody
    ) const = 0;
    virtual pplx::task<std::shared_ptr<PropertiesBody>> updateUser(
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId,
        std::shared_ptr<UpdateUserRequest> updateUserRequest
    ) const = 0;
};

class  DefaultApi  : public IDefaultApi 
{
public:
    using Base = IDefaultApi;

    explicit DefaultApi( std::shared_ptr<const ApiClient> apiClient );

    ~DefaultApi() override;

    /// <summary>
    /// Stop a scheduled or currently outgoing notification
    /// </summary>
    /// <remarks>
    /// Used to stop a scheduled or currently outgoing notification
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="notificationId"></param>
    pplx::task<std::shared_ptr<GenericSuccessBoolResponse>> cancelNotification(
        utility::string_t appId,
        utility::string_t notificationId
    ) const override;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Upserts one or more Aliases to an existing User identified by (:alias_label, :alias_id).
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="aliasLabel"></param>
    /// <param name="aliasId"></param>
    /// <param name="userIdentityBody"></param>
    pplx::task<std::shared_ptr<UserIdentityBody>> createAlias(
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId,
        std::shared_ptr<UserIdentityBody> userIdentityBody
    ) const override;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Upserts one or more Aliases for the User identified by :subscription_id.
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="subscriptionId"></param>
    /// <param name="userIdentityBody"></param>
    pplx::task<std::shared_ptr<UserIdentityBody>> createAliasBySubscription(
        utility::string_t appId,
        utility::string_t subscriptionId,
        std::shared_ptr<UserIdentityBody> userIdentityBody
    ) const override;
    /// <summary>
    /// Create an app
    /// </summary>
    /// <remarks>
    /// Creates a new OneSignal app
    /// </remarks>
    /// <param name="app"></param>
    pplx::task<std::shared_ptr<App>> createApp(
        std::shared_ptr<App> app
    ) const override;
    /// <summary>
    /// Create notification
    /// </summary>
    /// <remarks>
    /// Sends notifications to your users 
    /// </remarks>
    /// <param name="notification"></param>
    pplx::task<std::shared_ptr<CreateNotificationSuccessResponse>> createNotification(
        std::shared_ptr<Notification> notification
    ) const override;
    /// <summary>
    /// Create Segment
    /// </summary>
    /// <remarks>
    /// Create a segment visible and usable in the dashboard and API - Required: OneSignal Paid Plan The Create Segment method is used when you want your server to programmatically create a segment instead of using the OneSignal Dashboard UI. Just like creating Segments from the dashboard you can pass in filters with multiple \&quot;AND\&quot; or \&quot;OR\&quot; operator&#39;s. &amp;#x1F6A7; Does Not Update Segments This endpoint will only create segments, it does not edit or update currently created Segments. You will need to use the Delete Segment endpoint and re-create it with this endpoint to edit. 
    /// </remarks>
    /// <param name="appId">The OneSignal App ID for your app.  Available in Keys &amp; IDs.</param>
    /// <param name="segment"> (optional)</param>
    pplx::task<std::shared_ptr<CreateSegmentSuccessResponse>> createSegment(
        utility::string_t appId,
        boost::optional<std::shared_ptr<Segment>> segment
    ) const override;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Creates a new Subscription under the User provided. Useful to add email addresses and SMS numbers to the User.
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="aliasLabel"></param>
    /// <param name="aliasId"></param>
    /// <param name="subscriptionBody"></param>
    pplx::task<std::shared_ptr<SubscriptionBody>> createSubscription(
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId,
        std::shared_ptr<SubscriptionBody> subscriptionBody
    ) const override;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Creates a User, optionally Subscriptions owned by the User as well as Aliases. Aliases provided in the payload will be used to look up an existing User.
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="user"></param>
    pplx::task<std::shared_ptr<User>> createUser(
        utility::string_t appId,
        std::shared_ptr<User> user
    ) const override;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Deletes an alias by alias label
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="aliasLabel"></param>
    /// <param name="aliasId"></param>
    /// <param name="aliasLabelToDelete"></param>
    pplx::task<std::shared_ptr<UserIdentityBody>> deleteAlias(
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId,
        utility::string_t aliasLabelToDelete
    ) const override;
    /// <summary>
    /// Delete Segment
    /// </summary>
    /// <remarks>
    /// Delete a segment (not user devices) - Required: OneSignal Paid Plan You can delete a segment under your app by calling this API. You must provide an API key in the Authorization header that has admin access on the app. The segment_id can be found in the URL of the segment when viewing it in the dashboard. 
    /// </remarks>
    /// <param name="appId">The OneSignal App ID for your app.  Available in Keys &amp; IDs.</param>
    /// <param name="segmentId">The segment_id can be found in the URL of the segment when viewing it in the dashboard.</param>
    pplx::task<std::shared_ptr<GenericSuccessBoolResponse>> deleteSegment(
        utility::string_t appId,
        utility::string_t segmentId
    ) const override;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Deletes the Subscription.
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="subscriptionId"></param>
    pplx::task<void> deleteSubscription(
        utility::string_t appId,
        utility::string_t subscriptionId
    ) const override;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Removes the User identified by (:alias_label, :alias_id), and all Subscriptions and Aliases
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="aliasLabel"></param>
    /// <param name="aliasId"></param>
    pplx::task<void> deleteUser(
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId
    ) const override;
    /// <summary>
    /// Export CSV of Events
    /// </summary>
    /// <remarks>
    /// Generate a compressed CSV report of all of the events data for a notification. This will return a URL immediately upon success but it may take several minutes for the CSV to become available at that URL depending on the volume of data. Only one export can be in-progress per OneSignal account at any given time.
    /// </remarks>
    /// <param name="notificationId">The ID of the notification to export events from.</param>
    /// <param name="appId">The ID of the app that the notification belongs to.</param>
    pplx::task<std::shared_ptr<ExportEventsSuccessResponse>> exportEvents(
        utility::string_t notificationId,
        utility::string_t appId
    ) const override;
    /// <summary>
    /// Export CSV of Subscriptions
    /// </summary>
    /// <remarks>
    /// Generate a compressed CSV export of all of your current user data This method can be used to generate a compressed CSV export of all of your current user data. It is a much faster alternative than retrieving this data using the /players API endpoint. The file will be compressed using GZip. The file may take several minutes to generate depending on the number of users in your app. The URL generated will be available for 3 days and includes random v4 uuid as part of the resource name to be unguessable. &amp;#x1F6A7; 403 Error Responses          You can test if it is complete by making a GET request to the csv_file_url value. This file may take time to generate depending on how many device records are being pulled. If the file is not ready, a 403 error will be returned. Otherwise the file itself will be returned. &amp;#x1F6A7; Requires Authentication Key Requires your OneSignal App&#39;s REST API Key, available in Keys &amp; IDs. &amp;#x1F6A7; Concurrent Exports Only one concurrent export is allowed per OneSignal account. Please ensure you have successfully downloaded the .csv.gz file before exporting another app. CSV File Format: - Default Columns:   | Field | Details |   | --- | --- |   | id | OneSignal Player Id |   | identifier | Push Token |   | session_count | Number of times they visited the app or site   | language | Device language code |   | timezone | Number of seconds away from UTC. Example: -28800 |   | game_version | Version of your mobile app gathered from Android Studio versionCode in your App/build.gradle and iOS uses kCFBundleVersionKey in Xcode. |   | device_os | Device Operating System Version. Example: 80 &#x3D; Chrome 80, 9 &#x3D; Android 9 |   | device_type | Device Operating System Type |   | device_model | Device Hardware String Code. Example: Mobile Web Subscribers will have &#x60;Linux armv&#x60; |   | ad_id | Based on the Google Advertising Id for Android, identifierForVendor for iOS. OptedOut means user turned off Advertising tracking on the device. |   | tags | Current OneSignal Data Tags on the device. |   | last_active | Date and time the user last opened the mobile app or visited the site. |   | playtime | Total amount of time in seconds the user had the mobile app open. |   | amount_spent |  Mobile only - amount spent in USD on In-App Purchases. |    | created_at | Date and time the device record was created in OneSignal. Mobile - first time they opened the app with OneSignal SDK. Web - first time the user subscribed to the site. |   | invalid_identifier | t &#x3D; unsubscribed, f &#x3D; subscibed |   | badge_count | Current number of badges on the device | - Extra Columns:   | Field | Details |   | --- | --- |   | external_user_id | Your User Id set on the device |   | notification_types | Notification types |   | location | Location points (Latitude and Longitude) set on the device. |   | country | Country code |   | rooted | Android device rooted or not |   | ip | IP Address of the device if being tracked. See Handling Personal Data. |   | web_auth | Web Only authorization key. |   | web_p256 | Web Only p256 key. | 
    /// </remarks>
    /// <param name="appId">The app ID that you want to export devices from</param>
    /// <param name="exportSubscriptionsRequestBody"> (optional)</param>
    pplx::task<std::shared_ptr<ExportSubscriptionsSuccessResponse>> exportSubscriptions(
        utility::string_t appId,
        boost::optional<std::shared_ptr<Export_subscriptions_request_body>> exportSubscriptionsRequestBody
    ) const override;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Lists all Aliases for the User identified by (:alias_label, :alias_id).
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="aliasLabel"></param>
    /// <param name="aliasId"></param>
    pplx::task<std::shared_ptr<UserIdentityBody>> getAliases(
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId
    ) const override;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Lists all Aliases for the User identified by :subscription_id.
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="subscriptionId"></param>
    pplx::task<std::shared_ptr<UserIdentityBody>> getAliasesBySubscription(
        utility::string_t appId,
        utility::string_t subscriptionId
    ) const override;
    /// <summary>
    /// View an app
    /// </summary>
    /// <remarks>
    /// View the details of a single OneSignal app
    /// </remarks>
    /// <param name="appId">An app id</param>
    pplx::task<std::shared_ptr<App>> getApp(
        utility::string_t appId
    ) const override;
    /// <summary>
    /// View apps
    /// </summary>
    /// <remarks>
    /// View the details of all of your current OneSignal apps
    /// </remarks>
    pplx::task<std::vector<std::shared_ptr<App>>> getApps(
    ) const override;
    /// <summary>
    /// View notification
    /// </summary>
    /// <remarks>
    /// View the details of a single notification and outcomes associated with it
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="notificationId"></param>
    pplx::task<std::shared_ptr<NotificationWithMeta>> getNotification(
        utility::string_t appId,
        utility::string_t notificationId
    ) const override;
    /// <summary>
    /// Notification History
    /// </summary>
    /// <remarks>
    /// -&gt; View the devices sent a message - OneSignal Paid Plan Required This method will return all devices that were sent the given notification_id of an Email or Push Notification if used within 7 days of the date sent. After 7 days of the sending date, the message history data will be unavailable. After a successful response is received, the destination url may be polled until the file becomes available. Most exports are done in ~1-3 minutes, so setting a poll interval of 10 seconds should be adequate. For use cases that are not meant to be consumed by a script, an email will be sent to the supplied email address. &amp;#x1F6A7; Requirements A OneSignal Paid Plan. Turn on Send History via OneSignal API in Settings -&gt; Analytics. Cannot get data before this was turned on. Must be called within 7 days after sending the message. Messages targeting under 1000 recipients will not have \&quot;sent\&quot; events recorded, but will show \&quot;clicked\&quot; events. Requires your OneSignal App&#39;s REST API Key, available in Keys &amp; IDs.
    /// </remarks>
    /// <param name="notificationId">The \&quot;id\&quot; of the message found in the Notification object</param>
    /// <param name="getNotificationHistoryRequestBody"></param>
    pplx::task<std::shared_ptr<NotificationHistorySuccessResponse>> getNotificationHistory(
        utility::string_t notificationId,
        std::shared_ptr<Get_notification_history_request_body> getNotificationHistoryRequestBody
    ) const override;
    /// <summary>
    /// View notifications
    /// </summary>
    /// <remarks>
    /// View the details of multiple notifications
    /// </remarks>
    /// <param name="appId">The app ID that you want to view notifications from</param>
    /// <param name="limit">How many notifications to return.  Max is 50.  Default is 50. (optional, default to 0)</param>
    /// <param name="offset">Page offset.  Default is 0.  Results are sorted by queued_at in descending order.  queued_at is a representation of the time that the notification was queued at. (optional, default to 0)</param>
    /// <param name="kind">Kind of notifications returned:   * unset - All notification types (default)   * &#x60;0&#x60; - Dashboard only   * &#x60;1&#x60; - API only   * &#x60;3&#x60; - Automated only  (optional, default to 0)</param>
    pplx::task<std::shared_ptr<NotificationSlice>> getNotifications(
        utility::string_t appId,
        boost::optional<int32_t> limit,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> kind
    ) const override;
    /// <summary>
    /// View Outcomes
    /// </summary>
    /// <remarks>
    /// View the details of all the outcomes associated with your app  &amp;#x1F6A7; Requires Authentication Key Requires your OneSignal App&#39;s REST API Key, available in Keys &amp; IDs.  &amp;#x1F6A7; Outcome Data Limitations Outcomes are only accessible for around 30 days before deleted from our servers. You will need to export this data every month if you want to keep it. 
    /// </remarks>
    /// <param name="appId">The OneSignal App ID for your app.  Available in Keys &amp; IDs.</param>
    /// <param name="outcomeNames">Required Comma-separated list of names and the value (sum/count) for the returned outcome data. Note: Clicks only support count aggregation. For out-of-the-box OneSignal outcomes such as click and session duration, please use the \&quot;os\&quot; prefix with two underscores. For other outcomes, please use the name specified by the user. Example:os__session_duration.count,os__click.count,CustomOutcomeName.sum </param>
    /// <param name="outcomeNamesLeft_Square_BracketRight_Square_Bracket">Optional If outcome names contain any commas, then please specify only one value at a time. Example: outcome_names[]&#x3D;os__click.count&amp;outcome_names[]&#x3D;Sales, Purchase.count where \&quot;Sales, Purchase\&quot; is the custom outcomes with a comma in the name.  (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="outcomeTimeRange">Optional Time range for the returned data. The values can be 1h (for the last 1 hour data), 1d (for the last 1 day data), or 1mo (for the last 1 month data). Default is 1h if the parameter is omitted.  (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="outcomePlatforms">Optional Platform id. Refer device&#39;s platform ids for values. Example: outcome_platform&#x3D;0 for iOS outcome_platform&#x3D;7,8 for Safari and Firefox Default is data from all platforms if the parameter is omitted.  (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="outcomeAttribution">Optional Attribution type for the outcomes. The values can be direct or influenced or unattributed. Example: outcome_attribution&#x3D;direct Default is total (returns direct+influenced+unattributed) if the parameter is omitted.  (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<OutcomesData>> getOutcomes(
        utility::string_t appId,
        utility::string_t outcomeNames,
        boost::optional<utility::string_t> outcomeNamesLeft_Square_BracketRight_Square_Bracket,
        boost::optional<utility::string_t> outcomeTimeRange,
        boost::optional<utility::string_t> outcomePlatforms,
        boost::optional<utility::string_t> outcomeAttribution
    ) const override;
    /// <summary>
    /// Get Segments
    /// </summary>
    /// <remarks>
    /// Returns an array of segments from an app.
    /// </remarks>
    /// <param name="appId">The OneSignal App ID for your app.  Available in Keys &amp; IDs.</param>
    /// <param name="offset">Segments are listed in ascending order of created_at date. offset will omit that number of segments from the beginning of the list. Eg offset 5, will remove the 5 earliest created Segments. (optional, default to 0)</param>
    /// <param name="limit">The amount of Segments in the response. Maximum 300. (optional, default to 0)</param>
    pplx::task<std::shared_ptr<GetSegmentsSuccessResponse>> getSegments(
        utility::string_t appId,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> limit
    ) const override;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns the User’s properties, Aliases, and Subscriptions.
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="aliasLabel"></param>
    /// <param name="aliasId"></param>
    pplx::task<std::shared_ptr<User>> getUser(
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId
    ) const override;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Transfers this Subscription to the User identified by the identity in the payload.
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="subscriptionId"></param>
    /// <param name="transferSubscriptionRequestBody"></param>
    pplx::task<std::shared_ptr<UserIdentityBody>> transferSubscription(
        utility::string_t appId,
        utility::string_t subscriptionId,
        std::shared_ptr<TransferSubscriptionRequestBody> transferSubscriptionRequestBody
    ) const override;
    /// <summary>
    /// Unsubscribe with token
    /// </summary>
    /// <remarks>
    /// Unsubscribe an email with a token when using your own custom email unsubscribe landing page
    /// </remarks>
    /// <param name="appId">The OneSignal App ID for your app.  Available in Keys &amp; IDs.</param>
    /// <param name="notificationId">The id of the message found in the creation notification POST response, View Notifications GET response, or URL within the Message Report.</param>
    /// <param name="token">The unsubscribe token that is generated via liquid syntax in {{subscription.unsubscribe_token}} when personalizing an email.</param>
    pplx::task<std::shared_ptr<GenericSuccessBoolResponse>> unsubscribeEmailWithToken(
        utility::string_t appId,
        utility::string_t notificationId,
        utility::string_t token
    ) const override;
    /// <summary>
    /// Update an app
    /// </summary>
    /// <remarks>
    /// Updates the name or configuration settings of an existing OneSignal app
    /// </remarks>
    /// <param name="appId">An app id</param>
    /// <param name="app"></param>
    pplx::task<std::shared_ptr<App>> updateApp(
        utility::string_t appId,
        std::shared_ptr<App> app
    ) const override;
    /// <summary>
    /// Update a Live Activity via Push
    /// </summary>
    /// <remarks>
    /// Updates a specified live activity.
    /// </remarks>
    /// <param name="appId">The OneSignal App ID for your app.  Available in Keys &amp; IDs.</param>
    /// <param name="activityId">Live Activity record ID</param>
    /// <param name="updateLiveActivityRequest"></param>
    pplx::task<std::shared_ptr<UpdateLiveActivitySuccessResponse>> updateLiveActivity(
        utility::string_t appId,
        utility::string_t activityId,
        std::shared_ptr<UpdateLiveActivityRequest> updateLiveActivityRequest
    ) const override;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Updates an existing Subscription’s properties.
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="subscriptionId"></param>
    /// <param name="subscriptionBody"></param>
    pplx::task<void> updateSubscription(
        utility::string_t appId,
        utility::string_t subscriptionId,
        std::shared_ptr<SubscriptionBody> subscriptionBody
    ) const override;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Updates an existing User’s properties.
    /// </remarks>
    /// <param name="appId"></param>
    /// <param name="aliasLabel"></param>
    /// <param name="aliasId"></param>
    /// <param name="updateUserRequest"></param>
    pplx::task<std::shared_ptr<PropertiesBody>> updateUser(
        utility::string_t appId,
        utility::string_t aliasLabel,
        utility::string_t aliasId,
        std::shared_ptr<UpdateUserRequest> updateUserRequest
    ) const override;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_API_DefaultApi_H_ */

