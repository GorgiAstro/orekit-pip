#ifndef java_text_NumberFormat_H
#define java_text_NumberFormat_H

#include "java/text/Format.h"

namespace java {
  namespace lang {
    class StringBuffer;
    class Number;
    class Class;
    class Object;
    class String;
  }
  namespace util {
    class Locale;
    class Currency;
  }
  namespace text {
    class FieldPosition;
    class ParsePosition;
    class ParseException;
    class NumberFormat;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class NumberFormat : public ::java::text::Format {
     public:
      enum {
        mid_clone_dfd7647d9110ac9f,
        mid_equals_229c87223f486349,
        mid_format_085bbc49599fa163,
        mid_format_8da367bd62adf91c,
        mid_format_c6faa545a7a768dc,
        mid_format_e231795b026d93db,
        mid_format_ad0b55b296497605,
        mid_getAvailableLocales_81e8fdf65840780c,
        mid_getCurrency_6c7b9765863c0754,
        mid_getCurrencyInstance_d34e2e8dd35583a0,
        mid_getCurrencyInstance_41d4a73d4466d8a8,
        mid_getInstance_d34e2e8dd35583a0,
        mid_getInstance_41d4a73d4466d8a8,
        mid_getIntegerInstance_d34e2e8dd35583a0,
        mid_getIntegerInstance_41d4a73d4466d8a8,
        mid_getMaximumFractionDigits_f2f64475e4580546,
        mid_getMaximumIntegerDigits_f2f64475e4580546,
        mid_getMinimumFractionDigits_f2f64475e4580546,
        mid_getMinimumIntegerDigits_f2f64475e4580546,
        mid_getNumberInstance_d34e2e8dd35583a0,
        mid_getNumberInstance_41d4a73d4466d8a8,
        mid_getPercentInstance_d34e2e8dd35583a0,
        mid_getPercentInstance_41d4a73d4466d8a8,
        mid_hashCode_f2f64475e4580546,
        mid_isGroupingUsed_e470b6d9e0d979db,
        mid_isParseIntegerOnly_e470b6d9e0d979db,
        mid_parse_07ea3e4926abb9ca,
        mid_parse_3cf9d8b930b756db,
        mid_parseObject_04377a8fddc7cede,
        mid_setCurrency_4f90b9143eba41de,
        mid_setGroupingUsed_50a2e0b139e80a58,
        mid_setMaximumFractionDigits_0a2a1ac2721c0336,
        mid_setMaximumIntegerDigits_0a2a1ac2721c0336,
        mid_setMinimumFractionDigits_0a2a1ac2721c0336,
        mid_setMinimumIntegerDigits_0a2a1ac2721c0336,
        mid_setParseIntegerOnly_50a2e0b139e80a58,
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
