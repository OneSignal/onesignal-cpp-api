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
 * ExportPlayersSuccessResponse.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_ExportPlayersSuccessResponse_H_
#define COM_ONESIGNAL_CLIENT_MODEL_ExportPlayersSuccessResponse_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ExportPlayersSuccessResponse
    : public ModelBase
{
public:
    ExportPlayersSuccessResponse();
    virtual ~ExportPlayersSuccessResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ExportPlayersSuccessResponse members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCsvFileUrl() const;
    bool csvFileUrlIsSet() const;
    void unsetCsv_file_url();

    void setCsvFileUrl(const utility::string_t& value);


protected:
    utility::string_t m_Csv_file_url;
    bool m_Csv_file_urlIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_ExportPlayersSuccessResponse_H_ */
