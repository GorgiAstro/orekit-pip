#ifndef java_io_SyncFailedException_H
#define java_io_SyncFailedException_H

#include "java/io/IOException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class SyncFailedException : public ::java::io::IOException {
     public:
      enum {
        mid_init$_e939c6558ae8d313,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit SyncFailedException(jobject obj) : ::java::io::IOException(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      SyncFailedException(const SyncFailedException& obj) : ::java::io::IOException(obj) {}

      SyncFailedException(const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(SyncFailedException);
    extern PyTypeObject *PY_TYPE(SyncFailedException);

    class t_SyncFailedException {
    public:
      PyObject_HEAD
      SyncFailedException object;
      static PyObject *wrap_Object(const SyncFailedException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif