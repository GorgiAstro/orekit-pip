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
