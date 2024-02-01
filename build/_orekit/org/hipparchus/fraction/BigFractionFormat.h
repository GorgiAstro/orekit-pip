#ifndef org_hipparchus_fraction_BigFractionFormat_H
#define org_hipparchus_fraction_BigFractionFormat_H

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
    namespace fraction {
      class BigFractionFormat;
      class BigFraction;
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
          mid_init$_ff7cb6c242604316,
          mid_init$_327b6d3ae10b544b,
          mid_init$_2f8f1e4936e49b8d,
          mid_format_d93e7788c0c83732,
          mid_format_8a939fb9d04314c2,
          mid_formatBigFraction_7041aea86c845f7b,
          mid_getAvailableLocales_faf2576acf90261b,
          mid_getImproperInstance_3ce867ff5032d8af,
          mid_getImproperInstance_f4b80370cda6e548,
          mid_getProperInstance_3ce867ff5032d8af,
          mid_getProperInstance_f4b80370cda6e548,
          mid_parse_44acc1eaf9e750d5,
          mid_parse_b5e88466531b881c,
          mid_parseNextBigInteger_faab13a6e78082c7,
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
