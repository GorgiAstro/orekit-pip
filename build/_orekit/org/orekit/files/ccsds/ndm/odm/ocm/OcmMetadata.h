#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OcmMetadata_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OcmMetadata_H

#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OcmElements;
              class ObjectType;
              class OcmMetadata;
              class OrbitCategory;
              class OpsStatus;
            }
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              class OcmMetadata : public ::org::orekit::files::ccsds::ndm::odm::OdmMetadata {
               public:
                enum {
                  mid_init$_e28302a82adb77ed,
                  mid_copy_250cb68cc9eeabce,
                  mid_getAdmMessageLink_d2c8eb4129821f0e,
                  mid_getAlternateNames_d751c1a57012b438,
                  mid_getCatalogName_d2c8eb4129821f0e,
                  mid_getCdmMessageLink_d2c8eb4129821f0e,
                  mid_getCelestialSource_d2c8eb4129821f0e,
                  mid_getConstellation_d2c8eb4129821f0e,
                  mid_getCountry_d2c8eb4129821f0e,
                  mid_getEopSource_d2c8eb4129821f0e,
                  mid_getEpochT0_80e11148db499dda,
                  mid_getInternationalDesignator_d2c8eb4129821f0e,
                  mid_getInterpMethodEOP_d2c8eb4129821f0e,
                  mid_getNextLeapEpoch_80e11148db499dda,
                  mid_getNextLeapTaimutc_9981f74b2d109da6,
                  mid_getNextMessageEpoch_80e11148db499dda,
                  mid_getNextMessageID_d2c8eb4129821f0e,
                  mid_getObjectDesignator_d2c8eb4129821f0e,
                  mid_getObjectType_4afc147acbd215f9,
                  mid_getOcmDataElements_d751c1a57012b438,
                  mid_getOperator_d2c8eb4129821f0e,
                  mid_getOpsStatus_90d691647ed21ffc,
                  mid_getOrbitCategory_6b2c9b9970490924,
                  mid_getOriginatorAddress_d2c8eb4129821f0e,
                  mid_getOriginatorEmail_d2c8eb4129821f0e,
                  mid_getOriginatorPOC_d2c8eb4129821f0e,
                  mid_getOriginatorPhone_d2c8eb4129821f0e,
                  mid_getOriginatorPosition_d2c8eb4129821f0e,
                  mid_getOwner_d2c8eb4129821f0e,
                  mid_getPreviousMessageEpoch_80e11148db499dda,
                  mid_getPreviousMessageID_d2c8eb4129821f0e,
                  mid_getPrmMessageLink_d2c8eb4129821f0e,
                  mid_getRdmMessageLink_d2c8eb4129821f0e,
                  mid_getSclkOffsetAtEpoch_9981f74b2d109da6,
                  mid_getSclkSecPerSISec_9981f74b2d109da6,
                  mid_getStartTime_80e11148db499dda,
                  mid_getStopTime_80e11148db499dda,
                  mid_getTaimutcT0_9981f74b2d109da6,
                  mid_getTdmMessageLink_d2c8eb4129821f0e,
                  mid_getTechAddress_d2c8eb4129821f0e,
                  mid_getTechEmail_d2c8eb4129821f0e,
                  mid_getTechOrg_d2c8eb4129821f0e,
                  mid_getTechPOC_d2c8eb4129821f0e,
                  mid_getTechPhone_d2c8eb4129821f0e,
                  mid_getTechPosition_d2c8eb4129821f0e,
                  mid_getTimeSpan_9981f74b2d109da6,
                  mid_getUt1mutcT0_9981f74b2d109da6,
                  mid_setAdmMessageLink_105e1eadb709d9ac,
                  mid_setAlternateNames_aa335fea495d60e0,
                  mid_setCatalogName_105e1eadb709d9ac,
                  mid_setCdmMessageLink_105e1eadb709d9ac,
                  mid_setCelestialSource_105e1eadb709d9ac,
                  mid_setConstellation_105e1eadb709d9ac,
                  mid_setCountry_105e1eadb709d9ac,
                  mid_setEopSource_105e1eadb709d9ac,
                  mid_setEpochT0_8497861b879c83f7,
                  mid_setInternationalDesignator_105e1eadb709d9ac,
                  mid_setInterpMethodEOP_105e1eadb709d9ac,
                  mid_setNextLeapEpoch_8497861b879c83f7,
                  mid_setNextLeapTaimutc_1ad26e8c8c0cd65b,
                  mid_setNextMessageEpoch_8497861b879c83f7,
                  mid_setNextMessageID_105e1eadb709d9ac,
                  mid_setObjectDesignator_105e1eadb709d9ac,
                  mid_setObjectType_f747a3e328e2d2f7,
                  mid_setOcmDataElements_aa335fea495d60e0,
                  mid_setOperator_105e1eadb709d9ac,
                  mid_setOpsStatus_082afa229c2f360e,
                  mid_setOrbitCategory_278a97dc23916565,
                  mid_setOriginatorAddress_105e1eadb709d9ac,
                  mid_setOriginatorEmail_105e1eadb709d9ac,
                  mid_setOriginatorPOC_105e1eadb709d9ac,
                  mid_setOriginatorPhone_105e1eadb709d9ac,
                  mid_setOriginatorPosition_105e1eadb709d9ac,
                  mid_setOwner_105e1eadb709d9ac,
                  mid_setPreviousMessageEpoch_8497861b879c83f7,
                  mid_setPreviousMessageID_105e1eadb709d9ac,
                  mid_setPrmMessageLink_105e1eadb709d9ac,
                  mid_setRdmMessageLink_105e1eadb709d9ac,
                  mid_setSclkOffsetAtEpoch_1ad26e8c8c0cd65b,
                  mid_setSclkSecPerSISec_1ad26e8c8c0cd65b,
                  mid_setStartTime_8497861b879c83f7,
                  mid_setStopTime_8497861b879c83f7,
                  mid_setTaimutcT0_1ad26e8c8c0cd65b,
                  mid_setTdmMessageLink_105e1eadb709d9ac,
                  mid_setTechAddress_105e1eadb709d9ac,
                  mid_setTechEmail_105e1eadb709d9ac,
                  mid_setTechOrg_105e1eadb709d9ac,
                  mid_setTechPOC_105e1eadb709d9ac,
                  mid_setTechPhone_105e1eadb709d9ac,
                  mid_setTechPosition_105e1eadb709d9ac,
                  mid_setTimeSpan_1ad26e8c8c0cd65b,
                  mid_setUt1mutcT0_1ad26e8c8c0cd65b,
                  mid_validate_1ad26e8c8c0cd65b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OcmMetadata(jobject obj) : ::org::orekit::files::ccsds::ndm::odm::OdmMetadata(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OcmMetadata(const OcmMetadata& obj) : ::org::orekit::files::ccsds::ndm::odm::OdmMetadata(obj) {}

                static jdouble DEFAULT_SCLK_OFFSET_AT_EPOCH;
                static jdouble DEFAULT_SCLK_SEC_PER_SI_SEC;

                OcmMetadata(const ::org::orekit::data::DataContext &);

                OcmMetadata copy(jdouble) const;
                ::java::lang::String getAdmMessageLink() const;
                ::java::util::List getAlternateNames() const;
                ::java::lang::String getCatalogName() const;
                ::java::lang::String getCdmMessageLink() const;
                ::java::lang::String getCelestialSource() const;
                ::java::lang::String getConstellation() const;
                ::java::lang::String getCountry() const;
                ::java::lang::String getEopSource() const;
                ::org::orekit::time::AbsoluteDate getEpochT0() const;
                ::java::lang::String getInternationalDesignator() const;
                ::java::lang::String getInterpMethodEOP() const;
                ::org::orekit::time::AbsoluteDate getNextLeapEpoch() const;
                jdouble getNextLeapTaimutc() const;
                ::org::orekit::time::AbsoluteDate getNextMessageEpoch() const;
                ::java::lang::String getNextMessageID() const;
                ::java::lang::String getObjectDesignator() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType getObjectType() const;
                ::java::util::List getOcmDataElements() const;
                ::java::lang::String getOperator() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus getOpsStatus() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory getOrbitCategory() const;
                ::java::lang::String getOriginatorAddress() const;
                ::java::lang::String getOriginatorEmail() const;
                ::java::lang::String getOriginatorPOC() const;
                ::java::lang::String getOriginatorPhone() const;
                ::java::lang::String getOriginatorPosition() const;
                ::java::lang::String getOwner() const;
                ::org::orekit::time::AbsoluteDate getPreviousMessageEpoch() const;
                ::java::lang::String getPreviousMessageID() const;
                ::java::lang::String getPrmMessageLink() const;
                ::java::lang::String getRdmMessageLink() const;
                jdouble getSclkOffsetAtEpoch() const;
                jdouble getSclkSecPerSISec() const;
                ::org::orekit::time::AbsoluteDate getStartTime() const;
                ::org::orekit::time::AbsoluteDate getStopTime() const;
                jdouble getTaimutcT0() const;
                ::java::lang::String getTdmMessageLink() const;
                ::java::lang::String getTechAddress() const;
                ::java::lang::String getTechEmail() const;
                ::java::lang::String getTechOrg() const;
                ::java::lang::String getTechPOC() const;
                ::java::lang::String getTechPhone() const;
                ::java::lang::String getTechPosition() const;
                jdouble getTimeSpan() const;
                jdouble getUt1mutcT0() const;
                void setAdmMessageLink(const ::java::lang::String &) const;
                void setAlternateNames(const ::java::util::List &) const;
                void setCatalogName(const ::java::lang::String &) const;
                void setCdmMessageLink(const ::java::lang::String &) const;
                void setCelestialSource(const ::java::lang::String &) const;
                void setConstellation(const ::java::lang::String &) const;
                void setCountry(const ::java::lang::String &) const;
                void setEopSource(const ::java::lang::String &) const;
                void setEpochT0(const ::org::orekit::time::AbsoluteDate &) const;
                void setInternationalDesignator(const ::java::lang::String &) const;
                void setInterpMethodEOP(const ::java::lang::String &) const;
                void setNextLeapEpoch(const ::org::orekit::time::AbsoluteDate &) const;
                void setNextLeapTaimutc(jdouble) const;
                void setNextMessageEpoch(const ::org::orekit::time::AbsoluteDate &) const;
                void setNextMessageID(const ::java::lang::String &) const;
                void setObjectDesignator(const ::java::lang::String &) const;
                void setObjectType(const ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType &) const;
                void setOcmDataElements(const ::java::util::List &) const;
                void setOperator(const ::java::lang::String &) const;
                void setOpsStatus(const ::org::orekit::files::ccsds::ndm::odm::ocm::OpsStatus &) const;
                void setOrbitCategory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory &) const;
                void setOriginatorAddress(const ::java::lang::String &) const;
                void setOriginatorEmail(const ::java::lang::String &) const;
                void setOriginatorPOC(const ::java::lang::String &) const;
                void setOriginatorPhone(const ::java::lang::String &) const;
                void setOriginatorPosition(const ::java::lang::String &) const;
                void setOwner(const ::java::lang::String &) const;
                void setPreviousMessageEpoch(const ::org::orekit::time::AbsoluteDate &) const;
                void setPreviousMessageID(const ::java::lang::String &) const;
                void setPrmMessageLink(const ::java::lang::String &) const;
                void setRdmMessageLink(const ::java::lang::String &) const;
                void setSclkOffsetAtEpoch(jdouble) const;
                void setSclkSecPerSISec(jdouble) const;
                void setStartTime(const ::org::orekit::time::AbsoluteDate &) const;
                void setStopTime(const ::org::orekit::time::AbsoluteDate &) const;
                void setTaimutcT0(jdouble) const;
                void setTdmMessageLink(const ::java::lang::String &) const;
                void setTechAddress(const ::java::lang::String &) const;
                void setTechEmail(const ::java::lang::String &) const;
                void setTechOrg(const ::java::lang::String &) const;
                void setTechPOC(const ::java::lang::String &) const;
                void setTechPhone(const ::java::lang::String &) const;
                void setTechPosition(const ::java::lang::String &) const;
                void setTimeSpan(jdouble) const;
                void setUt1mutcT0(jdouble) const;
                void validate(jdouble) const;
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(OcmMetadata);
              extern PyTypeObject *PY_TYPE(OcmMetadata);

              class t_OcmMetadata {
              public:
                PyObject_HEAD
                OcmMetadata object;
                static PyObject *wrap_Object(const OcmMetadata&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
