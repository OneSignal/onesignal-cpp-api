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
 * UpdateUserRequest.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_UpdateUserRequest_H_
#define COM_ONESIGNAL_CLIENT_MODEL_UpdateUserRequest_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include "CppRestOneSignalAPIClient/model/PropertiesObject.h"
#include "CppRestOneSignalAPIClient/model/PropertiesDeltas.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {

class PropertiesObject;
class PropertiesDeltas;

/// <summary>
/// 
/// </summary>
class  UpdateUserRequest
    : public ModelBase
{
public:
    UpdateUserRequest();
    virtual ~UpdateUserRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UpdateUserRequest members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PropertiesObject> getProperties() const;
    bool propertiesIsSet() const;
    void unsetProperties();

    void setProperties(const std::shared_ptr<PropertiesObject>& value);

    /// <summary>
    /// 
    /// </summary>
    bool isRefreshDeviceMetadata() const;
    bool refreshDeviceMetadataIsSet() const;
    void unsetRefresh_device_metadata();

    void setRefreshDeviceMetadata(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PropertiesDeltas> getDeltas() const;
    bool deltasIsSet() const;
    void unsetDeltas();

    void setDeltas(const std::shared_ptr<PropertiesDeltas>& value);


protected:
    std::shared_ptr<PropertiesObject> m_Properties;
    bool m_PropertiesIsSet;
    bool m_Refresh_device_metadata;
    bool m_Refresh_device_metadataIsSet;
    std::shared_ptr<PropertiesDeltas> m_Deltas;
    bool m_DeltasIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_UpdateUserRequest_H_ */
