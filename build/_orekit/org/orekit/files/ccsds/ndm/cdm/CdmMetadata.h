#ifndef org_orekit_files_ccsds_ndm_cdm_CdmMetadata_H
#define org_orekit_files_ccsds_ndm_cdm_CdmMetadata_H

#include "org/orekit/files/ccsds/section/Metadata.h"

namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
          class BodyFacade;
          class YesNoUnknown;
        }
        namespace ndm {
          namespace cdm {
            class CovarianceMethod;
            class CdmRelativeMetadata;
            class AltCovarianceType;
            class Maneuvrable;
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
                mid_init$_ff7cb6c242604316,
                mid_init$_e28302a82adb77ed,
                mid_getAdmMsgLink_d2c8eb4129821f0e,
                mid_getAltCovRefFrame_0fc1562b68204151,
                mid_getAltCovType_f2d35325ca2cf482,
                mid_getAtmosphericModel_d2c8eb4129821f0e,
                mid_getCatalogName_d2c8eb4129821f0e,
                mid_getCovarianceMethod_aaad2a33cc8f1d7e,
                mid_getCovarianceSource_d2c8eb4129821f0e,
                mid_getEarthTides_112bc53c99d2ffea,
                mid_getEphemName_d2c8eb4129821f0e,
                mid_getFrame_cb151471db4570f0,
                mid_getGravityDegree_d6ab429752e7c267,
                mid_getGravityModel_d2c8eb4129821f0e,
                mid_getGravityOrder_d6ab429752e7c267,
                mid_getInternationalDes_d2c8eb4129821f0e,
                mid_getIntrackThrust_112bc53c99d2ffea,
                mid_getManeuverable_8f0cf64664312b19,
                mid_getNBodyPerturbations_d751c1a57012b438,
                mid_getObject_d2c8eb4129821f0e,
                mid_getObjectDesignator_d2c8eb4129821f0e,
                mid_getObjectName_d2c8eb4129821f0e,
                mid_getObjectType_4afc147acbd215f9,
                mid_getObsBeforeNextMessage_112bc53c99d2ffea,
                mid_getOdmMsgLink_d2c8eb4129821f0e,
                mid_getOperatorContactPosition_d2c8eb4129821f0e,
                mid_getOperatorEmail_d2c8eb4129821f0e,
                mid_getOperatorOrganization_d2c8eb4129821f0e,
                mid_getOperatorPhone_d2c8eb4129821f0e,
                mid_getOrbitCenter_540df4afb4ddb1b4,
                mid_getRefFrame_0fc1562b68204151,
                mid_getRelativeMetadata_e3058383361edffc,
                mid_getSolarRadiationPressure_112bc53c99d2ffea,
                mid_setAdmMsgLink_105e1eadb709d9ac,
                mid_setAltCovRefFrame_2c8b859a72c0094e,
                mid_setAltCovType_d0bc94278778c073,
                mid_setAtmosphericModel_105e1eadb709d9ac,
                mid_setCatalogName_105e1eadb709d9ac,
                mid_setCovarianceMethod_7d2908a1da032851,
                mid_setCovarianceSource_105e1eadb709d9ac,
                mid_setEarthTides_24522ad136c36bb9,
                mid_setEphemName_105e1eadb709d9ac,
                mid_setGravityModel_c9a77c84756b106b,
                mid_setInternationalDes_105e1eadb709d9ac,
                mid_setIntrackThrust_24522ad136c36bb9,
                mid_setManeuverable_62776a7b9220fcf1,
                mid_setNBodyPerturbations_aa335fea495d60e0,
                mid_setObject_105e1eadb709d9ac,
                mid_setObjectDesignator_105e1eadb709d9ac,
                mid_setObjectName_105e1eadb709d9ac,
                mid_setObjectType_f747a3e328e2d2f7,
                mid_setObsBeforeNextMessage_24522ad136c36bb9,
                mid_setOdmMsgLink_105e1eadb709d9ac,
                mid_setOperatorContactPosition_105e1eadb709d9ac,
                mid_setOperatorEmail_105e1eadb709d9ac,
                mid_setOperatorOrganization_105e1eadb709d9ac,
                mid_setOperatorPhone_105e1eadb709d9ac,
                mid_setOrbitCenter_9fc8078d81282211,
                mid_setRefFrame_2c8b859a72c0094e,
                mid_setRelativeMetadata_f459c57c0107f668,
                mid_setSolarRadiationPressure_24522ad136c36bb9,
                mid_validate_1ad26e8c8c0cd65b,
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
