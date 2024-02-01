#ifndef java_io_ObjectOutputStream$PutField_H
#define java_io_ObjectOutputStream$PutField_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class ObjectOutput;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectOutputStream$PutField : public ::java::lang::Object {
     public:
      enum {
        mid_init$_ff7cb6c242604316,
        mid_put_c5d48f261709aa3e,
        mid_put_4e8636a267c9c4c5,
        mid_put_67ec27f36e12d83b,
        mid_put_4a1c1c41794e71b1,
        mid_put_93df5508dbbcb1df,
        mid_put_409747bddf859341,
        mid_put_8d1699d8ffa3b892,
        mid_put_9eb977100dbabed8,
        mid_put_5fd371a8d3f6eeac,
        mid_write_7449e564e5e09d65,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ObjectOutputStream$PutField(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ObjectOutputStream$PutField(const ObjectOutputStream$PutField& obj) : ::java::lang::Object(obj) {}

      ObjectOutputStream$PutField();

      void put(const ::java::lang::String &, jboolean) const;
      void put(const ::java::lang::String &, jbyte) const;
      void put(const ::java::lang::String &, jchar) const;
      void put(const ::java::lang::String &, jdouble) const;
      void put(const ::java::lang::String &, jfloat) const;
      void put(const ::java::lang::String &, jint) const;
      void put(const ::java::lang::String &, const ::java::lang::Object &) const;
      void put(const ::java::lang::String &, jlong) const;
      void put(const ::java::lang::String &, jshort) const;
      void write(const ::java::io::ObjectOutput &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(ObjectOutputStream$PutField);
    extern PyTypeObject *PY_TYPE(ObjectOutputStream$PutField);

    class t_ObjectOutputStream$PutField {
    public:
      PyObject_HEAD
      ObjectOutputStream$PutField object;
      static PyObject *wrap_Object(const ObjectOutputStream$PutField&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
