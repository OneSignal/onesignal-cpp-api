/**
 * OneSignal
 * A powerful way to send personalized messages at scale and build effective customer engagement strategies. Learn more at onesignal.com
 *
 * The version of the OpenAPI document: 1.0.2
 * Contact: devrel@onesignal.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CppRestOneSignalAPIClient/model/FilterExpressions.h"

namespace com {
namespace onesignal {
namespace client {
namespace model {



FilterExpressions::FilterExpressions()
{
    m_Field = utility::conversions::to_string_t("");
    m_FieldIsSet = false;
    m_Key = utility::conversions::to_string_t("");
    m_KeyIsSet = false;
    m_Value = utility::conversions::to_string_t("");
    m_ValueIsSet = false;
    m_Relation = utility::conversions::to_string_t("");
    m_RelationIsSet = false;
    m_r_operator = utility::conversions::to_string_t("");
    m_r_operatorIsSet = false;
}

FilterExpressions::~FilterExpressions()
{
}

void FilterExpressions::validate()
{
    // TODO: implement validation
}

web::json::value FilterExpressions::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FieldIsSet)
    {
        val[utility::conversions::to_string_t(U("field"))] = ModelBase::toJson(m_Field);
    }
    if(m_KeyIsSet)
    {
        val[utility::conversions::to_string_t(U("key"))] = ModelBase::toJson(m_Key);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t(U("value"))] = ModelBase::toJson(m_Value);
    }
    if(m_RelationIsSet)
    {
        val[utility::conversions::to_string_t(U("relation"))] = ModelBase::toJson(m_Relation);
    }
    if(m_r_operatorIsSet)
    {
        val[utility::conversions::to_string_t(U("operator"))] = ModelBase::toJson(m_r_operator);
    }

    return val;
}

bool FilterExpressions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("field"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("field")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_field;
            ok &= ModelBase::fromJson(fieldValue, refVal_field);
            setField(refVal_field);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("key"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("key")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_key;
            ok &= ModelBase::fromJson(fieldValue, refVal_key);
            setKey(refVal_key);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("value"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("value")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_value;
            ok &= ModelBase::fromJson(fieldValue, refVal_value);
            setValue(refVal_value);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("relation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("relation")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_relation;
            ok &= ModelBase::fromJson(fieldValue, refVal_relation);
            setRelation(refVal_relation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("operator"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("operator")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_operator;
            ok &= ModelBase::fromJson(fieldValue, refVal_operator);
            setROperator(refVal_operator);
        }
    }
    return ok;
}

void FilterExpressions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_FieldIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("field")), m_Field));
    }
    if(m_KeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("key")), m_Key));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("value")), m_Value));
    }
    if(m_RelationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("relation")), m_Relation));
    }
    if(m_r_operatorIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("operator")), m_r_operator));
    }
}

bool FilterExpressions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("field"))))
    {
        utility::string_t refVal_field;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("field"))), refVal_field );
        setField(refVal_field);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("key"))))
    {
        utility::string_t refVal_key;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("key"))), refVal_key );
        setKey(refVal_key);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("value"))))
    {
        utility::string_t refVal_value;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("value"))), refVal_value );
        setValue(refVal_value);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("relation"))))
    {
        utility::string_t refVal_relation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("relation"))), refVal_relation );
        setRelation(refVal_relation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("operator"))))
    {
        utility::string_t refVal_operator;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("operator"))), refVal_operator );
        setROperator(refVal_operator);
    }
    return ok;
}

utility::string_t FilterExpressions::getField() const
{
    return m_Field;
}

void FilterExpressions::setField(const utility::string_t& value)
{
    m_Field = value;
    m_FieldIsSet = true;
}

bool FilterExpressions::fieldIsSet() const
{
    return m_FieldIsSet;
}

void FilterExpressions::unsetField()
{
    m_FieldIsSet = false;
}
utility::string_t FilterExpressions::getKey() const
{
    return m_Key;
}

void FilterExpressions::setKey(const utility::string_t& value)
{
    m_Key = value;
    m_KeyIsSet = true;
}

bool FilterExpressions::keyIsSet() const
{
    return m_KeyIsSet;
}

void FilterExpressions::unsetKey()
{
    m_KeyIsSet = false;
}
utility::string_t FilterExpressions::getValue() const
{
    return m_Value;
}

void FilterExpressions::setValue(const utility::string_t& value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool FilterExpressions::valueIsSet() const
{
    return m_ValueIsSet;
}

void FilterExpressions::unsetValue()
{
    m_ValueIsSet = false;
}
utility::string_t FilterExpressions::getRelation() const
{
    return m_Relation;
}

void FilterExpressions::setRelation(const utility::string_t& value)
{
    m_Relation = value;
    m_RelationIsSet = true;
}

bool FilterExpressions::relationIsSet() const
{
    return m_RelationIsSet;
}

void FilterExpressions::unsetRelation()
{
    m_RelationIsSet = false;
}
utility::string_t FilterExpressions::getROperator() const
{
    return m_r_operator;
}

void FilterExpressions::setROperator(const utility::string_t& value)
{
    m_r_operator = value;
    m_r_operatorIsSet = true;
}

bool FilterExpressions::rOperatorIsSet() const
{
    return m_r_operatorIsSet;
}

void FilterExpressions::unsetr_operator()
{
    m_r_operatorIsSet = false;
}
}
}
}
}


