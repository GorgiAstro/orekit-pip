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
        mid_getAvailableCurrencies_2dfcbd371d62f4e1,
        mid_getCurrencyCode_3cffd47377eca18a,
        mid_getDefaultFractionDigits_412668abc8d889e9,
        mid_getDisplayName_3cffd47377eca18a,
        mid_getDisplayName_4b51060c6b7ea981,
        mid_getInstance_51e9b5ef3cee4cb5,
        mid_getInstance_babbc6e6ce0672cb,
        mid_getNumericCode_412668abc8d889e9,
        mid_getNumericCodeAsString_3cffd47377eca18a,
        mid_getSymbol_3cffd47377eca18a,
        mid_getSymbol_4b51060c6b7ea981,
        mid_toString_3cffd47377eca18a,
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
