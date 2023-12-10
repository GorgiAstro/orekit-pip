#ifndef java_lang_Exception_H
#define java_lang_Exception_H

#include "java/lang/Throwable.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Exception : public ::java::lang::Throwable {
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

      explicit Exception(jobject obj) : ::java::lang::Throwable(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Exception(const Exception& obj) : ::java::lang::Throwable(obj) {}

      Exception();
      Exception(const ::java::lang::String &);
      Exception(const ::java::lang::Throwable &);
      Exception(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Exception);
    extern PyTypeObject *PY_TYPE(Exception);

    class t_Exception {
    public:
      PyObject_HEAD
      Exception object;
      static PyObject *wrap_Object(const Exception&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
