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
          mid_init$_ff7cb6c242604316,
          mid_init$_2436a4119ba97d87,
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
