/**
 * ALICE Bookkeeping
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Flp.h
 *
 * Describes an intervention or an event that happened.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Flp_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Flp_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Describes an intervention or an event that happened.
/// </summary>
class  Flp
    : public ModelBase
{
public:
    Flp();
    virtual ~Flp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Flp members

    /// <summary>
    /// Total data volume out from the readout &#39;equipment&#39; component in bytes. Can reach PetaBytes. Updated regularly.
    /// </summary>
    int64_t getBytesEquipmentReadOut() const;
    bool bytesEquipmentReadOutIsSet() const;
    void unsetBytesEquipmentReadOut();

    void setBytesEquipmentReadOut(int64_t value);

    /// <summary>
    /// Total data volume out from the readout &#39;fmq&#39; component in bytes. Can reach PetaBytes. Updated regularly.
    /// </summary>
    int64_t getBytesFairMQReadOut() const;
    bool bytesFairMQReadOutIsSet() const;
    void unsetBytesFairMQReadOut();

    void setBytesFairMQReadOut(int64_t value);

    /// <summary>
    /// Total data volume read out in bytes.
    /// </summary>
    int64_t getBytesProcessed() const;
    bool bytesProcessedIsSet() const;
    void unsetBytesProcessed();

    void setBytesProcessed(int64_t value);

    /// <summary>
    /// Total data volume out from the readout &#39;recording&#39; component in bytes. Can reach PetaBytes. Updated regularly.
    /// </summary>
    int64_t getBytesRecordingReadOut() const;
    bool bytesRecordingReadOutIsSet() const;
    void unsetBytesRecordingReadOut();

    void setBytesRecordingReadOut(int64_t value);

    /// <summary>
    /// Unix timestamp when this entity was created.
    /// </summary>
    int64_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreatedAt();

    void setCreatedAt(int64_t value);

    /// <summary>
    /// FLP hostname.
    /// </summary>
    utility::string_t getHostname() const;
    bool hostnameIsSet() const;
    void unsetHostname();

    void setHostname(const utility::string_t& value);

    /// <summary>
    /// The unique identifier of this entity.
    /// </summary>
    int64_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(int64_t value);

    /// <summary>
    /// Number of subtimeframes processed in this FLP. Updated regularly.
    /// </summary>
    int64_t getNTimeframes() const;
    bool nTimeframesIsSet() const;
    void unsetNTimeframes();

    void setNTimeframes(int64_t value);

    /// <summary>
    /// FLP name.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Unix timestamp when this entity was last updated.
    /// </summary>
    int64_t getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdatedAt();

    void setUpdatedAt(int64_t value);


protected:
    int64_t m_BytesEquipmentReadOut;
    bool m_BytesEquipmentReadOutIsSet;
    int64_t m_BytesFairMQReadOut;
    bool m_BytesFairMQReadOutIsSet;
    int64_t m_BytesProcessed;
    bool m_BytesProcessedIsSet;
    int64_t m_BytesRecordingReadOut;
    bool m_BytesRecordingReadOutIsSet;
    int64_t m_CreatedAt;
    bool m_CreatedAtIsSet;
    utility::string_t m_Hostname;
    bool m_HostnameIsSet;
    int64_t m_Id;
    bool m_IdIsSet;
    int64_t m_NTimeframes;
    bool m_NTimeframesIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    int64_t m_UpdatedAt;
    bool m_UpdatedAtIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Flp_H_ */
