#ifndef org_hipparchus_fraction_FractionFormat_H
#define org_hipparchus_fraction_FractionFormat_H

#include "org/hipparchus/fraction/AbstractFormat.h"

namespace java {
  namespace text {
    class NumberFormat;
    class ParsePosition;
    class FieldPosition;
  }
  namespace util {
    class Locale;
  }
  namespace lang {
    class StringBuffer;
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace fraction {
      class FractionFormat;
      class Fraction;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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
          mid_init$_0fa09c18fee449d5,
          mid_init$_256f36a22c0d0f55,
          mid_init$_e2028a486c5b97a5,
          mid_format_44821f0beb3a37bc,
          mid_format_f5c3717ad7292c63,
          mid_formatFraction_6a3db48ac3720129,
          mid_getAvailableLocales_c5ed07ebd55821bb,
          mid_getImproperInstance_f192aaa296be0934,
          mid_getImproperInstance_10a3af3e09246bc7,
          mid_getProperInstance_f192aaa296be0934,
          mid_getProperInstance_10a3af3e09246bc7,
          mid_parse_e9aed033a393d409,
          mid_parse_32af1cad14e4c6d5,
          mid_getDefaultNumberFormat_24f83dea4a8657b1,
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
