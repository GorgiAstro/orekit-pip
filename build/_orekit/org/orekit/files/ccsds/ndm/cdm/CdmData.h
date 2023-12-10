#ifndef org_orekit_files_ccsds_ndm_cdm_CdmData_H
#define org_orekit_files_ccsds_ndm_cdm_CdmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class XYZCovariance;
            class SigmaEigenvectorsCovariance;
            class AdditionalCovarianceMetadata;
            class ODParameters;
            class AdditionalParameters;
            class StateVector;
            class RTNCovariance;
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
                mid_init$_bdfbbdb034a40897,
                mid_init$_ec942cc08a3afbcf,
                mid_init$_113f8f0b5b4598cc,
                mid_init$_4d8570b5345d78e3,
                mid_getAdditionalCovMetadataBlock_af8dc20564ce39e9,
                mid_getAdditionalParametersBlock_8ad46c056a31e1cb,
                mid_getComments_a6156df500549a58,
                mid_getODParametersBlock_2a2a446c7c26cc29,
                mid_getRTNCovarianceBlock_4c85633c66cdc0a0,
                mid_getSig3EigVec3CovarianceBlock_4c4164cb29982aa0,
                mid_getStateVectorBlock_2a0e2401a86f3fde,
                mid_getUserDefinedBlock_dc0ba09fd1c52b52,
                mid_getXYZCovarianceBlock_15049ef8342f86b0,
                mid_setAdditionalParametersBlock_c304bdf0b9a42cdb,
                mid_setCovarianceMatrixBlock_218a3259a099f155,
                mid_setODParametersBlock_f452d8a949db32bb,
                mid_setUserDefinedBlock_ca39a23845b77eab,
                mid_validate_77e0f9a1f260e2e5,
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
