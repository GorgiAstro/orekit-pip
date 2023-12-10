#ifndef java_lang_InterruptedException_H
#define java_lang_InterruptedException_H

#include "java/lang/Exception.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class InterruptedException : public ::java::lang::Exception {
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

      explicit InterruptedException(jobject obj) : ::java::lang::Exception(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      InterruptedException(const InterruptedException& obj) : ::java::lang::Exception(obj) {}

      InterruptedException();
      InterruptedException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(InterruptedException);
    extern PyTypeObject *PY_TYPE(InterruptedException);

    class t_InterruptedException {
    public:
      PyObject_HEAD
      InterruptedException object;
      static PyObject *wrap_Object(const InterruptedException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
