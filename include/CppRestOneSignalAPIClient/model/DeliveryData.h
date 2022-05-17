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
 * DeliveryData.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_DeliveryData_H_
#define COM_ONESIGNAL_CLIENT_MODEL_DeliveryData_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"


namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  DeliveryData
    : public ModelBase
{
public:
    DeliveryData();
    virtual ~DeliveryData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DeliveryData members

    /// <summary>
    /// 
    /// </summary>
    int32_t getSuccessful() const;
    bool successfulIsSet() const;
    void unsetSuccessful();

    void setSuccessful(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getFailed() const;
    bool failedIsSet() const;
    void unsetFailed();

    void setFailed(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getErrored() const;
    bool erroredIsSet() const;
    void unsetErrored();

    void setErrored(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getConverted() const;
    bool convertedIsSet() const;
    void unsetConverted();

    void setConverted(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getReceived() const;
    bool receivedIsSet() const;
    void unsetReceived();

    void setReceived(int32_t value);


protected:
    int32_t m_Successful;
    bool m_SuccessfulIsSet;
    int32_t m_Failed;
    bool m_FailedIsSet;
    int32_t m_Errored;
    bool m_ErroredIsSet;
    int32_t m_Converted;
    bool m_ConvertedIsSet;
    int32_t m_Received;
    bool m_ReceivedIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_DeliveryData_H_ */
