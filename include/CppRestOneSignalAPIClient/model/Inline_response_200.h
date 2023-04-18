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
 * Inline_response_200.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_Inline_response_200_H_
#define COM_ONESIGNAL_CLIENT_MODEL_Inline_response_200_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <map>
#include <vector>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Inline_response_200
    : public ModelBase
{
public:
    Inline_response_200();
    virtual ~Inline_response_200();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Inline_response_200 members

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getIdentity();
    bool identityIsSet() const;
    void unsetIdentity();

    void setIdentity(const std::map<utility::string_t, utility::string_t>& value);


protected:
    std::map<utility::string_t, utility::string_t> m_Identity;
    bool m_IdentityIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_Inline_response_200_H_ */
