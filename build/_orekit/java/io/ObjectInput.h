#ifndef java_io_ObjectInput_H
#define java_io_ObjectInput_H

#include "java/io/DataInput.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class AutoCloseable;
    class ClassNotFoundException;
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectInput : public ::java::io::DataInput {
     public:
      enum {
        mid_available_412668abc8d889e9,
        mid_close_0640e6acf969ed28,
        mid_read_412668abc8d889e9,
        mid_read_67c88f2bf4e7f8b2,
        mid_read_68a76742c8623fb3,
        mid_readObject_e661fe3ba2fafb22,
        mid_skip_f4ad805a81234b49,
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
