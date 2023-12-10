#ifndef java_util_Locale$IsoCountryCode_H
#define java_util_Locale$IsoCountryCode_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Locale$IsoCountryCode;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Locale$IsoCountryCode : public ::java::lang::Enum {
     public:
      enum {
        mid_valueOf_e07100500c5955b4,
        mid_values_57bc5228f757395b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Locale$IsoCountryCode(jobject obj) : ::java::lang::Enum(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Locale$IsoCountryCode(const Locale$IsoCountryCode& obj) : ::java::lang::Enum(obj) {}

      static Locale$IsoCountryCode *PART1_ALPHA2;
      static Locale$IsoCountryCode *PART1_ALPHA3;
      static Locale$IsoCountryCode *PART3;

      static Locale$IsoCountryCode valueOf(const ::java::lang::String &);
      static JArray< Locale$IsoCountryCode > values();
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Locale$IsoCountryCode);
    extern PyTypeObject *PY_TYPE(Locale$IsoCountryCode);

    class t_Locale$IsoCountryCode {
    public:
      PyObject_HEAD
      Locale$IsoCountryCode object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_Locale$IsoCountryCode *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const Locale$IsoCountryCode&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const Locale$IsoCountryCode&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
