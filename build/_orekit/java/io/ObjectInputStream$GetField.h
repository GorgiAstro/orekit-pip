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
        mid_init$_7ae3461a92a43152,
        mid_defaulted_6b161f495ea569b8,
        mid_get_9876c2abf74da7e0,
        mid_get_ee15bcb5cc1b1c51,
        mid_get_c4a813c023f75fad,
        mid_get_e722af06fdba4ebe,
        mid_get_47d906e7e1c7a09f,
        mid_get_4918d8aef83f928e,
        mid_get_40b7949a09a23362,
        mid_get_164a181bcf5b61aa,
        mid_get_fc00726672f3fd8a,
        mid_getObjectStreamClass_8ad6f15d09fb9e15,
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
