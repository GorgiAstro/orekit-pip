#ifndef org_hipparchus_fraction_BigFractionFormat_H
#define org_hipparchus_fraction_BigFractionFormat_H

#include "org/hipparchus/fraction/AbstractFormat.h"

namespace java {
  namespace text {
    class ParsePosition;
    class NumberFormat;
    class FieldPosition;
  }
  namespace util {
    class Locale;
  }
  namespace lang {
    class Class;
    class StringBuffer;
    class Object;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace fraction {
      class BigFraction;
      class BigFractionFormat;
    }
    namespace exception {
      class MathIllegalStateException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class BigFractionFormat : public ::org::hipparchus::fraction::AbstractFormat {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_d53859bd7ba1b247,
          mid_init$_3190c52142e043eb,
          mid_format_c2b55dec3da6da3b,
          mid_format_60ec49fc2ad8aa0e,
          mid_formatBigFraction_2ba58cfcdb4d7c4d,
          mid_getAvailableLocales_85ff0d07ca843902,
          mid_getImproperInstance_c6caa9e9613ff5ca,
          mid_getImproperInstance_f9a33f8d0aaa98e2,
          mid_getProperInstance_c6caa9e9613ff5ca,
          mid_getProperInstance_f9a33f8d0aaa98e2,
          mid_parse_b376adea91da912d,
          mid_parse_38d74adaa6fcd6d8,
          mid_parseNextBigInteger_4b48e273de83bda2,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BigFractionFormat(jobject obj) : ::org::hipparchus::fraction::AbstractFormat(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BigFractionFormat(const BigFractionFormat& obj) : ::org::hipparchus::fraction::AbstractFormat(obj) {}

        BigFractionFormat();
        BigFractionFormat(const ::java::text::NumberFormat &);
        BigFractionFormat(const ::java::text::NumberFormat &, const ::java::text::NumberFormat &);

        ::java::lang::StringBuffer format(const ::org::hipparchus::fraction::BigFraction &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        ::java::lang::StringBuffer format(const ::java::lang::Object &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        static ::java::lang::String formatBigFraction(const ::org::hipparchus::fraction::BigFraction &);
        static JArray< ::java::util::Locale > getAvailableLocales();
        static BigFractionFormat getImproperInstance();
        static BigFractionFormat getImproperInstance(const ::java::util::Locale &);
        static BigFractionFormat getProperInstance();
        static BigFractionFormat getProperInstance(const ::java::util::Locale &);
        ::org::hipparchus::fraction::BigFraction parse(const ::java::lang::String &) const;
        ::org::hipparchus::fraction::BigFraction parse(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fraction {
      extern PyType_Def PY_TYPE_DEF(BigFractionFormat);
      extern PyTypeObject *PY_TYPE(BigFractionFormat);

      class t_BigFractionFormat {
      public:
        PyObject_HEAD
        BigFractionFormat object;
        static PyObject *wrap_Object(const BigFractionFormat&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
