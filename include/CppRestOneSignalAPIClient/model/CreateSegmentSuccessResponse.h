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
 * CreateSegmentSuccessResponse.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_CreateSegmentSuccessResponse_H_
#define COM_ONESIGNAL_CLIENT_MODEL_CreateSegmentSuccessResponse_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CreateSegmentSuccessResponse
    : public ModelBase
{
public:
    CreateSegmentSuccessResponse();
    virtual ~CreateSegmentSuccessResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateSegmentSuccessResponse members

    /// <summary>
    /// 
    /// </summary>
    bool isSuccess() const;
    bool successIsSet() const;
    void unsetSuccess();

    void setSuccess(bool value);

    /// <summary>
    /// UUID of created segment
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);


protected:
    bool m_Success;
    bool m_SuccessIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_CreateSegmentSuccessResponse_H_ */
