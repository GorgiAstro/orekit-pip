#ifndef java_io_ObjectOutput_H
#define java_io_ObjectOutput_H

#include "java/io/DataOutput.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class AutoCloseable;
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectOutput : public ::java::io::DataOutput {
     public:
      enum {
        mid_close_0fa09c18fee449d5,
        mid_flush_0fa09c18fee449d5,
        mid_write_20012b3010a39c05,
        mid_write_99803b0791f320ff,
        mid_write_d7af9aedcdd3845b,
        mid_writeObject_2990946c992aafed,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ObjectOutput(jobject obj) : ::java::io::DataOutput(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ObjectOutput(const ObjectOutput& obj) : ::java::io::DataOutput(obj) {}

      void close() const;
      void flush() const;
      void write(const JArray< jbyte > &) const;
      void write(jint) const;
      void write(const JArray< jbyte > &, jint, jint) const;
      void writeObject(const ::java::lang::Object &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(ObjectOutput);
    extern PyTypeObject *PY_TYPE(ObjectOutput);

    class t_ObjectOutput {
    public:
      PyObject_HEAD
      ObjectOutput object;
      static PyObject *wrap_Object(const ObjectOutput&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
