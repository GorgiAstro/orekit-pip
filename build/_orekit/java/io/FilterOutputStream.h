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
        mid_init$_da52d6defb468793,
        mid_close_ff7cb6c242604316,
        mid_flush_ff7cb6c242604316,
        mid_write_bba2a19638de22ff,
        mid_write_8fd427ab23829bf5,
        mid_write_e4288ba5fbf20d28,
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
