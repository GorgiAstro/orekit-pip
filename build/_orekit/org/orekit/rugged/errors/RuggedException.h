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
            mid_init$_2436a4119ba97d87,
            mid_init$_db158649d786c484,
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
