#ifndef java_io_ObjectOutputStream$PutField_H
#define java_io_ObjectOutputStream$PutField_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class ObjectOutput;
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
        mid_init$_7ae3461a92a43152,
        mid_put_d1dd1bdcf55f8f80,
        mid_put_d8db59d524369146,
        mid_put_7519d48499ecc9f1,
        mid_put_dc256bfc3daae929,
        mid_put_a9e5853450c40585,
        mid_put_cabf0c57aa55c764,
        mid_put_69697a1d09839056,
        mid_put_c20964352be13a9e,
        mid_put_7e517bdb222888df,
        mid_write_c18dd8e10ca01609,
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
