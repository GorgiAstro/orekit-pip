#ifndef org_hipparchus_fraction_FractionFormat_H
#define org_hipparchus_fraction_FractionFormat_H

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
      class FractionFormat;
      class Fraction;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_b7f3d50b51ef7518,
          mid_init$_a87510accfde9c74,
          mid_format_87568a31a08a12c5,
          mid_format_b972afa1d89f0ad4,
          mid_formatFraction_ce23704a3b231ba8,
          mid_getAvailableLocales_8d2cd0b971cc7b85,
          mid_getImproperInstance_a5d7d4d1f08eb9e1,
          mid_getImproperInstance_229a8f966d65f9e8,
          mid_getProperInstance_a5d7d4d1f08eb9e1,
          mid_getProperInstance_229a8f966d65f9e8,
          mid_parse_8370e0913d422863,
          mid_parse_813491fbcb23677d,
          mid_getDefaultNumberFormat_87ffffc449cd25a5,
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
