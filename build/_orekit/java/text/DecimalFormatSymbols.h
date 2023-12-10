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
        mid_init$_7ae3461a92a43152,
        mid_init$_9ea720baeb257525,
        mid_clone_dfd7647d9110ac9f,
        mid_equals_229c87223f486349,
        mid_getAvailableLocales_81e8fdf65840780c,
        mid_getCurrency_6c7b9765863c0754,
        mid_getCurrencySymbol_0090f7797e403f43,
        mid_getDecimalSeparator_29e026b9d068f1c7,
        mid_getDigit_29e026b9d068f1c7,
        mid_getExponentSeparator_0090f7797e403f43,
        mid_getGroupingSeparator_29e026b9d068f1c7,
        mid_getInfinity_0090f7797e403f43,
        mid_getInstance_176868871448551c,
        mid_getInstance_a565ebfb055c5f39,
        mid_getInternationalCurrencySymbol_0090f7797e403f43,
        mid_getMinusSign_29e026b9d068f1c7,
        mid_getMonetaryDecimalSeparator_29e026b9d068f1c7,
        mid_getNaN_0090f7797e403f43,
        mid_getPatternSeparator_29e026b9d068f1c7,
        mid_getPerMill_29e026b9d068f1c7,
        mid_getPercent_29e026b9d068f1c7,
        mid_getZeroDigit_29e026b9d068f1c7,
        mid_hashCode_f2f64475e4580546,
        mid_setCurrency_4f90b9143eba41de,
        mid_setCurrencySymbol_e939c6558ae8d313,
        mid_setDecimalSeparator_be0046d7f7239695,
        mid_setDigit_be0046d7f7239695,
        mid_setExponentSeparator_e939c6558ae8d313,
        mid_setGroupingSeparator_be0046d7f7239695,
        mid_setInfinity_e939c6558ae8d313,
        mid_setInternationalCurrencySymbol_e939c6558ae8d313,
        mid_setMinusSign_be0046d7f7239695,
        mid_setMonetaryDecimalSeparator_be0046d7f7239695,
        mid_setNaN_e939c6558ae8d313,
        mid_setPatternSeparator_be0046d7f7239695,
        mid_setPerMill_be0046d7f7239695,
        mid_setPercent_be0046d7f7239695,
        mid_setZeroDigit_be0046d7f7239695,
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
