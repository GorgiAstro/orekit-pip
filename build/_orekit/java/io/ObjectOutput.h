#ifndef java_io_ObjectOutput_H
#define java_io_ObjectOutput_H

#include "java/io/DataOutput.h"

namespace java {
  namespace lang {
    class AutoCloseable;
    class Class;
    class Object;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectOutput : public ::java::io::DataOutput {
     public:
      enum {
        mid_close_a1fa5dae97ea5ed2,
        mid_flush_a1fa5dae97ea5ed2,
        mid_write_459771b03534868e,
        mid_write_44ed599e93e8a30c,
        mid_write_a9fddc59b07ce512,
        mid_writeObject_55f3c894852c27a3,
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
