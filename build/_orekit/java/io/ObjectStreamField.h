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
        mid_init$_c6d8829858f3ca7b,
        mid_init$_98c4736689c785d5,
        mid_compareTo_38a1845c8d44a9b0,
        mid_getName_3cffd47377eca18a,
        mid_getOffset_412668abc8d889e9,
        mid_getType_d4b191ff8147475d,
        mid_getTypeCode_d156d1ce330f6993,
        mid_getTypeString_3cffd47377eca18a,
        mid_isPrimitive_89b302893bdbe1f1,
        mid_isUnshared_89b302893bdbe1f1,
        mid_toString_3cffd47377eca18a,
        mid_setOffset_a3da1a935cb37f7b,
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
