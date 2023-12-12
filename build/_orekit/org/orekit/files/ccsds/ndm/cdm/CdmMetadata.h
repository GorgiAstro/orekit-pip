#ifndef org_orekit_files_ccsds_ndm_cdm_CdmMetadata_H
#define org_orekit_files_ccsds_ndm_cdm_CdmMetadata_H

#include "org/orekit/files/ccsds/section/Metadata.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class AltCovarianceType;
            class Maneuvrable;
            class CdmRelativeMetadata;
            class CovarianceMethod;
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
                mid_init$_0640e6acf969ed28,
                mid_init$_23625b258f7a7479,
                mid_getAdmMsgLink_3cffd47377eca18a,
                mid_getAltCovRefFrame_98f5fcaff3e3f9d2,
                mid_getAltCovType_5aeefc0906cfef6a,
                mid_getAtmosphericModel_3cffd47377eca18a,
                mid_getCatalogName_3cffd47377eca18a,
                mid_getCovarianceMethod_c1451b820dbd159d,
                mid_getCovarianceSource_3cffd47377eca18a,
                mid_getEarthTides_ad3b3fcfed02fed8,
                mid_getEphemName_3cffd47377eca18a,
                mid_getFrame_6c9bc0a928c56d4e,
                mid_getGravityDegree_412668abc8d889e9,
                mid_getGravityModel_3cffd47377eca18a,
                mid_getGravityOrder_412668abc8d889e9,
                mid_getInternationalDes_3cffd47377eca18a,
                mid_getIntrackThrust_ad3b3fcfed02fed8,
                mid_getManeuverable_8901273111522254,
                mid_getNBodyPerturbations_0d9551367f7ecdef,
                mid_getObject_3cffd47377eca18a,
                mid_getObjectDesignator_3cffd47377eca18a,
                mid_getObjectName_3cffd47377eca18a,
                mid_getObjectType_510913fffa0e993d,
                mid_getObsBeforeNextMessage_ad3b3fcfed02fed8,
                mid_getOdmMsgLink_3cffd47377eca18a,
                mid_getOperatorContactPosition_3cffd47377eca18a,
                mid_getOperatorEmail_3cffd47377eca18a,
                mid_getOperatorOrganization_3cffd47377eca18a,
                mid_getOperatorPhone_3cffd47377eca18a,
                mid_getOrbitCenter_c642bce266d6d89a,
                mid_getRefFrame_98f5fcaff3e3f9d2,
                mid_getRelativeMetadata_f5a8cae6e2267df4,
                mid_getSolarRadiationPressure_ad3b3fcfed02fed8,
                mid_setAdmMsgLink_f5ffdf29129ef90a,
                mid_setAltCovRefFrame_f55eee1236275bb1,
                mid_setAltCovType_8d933a696c0b5445,
                mid_setAtmosphericModel_f5ffdf29129ef90a,
                mid_setCatalogName_f5ffdf29129ef90a,
                mid_setCovarianceMethod_3c9ac3d641022735,
                mid_setCovarianceSource_f5ffdf29129ef90a,
                mid_setEarthTides_b56c5a309cda3011,
                mid_setEphemName_f5ffdf29129ef90a,
                mid_setGravityModel_96097c5e4aacac76,
                mid_setInternationalDes_f5ffdf29129ef90a,
                mid_setIntrackThrust_b56c5a309cda3011,
                mid_setManeuverable_0267cff740d16a1e,
                mid_setNBodyPerturbations_4ccaedadb068bdeb,
                mid_setObject_f5ffdf29129ef90a,
                mid_setObjectDesignator_f5ffdf29129ef90a,
                mid_setObjectName_f5ffdf29129ef90a,
                mid_setObjectType_bdc34300f6ac541f,
                mid_setObsBeforeNextMessage_b56c5a309cda3011,
                mid_setOdmMsgLink_f5ffdf29129ef90a,
                mid_setOperatorContactPosition_f5ffdf29129ef90a,
                mid_setOperatorEmail_f5ffdf29129ef90a,
                mid_setOperatorOrganization_f5ffdf29129ef90a,
                mid_setOperatorPhone_f5ffdf29129ef90a,
                mid_setOrbitCenter_e6f755c267d91c26,
                mid_setRefFrame_f55eee1236275bb1,
                mid_setRelativeMetadata_4640f597096c6377,
                mid_setSolarRadiationPressure_b56c5a309cda3011,
                mid_validate_10f281d777284cea,
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
