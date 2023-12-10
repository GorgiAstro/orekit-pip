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
        mid_init$_7ae3461a92a43152,
        mid_init$_e939c6558ae8d313,
        mid_init$_fd4c96defa578a22,
        mid_getCause_67c131e34276cda8,
        mid_getException_67c131e34276cda8,
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
