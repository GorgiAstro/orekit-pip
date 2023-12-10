#ifndef java_io_ObjectStreamField_H
#define java_io_ObjectStreamField_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class ObjectStreamField : public ::java::lang::Object {
     public:
      enum {
        mid_init$_4b15f99c4b73ca21,
        mid_init$_0b1baeb0e3d57706,
        mid_compareTo_ac8c1b6f384391ef,
        mid_getName_0090f7797e403f43,
        mid_getOffset_f2f64475e4580546,
        mid_getType_8f66acc08d2a174c,
        mid_getTypeCode_29e026b9d068f1c7,
        mid_getTypeString_0090f7797e403f43,
        mid_isPrimitive_e470b6d9e0d979db,
        mid_isUnshared_e470b6d9e0d979db,
        mid_toString_0090f7797e403f43,
        mid_setOffset_0a2a1ac2721c0336,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ObjectStreamField(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ObjectStreamField(const ObjectStreamField& obj) : ::java::lang::Object(obj) {}

      ObjectStreamField(const ::java::lang::String &, const ::java::lang::Class &);
      ObjectStreamField(const ::java::lang::String &, const ::java::lang::Class &, jboolean);

      jint compareTo(const ::java::lang::Object &) const;
      ::java::lang::String getName() const;
      jint getOffset() const;
      ::java::lang::Class getType() const;
      jchar getTypeCode() const;
      ::java::lang::String getTypeString() const;
      jboolean isPrimitive() const;
      jboolean isUnshared() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(ObjectStreamField);
    extern PyTypeObject *PY_TYPE(ObjectStreamField);

    class t_ObjectStreamField {
    public:
      PyObject_HEAD
      ObjectStreamField object;
      static PyObject *wrap_Object(const ObjectStreamField&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
