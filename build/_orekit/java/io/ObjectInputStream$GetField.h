#ifndef java_io_ObjectInputStream$GetField_H
#define java_io_ObjectInputStream$GetField_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class ObjectStreamClass;
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

    class ObjectInputStream$GetField : public ::java::lang::Object {
     public:
      enum {
        mid_init$_a1fa5dae97ea5ed2,
        mid_defaulted_cde6b28e15c96b75,
        mid_get_8662498d88818ee3,
        mid_get_1fd0b55ec77056dd,
        mid_get_1ef6b35d3cd7a399,
        mid_get_85b99eeda70b0543,
        mid_get_e13455b72046a8dc,
        mid_get_7c969bab81d289ef,
        mid_get_b3786ea1192ca6c0,
        mid_get_c6bb8b0197d9599d,
        mid_get_f6ccb7c40f2a4191,
        mid_getObjectStreamClass_fb017e274a57c596,
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
