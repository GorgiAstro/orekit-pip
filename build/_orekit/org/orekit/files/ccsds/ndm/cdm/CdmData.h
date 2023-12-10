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
            class AdditionalParameters;
            class SigmaEigenvectorsCovariance;
            class ODParameters;
            class RTNCovariance;
            class AdditionalCovarianceMetadata;
            class StateVector;
          }
          namespace odm {
            class UserDefined;
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
                mid_init$_96338e7c95f1ecb0,
                mid_init$_09d1eb9223cc21d8,
                mid_init$_a288a8b537c88185,
                mid_init$_e02ed3ddb4a798e4,
                mid_getAdditionalCovMetadataBlock_da19d9ac6b23a229,
                mid_getAdditionalParametersBlock_80e7e980479289f4,
                mid_getComments_2afa36052df4765d,
                mid_getODParametersBlock_52ab08a5e78ed036,
                mid_getRTNCovarianceBlock_a08e63bb0bfcc64c,
                mid_getSig3EigVec3CovarianceBlock_526e476bda384755,
                mid_getStateVectorBlock_f4dddfef314b1d5c,
                mid_getUserDefinedBlock_8d3e5fabdafb8483,
                mid_getXYZCovarianceBlock_71e967b8af1dbb8f,
                mid_setAdditionalParametersBlock_99e2aae3631b1f33,
                mid_setCovarianceMatrixBlock_e76500a05db3fda1,
                mid_setODParametersBlock_f2b7c55da4ccf239,
                mid_setUserDefinedBlock_7679f5a5c49f05c5,
                mid_validate_17db3a65980d3441,
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
