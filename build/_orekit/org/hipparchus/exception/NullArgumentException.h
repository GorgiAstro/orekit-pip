#ifndef org_hipparchus_exception_NullArgumentException_H
#define org_hipparchus_exception_NullArgumentException_H

#include "java/lang/NullPointerException.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
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
  namespace hipparchus {
    namespace exception {

      class NullArgumentException : public ::java::lang::NullPointerException {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_init$_3d6784947cb48668,
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

        explicit NullArgumentException(jobject obj) : ::java::lang::NullPointerException(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        NullArgumentException(const NullArgumentException& obj) : ::java::lang::NullPointerException(obj) {}

        NullArgumentException();
        NullArgumentException(const ::org::hipparchus::exception::Localizable &, const JArray< ::java::lang::Object > &);

        ::java::lang::String getLocalizedMessage() const;
        ::java::lang::String getMessage() const;
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
      extern PyType_Def PY_TYPE_DEF(NullArgumentException);
      extern PyTypeObject *PY_TYPE(NullArgumentException);

      class t_NullArgumentException {
      public:
        PyObject_HEAD
        NullArgumentException object;
        static PyObject *wrap_Object(const NullArgumentException&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
