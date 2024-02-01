#ifndef java_io_ObjectInput_H
#define java_io_ObjectInput_H

#include "java/io/DataInput.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class ClassNotFoundException;
    class AutoCloseable;
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
        mid_available_d6ab429752e7c267,
        mid_close_ff7cb6c242604316,
        mid_read_d6ab429752e7c267,
        mid_read_89e14f411787412a,
        mid_read_1351cbafe5a435a7,
        mid_readObject_704a5bee58538972,
        mid_skip_1eaf6eb0a3f3163f,
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
