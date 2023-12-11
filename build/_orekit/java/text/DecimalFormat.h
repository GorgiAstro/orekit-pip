#ifndef java_text_DecimalFormat_H
#define java_text_DecimalFormat_H

#include "java/text/NumberFormat.h"

namespace java {
  namespace text {
    class ParsePosition;
    class DecimalFormatSymbols;
    class AttributedCharacterIterator;
    class FieldPosition;
  }
  namespace lang {
    class Number;
    class Class;
    class StringBuffer;
    class Object;
    class String;
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
        mid_init$_0640e6acf969ed28,
        mid_init$_f5ffdf29129ef90a,
        mid_init$_84c59652ea37ae90,
        mid_applyLocalizedPattern_f5ffdf29129ef90a,
        mid_applyPattern_f5ffdf29129ef90a,
        mid_clone_e661fe3ba2fafb22,
        mid_equals_221e8e85cb385209,
        mid_format_12b2fbc0c0cefa8d,
        mid_format_60ec49fc2ad8aa0e,
        mid_format_d9d8c4aa92e35cdf,
        mid_formatToCharacterIterator_67523d7667ad62e2,
        mid_getCurrency_e0e11425d6f25aed,
        mid_getDecimalFormatSymbols_42697fd6214b108c,
        mid_getGroupingSize_412668abc8d889e9,
        mid_getMaximumFractionDigits_412668abc8d889e9,
        mid_getMaximumIntegerDigits_412668abc8d889e9,
        mid_getMinimumFractionDigits_412668abc8d889e9,
        mid_getMinimumIntegerDigits_412668abc8d889e9,
        mid_getMultiplier_412668abc8d889e9,
        mid_getNegativePrefix_3cffd47377eca18a,
        mid_getNegativeSuffix_3cffd47377eca18a,
        mid_getPositivePrefix_3cffd47377eca18a,
        mid_getPositiveSuffix_3cffd47377eca18a,
        mid_hashCode_412668abc8d889e9,
        mid_isDecimalSeparatorAlwaysShown_89b302893bdbe1f1,
        mid_isParseBigDecimal_89b302893bdbe1f1,
        mid_parse_5536e661c34c19f2,
        mid_setCurrency_f72be4c0db9df8b9,
        mid_setDecimalFormatSymbols_b786b2c477d2681b,
        mid_setDecimalSeparatorAlwaysShown_ed2afdb8506b9742,
        mid_setGroupingSize_a3da1a935cb37f7b,
        mid_setGroupingUsed_ed2afdb8506b9742,
        mid_setMaximumFractionDigits_a3da1a935cb37f7b,
        mid_setMaximumIntegerDigits_a3da1a935cb37f7b,
        mid_setMinimumFractionDigits_a3da1a935cb37f7b,
        mid_setMinimumIntegerDigits_a3da1a935cb37f7b,
        mid_setMultiplier_a3da1a935cb37f7b,
        mid_setNegativePrefix_f5ffdf29129ef90a,
        mid_setNegativeSuffix_f5ffdf29129ef90a,
        mid_setParseBigDecimal_ed2afdb8506b9742,
        mid_setPositivePrefix_f5ffdf29129ef90a,
        mid_setPositiveSuffix_f5ffdf29129ef90a,
        mid_toLocalizedPattern_3cffd47377eca18a,
        mid_toPattern_3cffd47377eca18a,
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
