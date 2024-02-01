#ifndef org_orekit_files_ccsds_ndm_cdm_CdmData_H
#define org_orekit_files_ccsds_ndm_cdm_CdmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class CommentsContainer;
          class Data;
        }
        namespace ndm {
          namespace cdm {
            class StateVector;
            class RTNCovariance;
            class AdditionalParameters;
            class XYZCovariance;
            class SigmaEigenvectorsCovariance;
            class ODParameters;
            class AdditionalCovarianceMetadata;
          }
          namespace odm {
            class UserDefined;
          }
        }
      }
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

            class CdmData : public ::java::lang::Object {
             public:
              enum {
                mid_init$_8f3b9683135277df,
                mid_init$_3b0c9b96f90e2c48,
                mid_init$_55d5a7297993a448,
                mid_init$_fc96f89513097e1a,
                mid_getAdditionalCovMetadataBlock_d06bce2b6f32826e,
                mid_getAdditionalParametersBlock_b7539d838be95deb,
                mid_getComments_d751c1a57012b438,
                mid_getODParametersBlock_819b89b22c1391ef,
                mid_getRTNCovarianceBlock_38c7abd8f1601045,
                mid_getSig3EigVec3CovarianceBlock_efb6b5e5adb93670,
                mid_getStateVectorBlock_71fc0f205bb99087,
                mid_getUserDefinedBlock_b8dba07746e1b089,
                mid_getXYZCovarianceBlock_a3156916a04233f7,
                mid_setAdditionalParametersBlock_0f782f0bfc7b0f7a,
                mid_setCovarianceMatrixBlock_b2b9a4f46dad496a,
                mid_setODParametersBlock_19de663aec1a19b3,
                mid_setUserDefinedBlock_2df9715c380cacea,
                mid_validate_1ad26e8c8c0cd65b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CdmData(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CdmData(const CdmData& obj) : ::java::lang::Object(obj) {}

              CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer &, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters &, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters &, const ::org::orekit::files::ccsds::ndm::cdm::StateVector &, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance &);
              CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer &, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters &, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters &, const ::org::orekit::files::ccsds::ndm::cdm::StateVector &, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance &, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata &);
              CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer &, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters &, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters &, const ::org::orekit::files::ccsds::ndm::cdm::StateVector &, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance &, const ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance &, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata &);
              CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer &, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters &, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters &, const ::org::orekit::files::ccsds::ndm::cdm::StateVector &, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance &, const ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance &, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata &);

              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata getAdditionalCovMetadataBlock() const;
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters getAdditionalParametersBlock() const;
              ::java::util::List getComments() const;
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters getODParametersBlock() const;
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance getRTNCovarianceBlock() const;
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance getSig3EigVec3CovarianceBlock() const;
              ::org::orekit::files::ccsds::ndm::cdm::StateVector getStateVectorBlock() const;
              ::org::orekit::files::ccsds::ndm::odm::UserDefined getUserDefinedBlock() const;
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance getXYZCovarianceBlock() const;
              void setAdditionalParametersBlock(const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters &) const;
              void setCovarianceMatrixBlock(const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance &) const;
              void setODParametersBlock(const ::org::orekit::files::ccsds::ndm::cdm::ODParameters &) const;
              void setUserDefinedBlock(const ::org::orekit::files::ccsds::ndm::odm::UserDefined &) const;
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
            extern PyType_Def PY_TYPE_DEF(CdmData);
            extern PyTypeObject *PY_TYPE(CdmData);

            class t_CdmData {
            public:
              PyObject_HEAD
              CdmData object;
              static PyObject *wrap_Object(const CdmData&);
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
