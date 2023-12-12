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
        mid_init$_0640e6acf969ed28,
        mid_put_e5ca4b97ee6bd2b6,
        mid_put_fdad7d6aa0478537,
        mid_put_a1bc3d9ec64c6ced,
        mid_put_c6843ef8200b1ede,
        mid_put_3fef71434b554c3e,
        mid_put_358501078068b45e,
        mid_put_53d92541fcec0ec7,
        mid_put_09a9cf7c5fc0949e,
        mid_put_ce81d28a4d5a5313,
        mid_write_e0a1f7a61289c095,
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
