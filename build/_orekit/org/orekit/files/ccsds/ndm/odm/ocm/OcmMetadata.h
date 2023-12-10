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
              class OcmElements;
              class OrbitCategory;
              class ObjectType;
              class OpsStatus;
              class OcmMetadata;
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
                  mid_init$_959fe257032a39c0,
                  mid_copy_3a8941101d7affdc,
                  mid_getAdmMessageLink_0090f7797e403f43,
                  mid_getAlternateNames_a6156df500549a58,
                  mid_getCatalogName_0090f7797e403f43,
                  mid_getCdmMessageLink_0090f7797e403f43,
                  mid_getCelestialSource_0090f7797e403f43,
                  mid_getConstellation_0090f7797e403f43,
                  mid_getCountry_0090f7797e403f43,
                  mid_getEopSource_0090f7797e403f43,
                  mid_getEpochT0_aaa854c403487cf3,
                  mid_getInternationalDesignator_0090f7797e403f43,
                  mid_getInterpMethodEOP_0090f7797e403f43,
                  mid_getNextLeapEpoch_aaa854c403487cf3,
                  mid_getNextLeapTaimutc_456d9a2f64d6b28d,
                  mid_getNextMessageEpoch_aaa854c403487cf3,
                  mid_getNextMessageID_0090f7797e403f43,
                  mid_getObjectDesignator_0090f7797e403f43,
                  mid_getObjectType_8be2b7ef61e9b842,
                  mid_getOcmDataElements_a6156df500549a58,
                  mid_getOperator_0090f7797e403f43,
                  mid_getOpsStatus_3fd8e869929bb8f2,
                  mid_getOrbitCategory_fd22d623233f100a,
                  mid_getOriginatorAddress_0090f7797e403f43,
                  mid_getOriginatorEmail_0090f7797e403f43,
                  mid_getOriginatorPOC_0090f7797e403f43,
                  mid_getOriginatorPhone_0090f7797e403f43,
                  mid_getOriginatorPosition_0090f7797e403f43,
                  mid_getOwner_0090f7797e403f43,
                  mid_getPreviousMessageEpoch_aaa854c403487cf3,
                  mid_getPreviousMessageID_0090f7797e403f43,
                  mid_getPrmMessageLink_0090f7797e403f43,
                  mid_getRdmMessageLink_0090f7797e403f43,
                  mid_getSclkOffsetAtEpoch_456d9a2f64d6b28d,
                  mid_getSclkSecPerSISec_456d9a2f64d6b28d,
                  mid_getStartTime_aaa854c403487cf3,
                  mid_getStopTime_aaa854c403487cf3,
                  mid_getTaimutcT0_456d9a2f64d6b28d,
                  mid_getTdmMessageLink_0090f7797e403f43,
                  mid_getTechAddress_0090f7797e403f43,
                  mid_getTechEmail_0090f7797e403f43,
                  mid_getTechOrg_0090f7797e403f43,
                  mid_getTechPOC_0090f7797e403f43,
                  mid_getTechPhone_0090f7797e403f43,
                  mid_getTechPosition_0090f7797e403f43,
                  mid_getTimeSpan_456d9a2f64d6b28d,
                  mid_getUt1mutcT0_456d9a2f64d6b28d,
                  mid_setAdmMessageLink_e939c6558ae8d313,
                  mid_setAlternateNames_65de9727799c5641,
                  mid_setCatalogName_e939c6558ae8d313,
                  mid_setCdmMessageLink_e939c6558ae8d313,
                  mid_setCelestialSource_e939c6558ae8d313,
                  mid_setConstellation_e939c6558ae8d313,
                  mid_setCountry_e939c6558ae8d313,
                  mid_setEopSource_e939c6558ae8d313,
                  mid_setEpochT0_e82d68cd9f886886,
                  mid_setInternationalDesignator_e939c6558ae8d313,
                  mid_setInterpMethodEOP_e939c6558ae8d313,
                  mid_setNextLeapEpoch_e82d68cd9f886886,
                  mid_setNextLeapTaimutc_77e0f9a1f260e2e5,
                  mid_setNextMessageEpoch_e82d68cd9f886886,
                  mid_setNextMessageID_e939c6558ae8d313,
                  mid_setObjectDesignator_e939c6558ae8d313,
                  mid_setObjectType_221568b09df5e761,
                  mid_setOcmDataElements_65de9727799c5641,
                  mid_setOperator_e939c6558ae8d313,
                  mid_setOpsStatus_86966f3fd1c4a467,
                  mid_setOrbitCategory_931113e0e8c63a93,
                  mid_setOriginatorAddress_e939c6558ae8d313,
                  mid_setOriginatorEmail_e939c6558ae8d313,
                  mid_setOriginatorPOC_e939c6558ae8d313,
                  mid_setOriginatorPhone_e939c6558ae8d313,
                  mid_setOriginatorPosition_e939c6558ae8d313,
                  mid_setOwner_e939c6558ae8d313,
                  mid_setPreviousMessageEpoch_e82d68cd9f886886,
                  mid_setPreviousMessageID_e939c6558ae8d313,
                  mid_setPrmMessageLink_e939c6558ae8d313,
                  mid_setRdmMessageLink_e939c6558ae8d313,
                  mid_setSclkOffsetAtEpoch_77e0f9a1f260e2e5,
                  mid_setSclkSecPerSISec_77e0f9a1f260e2e5,
                  mid_setStartTime_e82d68cd9f886886,
                  mid_setStopTime_e82d68cd9f886886,
                  mid_setTaimutcT0_77e0f9a1f260e2e5,
                  mid_setTdmMessageLink_e939c6558ae8d313,
                  mid_setTechAddress_e939c6558ae8d313,
                  mid_setTechEmail_e939c6558ae8d313,
                  mid_setTechOrg_e939c6558ae8d313,
                  mid_setTechPOC_e939c6558ae8d313,
                  mid_setTechPhone_e939c6558ae8d313,
                  mid_setTechPosition_e939c6558ae8d313,
                  mid_setTimeSpan_77e0f9a1f260e2e5,
                  mid_setUt1mutcT0_77e0f9a1f260e2e5,
                  mid_validate_77e0f9a1f260e2e5,
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
