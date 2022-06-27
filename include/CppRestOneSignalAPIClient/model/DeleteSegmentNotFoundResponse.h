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
 * DeleteSegmentNotFoundResponse.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_DeleteSegmentNotFoundResponse_H_
#define COM_ONESIGNAL_CLIENT_MODEL_DeleteSegmentNotFoundResponse_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"


namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  DeleteSegmentNotFoundResponse
    : public ModelBase
{
public:
    DeleteSegmentNotFoundResponse();
    virtual ~DeleteSegmentNotFoundResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DeleteSegmentNotFoundResponse members

    /// <summary>
    /// 
    /// </summary>
    bool isSuccess() const;
    bool successIsSet() const;
    void unsetSuccess();

    void setSuccess(bool value);


protected:
    bool m_Success;
    bool m_SuccessIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_DeleteSegmentNotFoundResponse_H_ */
