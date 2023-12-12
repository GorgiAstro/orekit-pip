#ifndef java_util_NoSuchElementException_H
#define java_util_NoSuchElementException_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class NoSuchElementException : public ::java::lang::RuntimeException {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_init$_f5ffdf29129ef90a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NoSuchElementException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NoSuchElementException(const NoSuchElementException& obj) : ::java::lang::RuntimeException(obj) {}

      NoSuchElementException();
      NoSuchElementException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(NoSuchElementException);
    extern PyTypeObject *PY_TYPE(NoSuchElementException);

    class t_NoSuchElementException {
    public:
      PyObject_HEAD
      NoSuchElementException object;
      static PyObject *wrap_Object(const NoSuchElementException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
