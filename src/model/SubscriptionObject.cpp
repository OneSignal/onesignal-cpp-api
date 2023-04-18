/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOneSignalAPIClient/model/SubscriptionObject.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



SubscriptionObject::SubscriptionObject()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Token = utility::conversions::to_string_t("");
    m_TokenIsSet = false;
    m_Enabled = false;
    m_EnabledIsSet = false;
    m_Notification_types = 0.0;
    m_Notification_typesIsSet = false;
    m_Session_time = 0.0;
    m_Session_timeIsSet = false;
    m_Session_count = 0.0;
    m_Session_countIsSet = false;
    m_Sdk = utility::conversions::to_string_t("");
    m_SdkIsSet = false;
    m_Device_model = utility::conversions::to_string_t("");
    m_Device_modelIsSet = false;
    m_Device_os = utility::conversions::to_string_t("");
    m_Device_osIsSet = false;
    m_Rooted = false;
    m_RootedIsSet = false;
    m_Test_type = 0.0;
    m_Test_typeIsSet = false;
    m_App_version = utility::conversions::to_string_t("");
    m_App_versionIsSet = false;
    m_Net_type = 0.0;
    m_Net_typeIsSet = false;
    m_Carrier = utility::conversions::to_string_t("");
    m_CarrierIsSet = false;
    m_Web_auth = utility::conversions::to_string_t("");
    m_Web_authIsSet = false;
    m_Web_p256 = utility::conversions::to_string_t("");
    m_Web_p256IsSet = false;
}

SubscriptionObject::~SubscriptionObject()
{
}

void SubscriptionObject::validate()
{
    // TODO: implement validation
}

web::json::value SubscriptionObject::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t(U("id"))] = ModelBase::toJson(m_Id);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_TokenIsSet)
    {
        val[utility::conversions::to_string_t(U("token"))] = ModelBase::toJson(m_Token);
    }
    if(m_EnabledIsSet)
    {
        val[utility::conversions::to_string_t(U("enabled"))] = ModelBase::toJson(m_Enabled);
    }
    if(m_Notification_typesIsSet)
    {
        val[utility::conversions::to_string_t(U("notification_types"))] = ModelBase::toJson(m_Notification_types);
    }
    if(m_Session_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("session_time"))] = ModelBase::toJson(m_Session_time);
    }
    if(m_Session_countIsSet)
    {
        val[utility::conversions::to_string_t(U("session_count"))] = ModelBase::toJson(m_Session_count);
    }
    if(m_SdkIsSet)
    {
        val[utility::conversions::to_string_t(U("sdk"))] = ModelBase::toJson(m_Sdk);
    }
    if(m_Device_modelIsSet)
    {
        val[utility::conversions::to_string_t(U("device_model"))] = ModelBase::toJson(m_Device_model);
    }
    if(m_Device_osIsSet)
    {
        val[utility::conversions::to_string_t(U("device_os"))] = ModelBase::toJson(m_Device_os);
    }
    if(m_RootedIsSet)
    {
        val[utility::conversions::to_string_t(U("rooted"))] = ModelBase::toJson(m_Rooted);
    }
    if(m_Test_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("test_type"))] = ModelBase::toJson(m_Test_type);
    }
    if(m_App_versionIsSet)
    {
        val[utility::conversions::to_string_t(U("app_version"))] = ModelBase::toJson(m_App_version);
    }
    if(m_Net_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("net_type"))] = ModelBase::toJson(m_Net_type);
    }
    if(m_CarrierIsSet)
    {
        val[utility::conversions::to_string_t(U("carrier"))] = ModelBase::toJson(m_Carrier);
    }
    if(m_Web_authIsSet)
    {
        val[utility::conversions::to_string_t(U("web_auth"))] = ModelBase::toJson(m_Web_auth);
    }
    if(m_Web_p256IsSet)
    {
        val[utility::conversions::to_string_t(U("web_p256"))] = ModelBase::toJson(m_Web_p256);
    }

    return val;
}

bool SubscriptionObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("id"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("id")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setId);
            setId(refVal_setId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("token"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("token")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setToken;
            ok &= ModelBase::fromJson(fieldValue, refVal_setToken);
            setToken(refVal_setToken);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("enabled"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("enabled")));
        if(!fieldValue.is_null())
        {
            bool refVal_setEnabled;
            ok &= ModelBase::fromJson(fieldValue, refVal_setEnabled);
            setEnabled(refVal_setEnabled);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("notification_types"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("notification_types")));
        if(!fieldValue.is_null())
        {
            double refVal_setNotificationTypes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNotificationTypes);
            setNotificationTypes(refVal_setNotificationTypes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("session_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("session_time")));
        if(!fieldValue.is_null())
        {
            double refVal_setSessionTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSessionTime);
            setSessionTime(refVal_setSessionTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("session_count"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("session_count")));
        if(!fieldValue.is_null())
        {
            double refVal_setSessionCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSessionCount);
            setSessionCount(refVal_setSessionCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("sdk"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("sdk")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSdk;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSdk);
            setSdk(refVal_setSdk);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("device_model"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("device_model")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDeviceModel;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDeviceModel);
            setDeviceModel(refVal_setDeviceModel);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("device_os"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("device_os")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDeviceOs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDeviceOs);
            setDeviceOs(refVal_setDeviceOs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("rooted"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("rooted")));
        if(!fieldValue.is_null())
        {
            bool refVal_setRooted;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRooted);
            setRooted(refVal_setRooted);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("test_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("test_type")));
        if(!fieldValue.is_null())
        {
            double refVal_setTestType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTestType);
            setTestType(refVal_setTestType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("app_version"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("app_version")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAppVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAppVersion);
            setAppVersion(refVal_setAppVersion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("net_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("net_type")));
        if(!fieldValue.is_null())
        {
            double refVal_setNetType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNetType);
            setNetType(refVal_setNetType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("carrier"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("carrier")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCarrier;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCarrier);
            setCarrier(refVal_setCarrier);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("web_auth"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("web_auth")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWebAuth;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWebAuth);
            setWebAuth(refVal_setWebAuth);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("web_p256"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("web_p256")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setWebP256;
            ok &= ModelBase::fromJson(fieldValue, refVal_setWebP256);
            setWebP256(refVal_setWebP256);
        }
    }
    return ok;
}

void SubscriptionObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("id")), m_Id));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_TokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("token")), m_Token));
    }
    if(m_EnabledIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("enabled")), m_Enabled));
    }
    if(m_Notification_typesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("notification_types")), m_Notification_types));
    }
    if(m_Session_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("session_time")), m_Session_time));
    }
    if(m_Session_countIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("session_count")), m_Session_count));
    }
    if(m_SdkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("sdk")), m_Sdk));
    }
    if(m_Device_modelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("device_model")), m_Device_model));
    }
    if(m_Device_osIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("device_os")), m_Device_os));
    }
    if(m_RootedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("rooted")), m_Rooted));
    }
    if(m_Test_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("test_type")), m_Test_type));
    }
    if(m_App_versionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("app_version")), m_App_version));
    }
    if(m_Net_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("net_type")), m_Net_type));
    }
    if(m_CarrierIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("carrier")), m_Carrier));
    }
    if(m_Web_authIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("web_auth")), m_Web_auth));
    }
    if(m_Web_p256IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("web_p256")), m_Web_p256));
    }
}

bool SubscriptionObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("id"))))
    {
        utility::string_t refVal_setId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("id"))), refVal_setId );
        setId(refVal_setId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("token"))))
    {
        utility::string_t refVal_setToken;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("token"))), refVal_setToken );
        setToken(refVal_setToken);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("enabled"))))
    {
        bool refVal_setEnabled;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("enabled"))), refVal_setEnabled );
        setEnabled(refVal_setEnabled);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("notification_types"))))
    {
        double refVal_setNotificationTypes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("notification_types"))), refVal_setNotificationTypes );
        setNotificationTypes(refVal_setNotificationTypes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("session_time"))))
    {
        double refVal_setSessionTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("session_time"))), refVal_setSessionTime );
        setSessionTime(refVal_setSessionTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("session_count"))))
    {
        double refVal_setSessionCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("session_count"))), refVal_setSessionCount );
        setSessionCount(refVal_setSessionCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("sdk"))))
    {
        utility::string_t refVal_setSdk;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("sdk"))), refVal_setSdk );
        setSdk(refVal_setSdk);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("device_model"))))
    {
        utility::string_t refVal_setDeviceModel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("device_model"))), refVal_setDeviceModel );
        setDeviceModel(refVal_setDeviceModel);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("device_os"))))
    {
        utility::string_t refVal_setDeviceOs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("device_os"))), refVal_setDeviceOs );
        setDeviceOs(refVal_setDeviceOs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("rooted"))))
    {
        bool refVal_setRooted;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("rooted"))), refVal_setRooted );
        setRooted(refVal_setRooted);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("test_type"))))
    {
        double refVal_setTestType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("test_type"))), refVal_setTestType );
        setTestType(refVal_setTestType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("app_version"))))
    {
        utility::string_t refVal_setAppVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("app_version"))), refVal_setAppVersion );
        setAppVersion(refVal_setAppVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("net_type"))))
    {
        double refVal_setNetType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("net_type"))), refVal_setNetType );
        setNetType(refVal_setNetType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("carrier"))))
    {
        utility::string_t refVal_setCarrier;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("carrier"))), refVal_setCarrier );
        setCarrier(refVal_setCarrier);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("web_auth"))))
    {
        utility::string_t refVal_setWebAuth;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("web_auth"))), refVal_setWebAuth );
        setWebAuth(refVal_setWebAuth);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("web_p256"))))
    {
        utility::string_t refVal_setWebP256;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("web_p256"))), refVal_setWebP256 );
        setWebP256(refVal_setWebP256);
    }
    return ok;
}

utility::string_t SubscriptionObject::getId() const
{
    return m_Id;
}

void SubscriptionObject::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool SubscriptionObject::idIsSet() const
{
    return m_IdIsSet;
}

void SubscriptionObject::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t SubscriptionObject::getType() const
{
    return m_Type;
}

void SubscriptionObject::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool SubscriptionObject::typeIsSet() const
{
    return m_TypeIsSet;
}

void SubscriptionObject::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t SubscriptionObject::getToken() const
{
    return m_Token;
}

void SubscriptionObject::setToken(const utility::string_t& value)
{
    m_Token = value;
    m_TokenIsSet = true;
}

bool SubscriptionObject::tokenIsSet() const
{
    return m_TokenIsSet;
}

void SubscriptionObject::unsetToken()
{
    m_TokenIsSet = false;
}
bool SubscriptionObject::isEnabled() const
{
    return m_Enabled;
}

void SubscriptionObject::setEnabled(bool value)
{
    m_Enabled = value;
    m_EnabledIsSet = true;
}

bool SubscriptionObject::enabledIsSet() const
{
    return m_EnabledIsSet;
}

void SubscriptionObject::unsetEnabled()
{
    m_EnabledIsSet = false;
}
double SubscriptionObject::getNotificationTypes() const
{
    return m_Notification_types;
}

void SubscriptionObject::setNotificationTypes(double value)
{
    m_Notification_types = value;
    m_Notification_typesIsSet = true;
}

bool SubscriptionObject::notificationTypesIsSet() const
{
    return m_Notification_typesIsSet;
}

void SubscriptionObject::unsetNotification_types()
{
    m_Notification_typesIsSet = false;
}
double SubscriptionObject::getSessionTime() const
{
    return m_Session_time;
}

void SubscriptionObject::setSessionTime(double value)
{
    m_Session_time = value;
    m_Session_timeIsSet = true;
}

bool SubscriptionObject::sessionTimeIsSet() const
{
    return m_Session_timeIsSet;
}

void SubscriptionObject::unsetSession_time()
{
    m_Session_timeIsSet = false;
}
double SubscriptionObject::getSessionCount() const
{
    return m_Session_count;
}

void SubscriptionObject::setSessionCount(double value)
{
    m_Session_count = value;
    m_Session_countIsSet = true;
}

bool SubscriptionObject::sessionCountIsSet() const
{
    return m_Session_countIsSet;
}

void SubscriptionObject::unsetSession_count()
{
    m_Session_countIsSet = false;
}
utility::string_t SubscriptionObject::getSdk() const
{
    return m_Sdk;
}

void SubscriptionObject::setSdk(const utility::string_t& value)
{
    m_Sdk = value;
    m_SdkIsSet = true;
}

bool SubscriptionObject::sdkIsSet() const
{
    return m_SdkIsSet;
}

void SubscriptionObject::unsetSdk()
{
    m_SdkIsSet = false;
}
utility::string_t SubscriptionObject::getDeviceModel() const
{
    return m_Device_model;
}

void SubscriptionObject::setDeviceModel(const utility::string_t& value)
{
    m_Device_model = value;
    m_Device_modelIsSet = true;
}

bool SubscriptionObject::deviceModelIsSet() const
{
    return m_Device_modelIsSet;
}

void SubscriptionObject::unsetDevice_model()
{
    m_Device_modelIsSet = false;
}
utility::string_t SubscriptionObject::getDeviceOs() const
{
    return m_Device_os;
}

void SubscriptionObject::setDeviceOs(const utility::string_t& value)
{
    m_Device_os = value;
    m_Device_osIsSet = true;
}

bool SubscriptionObject::deviceOsIsSet() const
{
    return m_Device_osIsSet;
}

void SubscriptionObject::unsetDevice_os()
{
    m_Device_osIsSet = false;
}
bool SubscriptionObject::isRooted() const
{
    return m_Rooted;
}

void SubscriptionObject::setRooted(bool value)
{
    m_Rooted = value;
    m_RootedIsSet = true;
}

bool SubscriptionObject::rootedIsSet() const
{
    return m_RootedIsSet;
}

void SubscriptionObject::unsetRooted()
{
    m_RootedIsSet = false;
}
double SubscriptionObject::getTestType() const
{
    return m_Test_type;
}

void SubscriptionObject::setTestType(double value)
{
    m_Test_type = value;
    m_Test_typeIsSet = true;
}

bool SubscriptionObject::testTypeIsSet() const
{
    return m_Test_typeIsSet;
}

void SubscriptionObject::unsetTest_type()
{
    m_Test_typeIsSet = false;
}
utility::string_t SubscriptionObject::getAppVersion() const
{
    return m_App_version;
}

void SubscriptionObject::setAppVersion(const utility::string_t& value)
{
    m_App_version = value;
    m_App_versionIsSet = true;
}

bool SubscriptionObject::appVersionIsSet() const
{
    return m_App_versionIsSet;
}

void SubscriptionObject::unsetApp_version()
{
    m_App_versionIsSet = false;
}
double SubscriptionObject::getNetType() const
{
    return m_Net_type;
}

void SubscriptionObject::setNetType(double value)
{
    m_Net_type = value;
    m_Net_typeIsSet = true;
}

bool SubscriptionObject::netTypeIsSet() const
{
    return m_Net_typeIsSet;
}

void SubscriptionObject::unsetNet_type()
{
    m_Net_typeIsSet = false;
}
utility::string_t SubscriptionObject::getCarrier() const
{
    return m_Carrier;
}

void SubscriptionObject::setCarrier(const utility::string_t& value)
{
    m_Carrier = value;
    m_CarrierIsSet = true;
}

bool SubscriptionObject::carrierIsSet() const
{
    return m_CarrierIsSet;
}

void SubscriptionObject::unsetCarrier()
{
    m_CarrierIsSet = false;
}
utility::string_t SubscriptionObject::getWebAuth() const
{
    return m_Web_auth;
}

void SubscriptionObject::setWebAuth(const utility::string_t& value)
{
    m_Web_auth = value;
    m_Web_authIsSet = true;
}

bool SubscriptionObject::webAuthIsSet() const
{
    return m_Web_authIsSet;
}

void SubscriptionObject::unsetWeb_auth()
{
    m_Web_authIsSet = false;
}
utility::string_t SubscriptionObject::getWebP256() const
{
    return m_Web_p256;
}

void SubscriptionObject::setWebP256(const utility::string_t& value)
{
    m_Web_p256 = value;
    m_Web_p256IsSet = true;
}

bool SubscriptionObject::webP256IsSet() const
{
    return m_Web_p256IsSet;
}

void SubscriptionObject::unsetWeb_p256()
{
    m_Web_p256IsSet = false;
}
}
}
}
}


