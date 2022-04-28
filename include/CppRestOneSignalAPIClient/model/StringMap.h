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

/*
 * StringMap.h
 *
 * 
 */

#ifndef COM_ONESIGNAL_CLIENT_MODEL_StringMap_H_
#define COM_ONESIGNAL_CLIENT_MODEL_StringMap_H_


#include "CppRestOneSignalAPIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace onesignal {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  StringMap
    : public ModelBase
{
public:
    StringMap();
    virtual ~StringMap();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// StringMap members

    /// <summary>
    /// Text in English.  Will be used as a fallback
    /// </summary>
    utility::string_t getEn() const;
    bool enIsSet() const;
    void unsetEn();

    void setEn(const utility::string_t& value);

    /// <summary>
    /// Text in Arabic.
    /// </summary>
    utility::string_t getAr() const;
    bool arIsSet() const;
    void unsetAr();

    void setAr(const utility::string_t& value);

    /// <summary>
    /// Text in Bosnian.
    /// </summary>
    utility::string_t getBs() const;
    bool bsIsSet() const;
    void unsetBs();

    void setBs(const utility::string_t& value);

    /// <summary>
    /// Text in Bulgarian.
    /// </summary>
    utility::string_t getBg() const;
    bool bgIsSet() const;
    void unsetBg();

    void setBg(const utility::string_t& value);

    /// <summary>
    /// Text in Catalan.
    /// </summary>
    utility::string_t getCa() const;
    bool caIsSet() const;
    void unsetCa();

    void setCa(const utility::string_t& value);

    /// <summary>
    /// Text in Chinese (Simplified).
    /// </summary>
    utility::string_t getZhHans() const;
    bool zhHansIsSet() const;
    void unsetZh_Hans();

    void setZhHans(const utility::string_t& value);

    /// <summary>
    /// Text in Chinese (Traditional).
    /// </summary>
    utility::string_t getZhHant() const;
    bool zhHantIsSet() const;
    void unsetZh_Hant();

    void setZhHant(const utility::string_t& value);

    /// <summary>
    /// Alias for zh-Hans.
    /// </summary>
    utility::string_t getZh() const;
    bool zhIsSet() const;
    void unsetZh();

    void setZh(const utility::string_t& value);

    /// <summary>
    /// Text in Croatian.
    /// </summary>
    utility::string_t getHr() const;
    bool hrIsSet() const;
    void unsetHr();

    void setHr(const utility::string_t& value);

    /// <summary>
    /// Text in Czech.
    /// </summary>
    utility::string_t getCs() const;
    bool csIsSet() const;
    void unsetCs();

    void setCs(const utility::string_t& value);

    /// <summary>
    /// Text in Danish.
    /// </summary>
    utility::string_t getDa() const;
    bool daIsSet() const;
    void unsetDa();

    void setDa(const utility::string_t& value);

    /// <summary>
    /// Text in Dutch.
    /// </summary>
    utility::string_t getNl() const;
    bool nlIsSet() const;
    void unsetNl();

    void setNl(const utility::string_t& value);

    /// <summary>
    /// Text in Estonian.
    /// </summary>
    utility::string_t getEt() const;
    bool etIsSet() const;
    void unsetEt();

    void setEt(const utility::string_t& value);

    /// <summary>
    /// Text in Finnish.
    /// </summary>
    utility::string_t getFi() const;
    bool fiIsSet() const;
    void unsetFi();

    void setFi(const utility::string_t& value);

    /// <summary>
    /// Text in French.
    /// </summary>
    utility::string_t getFr() const;
    bool frIsSet() const;
    void unsetFr();

    void setFr(const utility::string_t& value);

    /// <summary>
    /// Text in Georgian.
    /// </summary>
    utility::string_t getKa() const;
    bool kaIsSet() const;
    void unsetKa();

    void setKa(const utility::string_t& value);

    /// <summary>
    /// Text in German.
    /// </summary>
    utility::string_t getDe() const;
    bool deIsSet() const;
    void unsetDe();

    void setDe(const utility::string_t& value);

    /// <summary>
    /// Text in Greek.
    /// </summary>
    utility::string_t getEl() const;
    bool elIsSet() const;
    void unsetEl();

    void setEl(const utility::string_t& value);

    /// <summary>
    /// Text in Hindi.
    /// </summary>
    utility::string_t getHi() const;
    bool hiIsSet() const;
    void unsetHi();

    void setHi(const utility::string_t& value);

    /// <summary>
    /// Text in Hebrew.
    /// </summary>
    utility::string_t getHe() const;
    bool heIsSet() const;
    void unsetHe();

    void setHe(const utility::string_t& value);

    /// <summary>
    /// Text in Hungarian.
    /// </summary>
    utility::string_t getHu() const;
    bool huIsSet() const;
    void unsetHu();

    void setHu(const utility::string_t& value);

    /// <summary>
    /// Text in Indonesian.
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// Text in Italian.
    /// </summary>
    utility::string_t getIt() const;
    bool itIsSet() const;
    void unsetIt();

    void setIt(const utility::string_t& value);

    /// <summary>
    /// Text in Japanese.
    /// </summary>
    utility::string_t getJa() const;
    bool jaIsSet() const;
    void unsetJa();

    void setJa(const utility::string_t& value);

    /// <summary>
    /// Text in Korean.
    /// </summary>
    utility::string_t getKo() const;
    bool koIsSet() const;
    void unsetKo();

    void setKo(const utility::string_t& value);

    /// <summary>
    /// Text in Latvian.
    /// </summary>
    utility::string_t getLv() const;
    bool lvIsSet() const;
    void unsetLv();

    void setLv(const utility::string_t& value);

    /// <summary>
    /// Text in Lithuanian.
    /// </summary>
    utility::string_t getLt() const;
    bool ltIsSet() const;
    void unsetLt();

    void setLt(const utility::string_t& value);

    /// <summary>
    /// Text in Malay.
    /// </summary>
    utility::string_t getMs() const;
    bool msIsSet() const;
    void unsetMs();

    void setMs(const utility::string_t& value);

    /// <summary>
    /// Text in Norwegian.
    /// </summary>
    utility::string_t getNb() const;
    bool nbIsSet() const;
    void unsetNb();

    void setNb(const utility::string_t& value);

    /// <summary>
    /// Text in Polish.
    /// </summary>
    utility::string_t getPl() const;
    bool plIsSet() const;
    void unsetPl();

    void setPl(const utility::string_t& value);

    /// <summary>
    /// Text in Persian.
    /// </summary>
    utility::string_t getFa() const;
    bool faIsSet() const;
    void unsetFa();

    void setFa(const utility::string_t& value);

    /// <summary>
    /// Text in Portugese.
    /// </summary>
    utility::string_t getPt() const;
    bool ptIsSet() const;
    void unsetPt();

    void setPt(const utility::string_t& value);

    /// <summary>
    /// Text in Punjabi.
    /// </summary>
    utility::string_t getPa() const;
    bool paIsSet() const;
    void unsetPa();

    void setPa(const utility::string_t& value);

    /// <summary>
    /// Text in Romanian.
    /// </summary>
    utility::string_t getRo() const;
    bool roIsSet() const;
    void unsetRo();

    void setRo(const utility::string_t& value);

    /// <summary>
    /// Text in Russian.
    /// </summary>
    utility::string_t getRu() const;
    bool ruIsSet() const;
    void unsetRu();

    void setRu(const utility::string_t& value);

    /// <summary>
    /// Text in Serbian.
    /// </summary>
    utility::string_t getSr() const;
    bool srIsSet() const;
    void unsetSr();

    void setSr(const utility::string_t& value);

    /// <summary>
    /// Text in Slovak.
    /// </summary>
    utility::string_t getSk() const;
    bool skIsSet() const;
    void unsetSk();

    void setSk(const utility::string_t& value);

    /// <summary>
    /// Text in Spanish.
    /// </summary>
    utility::string_t getEs() const;
    bool esIsSet() const;
    void unsetEs();

    void setEs(const utility::string_t& value);

    /// <summary>
    /// Text in Swedish.
    /// </summary>
    utility::string_t getSv() const;
    bool svIsSet() const;
    void unsetSv();

    void setSv(const utility::string_t& value);

    /// <summary>
    /// Text in Thai.
    /// </summary>
    utility::string_t getTh() const;
    bool thIsSet() const;
    void unsetTh();

    void setTh(const utility::string_t& value);

    /// <summary>
    /// Text in Turkish.
    /// </summary>
    utility::string_t getTr() const;
    bool trIsSet() const;
    void unsetTr();

    void setTr(const utility::string_t& value);

    /// <summary>
    /// Text in Ukrainian.
    /// </summary>
    utility::string_t getUk() const;
    bool ukIsSet() const;
    void unsetUk();

    void setUk(const utility::string_t& value);

    /// <summary>
    /// Text in Vietnamese.
    /// </summary>
    utility::string_t getVi() const;
    bool viIsSet() const;
    void unsetVi();

    void setVi(const utility::string_t& value);


protected:
    utility::string_t m_En;
    bool m_EnIsSet;
    utility::string_t m_Ar;
    bool m_ArIsSet;
    utility::string_t m_Bs;
    bool m_BsIsSet;
    utility::string_t m_Bg;
    bool m_BgIsSet;
    utility::string_t m_Ca;
    bool m_CaIsSet;
    utility::string_t m_Zh_Hans;
    bool m_Zh_HansIsSet;
    utility::string_t m_Zh_Hant;
    bool m_Zh_HantIsSet;
    utility::string_t m_Zh;
    bool m_ZhIsSet;
    utility::string_t m_Hr;
    bool m_HrIsSet;
    utility::string_t m_Cs;
    bool m_CsIsSet;
    utility::string_t m_Da;
    bool m_DaIsSet;
    utility::string_t m_Nl;
    bool m_NlIsSet;
    utility::string_t m_Et;
    bool m_EtIsSet;
    utility::string_t m_Fi;
    bool m_FiIsSet;
    utility::string_t m_Fr;
    bool m_FrIsSet;
    utility::string_t m_Ka;
    bool m_KaIsSet;
    utility::string_t m_De;
    bool m_DeIsSet;
    utility::string_t m_El;
    bool m_ElIsSet;
    utility::string_t m_Hi;
    bool m_HiIsSet;
    utility::string_t m_He;
    bool m_HeIsSet;
    utility::string_t m_Hu;
    bool m_HuIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_It;
    bool m_ItIsSet;
    utility::string_t m_Ja;
    bool m_JaIsSet;
    utility::string_t m_Ko;
    bool m_KoIsSet;
    utility::string_t m_Lv;
    bool m_LvIsSet;
    utility::string_t m_Lt;
    bool m_LtIsSet;
    utility::string_t m_Ms;
    bool m_MsIsSet;
    utility::string_t m_Nb;
    bool m_NbIsSet;
    utility::string_t m_Pl;
    bool m_PlIsSet;
    utility::string_t m_Fa;
    bool m_FaIsSet;
    utility::string_t m_Pt;
    bool m_PtIsSet;
    utility::string_t m_Pa;
    bool m_PaIsSet;
    utility::string_t m_Ro;
    bool m_RoIsSet;
    utility::string_t m_Ru;
    bool m_RuIsSet;
    utility::string_t m_Sr;
    bool m_SrIsSet;
    utility::string_t m_Sk;
    bool m_SkIsSet;
    utility::string_t m_Es;
    bool m_EsIsSet;
    utility::string_t m_Sv;
    bool m_SvIsSet;
    utility::string_t m_Th;
    bool m_ThIsSet;
    utility::string_t m_Tr;
    bool m_TrIsSet;
    utility::string_t m_Uk;
    bool m_UkIsSet;
    utility::string_t m_Vi;
    bool m_ViIsSet;
};


}
}
}
}

#endif /* COM_ONESIGNAL_CLIENT_MODEL_StringMap_H_ */
