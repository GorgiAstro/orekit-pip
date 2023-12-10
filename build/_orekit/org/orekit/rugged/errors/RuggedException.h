#ifndef org_orekit_rugged_errors_RuggedException_H
#define org_orekit_rugged_errors_RuggedException_H

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

        class RuggedException : public ::java::lang::RuntimeException {
         public:
          enum {
            mid_init$_3d6784947cb48668,
            mid_init$_ca997976b075d32c,
            mid_getLocalizedMessage_0090f7797e403f43,
            mid_getMessage_0090f7797e403f43,
            mid_getMessage_bab3be9b232acc5a,
            mid_getParts_e81d7907eea7e008,
            mid_getSpecifier_2e589a53386da289,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RuggedException(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RuggedException(const RuggedException& obj) : ::java::lang::RuntimeException(obj) {}

          RuggedException(const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);
          RuggedException(const ::java::lang::Throwable &, const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);

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
        extern PyType_Def PY_TYPE_DEF(RuggedException);
        extern PyTypeObject *PY_TYPE(RuggedException);

        class t_RuggedException {
        public:
          PyObject_HEAD
          RuggedException object;
          static PyObject *wrap_Object(const RuggedException&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
