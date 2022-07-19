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
 * DeleteSegmentBadRequestResponse.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_DeleteSegmentBadRequestResponse_H_
#define COM_ONESIGNAL_CLIENT_MODEL_DeleteSegmentBadRequestResponse_H_


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
class  DeleteSegmentBadRequestResponse
    : public ModelBase
{
public:
    DeleteSegmentBadRequestResponse();
    virtual ~DeleteSegmentBadRequestResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DeleteSegmentBadRequestResponse members

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getErorrs();
    bool erorrsIsSet() const;
    void unsetErorrs();

    void setErorrs(const std::vector<utility::string_t>& value);


protected:
    std::vector<utility::string_t> m_Erorrs;
    bool m_ErorrsIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_DeleteSegmentBadRequestResponse_H_ */