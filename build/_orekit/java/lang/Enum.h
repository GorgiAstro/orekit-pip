#ifndef java_lang_Enum_H
#define java_lang_Enum_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Enum;
    class Class;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Enum : public ::java::lang::Object {
     public:
      enum {
        mid_compareTo_970dc9d7023c3026,
        mid_equals_460c5e2d9d51c6cc,
        mid_getDeclaringClass_1aeb0737a960d371,
        mid_hashCode_55546ef6a647f39b,
        mid_name_1c1fa1e935d6cdcf,
        mid_ordinal_55546ef6a647f39b,
        mid_toString_1c1fa1e935d6cdcf,
        mid_valueOf_1b9de4ad908f58c0,
        mid_finalize_a1fa5dae97ea5ed2,
        mid_clone_541690f9ee81d3ad,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Enum(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Enum(const Enum& obj) : ::java::lang::Object(obj) {}

      jint compareTo(const Enum &) const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::Class getDeclaringClass() const;
      jint hashCode() const;
      ::java::lang::String name() const;
      jint ordinal() const;
      ::java::lang::String toString() const;
      static Enum valueOf(const ::java::lang::Class &, const ::java::lang::String &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Enum);
    extern PyTypeObject *PY_TYPE(Enum);

    class t_Enum {
    public:
      PyObject_HEAD
      Enum object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Enum *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Enum&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Enum&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
