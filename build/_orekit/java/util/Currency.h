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
        mid_getAvailableCurrencies_7e8f11dd23d1142c,
        mid_getCurrencyCode_1c1fa1e935d6cdcf,
        mid_getDefaultFractionDigits_55546ef6a647f39b,
        mid_getDisplayName_1c1fa1e935d6cdcf,
        mid_getDisplayName_26070c28e6ea354d,
        mid_getInstance_3e2cd68dc3f32c98,
        mid_getInstance_38adb3ba9f36a547,
        mid_getNumericCode_55546ef6a647f39b,
        mid_getNumericCodeAsString_1c1fa1e935d6cdcf,
        mid_getSymbol_1c1fa1e935d6cdcf,
        mid_getSymbol_26070c28e6ea354d,
        mid_toString_1c1fa1e935d6cdcf,
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
