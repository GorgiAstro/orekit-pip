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
  namespace util {
    class Currency;
  }
  namespace text {
    class FieldPosition;
    class DecimalFormatSymbols;
    class ParsePosition;
    class AttributedCharacterIterator;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class DecimalFormat : public ::java::text::NumberFormat {
     public:
      enum {
        mid_init$_ff7cb6c242604316,
        mid_init$_105e1eadb709d9ac,
        mid_init$_e76ec57dc8f2afd6,
        mid_applyLocalizedPattern_105e1eadb709d9ac,
        mid_applyPattern_105e1eadb709d9ac,
        mid_clone_704a5bee58538972,
        mid_equals_72faff9b05f5ed5e,
        mid_format_bd8d8164e076ccaa,
        mid_format_8a939fb9d04314c2,
        mid_format_1f446f5fe940e316,
        mid_formatToCharacterIterator_22f522baf2fb71d1,
        mid_getCurrency_e857dd6f37c7fee3,
        mid_getDecimalFormatSymbols_ca13629df12de0a9,
        mid_getGroupingSize_d6ab429752e7c267,
        mid_getMaximumFractionDigits_d6ab429752e7c267,
        mid_getMaximumIntegerDigits_d6ab429752e7c267,
        mid_getMinimumFractionDigits_d6ab429752e7c267,
        mid_getMinimumIntegerDigits_d6ab429752e7c267,
        mid_getMultiplier_d6ab429752e7c267,
        mid_getNegativePrefix_d2c8eb4129821f0e,
        mid_getNegativeSuffix_d2c8eb4129821f0e,
        mid_getPositivePrefix_d2c8eb4129821f0e,
        mid_getPositiveSuffix_d2c8eb4129821f0e,
        mid_hashCode_d6ab429752e7c267,
        mid_isDecimalSeparatorAlwaysShown_eee3de00fe971136,
        mid_isParseBigDecimal_eee3de00fe971136,
        mid_parse_5a7ce414e545ae55,
        mid_setCurrency_db8d865c2c65c553,
        mid_setDecimalFormatSymbols_89625d521723cb37,
        mid_setDecimalSeparatorAlwaysShown_b35db77cae58639e,
        mid_setGroupingSize_8fd427ab23829bf5,
        mid_setGroupingUsed_b35db77cae58639e,
        mid_setMaximumFractionDigits_8fd427ab23829bf5,
        mid_setMaximumIntegerDigits_8fd427ab23829bf5,
        mid_setMinimumFractionDigits_8fd427ab23829bf5,
        mid_setMinimumIntegerDigits_8fd427ab23829bf5,
        mid_setMultiplier_8fd427ab23829bf5,
        mid_setNegativePrefix_105e1eadb709d9ac,
        mid_setNegativeSuffix_105e1eadb709d9ac,
        mid_setParseBigDecimal_b35db77cae58639e,
        mid_setPositivePrefix_105e1eadb709d9ac,
        mid_setPositiveSuffix_105e1eadb709d9ac,
        mid_toLocalizedPattern_d2c8eb4129821f0e,
        mid_toPattern_d2c8eb4129821f0e,
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
