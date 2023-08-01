/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * GenericError.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_GenericError_H_
#define COM_ONESIGNAL_CLIENT_MODEL_GenericError_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <vector>
#include "CppRestOneSignalAPIClient/model/GenericError_errors_inner.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {

class GenericError_errors_inner;

/// <summary>
/// 
/// </summary>
class  GenericError
    : public ModelBase
{
public:
    GenericError();
    virtual ~GenericError();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GenericError members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<GenericError_errors_inner>>& getErrors();
    bool errorsIsSet() const;
    void unsetErrors();

    void setErrors(const std::vector<std::shared_ptr<GenericError_errors_inner>>& value);


protected:
    std::vector<std::shared_ptr<GenericError_errors_inner>> m_Errors;
    bool m_ErrorsIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_GenericError_H_ */