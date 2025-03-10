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
 * CreateSegmentConflictResponse.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_CreateSegmentConflictResponse_H_
#define COM_ONESIGNAL_CLIENT_MODEL_CreateSegmentConflictResponse_H_


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
class  CreateSegmentConflictResponse
    : public ModelBase
{
public:
    CreateSegmentConflictResponse();
    virtual ~CreateSegmentConflictResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateSegmentConflictResponse members

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
    std::vector<utility::string_t>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<utility::string_t>& value);


protected:
    bool m_Success;
    bool m_SuccessIsSet;
    std::vector<utility::string_t> m_Errors;
    bool m_ErrorsIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_CreateSegmentConflictResponse_H_ */
