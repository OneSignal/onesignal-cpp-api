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

/*
 * NotificationHistorySuccessResponse.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_NotificationHistorySuccessResponse_H_
#define COM_ONESIGNAL_CLIENT_MODEL_NotificationHistorySuccessResponse_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  NotificationHistorySuccessResponse
    : public ModelBase
{
public:
    NotificationHistorySuccessResponse();
    virtual ~NotificationHistorySuccessResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NotificationHistorySuccessResponse members

    /// <summary>
    /// 
    /// </summary>
    bool isSuccess() const;
    bool successIsSet() const;
    void unsetSuccess();

    void setSuccess(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDestinationUrl() const;
    bool destinationUrlIsSet() const;
    void unsetDestination_url();

    void setDestinationUrl(const utility::string_t& value);


protected:
    bool m_Success;
    bool m_SuccessIsSet;
    utility::string_t m_Destination_url;
    bool m_Destination_urlIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_NotificationHistorySuccessResponse_H_ */
