#ifndef org_orekit_rugged_errors_RuggedException_H
#define org_orekit_rugged_errors_RuggedException_H

#include "java/lang/RuntimeException.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class LocalizedException;
      class Localizable;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        class RuggedException : public ::java::lang::RuntimeException {
         public:
          enum {
            mid_init$_d0cf82c16a7e8751,
            mid_init$_6ecc3fd6067c266c,
            mid_getLocalizedMessage_11b109bd155ca898,
            mid_getMessage_11b109bd155ca898,
            mid_getMessage_3cd873bfb132c4fd,
            mid_getParts_b93c730013ce64c6,
            mid_getSpecifier_517615caa9b88a24,
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
