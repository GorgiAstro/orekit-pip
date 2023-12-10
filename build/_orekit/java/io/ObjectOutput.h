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
        mid_close_7ae3461a92a43152,
        mid_flush_7ae3461a92a43152,
        mid_write_9c4b35f0a6dc87f3,
        mid_write_0a2a1ac2721c0336,
        mid_write_125b1e9f043b29f8,
        mid_writeObject_7ca0d9438822cb0b,
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
