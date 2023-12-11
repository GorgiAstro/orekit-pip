#ifndef java_io_IOException_H
#define java_io_IOException_H

#include "java/lang/Exception.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class IOException : public ::java::lang::Exception {
     public:
      enum {
        mid_init$_0640e6acf969ed28,
        mid_init$_f5ffdf29129ef90a,
        mid_init$_7d9320fd2ea36122,
        mid_init$_0701bef404aae0c6,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit IOException(jobject obj) : ::java::lang::Exception(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      IOException(const IOException& obj) : ::java::lang::Exception(obj) {}

      IOException();
      IOException(const ::java::lang::String &);
      IOException(const ::java::lang::Throwable &);
      IOException(const ::java::lang::String &, const ::java::lang::Throwable &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(IOException);
    extern PyTypeObject *PY_TYPE(IOException);

    class t_IOException {
    public:
      PyObject_HEAD
      IOException object;
      static PyObject *wrap_Object(const IOException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
