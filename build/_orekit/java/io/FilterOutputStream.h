#ifndef java_io_FilterOutputStream_H
#define java_io_FilterOutputStream_H

#include "java/io/OutputStream.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class FilterOutputStream : public ::java::io::OutputStream {
     public:
      enum {
        mid_init$_fd7cb6689cfa6eeb,
        mid_close_0fa09c18fee449d5,
        mid_flush_0fa09c18fee449d5,
        mid_write_20012b3010a39c05,
        mid_write_99803b0791f320ff,
        mid_write_d7af9aedcdd3845b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit FilterOutputStream(jobject obj) : ::java::io::OutputStream(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      FilterOutputStream(const FilterOutputStream& obj) : ::java::io::OutputStream(obj) {}

      FilterOutputStream(const ::java::io::OutputStream &);

      void close() const;
      void flush() const;
      void write(const JArray< jbyte > &) const;
      void write(jint) const;
      void write(const JArray< jbyte > &, jint, jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(FilterOutputStream);
    extern PyTypeObject *PY_TYPE(FilterOutputStream);

    class t_FilterOutputStream {
    public:
      PyObject_HEAD
      FilterOutputStream object;
      static PyObject *wrap_Object(const FilterOutputStream&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
