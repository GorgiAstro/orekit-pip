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
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_734b91ac30d5f9b4,
        mid_init$_c5d3549d4f245728,
        mid_init$_9d7a6ef9713b9df2,
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
