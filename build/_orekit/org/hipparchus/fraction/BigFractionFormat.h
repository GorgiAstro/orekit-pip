#ifndef org_hipparchus_fraction_BigFractionFormat_H
#define org_hipparchus_fraction_BigFractionFormat_H

#include "org/hipparchus/fraction/AbstractFormat.h"

namespace java {
  namespace lang {
    class StringBuffer;
    class Class;
    class Object;
    class String;
  }
  namespace util {
    class Locale;
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
          mid_init$_7ae3461a92a43152,
          mid_init$_695a782f9c7823f6,
          mid_init$_4c0f990589d379b7,
          mid_format_42dd4f61513ad308,
          mid_format_e231795b026d93db,
          mid_formatBigFraction_f763fdb4539794ce,
          mid_getAvailableLocales_81e8fdf65840780c,
          mid_getImproperInstance_0a94ffafb1c3bf54,
          mid_getImproperInstance_1069ad73f49e7f07,
          mid_getProperInstance_0a94ffafb1c3bf54,
          mid_getProperInstance_1069ad73f49e7f07,
          mid_parse_7616b22aac27e6c3,
          mid_parse_3123fd67840e701b,
          mid_parseNextBigInteger_a8bef70e92826704,
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
