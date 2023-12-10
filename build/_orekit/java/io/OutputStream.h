#ifndef java_io_OutputStream_H
#define java_io_OutputStream_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Flushable;
    class OutputStream;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class OutputStream : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0fa09c18fee449d5,
        mid_close_0fa09c18fee449d5,
        mid_flush_0fa09c18fee449d5,
        mid_nullOutputStream_59cd2bc5cbe06e4d,
        mid_write_20012b3010a39c05,
        mid_write_99803b0791f320ff,
        mid_write_d7af9aedcdd3845b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit OutputStream(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      OutputStream(const OutputStream& obj) : ::java::lang::Object(obj) {}

      OutputStream();

      void close() const;
      void flush() const;
      static OutputStream nullOutputStream();
      void write(const JArray< jbyte > &) const;
      void write(jint) const;
      void write(const JArray< jbyte > &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(OutputStream);
    extern PyTypeObject *PY_TYPE(OutputStream);

    class t_OutputStream {
    public:
      PyObject_HEAD
      OutputStream object;
      static PyObject *wrap_Object(const OutputStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
