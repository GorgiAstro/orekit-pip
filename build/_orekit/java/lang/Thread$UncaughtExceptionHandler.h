#ifndef java_lang_Thread$UncaughtExceptionHandler_H
#define java_lang_Thread$UncaughtExceptionHandler_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class Thread;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Thread$UncaughtExceptionHandler : public ::java::lang::Object {
     public:
      enum {
        mid_uncaughtException_c8b54bc346ca390e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Thread$UncaughtExceptionHandler(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Thread$UncaughtExceptionHandler(const Thread$UncaughtExceptionHandler& obj) : ::java::lang::Object(obj) {}

      void uncaughtException(const ::java::lang::Thread &, const ::java::lang::Throwable &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Thread$UncaughtExceptionHandler);
    extern PyTypeObject *PY_TYPE(Thread$UncaughtExceptionHandler);

    class t_Thread$UncaughtExceptionHandler {
    public:
      PyObject_HEAD
      Thread$UncaughtExceptionHandler object;
      static PyObject *wrap_Object(const Thread$UncaughtExceptionHandler&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
