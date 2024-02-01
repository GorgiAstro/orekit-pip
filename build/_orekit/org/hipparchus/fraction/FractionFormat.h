#ifndef org_hipparchus_fraction_FractionFormat_H
#define org_hipparchus_fraction_FractionFormat_H

#include "org/hipparchus/fraction/AbstractFormat.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class StringBuffer;
    class Class;
    class Object;
    class String;
  }
  namespace text {
    class FieldPosition;
    class ParsePosition;
    class NumberFormat;
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
          mid_init$_ff7cb6c242604316,
          mid_init$_327b6d3ae10b544b,
          mid_init$_2f8f1e4936e49b8d,
          mid_format_fdb3091a5d795ad8,
          mid_format_8a939fb9d04314c2,
          mid_formatFraction_e8c965f9251766d0,
          mid_getAvailableLocales_faf2576acf90261b,
          mid_getImproperInstance_ba33004fb7b923c8,
          mid_getImproperInstance_ad1a698013dd3357,
          mid_getProperInstance_ba33004fb7b923c8,
          mid_getProperInstance_ad1a698013dd3357,
          mid_parse_1f195ee42b3fc431,
          mid_parse_15ac28a32cea3b83,
          mid_getDefaultNumberFormat_525709eb5c5b5ea6,
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
