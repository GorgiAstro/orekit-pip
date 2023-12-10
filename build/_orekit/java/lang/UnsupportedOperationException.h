#ifndef java_lang_UnsupportedOperationException_H
#define java_lang_UnsupportedOperationException_H

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

    class UnsupportedOperationException : public ::java::lang::RuntimeException {
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

      explicit UnsupportedOperationException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      UnsupportedOperationException(const UnsupportedOperationException& obj) : ::java::lang::RuntimeException(obj) {}

      UnsupportedOperationException();
      UnsupportedOperationException(const ::java::lang::String &);
      UnsupportedOperationException(const ::java::lang::Throwable &);
      UnsupportedOperationException(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(UnsupportedOperationException);
    extern PyTypeObject *PY_TYPE(UnsupportedOperationException);

    class t_UnsupportedOperationException {
    public:
      PyObject_HEAD
      UnsupportedOperationException object;
      static PyObject *wrap_Object(const UnsupportedOperationException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
