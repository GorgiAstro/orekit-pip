#ifndef org_orekit_rugged_errors_RuggedInternalError_H
#define org_orekit_rugged_errors_RuggedInternalError_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class Throwable;
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class Localizable;
      class LocalizedException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        class RuggedInternalError : public ::java::lang::RuntimeException {
         public:
          enum {
            mid_init$_0a70d77e3c5fdad0,
            mid_getLocalizedMessage_d2c8eb4129821f0e,
            mid_getMessage_d2c8eb4129821f0e,
            mid_getMessage_5969ecf7afac3dba,
            mid_getParts_2ab86268ef7a6631,
            mid_getSpecifier_667bcd34994d9d31,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RuggedInternalError(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RuggedInternalError(const RuggedInternalError& obj) : ::java::lang::RuntimeException(obj) {}

          RuggedInternalError(const ::java::lang::Throwable &);

          ::java::lang::String getLocalizedMessage() const;
          ::java::lang::String getMessage() const;
          ::java::lang::String getMessage(const ::java::util::Locale &) const;
          JArray< ::java::lang::Object > getParts() const;
          ::org::hipparchus::exception::Localizable getSpecifier() const;
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
        extern PyType_Def PY_TYPE_DEF(RuggedInternalError);
        extern PyTypeObject *PY_TYPE(RuggedInternalError);

        class t_RuggedInternalError {
        public:
          PyObject_HEAD
          RuggedInternalError object;
          static PyObject *wrap_Object(const RuggedInternalError&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
