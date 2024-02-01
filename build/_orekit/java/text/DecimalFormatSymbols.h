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
        mid_init$_ff7cb6c242604316,
        mid_init$_febf24135e738502,
        mid_clone_704a5bee58538972,
        mid_equals_72faff9b05f5ed5e,
        mid_getAvailableLocales_faf2576acf90261b,
        mid_getCurrency_e857dd6f37c7fee3,
        mid_getCurrencySymbol_d2c8eb4129821f0e,
        mid_getDecimalSeparator_153df32fe8b51cb6,
        mid_getDigit_153df32fe8b51cb6,
        mid_getExponentSeparator_d2c8eb4129821f0e,
        mid_getGroupingSeparator_153df32fe8b51cb6,
        mid_getInfinity_d2c8eb4129821f0e,
        mid_getInstance_ca13629df12de0a9,
        mid_getInstance_76ef2414fb96c3fa,
        mid_getInternationalCurrencySymbol_d2c8eb4129821f0e,
        mid_getMinusSign_153df32fe8b51cb6,
        mid_getMonetaryDecimalSeparator_153df32fe8b51cb6,
        mid_getNaN_d2c8eb4129821f0e,
        mid_getPatternSeparator_153df32fe8b51cb6,
        mid_getPerMill_153df32fe8b51cb6,
        mid_getPercent_153df32fe8b51cb6,
        mid_getZeroDigit_153df32fe8b51cb6,
        mid_hashCode_d6ab429752e7c267,
        mid_setCurrency_db8d865c2c65c553,
        mid_setCurrencySymbol_105e1eadb709d9ac,
        mid_setDecimalSeparator_e8d07df586815a42,
        mid_setDigit_e8d07df586815a42,
        mid_setExponentSeparator_105e1eadb709d9ac,
        mid_setGroupingSeparator_e8d07df586815a42,
        mid_setInfinity_105e1eadb709d9ac,
        mid_setInternationalCurrencySymbol_105e1eadb709d9ac,
        mid_setMinusSign_e8d07df586815a42,
        mid_setMonetaryDecimalSeparator_e8d07df586815a42,
        mid_setNaN_105e1eadb709d9ac,
        mid_setPatternSeparator_e8d07df586815a42,
        mid_setPerMill_e8d07df586815a42,
        mid_setPercent_e8d07df586815a42,
        mid_setZeroDigit_e8d07df586815a42,
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
