#ifndef java_text_DecimalFormat_H
#define java_text_DecimalFormat_H

#include "java/text/NumberFormat.h"

namespace java {
  namespace lang {
    class StringBuffer;
    class Number;
    class Class;
    class Object;
    class String;
  }
  namespace text {
    class ParsePosition;
    class AttributedCharacterIterator;
    class FieldPosition;
    class DecimalFormatSymbols;
  }
  namespace util {
    class Currency;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class DecimalFormat : public ::java::text::NumberFormat {
     public:
      enum {
        mid_init$_7ae3461a92a43152,
        mid_init$_e939c6558ae8d313,
        mid_init$_f8e664ad7cff48d3,
        mid_applyLocalizedPattern_e939c6558ae8d313,
        mid_applyPattern_e939c6558ae8d313,
        mid_clone_dfd7647d9110ac9f,
        mid_equals_229c87223f486349,
        mid_format_c6faa545a7a768dc,
        mid_format_e231795b026d93db,
        mid_format_ad0b55b296497605,
        mid_formatToCharacterIterator_dfeef7e12027ce3a,
        mid_getCurrency_6c7b9765863c0754,
        mid_getDecimalFormatSymbols_176868871448551c,
        mid_getGroupingSize_f2f64475e4580546,
        mid_getMaximumFractionDigits_f2f64475e4580546,
        mid_getMaximumIntegerDigits_f2f64475e4580546,
        mid_getMinimumFractionDigits_f2f64475e4580546,
        mid_getMinimumIntegerDigits_f2f64475e4580546,
        mid_getMultiplier_f2f64475e4580546,
        mid_getNegativePrefix_0090f7797e403f43,
        mid_getNegativeSuffix_0090f7797e403f43,
        mid_getPositivePrefix_0090f7797e403f43,
        mid_getPositiveSuffix_0090f7797e403f43,
        mid_hashCode_f2f64475e4580546,
        mid_isDecimalSeparatorAlwaysShown_e470b6d9e0d979db,
        mid_isParseBigDecimal_e470b6d9e0d979db,
        mid_parse_3cf9d8b930b756db,
        mid_setCurrency_4f90b9143eba41de,
        mid_setDecimalFormatSymbols_a0d7dc0ff29f3a07,
        mid_setDecimalSeparatorAlwaysShown_50a2e0b139e80a58,
        mid_setGroupingSize_0a2a1ac2721c0336,
        mid_setGroupingUsed_50a2e0b139e80a58,
        mid_setMaximumFractionDigits_0a2a1ac2721c0336,
        mid_setMaximumIntegerDigits_0a2a1ac2721c0336,
        mid_setMinimumFractionDigits_0a2a1ac2721c0336,
        mid_setMinimumIntegerDigits_0a2a1ac2721c0336,
        mid_setMultiplier_0a2a1ac2721c0336,
        mid_setNegativePrefix_e939c6558ae8d313,
        mid_setNegativeSuffix_e939c6558ae8d313,
        mid_setParseBigDecimal_50a2e0b139e80a58,
        mid_setPositivePrefix_e939c6558ae8d313,
        mid_setPositiveSuffix_e939c6558ae8d313,
        mid_toLocalizedPattern_0090f7797e403f43,
        mid_toPattern_0090f7797e403f43,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DecimalFormat(jobject obj) : ::java::text::NumberFormat(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      DecimalFormat(const DecimalFormat& obj) : ::java::text::NumberFormat(obj) {}

      DecimalFormat();
      DecimalFormat(const ::java::lang::String &);
      DecimalFormat(const ::java::lang::String &, const ::java::text::DecimalFormatSymbols &);

      void applyLocalizedPattern(const ::java::lang::String &) const;
      void applyPattern(const ::java::lang::String &) const;
      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::StringBuffer format(jdouble, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
      ::java::lang::StringBuffer format(const ::java::lang::Object &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
      ::java::lang::StringBuffer format(jlong, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
      ::java::text::AttributedCharacterIterator formatToCharacterIterator(const ::java::lang::Object &) const;
      ::java::util::Currency getCurrency() const;
      ::java::text::DecimalFormatSymbols getDecimalFormatSymbols() const;
      jint getGroupingSize() const;
      jint getMaximumFractionDigits() const;
      jint getMaximumIntegerDigits() const;
      jint getMinimumFractionDigits() const;
      jint getMinimumIntegerDigits() const;
      jint getMultiplier() const;
      ::java::lang::String getNegativePrefix() const;
      ::java::lang::String getNegativeSuffix() const;
      ::java::lang::String getPositivePrefix() const;
      ::java::lang::String getPositiveSuffix() const;
      jint hashCode() const;
      jboolean isDecimalSeparatorAlwaysShown() const;
      jboolean isParseBigDecimal() const;
      ::java::lang::Number parse(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
      void setCurrency(const ::java::util::Currency &) const;
      void setDecimalFormatSymbols(const ::java::text::DecimalFormatSymbols &) const;
      void setDecimalSeparatorAlwaysShown(jboolean) const;
      void setGroupingSize(jint) const;
      void setGroupingUsed(jboolean) const;
      void setMaximumFractionDigits(jint) const;
      void setMaximumIntegerDigits(jint) const;
      void setMinimumFractionDigits(jint) const;
      void setMinimumIntegerDigits(jint) const;
      void setMultiplier(jint) const;
      void setNegativePrefix(const ::java::lang::String &) const;
      void setNegativeSuffix(const ::java::lang::String &) const;
      void setParseBigDecimal(jboolean) const;
      void setPositivePrefix(const ::java::lang::String &) const;
      void setPositiveSuffix(const ::java::lang::String &) const;
      ::java::lang::String toLocalizedPattern() const;
      ::java::lang::String toPattern() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(DecimalFormat);
    extern PyTypeObject *PY_TYPE(DecimalFormat);

    class t_DecimalFormat {
    public:
      PyObject_HEAD
      DecimalFormat object;
      static PyObject *wrap_Object(const DecimalFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
