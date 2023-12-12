#ifndef java_lang_InstantiationException_H
#define java_lang_InstantiationException_H

#include "java/lang/ReflectiveOperationException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class InstantiationException : public ::java::lang::ReflectiveOperationException {
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

      explicit InstantiationException(jobject obj) : ::java::lang::ReflectiveOperationException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      InstantiationException(const InstantiationException& obj) : ::java::lang::ReflectiveOperationException(obj) {}

      InstantiationException();
      InstantiationException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(InstantiationException);
    extern PyTypeObject *PY_TYPE(InstantiationException);

    class t_InstantiationException {
    public:
      PyObject_HEAD
      InstantiationException object;
      static PyObject *wrap_Object(const InstantiationException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
