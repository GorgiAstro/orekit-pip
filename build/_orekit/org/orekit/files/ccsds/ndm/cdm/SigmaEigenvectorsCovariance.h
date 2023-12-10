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
                mid_init$_bd04c9335fb9e4cf,
                mid_getCsig3eigvec3_60c7040667a7dc5c,
                mid_isAltCovFlagSet_b108b35ef48e27bd,
                mid_setCsig3eigvec3_fa9d415d19f69361,
                mid_validate_17db3a65980d3441,
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
