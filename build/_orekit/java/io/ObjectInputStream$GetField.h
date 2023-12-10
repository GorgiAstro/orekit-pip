#ifndef java_io_ObjectInputStream$GetField_H
#define java_io_ObjectInputStream$GetField_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class ObjectStreamClass;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectInputStream$GetField : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0fa09c18fee449d5,
        mid_defaulted_7edad2c2f64f4d68,
        mid_get_03329b950ddb6eb1,
        mid_get_902d3a6b3b1673ff,
        mid_get_2abf1d77cbb89cbd,
        mid_get_10f32224710e3e43,
        mid_get_f11315685ee96a4b,
        mid_get_01c41545a950bc7c,
        mid_get_9c669b2d7606b99e,
        mid_get_94c4f2fbc7d60923,
        mid_get_2386283b95853ae7,
        mid_getObjectStreamClass_62a98f7a7fe67a84,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ObjectInputStream$GetField(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ObjectInputStream$GetField(const ObjectInputStream$GetField& obj) : ::java::lang::Object(obj) {}

      ObjectInputStream$GetField();

      jboolean defaulted(const ::java::lang::String &) const;
      jboolean get$(const ::java::lang::String &, jboolean) const;
      jbyte get$(const ::java::lang::String &, jbyte) const;
      jchar get$(const ::java::lang::String &, jchar) const;
      jdouble get$(const ::java::lang::String &, jdouble) const;
      jfloat get$(const ::java::lang::String &, jfloat) const;
      jint get$(const ::java::lang::String &, jint) const;
      ::java::lang::Object get$(const ::java::lang::String &, const ::java::lang::Object &) const;
      jlong get$(const ::java::lang::String &, jlong) const;
      jshort get$(const ::java::lang::String &, jshort) const;
      ::java::io::ObjectStreamClass getObjectStreamClass() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(ObjectInputStream$GetField);
    extern PyTypeObject *PY_TYPE(ObjectInputStream$GetField);

    class t_ObjectInputStream$GetField {
    public:
      PyObject_HEAD
      ObjectInputStream$GetField object;
      static PyObject *wrap_Object(const ObjectInputStream$GetField&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
