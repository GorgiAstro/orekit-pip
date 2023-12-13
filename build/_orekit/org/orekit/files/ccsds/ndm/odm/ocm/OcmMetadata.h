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
              class OcmMetadata;
              class ObjectType;
              class OrbitCategory;
              class OcmElements;
              class OpsStatus;
            }
          }
        }
      }
    }
    namespace data {
      class DataContext;
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
                  mid_init$_fe20320dccf187ae,
                  mid_copy_d0fba019b612db04,
                  mid_getAdmMessageLink_1c1fa1e935d6cdcf,
                  mid_getAlternateNames_e62d3bb06d56d7e3,
                  mid_getCatalogName_1c1fa1e935d6cdcf,
                  mid_getCdmMessageLink_1c1fa1e935d6cdcf,
                  mid_getCelestialSource_1c1fa1e935d6cdcf,
                  mid_getConstellation_1c1fa1e935d6cdcf,
                  mid_getCountry_1c1fa1e935d6cdcf,
                  mid_getEopSource_1c1fa1e935d6cdcf,
                  mid_getEpochT0_c325492395d89b24,
                  mid_getInternationalDesignator_1c1fa1e935d6cdcf,
                  mid_getInterpMethodEOP_1c1fa1e935d6cdcf,
                  mid_getNextLeapEpoch_c325492395d89b24,
                  mid_getNextLeapTaimutc_b74f83833fdad017,
                  mid_getNextMessageEpoch_c325492395d89b24,
                  mid_getNextMessageID_1c1fa1e935d6cdcf,
                  mid_getObjectDesignator_1c1fa1e935d6cdcf,
                  mid_getObjectType_d6ea2275c46038b6,
                  mid_getOcmDataElements_e62d3bb06d56d7e3,
                  mid_getOperator_1c1fa1e935d6cdcf,
                  mid_getOpsStatus_2ad1accfe17bcf9c,
                  mid_getOrbitCategory_19fa1df2d5f6df19,
                  mid_getOriginatorAddress_1c1fa1e935d6cdcf,
                  mid_getOriginatorEmail_1c1fa1e935d6cdcf,
                  mid_getOriginatorPOC_1c1fa1e935d6cdcf,
                  mid_getOriginatorPhone_1c1fa1e935d6cdcf,
                  mid_getOriginatorPosition_1c1fa1e935d6cdcf,
                  mid_getOwner_1c1fa1e935d6cdcf,
                  mid_getPreviousMessageEpoch_c325492395d89b24,
                  mid_getPreviousMessageID_1c1fa1e935d6cdcf,
                  mid_getPrmMessageLink_1c1fa1e935d6cdcf,
                  mid_getRdmMessageLink_1c1fa1e935d6cdcf,
                  mid_getSclkOffsetAtEpoch_b74f83833fdad017,
                  mid_getSclkSecPerSISec_b74f83833fdad017,
                  mid_getStartTime_c325492395d89b24,
                  mid_getStopTime_c325492395d89b24,
                  mid_getTaimutcT0_b74f83833fdad017,
                  mid_getTdmMessageLink_1c1fa1e935d6cdcf,
                  mid_getTechAddress_1c1fa1e935d6cdcf,
                  mid_getTechEmail_1c1fa1e935d6cdcf,
                  mid_getTechOrg_1c1fa1e935d6cdcf,
                  mid_getTechPOC_1c1fa1e935d6cdcf,
                  mid_getTechPhone_1c1fa1e935d6cdcf,
                  mid_getTechPosition_1c1fa1e935d6cdcf,
                  mid_getTimeSpan_b74f83833fdad017,
                  mid_getUt1mutcT0_b74f83833fdad017,
                  mid_setAdmMessageLink_734b91ac30d5f9b4,
                  mid_setAlternateNames_0e7c3032c7c93ed3,
                  mid_setCatalogName_734b91ac30d5f9b4,
                  mid_setCdmMessageLink_734b91ac30d5f9b4,
                  mid_setCelestialSource_734b91ac30d5f9b4,
                  mid_setConstellation_734b91ac30d5f9b4,
                  mid_setCountry_734b91ac30d5f9b4,
                  mid_setEopSource_734b91ac30d5f9b4,
                  mid_setEpochT0_02135a6ef25adb4b,
                  mid_setInternationalDesignator_734b91ac30d5f9b4,
                  mid_setInterpMethodEOP_734b91ac30d5f9b4,
                  mid_setNextLeapEpoch_02135a6ef25adb4b,
                  mid_setNextLeapTaimutc_8ba9fe7a847cecad,
                  mid_setNextMessageEpoch_02135a6ef25adb4b,
                  mid_setNextMessageID_734b91ac30d5f9b4,
                  mid_setObjectDesignator_734b91ac30d5f9b4,
                  mid_setObjectType_05187042fbba2328,
                  mid_setOcmDataElements_0e7c3032c7c93ed3,
                  mid_setOperator_734b91ac30d5f9b4,
                  mid_setOpsStatus_1f63eee657c3c122,
                  mid_setOrbitCategory_81230c59907b9101,
                  mid_setOriginatorAddress_734b91ac30d5f9b4,
                  mid_setOriginatorEmail_734b91ac30d5f9b4,
                  mid_setOriginatorPOC_734b91ac30d5f9b4,
                  mid_setOriginatorPhone_734b91ac30d5f9b4,
                  mid_setOriginatorPosition_734b91ac30d5f9b4,
                  mid_setOwner_734b91ac30d5f9b4,
                  mid_setPreviousMessageEpoch_02135a6ef25adb4b,
                  mid_setPreviousMessageID_734b91ac30d5f9b4,
                  mid_setPrmMessageLink_734b91ac30d5f9b4,
                  mid_setRdmMessageLink_734b91ac30d5f9b4,
                  mid_setSclkOffsetAtEpoch_8ba9fe7a847cecad,
                  mid_setSclkSecPerSISec_8ba9fe7a847cecad,
                  mid_setStartTime_02135a6ef25adb4b,
                  mid_setStopTime_02135a6ef25adb4b,
                  mid_setTaimutcT0_8ba9fe7a847cecad,
                  mid_setTdmMessageLink_734b91ac30d5f9b4,
                  mid_setTechAddress_734b91ac30d5f9b4,
                  mid_setTechEmail_734b91ac30d5f9b4,
                  mid_setTechOrg_734b91ac30d5f9b4,
                  mid_setTechPOC_734b91ac30d5f9b4,
                  mid_setTechPhone_734b91ac30d5f9b4,
                  mid_setTechPosition_734b91ac30d5f9b4,
                  mid_setTimeSpan_8ba9fe7a847cecad,
                  mid_setUt1mutcT0_8ba9fe7a847cecad,
                  mid_validate_8ba9fe7a847cecad,
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
