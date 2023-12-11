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
      class LocalizedException;
      class Localizable;
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
            mid_init$_7d9320fd2ea36122,
            mid_getLocalizedMessage_3cffd47377eca18a,
            mid_getMessage_3cffd47377eca18a,
            mid_getMessage_4b51060c6b7ea981,
            mid_getParts_6555a5198c71b73a,
            mid_getSpecifier_a86d7419cf3241b7,
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
