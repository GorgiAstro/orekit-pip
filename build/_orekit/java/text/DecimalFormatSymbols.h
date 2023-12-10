#ifndef java_text_DecimalFormatSymbols_H
#define java_text_DecimalFormatSymbols_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
    class Currency;
  }
  namespace io {
    class Serializable;
  }
  namespace text {
    class DecimalFormatSymbols;
  }
  namespace lang {
    class Class;
    class Cloneable;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class DecimalFormatSymbols : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0fa09c18fee449d5,
        mid_init$_c0d4c4b5d69513bc,
        mid_clone_4d26fd885228c716,
        mid_equals_65c7d273e80d497a,
        mid_getAvailableLocales_c5ed07ebd55821bb,
        mid_getCurrency_7ca0ce948a4de82c,
        mid_getCurrencySymbol_11b109bd155ca898,
        mid_getDecimalSeparator_7818f5b58320cd1f,
        mid_getDigit_7818f5b58320cd1f,
        mid_getExponentSeparator_11b109bd155ca898,
        mid_getGroupingSeparator_7818f5b58320cd1f,
        mid_getInfinity_11b109bd155ca898,
        mid_getInstance_140bef9b20a8cdf4,
        mid_getInstance_ed1556523d6313dd,
        mid_getInternationalCurrencySymbol_11b109bd155ca898,
        mid_getMinusSign_7818f5b58320cd1f,
        mid_getMonetaryDecimalSeparator_7818f5b58320cd1f,
        mid_getNaN_11b109bd155ca898,
        mid_getPatternSeparator_7818f5b58320cd1f,
        mid_getPerMill_7818f5b58320cd1f,
        mid_getPercent_7818f5b58320cd1f,
        mid_getZeroDigit_7818f5b58320cd1f,
        mid_hashCode_570ce0828f81a2c1,
        mid_setCurrency_7f42074111826307,
        mid_setCurrencySymbol_d0bc48d5b00dc40c,
        mid_setDecimalSeparator_636c0bbb96cab723,
        mid_setDigit_636c0bbb96cab723,
        mid_setExponentSeparator_d0bc48d5b00dc40c,
        mid_setGroupingSeparator_636c0bbb96cab723,
        mid_setInfinity_d0bc48d5b00dc40c,
        mid_setInternationalCurrencySymbol_d0bc48d5b00dc40c,
        mid_setMinusSign_636c0bbb96cab723,
        mid_setMonetaryDecimalSeparator_636c0bbb96cab723,
        mid_setNaN_d0bc48d5b00dc40c,
        mid_setPatternSeparator_636c0bbb96cab723,
        mid_setPerMill_636c0bbb96cab723,
        mid_setPercent_636c0bbb96cab723,
        mid_setZeroDigit_636c0bbb96cab723,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DecimalFormatSymbols(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      DecimalFormatSymbols(const DecimalFormatSymbols& obj) : ::java::lang::Object(obj) {}

      DecimalFormatSymbols();
      DecimalFormatSymbols(const ::java::util::Locale &);

      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      ::java::util::Currency getCurrency() const;
      ::java::lang::String getCurrencySymbol() const;
      jchar getDecimalSeparator() const;
      jchar getDigit() const;
      ::java::lang::String getExponentSeparator() const;
      jchar getGroupingSeparator() const;
      ::java::lang::String getInfinity() const;
      static DecimalFormatSymbols getInstance();
      static DecimalFormatSymbols getInstance(const ::java::util::Locale &);
      ::java::lang::String getInternationalCurrencySymbol() const;
      jchar getMinusSign() const;
      jchar getMonetaryDecimalSeparator() const;
      ::java::lang::String getNaN() const;
      jchar getPatternSeparator() const;
      jchar getPerMill() const;
      jchar getPercent() const;
      jchar getZeroDigit() const;
      jint hashCode() const;
      void setCurrency(const ::java::util::Currency &) const;
      void setCurrencySymbol(const ::java::lang::String &) const;
      void setDecimalSeparator(jchar) const;
      void setDigit(jchar) const;
      void setExponentSeparator(const ::java::lang::String &) const;
      void setGroupingSeparator(jchar) const;
      void setInfinity(const ::java::lang::String &) const;
      void setInternationalCurrencySymbol(const ::java::lang::String &) const;
      void setMinusSign(jchar) const;
      void setMonetaryDecimalSeparator(jchar) const;
      void setNaN(const ::java::lang::String &) const;
      void setPatternSeparator(jchar) const;
      void setPerMill(jchar) const;
      void setPercent(jchar) const;
      void setZeroDigit(jchar) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(DecimalFormatSymbols);
    extern PyTypeObject *PY_TYPE(DecimalFormatSymbols);

    class t_DecimalFormatSymbols {
    public:
      PyObject_HEAD
      DecimalFormatSymbols object;
      static PyObject *wrap_Object(const DecimalFormatSymbols&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
