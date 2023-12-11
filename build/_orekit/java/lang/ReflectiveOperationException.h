#ifndef java_lang_ReflectiveOperationException_H
#define java_lang_ReflectiveOperationException_H

#include "java/lang/Exception.h"

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

    class ReflectiveOperationException : public ::java::lang::Exception {
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

      explicit ReflectiveOperationException(jobject obj) : ::java::lang::Exception(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ReflectiveOperationException(const ReflectiveOperationException& obj) : ::java::lang::Exception(obj) {}

      ReflectiveOperationException();
      ReflectiveOperationException(const ::java::lang::String &);
      ReflectiveOperationException(const ::java::lang::Throwable &);
      ReflectiveOperationException(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ReflectiveOperationException);
    extern PyTypeObject *PY_TYPE(ReflectiveOperationException);

    class t_ReflectiveOperationException {
    public:
      PyObject_HEAD
      ReflectiveOperationException object;
      static PyObject *wrap_Object(const ReflectiveOperationException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
