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
        mid_compareTo_cf96c9a6c4367385,
        mid_equals_72faff9b05f5ed5e,
        mid_getDeclaringClass_d5247e4b166c4ce8,
        mid_hashCode_d6ab429752e7c267,
        mid_name_d2c8eb4129821f0e,
        mid_ordinal_d6ab429752e7c267,
        mid_toString_d2c8eb4129821f0e,
        mid_valueOf_b8b2bb3c4fb2b5bc,
        mid_finalize_ff7cb6c242604316,
        mid_clone_704a5bee58538972,
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
