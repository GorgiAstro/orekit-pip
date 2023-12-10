#ifndef java_lang_IllegalAccessException_H
#define java_lang_IllegalAccessException_H

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

    class IllegalAccessException : public ::java::lang::ReflectiveOperationException {
     public:
      enum {
        mid_init$_7ae3461a92a43152,
        mid_init$_e939c6558ae8d313,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit IllegalAccessException(jobject obj) : ::java::lang::ReflectiveOperationException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      IllegalAccessException(const IllegalAccessException& obj) : ::java::lang::ReflectiveOperationException(obj) {}

      IllegalAccessException();
      IllegalAccessException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(IllegalAccessException);
    extern PyTypeObject *PY_TYPE(IllegalAccessException);

    class t_IllegalAccessException {
    public:
      PyObject_HEAD
      IllegalAccessException object;
      static PyObject *wrap_Object(const IllegalAccessException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
