#ifndef java_io_ObjectInput_H
#define java_io_ObjectInput_H

#include "java/io/DataInput.h"

namespace java {
  namespace lang {
    class AutoCloseable;
    class Class;
    class Object;
    class ClassNotFoundException;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectInput : public ::java::io::DataInput {
     public:
      enum {
        mid_available_55546ef6a647f39b,
        mid_close_a1fa5dae97ea5ed2,
        mid_read_55546ef6a647f39b,
        mid_read_53324f422c2c7f64,
        mid_read_296dd75c373e2c1d,
        mid_readObject_541690f9ee81d3ad,
        mid_skip_9db63109f74a74fc,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ObjectInput(jobject obj) : ::java::io::DataInput(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ObjectInput(const ObjectInput& obj) : ::java::io::DataInput(obj) {}

      jint available() const;
      void close() const;
      jint read() const;
      jint read(const JArray< jbyte > &) const;
      jint read(const JArray< jbyte > &, jint, jint) const;
      ::java::lang::Object readObject() const;
      jlong skip(jlong) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(ObjectInput);
    extern PyTypeObject *PY_TYPE(ObjectInput);

    class t_ObjectInput {
    public:
      PyObject_HEAD
      ObjectInput object;
      static PyObject *wrap_Object(const ObjectInput&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
