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
        mid_init$_3ff057c15820ae2e,
        mid_init$_b9642883180e8c56,
        mid_compareTo_b7898c5e94612125,
        mid_getName_1c1fa1e935d6cdcf,
        mid_getOffset_55546ef6a647f39b,
        mid_getType_1aeb0737a960d371,
        mid_getTypeCode_5e2f8fc4d7c03fbd,
        mid_getTypeString_1c1fa1e935d6cdcf,
        mid_isPrimitive_9ab94ac1dc23b105,
        mid_isUnshared_9ab94ac1dc23b105,
        mid_toString_1c1fa1e935d6cdcf,
        mid_setOffset_44ed599e93e8a30c,
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
