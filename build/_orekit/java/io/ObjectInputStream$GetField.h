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
        mid_init$_ff7cb6c242604316,
        mid_defaulted_df4c65b2aede5c41,
        mid_get_4eb9aacd05482ae5,
        mid_get_296f28f48ee46d22,
        mid_get_aac5156a81a4da28,
        mid_get_6249386b87b57efb,
        mid_get_a27a778907596859,
        mid_get_36da4b2d3bc5085f,
        mid_get_171ef0dce466b6cc,
        mid_get_c0ee6a335f92e4aa,
        mid_get_c81bea946077ea6e,
        mid_getObjectStreamClass_bd13c6c1b9563bca,
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
