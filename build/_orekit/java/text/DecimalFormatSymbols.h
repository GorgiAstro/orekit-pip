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
        mid_init$_0640e6acf969ed28,
        mid_init$_be68e56b20169c78,
        mid_clone_e661fe3ba2fafb22,
        mid_equals_221e8e85cb385209,
        mid_getAvailableLocales_85ff0d07ca843902,
        mid_getCurrency_e0e11425d6f25aed,
        mid_getCurrencySymbol_3cffd47377eca18a,
        mid_getDecimalSeparator_d156d1ce330f6993,
        mid_getDigit_d156d1ce330f6993,
        mid_getExponentSeparator_3cffd47377eca18a,
        mid_getGroupingSeparator_d156d1ce330f6993,
        mid_getInfinity_3cffd47377eca18a,
        mid_getInstance_42697fd6214b108c,
        mid_getInstance_bab4cf5650304785,
        mid_getInternationalCurrencySymbol_3cffd47377eca18a,
        mid_getMinusSign_d156d1ce330f6993,
        mid_getMonetaryDecimalSeparator_d156d1ce330f6993,
        mid_getNaN_3cffd47377eca18a,
        mid_getPatternSeparator_d156d1ce330f6993,
        mid_getPerMill_d156d1ce330f6993,
        mid_getPercent_d156d1ce330f6993,
        mid_getZeroDigit_d156d1ce330f6993,
        mid_hashCode_412668abc8d889e9,
        mid_setCurrency_f72be4c0db9df8b9,
        mid_setCurrencySymbol_f5ffdf29129ef90a,
        mid_setDecimalSeparator_102587d250c3217b,
        mid_setDigit_102587d250c3217b,
        mid_setExponentSeparator_f5ffdf29129ef90a,
        mid_setGroupingSeparator_102587d250c3217b,
        mid_setInfinity_f5ffdf29129ef90a,
        mid_setInternationalCurrencySymbol_f5ffdf29129ef90a,
        mid_setMinusSign_102587d250c3217b,
        mid_setMonetaryDecimalSeparator_102587d250c3217b,
        mid_setNaN_f5ffdf29129ef90a,
        mid_setPatternSeparator_102587d250c3217b,
        mid_setPerMill_102587d250c3217b,
        mid_setPercent_102587d250c3217b,
        mid_setZeroDigit_102587d250c3217b,
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
