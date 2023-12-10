#ifndef java_util_Currency_H
#define java_util_Currency_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class Set;
    class Currency;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Currency : public ::java::lang::Object {
     public:
      enum {
        mid_getAvailableCurrencies_015730311a5bacdc,
        mid_getCurrencyCode_11b109bd155ca898,
        mid_getDefaultFractionDigits_570ce0828f81a2c1,
        mid_getDisplayName_11b109bd155ca898,
        mid_getDisplayName_3cd873bfb132c4fd,
        mid_getInstance_6324b501742ce15e,
        mid_getInstance_255c2ca41d8843c3,
        mid_getNumericCode_570ce0828f81a2c1,
        mid_getNumericCodeAsString_11b109bd155ca898,
        mid_getSymbol_11b109bd155ca898,
        mid_getSymbol_3cd873bfb132c4fd,
        mid_toString_11b109bd155ca898,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Currency(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Currency(const Currency& obj) : ::java::lang::Object(obj) {}

      static ::java::util::Set getAvailableCurrencies();
      ::java::lang::String getCurrencyCode() const;
      jint getDefaultFractionDigits() const;
      ::java::lang::String getDisplayName() const;
      ::java::lang::String getDisplayName(const ::java::util::Locale &) const;
      static Currency getInstance(const ::java::lang::String &);
      static Currency getInstance(const ::java::util::Locale &);
      jint getNumericCode() const;
      ::java::lang::String getNumericCodeAsString() const;
      ::java::lang::String getSymbol() const;
      ::java::lang::String getSymbol(const ::java::util::Locale &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Currency);
    extern PyTypeObject *PY_TYPE(Currency);

    class t_Currency {
    public:
      PyObject_HEAD
      Currency object;
      static PyObject *wrap_Object(const Currency&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
