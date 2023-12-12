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
        mid_compareTo_53d8254923182755,
        mid_equals_221e8e85cb385209,
        mid_getDeclaringClass_d4b191ff8147475d,
        mid_hashCode_412668abc8d889e9,
        mid_name_3cffd47377eca18a,
        mid_ordinal_412668abc8d889e9,
        mid_toString_3cffd47377eca18a,
        mid_valueOf_4a7cfd0912abeab0,
        mid_finalize_0640e6acf969ed28,
        mid_clone_e661fe3ba2fafb22,
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
