#ifndef java_lang_IllegalStateException_H
#define java_lang_IllegalStateException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class IllegalStateException : public ::java::lang::RuntimeException {
     public:
      enum {
        mid_init$_0fa09c18fee449d5,
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_98504698e8b85a67,
        mid_init$_884e3b5778514e73,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit IllegalStateException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      IllegalStateException(const IllegalStateException& obj) : ::java::lang::RuntimeException(obj) {}

      IllegalStateException();
      IllegalStateException(const ::java::lang::String &);
      IllegalStateException(const ::java::lang::Throwable &);
      IllegalStateException(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(IllegalStateException);
    extern PyTypeObject *PY_TYPE(IllegalStateException);

    class t_IllegalStateException {
    public:
      PyObject_HEAD
      IllegalStateException object;
      static PyObject *wrap_Object(const IllegalStateException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
