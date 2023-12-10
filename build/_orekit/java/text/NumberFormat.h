#ifndef java_text_NumberFormat_H
#define java_text_NumberFormat_H

#include "java/text/Format.h"

namespace java {
  namespace util {
    class Locale;
    class Currency;
  }
  namespace text {
    class NumberFormat;
    class ParseException;
    class ParsePosition;
    class FieldPosition;
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
        mid_clone_4d26fd885228c716,
        mid_equals_65c7d273e80d497a,
        mid_format_e8f51f84167aafbd,
        mid_format_b42814811762ffb5,
        mid_format_71cdbf949acd3c79,
        mid_format_f5c3717ad7292c63,
        mid_format_1ad97cb6c82be27f,
        mid_getAvailableLocales_c5ed07ebd55821bb,
        mid_getCurrency_7ca0ce948a4de82c,
        mid_getCurrencyInstance_24f83dea4a8657b1,
        mid_getCurrencyInstance_09db48c8af63ef24,
        mid_getInstance_24f83dea4a8657b1,
        mid_getInstance_09db48c8af63ef24,
        mid_getIntegerInstance_24f83dea4a8657b1,
        mid_getIntegerInstance_09db48c8af63ef24,
        mid_getMaximumFractionDigits_570ce0828f81a2c1,
        mid_getMaximumIntegerDigits_570ce0828f81a2c1,
        mid_getMinimumFractionDigits_570ce0828f81a2c1,
        mid_getMinimumIntegerDigits_570ce0828f81a2c1,
        mid_getNumberInstance_24f83dea4a8657b1,
        mid_getNumberInstance_09db48c8af63ef24,
        mid_getPercentInstance_24f83dea4a8657b1,
        mid_getPercentInstance_09db48c8af63ef24,
        mid_hashCode_570ce0828f81a2c1,
        mid_isGroupingUsed_b108b35ef48e27bd,
        mid_isParseIntegerOnly_b108b35ef48e27bd,
        mid_parse_098c234707b1d7e0,
        mid_parse_0f2d9a00e2ec1df8,
        mid_parseObject_621466ec4567b9e0,
        mid_setCurrency_7f42074111826307,
        mid_setGroupingUsed_bd04c9335fb9e4cf,
        mid_setMaximumFractionDigits_99803b0791f320ff,
        mid_setMaximumIntegerDigits_99803b0791f320ff,
        mid_setMinimumFractionDigits_99803b0791f320ff,
        mid_setMinimumIntegerDigits_99803b0791f320ff,
        mid_setParseIntegerOnly_bd04c9335fb9e4cf,
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
