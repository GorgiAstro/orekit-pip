#ifndef org_hipparchus_fraction_FractionFormat_H
#define org_hipparchus_fraction_FractionFormat_H

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
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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
          mid_init$_7ae3461a92a43152,
          mid_init$_695a782f9c7823f6,
          mid_init$_4c0f990589d379b7,
          mid_format_c19c8e97de8c2158,
          mid_format_e231795b026d93db,
          mid_formatFraction_4b44e5dbe2a42d26,
          mid_getAvailableLocales_81e8fdf65840780c,
          mid_getImproperInstance_50702bcb1992920e,
          mid_getImproperInstance_a582bf44d92cfcc0,
          mid_getProperInstance_50702bcb1992920e,
          mid_getProperInstance_a582bf44d92cfcc0,
          mid_parse_1e8dfd0587c9f00e,
          mid_parse_7b370dc16c7b13a9,
          mid_getDefaultNumberFormat_d34e2e8dd35583a0,
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
