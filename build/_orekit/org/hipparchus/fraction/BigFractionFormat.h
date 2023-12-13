#ifndef org_hipparchus_fraction_BigFractionFormat_H
#define org_hipparchus_fraction_BigFractionFormat_H

#include "org/hipparchus/fraction/AbstractFormat.h"

namespace java {
  namespace text {
    class FieldPosition;
    class ParsePosition;
    class NumberFormat;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_b7f3d50b51ef7518,
          mid_init$_a87510accfde9c74,
          mid_format_face461ae8942182,
          mid_format_b972afa1d89f0ad4,
          mid_formatBigFraction_f2a5a6219e7b12b7,
          mid_getAvailableLocales_8d2cd0b971cc7b85,
          mid_getImproperInstance_8c1c73722be22f6f,
          mid_getImproperInstance_988fa2a63a10ed31,
          mid_getProperInstance_8c1c73722be22f6f,
          mid_getProperInstance_988fa2a63a10ed31,
          mid_parse_77110530074039ea,
          mid_parse_9c54536a71758022,
          mid_parseNextBigInteger_01d91a5ef6747752,
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
