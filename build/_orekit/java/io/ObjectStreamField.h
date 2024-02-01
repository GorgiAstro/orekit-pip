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
        mid_init$_abfceab45da3bcbb,
        mid_init$_3cb47bbfbfff2f5d,
        mid_compareTo_9aa1a0d21cdeb90e,
        mid_getName_d2c8eb4129821f0e,
        mid_getOffset_d6ab429752e7c267,
        mid_getType_d5247e4b166c4ce8,
        mid_getTypeCode_153df32fe8b51cb6,
        mid_getTypeString_d2c8eb4129821f0e,
        mid_isPrimitive_eee3de00fe971136,
        mid_isUnshared_eee3de00fe971136,
        mid_toString_d2c8eb4129821f0e,
        mid_setOffset_8fd427ab23829bf5,
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
