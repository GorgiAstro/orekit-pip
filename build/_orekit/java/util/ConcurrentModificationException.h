#ifndef java_util_ConcurrentModificationException_H
#define java_util_ConcurrentModificationException_H

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
  namespace util {

    class ConcurrentModificationException : public ::java::lang::RuntimeException {
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

      explicit ConcurrentModificationException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ConcurrentModificationException(const ConcurrentModificationException& obj) : ::java::lang::RuntimeException(obj) {}

      ConcurrentModificationException();
      ConcurrentModificationException(const ::java::lang::String &);
      ConcurrentModificationException(const ::java::lang::Throwable &);
      ConcurrentModificationException(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(ConcurrentModificationException);
    extern PyTypeObject *PY_TYPE(ConcurrentModificationException);

    class t_ConcurrentModificationException {
    public:
      PyObject_HEAD
      ConcurrentModificationException object;
      static PyObject *wrap_Object(const ConcurrentModificationException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
