#ifndef java_text_NumberFormat_H
#define java_text_NumberFormat_H

#include "java/text/Format.h"

namespace java {
  namespace text {
    class ParsePosition;
    class ParseException;
    class NumberFormat;
    class FieldPosition;
  }
  namespace util {
    class Locale;
    class Currency;
  }
  namespace lang {
    class Number;
    class Class;
    class StringBuffer;
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
        mid_clone_e661fe3ba2fafb22,
        mid_equals_221e8e85cb385209,
        mid_format_c03a7791f2fcb1f1,
        mid_format_dffed0dde596e613,
        mid_format_12b2fbc0c0cefa8d,
        mid_format_60ec49fc2ad8aa0e,
        mid_format_d9d8c4aa92e35cdf,
        mid_getAvailableLocales_85ff0d07ca843902,
        mid_getCurrency_e0e11425d6f25aed,
        mid_getCurrencyInstance_001645e916bd626d,
        mid_getCurrencyInstance_eb8cc1bc569326d0,
        mid_getInstance_001645e916bd626d,
        mid_getInstance_eb8cc1bc569326d0,
        mid_getIntegerInstance_001645e916bd626d,
        mid_getIntegerInstance_eb8cc1bc569326d0,
        mid_getMaximumFractionDigits_412668abc8d889e9,
        mid_getMaximumIntegerDigits_412668abc8d889e9,
        mid_getMinimumFractionDigits_412668abc8d889e9,
        mid_getMinimumIntegerDigits_412668abc8d889e9,
        mid_getNumberInstance_001645e916bd626d,
        mid_getNumberInstance_eb8cc1bc569326d0,
        mid_getPercentInstance_001645e916bd626d,
        mid_getPercentInstance_eb8cc1bc569326d0,
        mid_hashCode_412668abc8d889e9,
        mid_isGroupingUsed_89b302893bdbe1f1,
        mid_isParseIntegerOnly_89b302893bdbe1f1,
        mid_parse_1a93cd97fa09237e,
        mid_parse_5536e661c34c19f2,
        mid_parseObject_a7f2c32d9be5fd0d,
        mid_setCurrency_f72be4c0db9df8b9,
        mid_setGroupingUsed_ed2afdb8506b9742,
        mid_setMaximumFractionDigits_a3da1a935cb37f7b,
        mid_setMaximumIntegerDigits_a3da1a935cb37f7b,
        mid_setMinimumFractionDigits_a3da1a935cb37f7b,
        mid_setMinimumIntegerDigits_a3da1a935cb37f7b,
        mid_setParseIntegerOnly_ed2afdb8506b9742,
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
