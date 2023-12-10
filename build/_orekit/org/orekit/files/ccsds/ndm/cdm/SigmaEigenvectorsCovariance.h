#ifndef org_orekit_files_ccsds_ndm_cdm_SigmaEigenvectorsCovariance_H
#define org_orekit_files_ccsds_ndm_cdm_SigmaEigenvectorsCovariance_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            class SigmaEigenvectorsCovariance : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_50a2e0b139e80a58,
                mid_getCsig3eigvec3_7cdc325af0834901,
                mid_isAltCovFlagSet_e470b6d9e0d979db,
                mid_setCsig3eigvec3_ebc26dcaf4761286,
                mid_validate_77e0f9a1f260e2e5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SigmaEigenvectorsCovariance(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SigmaEigenvectorsCovariance(const SigmaEigenvectorsCovariance& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              SigmaEigenvectorsCovariance(jboolean);

              JArray< jdouble > getCsig3eigvec3() const;
              jboolean isAltCovFlagSet() const;
              void setCsig3eigvec3(const JArray< jdouble > &) const;
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
            extern PyType_Def PY_TYPE_DEF(SigmaEigenvectorsCovariance);
            extern PyTypeObject *PY_TYPE(SigmaEigenvectorsCovariance);

            class t_SigmaEigenvectorsCovariance {
            public:
              PyObject_HEAD
              SigmaEigenvectorsCovariance object;
              static PyObject *wrap_Object(const SigmaEigenvectorsCovariance&);
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
