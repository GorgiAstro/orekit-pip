#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OcmMetadata_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OcmMetadata_H

#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitCategory;
              class OcmMetadata;
              class OcmElements;
              class ObjectType;
              class OpsStatus;
            }
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace data {
      class DataContext;
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
                  mid_init$_23625b258f7a7479,
                  mid_copy_ae3cca77cff65dd0,
                  mid_getAdmMessageLink_3cffd47377eca18a,
                  mid_getAlternateNames_0d9551367f7ecdef,
                  mid_getCatalogName_3cffd47377eca18a,
                  mid_getCdmMessageLink_3cffd47377eca18a,
                  mid_getCelestialSource_3cffd47377eca18a,
                  mid_getConstellation_3cffd47377eca18a,
                  mid_getCountry_3cffd47377eca18a,
                  mid_getEopSource_3cffd47377eca18a,
                  mid_getEpochT0_7a97f7e149e79afb,
                  mid_getInternationalDesignator_3cffd47377eca18a,
                  mid_getInterpMethodEOP_3cffd47377eca18a,
                  mid_getNextLeapEpoch_7a97f7e149e79afb,
                  mid_getNextLeapTaimutc_557b8123390d8d0c,
                  mid_getNextMessageEpoch_7a97f7e149e79afb,
                  mid_getNextMessageID_3cffd47377eca18a,
                  mid_getObjectDesignator_3cffd47377eca18a,
                  mid_getObjectType_510913fffa0e993d,
                  mid_getOcmDataElements_0d9551367f7ecdef,
                  mid_getOperator_3cffd47377eca18a,
                  mid_getOpsStatus_b009558e931540f6,
                  mid_getOrbitCategory_f4b1ab49e99d867a,
                  mid_getOriginatorAddress_3cffd47377eca18a,
                  mid_getOriginatorEmail_3cffd47377eca18a,
                  mid_getOriginatorPOC_3cffd47377eca18a,
                  mid_getOriginatorPhone_3cffd47377eca18a,
                  mid_getOriginatorPosition_3cffd47377eca18a,
                  mid_getOwner_3cffd47377eca18a,
                  mid_getPreviousMessageEpoch_7a97f7e149e79afb,
                  mid_getPreviousMessageID_3cffd47377eca18a,
                  mid_getPrmMessageLink_3cffd47377eca18a,
                  mid_getRdmMessageLink_3cffd47377eca18a,
                  mid_getSclkOffsetAtEpoch_557b8123390d8d0c,
                  mid_getSclkSecPerSISec_557b8123390d8d0c,
                  mid_getStartTime_7a97f7e149e79afb,
                  mid_getStopTime_7a97f7e149e79afb,
                  mid_getTaimutcT0_557b8123390d8d0c,
                  mid_getTdmMessageLink_3cffd47377eca18a,
                  mid_getTechAddress_3cffd47377eca18a,
                  mid_getTechEmail_3cffd47377eca18a,
                  mid_getTechOrg_3cffd47377eca18a,
                  mid_getTechPOC_3cffd47377eca18a,
                  mid_getTechPhone_3cffd47377eca18a,
                  mid_getTechPosition_3cffd47377eca18a,
                  mid_getTimeSpan_557b8123390d8d0c,
                  mid_getUt1mutcT0_557b8123390d8d0c,
                  mid_setAdmMessageLink_f5ffdf29129ef90a,
                  mid_setAlternateNames_4ccaedadb068bdeb,
                  mid_setCatalogName_f5ffdf29129ef90a,
                  mid_setCdmMessageLink_f5ffdf29129ef90a,
                  mid_setCelestialSource_f5ffdf29129ef90a,
                  mid_setConstellation_f5ffdf29129ef90a,
                  mid_setCountry_f5ffdf29129ef90a,
                  mid_setEopSource_f5ffdf29129ef90a,
                  mid_setEpochT0_20affcbd28542333,
                  mid_setInternationalDesignator_f5ffdf29129ef90a,
                  mid_setInterpMethodEOP_f5ffdf29129ef90a,
                  mid_setNextLeapEpoch_20affcbd28542333,
                  mid_setNextLeapTaimutc_10f281d777284cea,
                  mid_setNextMessageEpoch_20affcbd28542333,
                  mid_setNextMessageID_f5ffdf29129ef90a,
                  mid_setObjectDesignator_f5ffdf29129ef90a,
                  mid_setObjectType_bdc34300f6ac541f,
                  mid_setOcmDataElements_4ccaedadb068bdeb,
                  mid_setOperator_f5ffdf29129ef90a,
                  mid_setOpsStatus_9f6cf20606cadfd3,
                  mid_setOrbitCategory_0041c1b8bf137b18,
                  mid_setOriginatorAddress_f5ffdf29129ef90a,
                  mid_setOriginatorEmail_f5ffdf29129ef90a,
                  mid_setOriginatorPOC_f5ffdf29129ef90a,
                  mid_setOriginatorPhone_f5ffdf29129ef90a,
                  mid_setOriginatorPosition_f5ffdf29129ef90a,
                  mid_setOwner_f5ffdf29129ef90a,
                  mid_setPreviousMessageEpoch_20affcbd28542333,
                  mid_setPreviousMessageID_f5ffdf29129ef90a,
                  mid_setPrmMessageLink_f5ffdf29129ef90a,
                  mid_setRdmMessageLink_f5ffdf29129ef90a,
                  mid_setSclkOffsetAtEpoch_10f281d777284cea,
                  mid_setSclkSecPerSISec_10f281d777284cea,
                  mid_setStartTime_20affcbd28542333,
                  mid_setStopTime_20affcbd28542333,
                  mid_setTaimutcT0_10f281d777284cea,
                  mid_setTdmMessageLink_f5ffdf29129ef90a,
                  mid_setTechAddress_f5ffdf29129ef90a,
                  mid_setTechEmail_f5ffdf29129ef90a,
                  mid_setTechOrg_f5ffdf29129ef90a,
                  mid_setTechPOC_f5ffdf29129ef90a,
                  mid_setTechPhone_f5ffdf29129ef90a,
                  mid_setTechPosition_f5ffdf29129ef90a,
                  mid_setTimeSpan_10f281d777284cea,
                  mid_setUt1mutcT0_10f281d777284cea,
                  mid_validate_10f281d777284cea,
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
