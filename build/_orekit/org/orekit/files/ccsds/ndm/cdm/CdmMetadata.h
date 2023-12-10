#ifndef org_orekit_files_ccsds_ndm_cdm_CdmMetadata_H
#define org_orekit_files_ccsds_ndm_cdm_CdmMetadata_H

#include "org/orekit/files/ccsds/section/Metadata.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class YesNoUnknown;
          class FrameFacade;
          class BodyFacade;
        }
        namespace ndm {
          namespace cdm {
            class Maneuvrable;
            class CovarianceMethod;
            class AltCovarianceType;
            class CdmRelativeMetadata;
          }
          namespace odm {
            namespace ocm {
              class ObjectType;
            }
          }
        }
      }
    }
    namespace frames {
      class Frame;
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
          namespace cdm {

            class CdmMetadata : public ::org::orekit::files::ccsds::section::Metadata {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_init$_959fe257032a39c0,
                mid_getAdmMsgLink_0090f7797e403f43,
                mid_getAltCovRefFrame_aa70fdb14ae9305f,
                mid_getAltCovType_8c2464a907a5a4bb,
                mid_getAtmosphericModel_0090f7797e403f43,
                mid_getCatalogName_0090f7797e403f43,
                mid_getCovarianceMethod_92706c2f2eb2e248,
                mid_getCovarianceSource_0090f7797e403f43,
                mid_getEarthTides_03b02c6cedb410fa,
                mid_getEphemName_0090f7797e403f43,
                mid_getFrame_c8fe21bcdac65bf6,
                mid_getGravityDegree_f2f64475e4580546,
                mid_getGravityModel_0090f7797e403f43,
                mid_getGravityOrder_f2f64475e4580546,
                mid_getInternationalDes_0090f7797e403f43,
                mid_getIntrackThrust_03b02c6cedb410fa,
                mid_getManeuverable_87b100a305e3ccfd,
                mid_getNBodyPerturbations_a6156df500549a58,
                mid_getObject_0090f7797e403f43,
                mid_getObjectDesignator_0090f7797e403f43,
                mid_getObjectName_0090f7797e403f43,
                mid_getObjectType_8be2b7ef61e9b842,
                mid_getObsBeforeNextMessage_03b02c6cedb410fa,
                mid_getOdmMsgLink_0090f7797e403f43,
                mid_getOperatorContactPosition_0090f7797e403f43,
                mid_getOperatorEmail_0090f7797e403f43,
                mid_getOperatorOrganization_0090f7797e403f43,
                mid_getOperatorPhone_0090f7797e403f43,
                mid_getOrbitCenter_78375ee64056f203,
                mid_getRefFrame_aa70fdb14ae9305f,
                mid_getRelativeMetadata_f8673e4c3b4aceb6,
                mid_getSolarRadiationPressure_03b02c6cedb410fa,
                mid_setAdmMsgLink_e939c6558ae8d313,
                mid_setAltCovRefFrame_a455f3ff24eb0b47,
                mid_setAltCovType_d2aedb94a889b159,
                mid_setAtmosphericModel_e939c6558ae8d313,
                mid_setCatalogName_e939c6558ae8d313,
                mid_setCovarianceMethod_535e77e9093c5cfb,
                mid_setCovarianceSource_e939c6558ae8d313,
                mid_setEarthTides_e1d48d83020845bd,
                mid_setEphemName_e939c6558ae8d313,
                mid_setGravityModel_10ca79ad48bfee14,
                mid_setInternationalDes_e939c6558ae8d313,
                mid_setIntrackThrust_e1d48d83020845bd,
                mid_setManeuverable_c7a507e75d4e7ebb,
                mid_setNBodyPerturbations_65de9727799c5641,
                mid_setObject_e939c6558ae8d313,
                mid_setObjectDesignator_e939c6558ae8d313,
                mid_setObjectName_e939c6558ae8d313,
                mid_setObjectType_221568b09df5e761,
                mid_setObsBeforeNextMessage_e1d48d83020845bd,
                mid_setOdmMsgLink_e939c6558ae8d313,
                mid_setOperatorContactPosition_e939c6558ae8d313,
                mid_setOperatorEmail_e939c6558ae8d313,
                mid_setOperatorOrganization_e939c6558ae8d313,
                mid_setOperatorPhone_e939c6558ae8d313,
                mid_setOrbitCenter_4937bc9292f008b1,
                mid_setRefFrame_a455f3ff24eb0b47,
                mid_setRelativeMetadata_4e27559327bbd332,
                mid_setSolarRadiationPressure_e1d48d83020845bd,
                mid_validate_77e0f9a1f260e2e5,
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
