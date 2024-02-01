#ifndef java_util_Locale$Category_H
#define java_util_Locale$Category_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Locale$Category;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Locale$Category : public ::java::lang::Enum {
     public:
      enum {
        mid_valueOf_6ea35477c84ea2ba,
        mid_values_49b0b5bba5ce4f47,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Locale$Category(jobject obj) : ::java::lang::Enum(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Locale$Category(const Locale$Category& obj) : ::java::lang::Enum(obj) {}

      static Locale$Category *DISPLAY;
      static Locale$Category *FORMAT;

      static Locale$Category valueOf(const ::java::lang::String &);
      static JArray< Locale$Category > values();
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Locale$Category);
    extern PyTypeObject *PY_TYPE(Locale$Category);

    class t_Locale$Category {
    public:
      PyObject_HEAD
      Locale$Category object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Locale$Category *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Locale$Category&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Locale$Category&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
