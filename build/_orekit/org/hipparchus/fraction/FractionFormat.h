#ifndef org_hipparchus_fraction_FractionFormat_H
#define org_hipparchus_fraction_FractionFormat_H

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
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    namespace fraction {
      class FractionFormat;
      class Fraction;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class FractionFormat : public ::org::hipparchus::fraction::AbstractFormat {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_init$_d53859bd7ba1b247,
          mid_init$_3190c52142e043eb,
          mid_format_c8dfafe6701753f2,
          mid_format_60ec49fc2ad8aa0e,
          mid_formatFraction_cd71994417403199,
          mid_getAvailableLocales_85ff0d07ca843902,
          mid_getImproperInstance_db0cd7373497d40e,
          mid_getImproperInstance_b176843742057e70,
          mid_getProperInstance_db0cd7373497d40e,
          mid_getProperInstance_b176843742057e70,
          mid_parse_a402f8f864ba9db4,
          mid_parse_fb155efb3cdca00d,
          mid_getDefaultNumberFormat_001645e916bd626d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FractionFormat(jobject obj) : ::org::hipparchus::fraction::AbstractFormat(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FractionFormat(const FractionFormat& obj) : ::org::hipparchus::fraction::AbstractFormat(obj) {}

        FractionFormat();
        FractionFormat(const ::java::text::NumberFormat &);
        FractionFormat(const ::java::text::NumberFormat &, const ::java::text::NumberFormat &);

        ::java::lang::StringBuffer format(const ::org::hipparchus::fraction::Fraction &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        ::java::lang::StringBuffer format(const ::java::lang::Object &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        static ::java::lang::String formatFraction(const ::org::hipparchus::fraction::Fraction &);
        static JArray< ::java::util::Locale > getAvailableLocales();
        static FractionFormat getImproperInstance();
        static FractionFormat getImproperInstance(const ::java::util::Locale &);
        static FractionFormat getProperInstance();
        static FractionFormat getProperInstance(const ::java::util::Locale &);
        ::org::hipparchus::fraction::Fraction parse(const ::java::lang::String &) const;
        ::org::hipparchus::fraction::Fraction parse(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fraction {
      extern PyType_Def PY_TYPE_DEF(FractionFormat);
      extern PyTypeObject *PY_TYPE(FractionFormat);

      class t_FractionFormat {
      public:
        PyObject_HEAD
        FractionFormat object;
        static PyObject *wrap_Object(const FractionFormat&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
