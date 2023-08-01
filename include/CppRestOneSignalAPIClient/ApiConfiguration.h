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
 * ApiConfiguration.h
 *
 * This class represents a single item of a multipart-formdata request.
 */

#ifndef COM_ONESIGNAL_CLIENT_API_ApiConfiguration_H_
#define COM_ONESIGNAL_CLIENT_API_ApiConfiguration_H_



#include <cpprest/details/basic_types.h>
#include <cpprest/http_client.h>

#include <map>

namespace com {
namespace onesignal {
namespace client {
namespace api {

class  ApiConfiguration
{
public:
    ApiConfiguration();
    virtual ~ApiConfiguration();

    const web::http::client::http_client_config& getHttpConfig() const;
    void setHttpConfig( web::http::client::http_client_config& value );

    utility::string_t getBaseUrl() const;
    void setBaseUrl( const utility::string_t value );

    utility::string_t getUserAgent() const;
    void setUserAgent( const utility::string_t value );

    std::map<utility::string_t, utility::string_t>& getDefaultHeaders();
    const std::map<utility::string_t, utility::string_t>& getDefaultHeaders() const;

    utility::string_t getApiKey( const utility::string_t& prefix) const;
    void setApiKey( const utility::string_t& prefix, const utility::string_t& apiKey );

    utility::string_t getBearerToken( const utility::string_t& prefix ) const;
    void setBearerToken( const utility::string_t& prefix, const utility::string_t& bearerToken );

    void setAppKeyToken( const utility::string_t& bearerToken );
    void setUserKeyToken( const utility::string_t& bearerToken );


protected:
    utility::string_t m_BaseUrl;
    std::map<utility::string_t, utility::string_t> m_DefaultHeaders;
    std::map<utility::string_t, utility::string_t> m_ApiKeys;
    std::map<utility::string_t, utility::string_t> m_BearerTokens;
    web::http::client::http_client_config m_HttpConfig;
    utility::string_t m_UserAgent;
};

}
}
}
}
#endif /* COM_ONESIGNAL_CLIENT_API_ApiConfiguration_H_ */
