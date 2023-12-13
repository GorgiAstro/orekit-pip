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
        mid_init$_a1fa5dae97ea5ed2,
        mid_put_76cf8b957ccb7ae1,
        mid_put_c99a0c15b2cc0a3e,
        mid_put_165c6e94f6289825,
        mid_put_b7ec643e4edd96c5,
        mid_put_d859a3ff51dc23ad,
        mid_put_02c6e5855745e0e2,
        mid_put_2bd6b3882bcba51f,
        mid_put_1d7f34ba2f8998cc,
        mid_put_2b983c9d6fbe6a27,
        mid_write_765c1712f3f1ff4b,
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
