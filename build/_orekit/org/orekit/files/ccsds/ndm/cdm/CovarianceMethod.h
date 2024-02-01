#ifndef org_orekit_files_ccsds_ndm_cdm_CovarianceMethod_H
#define org_orekit_files_ccsds_ndm_cdm_CovarianceMethod_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            class CovarianceMethod;
          }
        }
      }
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

            class CovarianceMethod : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_16e961bbdd83a23c,
                mid_values_1790d1cbc96b611a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CovarianceMethod(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CovarianceMethod(const CovarianceMethod& obj) : ::java::lang::Enum(obj) {}

              static CovarianceMethod *CALCULATED;
              static CovarianceMethod *DEFAULT;

              static CovarianceMethod valueOf(const ::java::lang::String &);
              static JArray< CovarianceMethod > values();
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
            extern PyType_Def PY_TYPE_DEF(CovarianceMethod);
            extern PyTypeObject *PY_TYPE(CovarianceMethod);

            class t_CovarianceMethod {
            public:
              PyObject_HEAD
              CovarianceMethod object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_CovarianceMethod *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const CovarianceMethod&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const CovarianceMethod&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
