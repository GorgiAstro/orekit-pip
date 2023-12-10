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
        mid_init$_54422b304601666c,
        mid_init$_b6de2346b8ffb4ec,
        mid_compareTo_90eb61a0d5cc5e34,
        mid_getName_11b109bd155ca898,
        mid_getOffset_570ce0828f81a2c1,
        mid_getType_7c16c5008b34b3db,
        mid_getTypeCode_7818f5b58320cd1f,
        mid_getTypeString_11b109bd155ca898,
        mid_isPrimitive_b108b35ef48e27bd,
        mid_isUnshared_b108b35ef48e27bd,
        mid_toString_11b109bd155ca898,
        mid_setOffset_99803b0791f320ff,
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
