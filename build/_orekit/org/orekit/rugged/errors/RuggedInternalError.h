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
            mid_init$_c5d3549d4f245728,
            mid_getLocalizedMessage_1c1fa1e935d6cdcf,
            mid_getMessage_1c1fa1e935d6cdcf,
            mid_getMessage_26070c28e6ea354d,
            mid_getParts_24e2edd6319f4c5a,
            mid_getSpecifier_d8f5056e4f45c9a6,
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
