#ifndef java_text_DecimalFormat_H
#define java_text_DecimalFormat_H

#include "java/text/NumberFormat.h"

namespace java {
  namespace lang {
    class Number;
    class StringBuffer;
    class Class;
    class Object;
    class String;
  }
  namespace text {
    class ParsePosition;
    class DecimalFormatSymbols;
    class FieldPosition;
    class AttributedCharacterIterator;
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
        mid_init$_0fa09c18fee449d5,
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_d8855ca43cc20c62,
        mid_applyLocalizedPattern_d0bc48d5b00dc40c,
        mid_applyPattern_d0bc48d5b00dc40c,
        mid_clone_4d26fd885228c716,
        mid_equals_65c7d273e80d497a,
        mid_format_71cdbf949acd3c79,
        mid_format_f5c3717ad7292c63,
        mid_format_1ad97cb6c82be27f,
        mid_formatToCharacterIterator_9456d3ba5fac0c0f,
        mid_getCurrency_7ca0ce948a4de82c,
        mid_getDecimalFormatSymbols_140bef9b20a8cdf4,
        mid_getGroupingSize_570ce0828f81a2c1,
        mid_getMaximumFractionDigits_570ce0828f81a2c1,
        mid_getMaximumIntegerDigits_570ce0828f81a2c1,
        mid_getMinimumFractionDigits_570ce0828f81a2c1,
        mid_getMinimumIntegerDigits_570ce0828f81a2c1,
        mid_getMultiplier_570ce0828f81a2c1,
        mid_getNegativePrefix_11b109bd155ca898,
        mid_getNegativeSuffix_11b109bd155ca898,
        mid_getPositivePrefix_11b109bd155ca898,
        mid_getPositiveSuffix_11b109bd155ca898,
        mid_hashCode_570ce0828f81a2c1,
        mid_isDecimalSeparatorAlwaysShown_b108b35ef48e27bd,
        mid_isParseBigDecimal_b108b35ef48e27bd,
        mid_parse_0f2d9a00e2ec1df8,
        mid_setCurrency_7f42074111826307,
        mid_setDecimalFormatSymbols_81f137070597544b,
        mid_setDecimalSeparatorAlwaysShown_bd04c9335fb9e4cf,
        mid_setGroupingSize_99803b0791f320ff,
        mid_setGroupingUsed_bd04c9335fb9e4cf,
        mid_setMaximumFractionDigits_99803b0791f320ff,
        mid_setMaximumIntegerDigits_99803b0791f320ff,
        mid_setMinimumFractionDigits_99803b0791f320ff,
        mid_setMinimumIntegerDigits_99803b0791f320ff,
        mid_setMultiplier_99803b0791f320ff,
        mid_setNegativePrefix_d0bc48d5b00dc40c,
        mid_setNegativeSuffix_d0bc48d5b00dc40c,
        mid_setParseBigDecimal_bd04c9335fb9e4cf,
        mid_setPositivePrefix_d0bc48d5b00dc40c,
        mid_setPositiveSuffix_d0bc48d5b00dc40c,
        mid_toLocalizedPattern_11b109bd155ca898,
        mid_toPattern_11b109bd155ca898,
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
