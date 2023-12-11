#ifndef java_lang_SecurityException_H
#define java_lang_SecurityException_H

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

    class SecurityException : public ::java::lang::RuntimeException {
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

      explicit SecurityException(jobject obj) : ::java::lang::RuntimeException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SecurityException(const SecurityException& obj) : ::java::lang::RuntimeException(obj) {}

      SecurityException();
      SecurityException(const ::java::lang::String &);
      SecurityException(const ::java::lang::Throwable &);
      SecurityException(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(SecurityException);
    extern PyTypeObject *PY_TYPE(SecurityException);

    class t_SecurityException {
    public:
      PyObject_HEAD
      SecurityException object;
      static PyObject *wrap_Object(const SecurityException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
