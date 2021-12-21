/**
* Simple API
* A simple API to illustrate OpenAPI concepts
*
* The version of the OpenAPI document: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * DefaultApi.h
 *
 * 
 */

#ifndef DefaultApi_H_
#define DefaultApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <nlohmann/json.hpp>
#include <utility>


namespace org::openapitools::server::api
{

class  DefaultApi {
public:
    explicit DefaultApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    virtual ~DefaultApi() = default;
    void init();

    static const std::string base;

private:
    void setupRoutes();

    void ping_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void test_get_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void default_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    const std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Helper function to handle unexpected Exceptions during Parameter parsing and validation.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleParsingException(const std::exception& ex) const noexcept;

    /// <summary>
    /// Helper function to handle unexpected Exceptions during processing of the request in handler functions.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleOperationException(const std::exception& ex) const noexcept;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Returns \&quot;pong\&quot; if service is avaliable
    /// </remarks>
    virtual void ping_get(Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// Test
    /// </remarks>
    virtual void test_get(Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* DefaultApi_H_ */

