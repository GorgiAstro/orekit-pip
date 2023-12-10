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
              class ObjectType;
              class OpsStatus;
              class OcmMetadata;
              class OcmElements;
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
                  mid_init$_47d99c12e4a42886,
                  mid_copy_217e0239a9af5a4c,
                  mid_getAdmMessageLink_11b109bd155ca898,
                  mid_getAlternateNames_2afa36052df4765d,
                  mid_getCatalogName_11b109bd155ca898,
                  mid_getCdmMessageLink_11b109bd155ca898,
                  mid_getCelestialSource_11b109bd155ca898,
                  mid_getConstellation_11b109bd155ca898,
                  mid_getCountry_11b109bd155ca898,
                  mid_getEopSource_11b109bd155ca898,
                  mid_getEpochT0_85703d13e302437e,
                  mid_getInternationalDesignator_11b109bd155ca898,
                  mid_getInterpMethodEOP_11b109bd155ca898,
                  mid_getNextLeapEpoch_85703d13e302437e,
                  mid_getNextLeapTaimutc_dff5885c2c873297,
                  mid_getNextMessageEpoch_85703d13e302437e,
                  mid_getNextMessageID_11b109bd155ca898,
                  mid_getObjectDesignator_11b109bd155ca898,
                  mid_getObjectType_1e10bdb6e1d917a7,
                  mid_getOcmDataElements_2afa36052df4765d,
                  mid_getOperator_11b109bd155ca898,
                  mid_getOpsStatus_c1db7201a141079e,
                  mid_getOrbitCategory_d0e32e55c78093d0,
                  mid_getOriginatorAddress_11b109bd155ca898,
                  mid_getOriginatorEmail_11b109bd155ca898,
                  mid_getOriginatorPOC_11b109bd155ca898,
                  mid_getOriginatorPhone_11b109bd155ca898,
                  mid_getOriginatorPosition_11b109bd155ca898,
                  mid_getOwner_11b109bd155ca898,
                  mid_getPreviousMessageEpoch_85703d13e302437e,
                  mid_getPreviousMessageID_11b109bd155ca898,
                  mid_getPrmMessageLink_11b109bd155ca898,
                  mid_getRdmMessageLink_11b109bd155ca898,
                  mid_getSclkOffsetAtEpoch_dff5885c2c873297,
                  mid_getSclkSecPerSISec_dff5885c2c873297,
                  mid_getStartTime_85703d13e302437e,
                  mid_getStopTime_85703d13e302437e,
                  mid_getTaimutcT0_dff5885c2c873297,
                  mid_getTdmMessageLink_11b109bd155ca898,
                  mid_getTechAddress_11b109bd155ca898,
                  mid_getTechEmail_11b109bd155ca898,
                  mid_getTechOrg_11b109bd155ca898,
                  mid_getTechPOC_11b109bd155ca898,
                  mid_getTechPhone_11b109bd155ca898,
                  mid_getTechPosition_11b109bd155ca898,
                  mid_getTimeSpan_dff5885c2c873297,
                  mid_getUt1mutcT0_dff5885c2c873297,
                  mid_setAdmMessageLink_d0bc48d5b00dc40c,
                  mid_setAlternateNames_de3e021e7266b71e,
                  mid_setCatalogName_d0bc48d5b00dc40c,
                  mid_setCdmMessageLink_d0bc48d5b00dc40c,
                  mid_setCelestialSource_d0bc48d5b00dc40c,
                  mid_setConstellation_d0bc48d5b00dc40c,
                  mid_setCountry_d0bc48d5b00dc40c,
                  mid_setEopSource_d0bc48d5b00dc40c,
                  mid_setEpochT0_600a2a61652bc473,
                  mid_setInternationalDesignator_d0bc48d5b00dc40c,
                  mid_setInterpMethodEOP_d0bc48d5b00dc40c,
                  mid_setNextLeapEpoch_600a2a61652bc473,
                  mid_setNextLeapTaimutc_17db3a65980d3441,
                  mid_setNextMessageEpoch_600a2a61652bc473,
                  mid_setNextMessageID_d0bc48d5b00dc40c,
                  mid_setObjectDesignator_d0bc48d5b00dc40c,
                  mid_setObjectType_22d7655927343c9d,
                  mid_setOcmDataElements_de3e021e7266b71e,
                  mid_setOperator_d0bc48d5b00dc40c,
                  mid_setOpsStatus_2e77015f49b91e48,
                  mid_setOrbitCategory_8f1d8b178b6a2ef7,
                  mid_setOriginatorAddress_d0bc48d5b00dc40c,
                  mid_setOriginatorEmail_d0bc48d5b00dc40c,
                  mid_setOriginatorPOC_d0bc48d5b00dc40c,
                  mid_setOriginatorPhone_d0bc48d5b00dc40c,
                  mid_setOriginatorPosition_d0bc48d5b00dc40c,
                  mid_setOwner_d0bc48d5b00dc40c,
                  mid_setPreviousMessageEpoch_600a2a61652bc473,
                  mid_setPreviousMessageID_d0bc48d5b00dc40c,
                  mid_setPrmMessageLink_d0bc48d5b00dc40c,
                  mid_setRdmMessageLink_d0bc48d5b00dc40c,
                  mid_setSclkOffsetAtEpoch_17db3a65980d3441,
                  mid_setSclkSecPerSISec_17db3a65980d3441,
                  mid_setStartTime_600a2a61652bc473,
                  mid_setStopTime_600a2a61652bc473,
                  mid_setTaimutcT0_17db3a65980d3441,
                  mid_setTdmMessageLink_d0bc48d5b00dc40c,
                  mid_setTechAddress_d0bc48d5b00dc40c,
                  mid_setTechEmail_d0bc48d5b00dc40c,
                  mid_setTechOrg_d0bc48d5b00dc40c,
                  mid_setTechPOC_d0bc48d5b00dc40c,
                  mid_setTechPhone_d0bc48d5b00dc40c,
                  mid_setTechPosition_d0bc48d5b00dc40c,
                  mid_setTimeSpan_17db3a65980d3441,
                  mid_setUt1mutcT0_17db3a65980d3441,
                  mid_validate_17db3a65980d3441,
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
