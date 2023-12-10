#ifndef org_orekit_files_ccsds_ndm_cdm_CdmMetadata_H
#define org_orekit_files_ccsds_ndm_cdm_CdmMetadata_H

#include "org/orekit/files/ccsds/section/Metadata.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class CdmRelativeMetadata;
            class CovarianceMethod;
            class AltCovarianceType;
            class Maneuvrable;
          }
          namespace odm {
            namespace ocm {
              class ObjectType;
            }
          }
        }
        namespace definitions {
          class YesNoUnknown;
          class BodyFacade;
          class FrameFacade;
        }
      }
    }
    namespace data {
      class DataContext;
    }
    namespace frames {
      class Frame;
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
          namespace cdm {

            class CdmMetadata : public ::org::orekit::files::ccsds::section::Metadata {
             public:
              enum {
                mid_init$_0fa09c18fee449d5,
                mid_init$_47d99c12e4a42886,
                mid_getAdmMsgLink_11b109bd155ca898,
                mid_getAltCovRefFrame_5d5dd95b04037824,
                mid_getAltCovType_7a2f3f5198022a2d,
                mid_getAtmosphericModel_11b109bd155ca898,
                mid_getCatalogName_11b109bd155ca898,
                mid_getCovarianceMethod_d5c8c6e2accd7af1,
                mid_getCovarianceSource_11b109bd155ca898,
                mid_getEarthTides_cda5653d7d9d3ff6,
                mid_getEphemName_11b109bd155ca898,
                mid_getFrame_b86f9f61d97a7244,
                mid_getGravityDegree_570ce0828f81a2c1,
                mid_getGravityModel_11b109bd155ca898,
                mid_getGravityOrder_570ce0828f81a2c1,
                mid_getInternationalDes_11b109bd155ca898,
                mid_getIntrackThrust_cda5653d7d9d3ff6,
                mid_getManeuverable_3b2c9e1d549fb9c8,
                mid_getNBodyPerturbations_2afa36052df4765d,
                mid_getObject_11b109bd155ca898,
                mid_getObjectDesignator_11b109bd155ca898,
                mid_getObjectName_11b109bd155ca898,
                mid_getObjectType_1e10bdb6e1d917a7,
                mid_getObsBeforeNextMessage_cda5653d7d9d3ff6,
                mid_getOdmMsgLink_11b109bd155ca898,
                mid_getOperatorContactPosition_11b109bd155ca898,
                mid_getOperatorEmail_11b109bd155ca898,
                mid_getOperatorOrganization_11b109bd155ca898,
                mid_getOperatorPhone_11b109bd155ca898,
                mid_getOrbitCenter_23d31d5db0bee8e9,
                mid_getRefFrame_5d5dd95b04037824,
                mid_getRelativeMetadata_d2d96fe58613ae06,
                mid_getSolarRadiationPressure_cda5653d7d9d3ff6,
                mid_setAdmMsgLink_d0bc48d5b00dc40c,
                mid_setAltCovRefFrame_849bc9e3b38b9bcb,
                mid_setAltCovType_4d35cd7fda4a0f2d,
                mid_setAtmosphericModel_d0bc48d5b00dc40c,
                mid_setCatalogName_d0bc48d5b00dc40c,
                mid_setCovarianceMethod_64638d5d5e58a368,
                mid_setCovarianceSource_d0bc48d5b00dc40c,
                mid_setEarthTides_5bef0e6b8b546bf9,
                mid_setEphemName_d0bc48d5b00dc40c,
                mid_setGravityModel_04eb5531e9227c93,
                mid_setInternationalDes_d0bc48d5b00dc40c,
                mid_setIntrackThrust_5bef0e6b8b546bf9,
                mid_setManeuverable_6c07bc4d7ea23f3b,
                mid_setNBodyPerturbations_de3e021e7266b71e,
                mid_setObject_d0bc48d5b00dc40c,
                mid_setObjectDesignator_d0bc48d5b00dc40c,
                mid_setObjectName_d0bc48d5b00dc40c,
                mid_setObjectType_22d7655927343c9d,
                mid_setObsBeforeNextMessage_5bef0e6b8b546bf9,
                mid_setOdmMsgLink_d0bc48d5b00dc40c,
                mid_setOperatorContactPosition_d0bc48d5b00dc40c,
                mid_setOperatorEmail_d0bc48d5b00dc40c,
                mid_setOperatorOrganization_d0bc48d5b00dc40c,
                mid_setOperatorPhone_d0bc48d5b00dc40c,
                mid_setOrbitCenter_32e120c3a0353f27,
                mid_setRefFrame_849bc9e3b38b9bcb,
                mid_setRelativeMetadata_317cd8556d11f4cf,
                mid_setSolarRadiationPressure_5bef0e6b8b546bf9,
                mid_validate_17db3a65980d3441,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CdmMetadata(jobject obj) : ::org::orekit::files::ccsds::section::Metadata(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CdmMetadata(const CdmMetadata& obj) : ::org::orekit::files::ccsds::section::Metadata(obj) {}

              CdmMetadata();
              CdmMetadata(const ::org::orekit::data::DataContext &);

              ::java::lang::String getAdmMsgLink() const;
              ::org::orekit::files::ccsds::definitions::FrameFacade getAltCovRefFrame() const;
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType getAltCovType() const;
              ::java::lang::String getAtmosphericModel() const;
              ::java::lang::String getCatalogName() const;
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod getCovarianceMethod() const;
              ::java::lang::String getCovarianceSource() const;
              ::org::orekit::files::ccsds::definitions::YesNoUnknown getEarthTides() const;
              ::java::lang::String getEphemName() const;
              ::org::orekit::frames::Frame getFrame() const;
              jint getGravityDegree() const;
              ::java::lang::String getGravityModel() const;
              jint getGravityOrder() const;
              ::java::lang::String getInternationalDes() const;
              ::org::orekit::files::ccsds::definitions::YesNoUnknown getIntrackThrust() const;
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable getManeuverable() const;
              ::java::util::List getNBodyPerturbations() const;
              ::java::lang::String getObject() const;
              ::java::lang::String getObjectDesignator() const;
              ::java::lang::String getObjectName() const;
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType getObjectType() const;
              ::org::orekit::files::ccsds::definitions::YesNoUnknown getObsBeforeNextMessage() const;
              ::java::lang::String getOdmMsgLink() const;
              ::java::lang::String getOperatorContactPosition() const;
              ::java::lang::String getOperatorEmail() const;
              ::java::lang::String getOperatorOrganization() const;
              ::java::lang::String getOperatorPhone() const;
              ::org::orekit::files::ccsds::definitions::BodyFacade getOrbitCenter() const;
              ::org::orekit::files::ccsds::definitions::FrameFacade getRefFrame() const;
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata getRelativeMetadata() const;
              ::org::orekit::files::ccsds::definitions::YesNoUnknown getSolarRadiationPressure() const;
              void setAdmMsgLink(const ::java::lang::String &) const;
              void setAltCovRefFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
              void setAltCovType(const ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType &) const;
              void setAtmosphericModel(const ::java::lang::String &) const;
              void setCatalogName(const ::java::lang::String &) const;
              void setCovarianceMethod(const ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod &) const;
              void setCovarianceSource(const ::java::lang::String &) const;
              void setEarthTides(const ::org::orekit::files::ccsds::definitions::YesNoUnknown &) const;
              void setEphemName(const ::java::lang::String &) const;
              void setGravityModel(const ::java::lang::String &, jint, jint) const;
              void setInternationalDes(const ::java::lang::String &) const;
              void setIntrackThrust(const ::org::orekit::files::ccsds::definitions::YesNoUnknown &) const;
              void setManeuverable(const ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable &) const;
              void setNBodyPerturbations(const ::java::util::List &) const;
              void setObject(const ::java::lang::String &) const;
              void setObjectDesignator(const ::java::lang::String &) const;
              void setObjectName(const ::java::lang::String &) const;
              void setObjectType(const ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType &) const;
              void setObsBeforeNextMessage(const ::org::orekit::files::ccsds::definitions::YesNoUnknown &) const;
              void setOdmMsgLink(const ::java::lang::String &) const;
              void setOperatorContactPosition(const ::java::lang::String &) const;
              void setOperatorEmail(const ::java::lang::String &) const;
              void setOperatorOrganization(const ::java::lang::String &) const;
              void setOperatorPhone(const ::java::lang::String &) const;
              void setOrbitCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade &) const;
              void setRefFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
              void setRelativeMetadata(const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata &) const;
              void setSolarRadiationPressure(const ::org::orekit::files::ccsds::definitions::YesNoUnknown &) const;
              void validate(jdouble) const;
            };
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(CdmMetadata);
            extern PyTypeObject *PY_TYPE(CdmMetadata);

            class t_CdmMetadata {
            public:
              PyObject_HEAD
              CdmMetadata object;
              static PyObject *wrap_Object(const CdmMetadata&);
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

#endif
