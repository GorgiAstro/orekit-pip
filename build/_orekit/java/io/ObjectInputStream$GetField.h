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
        mid_init$_0640e6acf969ed28,
        mid_defaulted_fd2162b8a05a22fe,
        mid_get_25eab1df282b7da1,
        mid_get_7e64616b59cda34c,
        mid_get_aa3dbdfe21f97666,
        mid_get_792704fafbc1ba32,
        mid_get_8932d96572bfa5e9,
        mid_get_f5fd9af3faa747d5,
        mid_get_d99c45aaa01ca49f,
        mid_get_08826549b8f2bdcc,
        mid_get_c262b427c2fc0c80,
        mid_getObjectStreamClass_dbbdc211e0cefa39,
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
