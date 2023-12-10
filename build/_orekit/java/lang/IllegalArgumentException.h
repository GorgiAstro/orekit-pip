#ifndef java_lang_IllegalArgumentException_H
#define java_lang_IllegalArgumentException_H

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

    class IllegalArgumentException : public ::java::lang::RuntimeException {
     public:
      enum {
        mid_init$_7ae3461a92a43152,
        mid_init$_e939c6558ae8d313,
        mid_init$_ea7f4d04e27238a7,
        mid_init$_fd4c96defa578a22,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit IllegalArgumentException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      IllegalArgumentException(const IllegalArgumentException& obj) : ::java::lang::RuntimeException(obj) {}

      IllegalArgumentException();
      IllegalArgumentException(const ::java::lang::String &);
      IllegalArgumentException(const ::java::lang::Throwable &);
      IllegalArgumentException(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(IllegalArgumentException);
    extern PyTypeObject *PY_TYPE(IllegalArgumentException);

    class t_IllegalArgumentException {
    public:
      PyObject_HEAD
      IllegalArgumentException object;
      static PyObject *wrap_Object(const IllegalArgumentException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
