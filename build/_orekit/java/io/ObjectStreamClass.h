#ifndef java_io_ObjectStreamClass_H
#define java_io_ObjectStreamClass_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class ObjectStreamField;
    class Serializable;
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

    class ObjectStreamClass : public ::java::lang::Object {
     public:
      enum {
        mid_forClass_d5247e4b166c4ce8,
        mid_getField_755e6ba8a7c56da9,
        mid_getFields_e7c3326b5d56ed5e,
        mid_getName_d2c8eb4129821f0e,
        mid_getSerialVersionUID_42c72b98e3c2e08a,
        mid_lookup_da01accbba3f5e1f,
        mid_lookupAny_da01accbba3f5e1f,
        mid_toString_d2c8eb4129821f0e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ObjectStreamClass(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ObjectStreamClass(const ObjectStreamClass& obj) : ::java::lang::Object(obj) {}

      static JArray< ::java::io::ObjectStreamField > *NO_FIELDS;

      ::java::lang::Class forClass() const;
      ::java::io::ObjectStreamField getField(const ::java::lang::String &) const;
      JArray< ::java::io::ObjectStreamField > getFields() const;
      ::java::lang::String getName() const;
      jlong getSerialVersionUID() const;
      static ObjectStreamClass lookup(const ::java::lang::Class &);
      static ObjectStreamClass lookupAny(const ::java::lang::Class &);
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(ObjectStreamClass);
    extern PyTypeObject *PY_TYPE(ObjectStreamClass);

    class t_ObjectStreamClass {
    public:
      PyObject_HEAD
      ObjectStreamClass object;
      static PyObject *wrap_Object(const ObjectStreamClass&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
