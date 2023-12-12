#ifndef java_util_Locale$FilteringMode_H
#define java_util_Locale$FilteringMode_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Locale$FilteringMode;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Locale$FilteringMode : public ::java::lang::Enum {
     public:
      enum {
        mid_valueOf_ec4517dd93c504ca,
        mid_values_a8d7c2de5d24f592,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Locale$FilteringMode(jobject obj) : ::java::lang::Enum(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Locale$FilteringMode(const Locale$FilteringMode& obj) : ::java::lang::Enum(obj) {}

      static Locale$FilteringMode *AUTOSELECT_FILTERING;
      static Locale$FilteringMode *EXTENDED_FILTERING;
      static Locale$FilteringMode *IGNORE_EXTENDED_RANGES;
      static Locale$FilteringMode *MAP_EXTENDED_RANGES;
      static Locale$FilteringMode *REJECT_EXTENDED_RANGES;

      static Locale$FilteringMode valueOf(const ::java::lang::String &);
      static JArray< Locale$FilteringMode > values();
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Locale$FilteringMode);
    extern PyTypeObject *PY_TYPE(Locale$FilteringMode);

    class t_Locale$FilteringMode {
    public:
      PyObject_HEAD
      Locale$FilteringMode object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Locale$FilteringMode *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Locale$FilteringMode&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Locale$FilteringMode&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
