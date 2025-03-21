/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.4.0
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * UpdateLiveActivitySuccessResponse.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_UpdateLiveActivitySuccessResponse_H_
#define COM_ONESIGNAL_CLIENT_MODEL_UpdateLiveActivitySuccessResponse_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include "CppRestOneSignalAPIClient/model/Notification200Errors.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace onesignal {
namespace client {
namespace model {

class Notification200Errors;

/// <summary>
/// 
/// </summary>
class  UpdateLiveActivitySuccessResponse
    : public ModelBase
{
public:
    UpdateLiveActivitySuccessResponse();
    virtual ~UpdateLiveActivitySuccessResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UpdateLiveActivitySuccessResponse members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getNotificationId() const;
    bool notificationIdIsSet() const;
    void unsetNotification_id();

    void setNotificationId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Notification200Errors> getErrors() const;
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::shared_ptr<Notification200Errors>& value);


protected:
    utility::string_t m_Notification_id;
    bool m_Notification_idIsSet;
    std::shared_ptr<Notification200Errors> m_Errors;
    bool m_ErrorsIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_UpdateLiveActivitySuccessResponse_H_ */
