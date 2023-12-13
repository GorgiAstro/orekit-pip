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
  namespace lang {
    class Class;
    class Cloneable;
    class String;
  }
  namespace text {
    class DecimalFormatSymbols;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class DecimalFormatSymbols : public ::java::lang::Object {
     public:
      enum {
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_ae952945a283d1a5,
        mid_clone_541690f9ee81d3ad,
        mid_equals_460c5e2d9d51c6cc,
        mid_getAvailableLocales_8d2cd0b971cc7b85,
        mid_getCurrency_5c4bce1ad9114b42,
        mid_getCurrencySymbol_1c1fa1e935d6cdcf,
        mid_getDecimalSeparator_5e2f8fc4d7c03fbd,
        mid_getDigit_5e2f8fc4d7c03fbd,
        mid_getExponentSeparator_1c1fa1e935d6cdcf,
        mid_getGroupingSeparator_5e2f8fc4d7c03fbd,
        mid_getInfinity_1c1fa1e935d6cdcf,
        mid_getInstance_36ca27640d647410,
        mid_getInstance_4b7e8b7f5086f229,
        mid_getInternationalCurrencySymbol_1c1fa1e935d6cdcf,
        mid_getMinusSign_5e2f8fc4d7c03fbd,
        mid_getMonetaryDecimalSeparator_5e2f8fc4d7c03fbd,
        mid_getNaN_1c1fa1e935d6cdcf,
        mid_getPatternSeparator_5e2f8fc4d7c03fbd,
        mid_getPerMill_5e2f8fc4d7c03fbd,
        mid_getPercent_5e2f8fc4d7c03fbd,
        mid_getZeroDigit_5e2f8fc4d7c03fbd,
        mid_hashCode_55546ef6a647f39b,
        mid_setCurrency_4943c1e384d46623,
        mid_setCurrencySymbol_734b91ac30d5f9b4,
        mid_setDecimalSeparator_df95ad02f5b4acd9,
        mid_setDigit_df95ad02f5b4acd9,
        mid_setExponentSeparator_734b91ac30d5f9b4,
        mid_setGroupingSeparator_df95ad02f5b4acd9,
        mid_setInfinity_734b91ac30d5f9b4,
        mid_setInternationalCurrencySymbol_734b91ac30d5f9b4,
        mid_setMinusSign_df95ad02f5b4acd9,
        mid_setMonetaryDecimalSeparator_df95ad02f5b4acd9,
        mid_setNaN_734b91ac30d5f9b4,
        mid_setPatternSeparator_df95ad02f5b4acd9,
        mid_setPerMill_df95ad02f5b4acd9,
        mid_setPercent_df95ad02f5b4acd9,
        mid_setZeroDigit_df95ad02f5b4acd9,
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
