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
        mid_init$_0640e6acf969ed28,
        mid_init$_f5ffdf29129ef90a,
        mid_init$_7d9320fd2ea36122,
        mid_init$_0701bef404aae0c6,
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
