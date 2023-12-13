#ifndef java_text_NumberFormat_H
#define java_text_NumberFormat_H

#include "java/text/Format.h"

namespace java {
  namespace text {
    class FieldPosition;
    class ParsePosition;
    class ParseException;
    class NumberFormat;
  }
  namespace util {
    class Locale;
    class Currency;
  }
  namespace lang {
    class Number;
    class StringBuffer;
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class NumberFormat : public ::java::text::Format {
     public:
      enum {
        mid_clone_541690f9ee81d3ad,
        mid_equals_460c5e2d9d51c6cc,
        mid_format_11ae2994efd15504,
        mid_format_9078858c11a58b1e,
        mid_format_cdee9bc08b68d2f3,
        mid_format_b972afa1d89f0ad4,
        mid_format_1d561f51d282798c,
        mid_getAvailableLocales_8d2cd0b971cc7b85,
        mid_getCurrency_5c4bce1ad9114b42,
        mid_getCurrencyInstance_87ffffc449cd25a5,
        mid_getCurrencyInstance_3c858cd11341b00a,
        mid_getInstance_87ffffc449cd25a5,
        mid_getInstance_3c858cd11341b00a,
        mid_getIntegerInstance_87ffffc449cd25a5,
        mid_getIntegerInstance_3c858cd11341b00a,
        mid_getMaximumFractionDigits_55546ef6a647f39b,
        mid_getMaximumIntegerDigits_55546ef6a647f39b,
        mid_getMinimumFractionDigits_55546ef6a647f39b,
        mid_getMinimumIntegerDigits_55546ef6a647f39b,
        mid_getNumberInstance_87ffffc449cd25a5,
        mid_getNumberInstance_3c858cd11341b00a,
        mid_getPercentInstance_87ffffc449cd25a5,
        mid_getPercentInstance_3c858cd11341b00a,
        mid_hashCode_55546ef6a647f39b,
        mid_isGroupingUsed_9ab94ac1dc23b105,
        mid_isParseIntegerOnly_9ab94ac1dc23b105,
        mid_parse_3767780c432a8ea3,
        mid_parse_a972e28e38f8fd3f,
        mid_parseObject_ad5444510b7b5820,
        mid_setCurrency_4943c1e384d46623,
        mid_setGroupingUsed_fcb96c98de6fad04,
        mid_setMaximumFractionDigits_44ed599e93e8a30c,
        mid_setMaximumIntegerDigits_44ed599e93e8a30c,
        mid_setMinimumFractionDigits_44ed599e93e8a30c,
        mid_setMinimumIntegerDigits_44ed599e93e8a30c,
        mid_setParseIntegerOnly_fcb96c98de6fad04,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NumberFormat(jobject obj) : ::java::text::Format(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NumberFormat(const NumberFormat& obj) : ::java::text::Format(obj) {}

      static jint FRACTION_FIELD;
      static jint INTEGER_FIELD;

      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String format(jdouble) const;
      ::java::lang::String format(jlong) const;
      ::java::lang::StringBuffer format(jdouble, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
      ::java::lang::StringBuffer format(const ::java::lang::Object &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
      ::java::lang::StringBuffer format(jlong, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      ::java::util::Currency getCurrency() const;
      static NumberFormat getCurrencyInstance();
      static NumberFormat getCurrencyInstance(const ::java::util::Locale &);
      static NumberFormat getInstance();
      static NumberFormat getInstance(const ::java::util::Locale &);
      static NumberFormat getIntegerInstance();
      static NumberFormat getIntegerInstance(const ::java::util::Locale &);
      jint getMaximumFractionDigits() const;
      jint getMaximumIntegerDigits() const;
      jint getMinimumFractionDigits() const;
      jint getMinimumIntegerDigits() const;
      static NumberFormat getNumberInstance();
      static NumberFormat getNumberInstance(const ::java::util::Locale &);
      static NumberFormat getPercentInstance();
      static NumberFormat getPercentInstance(const ::java::util::Locale &);
      jint hashCode() const;
      jboolean isGroupingUsed() const;
      jboolean isParseIntegerOnly() const;
      ::java::lang::Number parse(const ::java::lang::String &) const;
      ::java::lang::Number parse(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
      ::java::lang::Object parseObject(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
      void setCurrency(const ::java::util::Currency &) const;
      void setGroupingUsed(jboolean) const;
      void setMaximumFractionDigits(jint) const;
      void setMaximumIntegerDigits(jint) const;
      void setMinimumFractionDigits(jint) const;
      void setMinimumIntegerDigits(jint) const;
      void setParseIntegerOnly(jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(NumberFormat);
    extern PyTypeObject *PY_TYPE(NumberFormat);

    class t_NumberFormat {
    public:
      PyObject_HEAD
      NumberFormat object;
      static PyObject *wrap_Object(const NumberFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
