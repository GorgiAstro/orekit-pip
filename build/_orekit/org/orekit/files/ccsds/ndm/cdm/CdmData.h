#ifndef org_orekit_files_ccsds_ndm_cdm_CdmData_H
#define org_orekit_files_ccsds_ndm_cdm_CdmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class AdditionalParameters;
            class XYZCovariance;
            class SigmaEigenvectorsCovariance;
            class RTNCovariance;
            class AdditionalCovarianceMetadata;
            class StateVector;
            class ODParameters;
          }
          namespace odm {
            class UserDefined;
          }
        }
        namespace section {
          class CommentsContainer;
          class Data;
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
                mid_init$_76fc76061eea1afb,
                mid_init$_76b1357493813a3e,
                mid_init$_1e1fdec8e3d37a12,
                mid_init$_f570526d2cf70c42,
                mid_getAdditionalCovMetadataBlock_51d71003cdef3201,
                mid_getAdditionalParametersBlock_d8ec4184ba2d9519,
                mid_getComments_0d9551367f7ecdef,
                mid_getODParametersBlock_0020f60bbf13e998,
                mid_getRTNCovarianceBlock_f35cb101c37dfe18,
                mid_getSig3EigVec3CovarianceBlock_3a93c5d667b1e50f,
                mid_getStateVectorBlock_14f76bd8275c6fa5,
                mid_getUserDefinedBlock_e8dd2483e310f990,
                mid_getXYZCovarianceBlock_96e1008345660840,
                mid_setAdditionalParametersBlock_291c80f4c3cce790,
                mid_setCovarianceMatrixBlock_2a5fb3f2cfb52003,
                mid_setODParametersBlock_df8e815bd8ef9dde,
                mid_setUserDefinedBlock_82440f920e26626d,
                mid_validate_10f281d777284cea,
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
