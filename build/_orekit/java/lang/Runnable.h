#ifndef java_lang_Runnable_H
#define java_lang_Runnable_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Runnable : public ::java::lang::Object {
     public:
      enum {
        mid_run_a1fa5dae97ea5ed2,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Runnable(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Runnable(const Runnable& obj) : ::java::lang::Object(obj) {}

      void run() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Runnable);
    extern PyTypeObject *PY_TYPE(Runnable);

    class t_Runnable {
    public:
      PyObject_HEAD
      Runnable object;
      static PyObject *wrap_Object(const Runnable&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
