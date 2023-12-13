#ifndef org_orekit_files_ccsds_ndm_cdm_CdmMetadata_H
#define org_orekit_files_ccsds_ndm_cdm_CdmMetadata_H

#include "org/orekit/files/ccsds/section/Metadata.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
          class BodyFacade;
          class YesNoUnknown;
        }
        namespace ndm {
          namespace odm {
            namespace ocm {
              class ObjectType;
            }
          }
          namespace cdm {
            class Maneuvrable;
            class CdmRelativeMetadata;
            class CovarianceMethod;
            class AltCovarianceType;
          }
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
                mid_init$_a1fa5dae97ea5ed2,
                mid_init$_fe20320dccf187ae,
                mid_getAdmMsgLink_1c1fa1e935d6cdcf,
                mid_getAltCovRefFrame_69d8be1b6b0a1a94,
                mid_getAltCovType_682297c68d07d8a9,
                mid_getAtmosphericModel_1c1fa1e935d6cdcf,
                mid_getCatalogName_1c1fa1e935d6cdcf,
                mid_getCovarianceMethod_0bfe0c4f8975f75a,
                mid_getCovarianceSource_1c1fa1e935d6cdcf,
                mid_getEarthTides_a9bf24a9cea73059,
                mid_getEphemName_1c1fa1e935d6cdcf,
                mid_getFrame_2c51111cc6894ba1,
                mid_getGravityDegree_55546ef6a647f39b,
                mid_getGravityModel_1c1fa1e935d6cdcf,
                mid_getGravityOrder_55546ef6a647f39b,
                mid_getInternationalDes_1c1fa1e935d6cdcf,
                mid_getIntrackThrust_a9bf24a9cea73059,
                mid_getManeuverable_20c5f0334d3cf8a5,
                mid_getNBodyPerturbations_e62d3bb06d56d7e3,
                mid_getObject_1c1fa1e935d6cdcf,
                mid_getObjectDesignator_1c1fa1e935d6cdcf,
                mid_getObjectName_1c1fa1e935d6cdcf,
                mid_getObjectType_d6ea2275c46038b6,
                mid_getObsBeforeNextMessage_a9bf24a9cea73059,
                mid_getOdmMsgLink_1c1fa1e935d6cdcf,
                mid_getOperatorContactPosition_1c1fa1e935d6cdcf,
                mid_getOperatorEmail_1c1fa1e935d6cdcf,
                mid_getOperatorOrganization_1c1fa1e935d6cdcf,
                mid_getOperatorPhone_1c1fa1e935d6cdcf,
                mid_getOrbitCenter_52253a5b5c02abfe,
                mid_getRefFrame_69d8be1b6b0a1a94,
                mid_getRelativeMetadata_9e18211f4c2756fe,
                mid_getSolarRadiationPressure_a9bf24a9cea73059,
                mid_setAdmMsgLink_734b91ac30d5f9b4,
                mid_setAltCovRefFrame_4755133c5c4c59be,
                mid_setAltCovType_f113bebf9c716349,
                mid_setAtmosphericModel_734b91ac30d5f9b4,
                mid_setCatalogName_734b91ac30d5f9b4,
                mid_setCovarianceMethod_1287f4079504959f,
                mid_setCovarianceSource_734b91ac30d5f9b4,
                mid_setEarthTides_ef863e9b4614f11c,
                mid_setEphemName_734b91ac30d5f9b4,
                mid_setGravityModel_eb74d6dc93e0751e,
                mid_setInternationalDes_734b91ac30d5f9b4,
                mid_setIntrackThrust_ef863e9b4614f11c,
                mid_setManeuverable_8b2809315e926f23,
                mid_setNBodyPerturbations_0e7c3032c7c93ed3,
                mid_setObject_734b91ac30d5f9b4,
                mid_setObjectDesignator_734b91ac30d5f9b4,
                mid_setObjectName_734b91ac30d5f9b4,
                mid_setObjectType_05187042fbba2328,
                mid_setObsBeforeNextMessage_ef863e9b4614f11c,
                mid_setOdmMsgLink_734b91ac30d5f9b4,
                mid_setOperatorContactPosition_734b91ac30d5f9b4,
                mid_setOperatorEmail_734b91ac30d5f9b4,
                mid_setOperatorOrganization_734b91ac30d5f9b4,
                mid_setOperatorPhone_734b91ac30d5f9b4,
                mid_setOrbitCenter_564458ee450fa323,
                mid_setRefFrame_4755133c5c4c59be,
                mid_setRelativeMetadata_0046627b89ca2469,
                mid_setSolarRadiationPressure_ef863e9b4614f11c,
                mid_validate_8ba9fe7a847cecad,
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
