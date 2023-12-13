#ifndef java_text_DecimalFormat_H
#define java_text_DecimalFormat_H

#include "java/text/NumberFormat.h"

namespace java {
  namespace text {
    class FieldPosition;
    class ParsePosition;
    class AttributedCharacterIterator;
    class DecimalFormatSymbols;
  }
  namespace lang {
    class Number;
    class StringBuffer;
    class Class;
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
        mid_init$_a1fa5dae97ea5ed2,
        mid_init$_734b91ac30d5f9b4,
        mid_init$_5abfc95260fd6c6b,
        mid_applyLocalizedPattern_734b91ac30d5f9b4,
        mid_applyPattern_734b91ac30d5f9b4,
        mid_clone_541690f9ee81d3ad,
        mid_equals_460c5e2d9d51c6cc,
        mid_format_cdee9bc08b68d2f3,
        mid_format_b972afa1d89f0ad4,
        mid_format_1d561f51d282798c,
        mid_formatToCharacterIterator_1e9e330ed3e6edfe,
        mid_getCurrency_5c4bce1ad9114b42,
        mid_getDecimalFormatSymbols_36ca27640d647410,
        mid_getGroupingSize_55546ef6a647f39b,
        mid_getMaximumFractionDigits_55546ef6a647f39b,
        mid_getMaximumIntegerDigits_55546ef6a647f39b,
        mid_getMinimumFractionDigits_55546ef6a647f39b,
        mid_getMinimumIntegerDigits_55546ef6a647f39b,
        mid_getMultiplier_55546ef6a647f39b,
        mid_getNegativePrefix_1c1fa1e935d6cdcf,
        mid_getNegativeSuffix_1c1fa1e935d6cdcf,
        mid_getPositivePrefix_1c1fa1e935d6cdcf,
        mid_getPositiveSuffix_1c1fa1e935d6cdcf,
        mid_hashCode_55546ef6a647f39b,
        mid_isDecimalSeparatorAlwaysShown_9ab94ac1dc23b105,
        mid_isParseBigDecimal_9ab94ac1dc23b105,
        mid_parse_a972e28e38f8fd3f,
        mid_setCurrency_4943c1e384d46623,
        mid_setDecimalFormatSymbols_e702ad65752cd8ec,
        mid_setDecimalSeparatorAlwaysShown_fcb96c98de6fad04,
        mid_setGroupingSize_44ed599e93e8a30c,
        mid_setGroupingUsed_fcb96c98de6fad04,
        mid_setMaximumFractionDigits_44ed599e93e8a30c,
        mid_setMaximumIntegerDigits_44ed599e93e8a30c,
        mid_setMinimumFractionDigits_44ed599e93e8a30c,
        mid_setMinimumIntegerDigits_44ed599e93e8a30c,
        mid_setMultiplier_44ed599e93e8a30c,
        mid_setNegativePrefix_734b91ac30d5f9b4,
        mid_setNegativeSuffix_734b91ac30d5f9b4,
        mid_setParseBigDecimal_fcb96c98de6fad04,
        mid_setPositivePrefix_734b91ac30d5f9b4,
        mid_setPositiveSuffix_734b91ac30d5f9b4,
        mid_toLocalizedPattern_1c1fa1e935d6cdcf,
        mid_toPattern_1c1fa1e935d6cdcf,
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
