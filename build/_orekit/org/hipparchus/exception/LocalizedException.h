#ifndef org_hipparchus_exception_LocalizedException_H
#define org_hipparchus_exception_LocalizedException_H

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
  namespace hipparchus {
    namespace exception {

      class LocalizedException : public ::java::lang::Object {
       public:
        enum {
          mid_getMessage_26070c28e6ea354d,
          mid_getParts_24e2edd6319f4c5a,
          mid_getSpecifier_d8f5056e4f45c9a6,
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
  namespace hipparchus {
    namespace exception {
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
