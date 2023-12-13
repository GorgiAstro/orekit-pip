#ifndef org_orekit_files_ccsds_ndm_cdm_CdmData_H
#define org_orekit_files_ccsds_ndm_cdm_CdmData_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class UserDefined;
          }
          namespace cdm {
            class XYZCovariance;
            class AdditionalParameters;
            class StateVector;
            class AdditionalCovarianceMetadata;
            class ODParameters;
            class RTNCovariance;
            class SigmaEigenvectorsCovariance;
          }
        }
        namespace section {
          class Data;
          class CommentsContainer;
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
                mid_init$_0b71fcd2b4cb438c,
                mid_init$_49e5b7252dc97c59,
                mid_init$_92d754c3a78a9806,
                mid_init$_4e5cb386720290df,
                mid_getAdditionalCovMetadataBlock_9eabb6f701c4e4fe,
                mid_getAdditionalParametersBlock_e4566e0d03e79656,
                mid_getComments_e62d3bb06d56d7e3,
                mid_getODParametersBlock_cd91ddfcfbea3896,
                mid_getRTNCovarianceBlock_975a15045a985502,
                mid_getSig3EigVec3CovarianceBlock_5c069924ff4aa42b,
                mid_getStateVectorBlock_e063c4a483382013,
                mid_getUserDefinedBlock_757fcfae3141e23d,
                mid_getXYZCovarianceBlock_2b6d071b00b37f40,
                mid_setAdditionalParametersBlock_504202b07f6cff36,
                mid_setCovarianceMatrixBlock_ba8d39caad7cffba,
                mid_setODParametersBlock_c67d81394aa7ad4f,
                mid_setUserDefinedBlock_b829f4a4b34395d9,
                mid_validate_8ba9fe7a847cecad,
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
