#ifndef org_orekit_errors_LocalizedException_H
#define org_orekit_errors_LocalizedException_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class Localizable;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace errors {

      class LocalizedException : public ::java::lang::Object {
       public:
        enum {
          mid_getMessage_3cd873bfb132c4fd,
          mid_getParts_b93c730013ce64c6,
          mid_getSpecifier_517615caa9b88a24,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LocalizedException(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LocalizedException(const LocalizedException& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String getMessage(const ::java::util::Locale &) const;
        JArray< ::java::lang::Object > getParts() const;
        ::org::hipparchus::exception::Localizable getSpecifier() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace errors {
      extern PyType_Def PY_TYPE_DEF(LocalizedException);
      extern PyTypeObject *PY_TYPE(LocalizedException);

      class t_LocalizedException {
      public:
        PyObject_HEAD
        LocalizedException object;
        static PyObject *wrap_Object(const LocalizedException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
