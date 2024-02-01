#ifndef java_text_NumberFormat_H
#define java_text_NumberFormat_H

#include "java/text/Format.h"

namespace java {
  namespace util {
    class Locale;
    class Currency;
  }
  namespace lang {
    class StringBuffer;
    class Number;
    class Class;
    class Object;
    class String;
  }
  namespace text {
    class ParseException;
    class FieldPosition;
    class ParsePosition;
    class NumberFormat;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class NumberFormat : public ::java::text::Format {
     public:
      enum {
        mid_clone_704a5bee58538972,
        mid_equals_72faff9b05f5ed5e,
        mid_format_e3ac8af686594d08,
        mid_format_7fdd1777495672ef,
        mid_format_bd8d8164e076ccaa,
        mid_format_8a939fb9d04314c2,
        mid_format_1f446f5fe940e316,
        mid_getAvailableLocales_faf2576acf90261b,
        mid_getCurrency_e857dd6f37c7fee3,
        mid_getCurrencyInstance_525709eb5c5b5ea6,
        mid_getCurrencyInstance_5ed382d8d7b942c5,
        mid_getInstance_525709eb5c5b5ea6,
        mid_getInstance_5ed382d8d7b942c5,
        mid_getIntegerInstance_525709eb5c5b5ea6,
        mid_getIntegerInstance_5ed382d8d7b942c5,
        mid_getMaximumFractionDigits_d6ab429752e7c267,
        mid_getMaximumIntegerDigits_d6ab429752e7c267,
        mid_getMinimumFractionDigits_d6ab429752e7c267,
        mid_getMinimumIntegerDigits_d6ab429752e7c267,
        mid_getNumberInstance_525709eb5c5b5ea6,
        mid_getNumberInstance_5ed382d8d7b942c5,
        mid_getPercentInstance_525709eb5c5b5ea6,
        mid_getPercentInstance_5ed382d8d7b942c5,
        mid_hashCode_d6ab429752e7c267,
        mid_isGroupingUsed_eee3de00fe971136,
        mid_isParseIntegerOnly_eee3de00fe971136,
        mid_parse_ab62d11a21abbc99,
        mid_parse_5a7ce414e545ae55,
        mid_parseObject_43b97b9c23ff173e,
        mid_setCurrency_db8d865c2c65c553,
        mid_setGroupingUsed_b35db77cae58639e,
        mid_setMaximumFractionDigits_8fd427ab23829bf5,
        mid_setMaximumIntegerDigits_8fd427ab23829bf5,
        mid_setMinimumFractionDigits_8fd427ab23829bf5,
        mid_setMinimumIntegerDigits_8fd427ab23829bf5,
        mid_setParseIntegerOnly_b35db77cae58639e,
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
