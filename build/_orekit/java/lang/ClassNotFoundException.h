#ifndef java_lang_ClassNotFoundException_H
#define java_lang_ClassNotFoundException_H

#include "java/lang/ReflectiveOperationException.h"

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

    class ClassNotFoundException : public ::java::lang::ReflectiveOperationException {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_init$_f5ffdf29129ef90a,
        mid_init$_0701bef404aae0c6,
        mid_getCause_1541e293f3dffabf,
        mid_getException_1541e293f3dffabf,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ClassNotFoundException(jobject obj) : ::java::lang::ReflectiveOperationException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ClassNotFoundException(const ClassNotFoundException& obj) : ::java::lang::ReflectiveOperationException(obj) {}

      ClassNotFoundException();
      ClassNotFoundException(const ::java::lang::String &);
      ClassNotFoundException(const ::java::lang::String &, const ::java::lang::Throwable &);

      ::java::lang::Throwable getCause() const;
      ::java::lang::Throwable getException() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(ClassNotFoundException);
    extern PyTypeObject *PY_TYPE(ClassNotFoundException);

    class t_ClassNotFoundException {
    public:
      PyObject_HEAD
      ClassNotFoundException object;
      static PyObject *wrap_Object(const ClassNotFoundException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
