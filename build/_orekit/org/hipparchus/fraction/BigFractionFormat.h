#ifndef org_hipparchus_fraction_BigFractionFormat_H
#define org_hipparchus_fraction_BigFractionFormat_H

#include "org/hipparchus/fraction/AbstractFormat.h"

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
namespace java {
  namespace util {
    class Locale;
  }
  namespace text {
    class NumberFormat;
    class ParsePosition;
    class FieldPosition;
  }
  namespace lang {
    class StringBuffer;
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class BigFractionFormat : public ::org::hipparchus::fraction::AbstractFormat {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_init$_256f36a22c0d0f55,
          mid_init$_e2028a486c5b97a5,
          mid_format_848518009c5606f2,
          mid_format_f5c3717ad7292c63,
          mid_formatBigFraction_fd65e985244149e8,
          mid_getAvailableLocales_c5ed07ebd55821bb,
          mid_getImproperInstance_82a9eb9a5a797180,
          mid_getImproperInstance_a14e6a4426b68fb7,
          mid_getProperInstance_82a9eb9a5a797180,
          mid_getProperInstance_a14e6a4426b68fb7,
          mid_parse_0ca38107b4e82d97,
          mid_parse_7ca853134336de7b,
          mid_parseNextBigInteger_c8e1e8504169ebff,
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
