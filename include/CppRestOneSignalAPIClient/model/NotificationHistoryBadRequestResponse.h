/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.0.1
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * NotificationHistoryBadRequestResponse.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_NotificationHistoryBadRequestResponse_H_
#define COM_ONESIGNAL_CLIENT_MODEL_NotificationHistoryBadRequestResponse_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  NotificationHistoryBadRequestResponse
    : public ModelBase
{
public:
    NotificationHistoryBadRequestResponse();
    virtual ~NotificationHistoryBadRequestResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NotificationHistoryBadRequestResponse members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSuccess() const;
    bool successIsSet() const;
    void unsetSuccess();

    void setSuccess(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<utility::string_t>& value);


protected:
    utility::string_t m_Success;
    bool m_SuccessIsSet;
    std::vector<utility::string_t> m_Errors;
    bool m_ErrorsIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_NotificationHistoryBadRequestResponse_H_ */
