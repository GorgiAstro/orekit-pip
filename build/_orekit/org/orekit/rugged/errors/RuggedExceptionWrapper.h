#ifndef org_orekit_rugged_errors_RuggedExceptionWrapper_H
#define org_orekit_rugged_errors_RuggedExceptionWrapper_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        class RuggedException;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        class RuggedExceptionWrapper : public ::java::lang::RuntimeException {
         public:
          enum {
            mid_init$_fefacca744cd46c6,
            mid_getException_3fe1f0c20143accc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RuggedExceptionWrapper(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RuggedExceptionWrapper(const RuggedExceptionWrapper& obj) : ::java::lang::RuntimeException(obj) {}

          RuggedExceptionWrapper(const ::org::orekit::rugged::errors::RuggedException &);

          ::org::orekit::rugged::errors::RuggedException getException() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        extern PyType_Def PY_TYPE_DEF(RuggedExceptionWrapper);
        extern PyTypeObject *PY_TYPE(RuggedExceptionWrapper);

        class t_RuggedExceptionWrapper {
        public:
          PyObject_HEAD
          RuggedExceptionWrapper object;
          static PyObject *wrap_Object(const RuggedExceptionWrapper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
