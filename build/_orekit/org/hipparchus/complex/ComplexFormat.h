#ifndef org_hipparchus_complex_ComplexFormat_H
#define org_hipparchus_complex_ComplexFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class StringBuffer;
    class Double;
    class Class;
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
      class NullArgumentException;
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    namespace complex {
      class Complex;
      class ComplexFormat;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class ComplexFormat : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_init$_327b6d3ae10b544b,
          mid_init$_105e1eadb709d9ac,
          mid_init$_2f8f1e4936e49b8d,
          mid_init$_3e3719c2dd2cb337,
          mid_init$_14e55261fa5caed4,
          mid_format_ecf83385512fcb3c,
          mid_format_4371f518eaf97f6b,
          mid_format_ab659826fc95e83a,
          mid_format_8a939fb9d04314c2,
          mid_getAvailableLocales_faf2576acf90261b,
          mid_getComplexFormat_43dfc142a69b2802,
          mid_getComplexFormat_907dfcdf4894960e,
          mid_getComplexFormat_65292ca77486d902,
          mid_getImaginaryCharacter_d2c8eb4129821f0e,
          mid_getImaginaryFormat_525709eb5c5b5ea6,
          mid_getRealFormat_525709eb5c5b5ea6,
          mid_parse_ba393eca33525b34,
          mid_parse_a925c73b2303ca11,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ComplexFormat(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ComplexFormat(const ComplexFormat& obj) : ::java::lang::Object(obj) {}

        ComplexFormat();
        ComplexFormat(const ::java::text::NumberFormat &);
        ComplexFormat(const ::java::lang::String &);
        ComplexFormat(const ::java::text::NumberFormat &, const ::java::text::NumberFormat &);
        ComplexFormat(const ::java::lang::String &, const ::java::text::NumberFormat &);
        ComplexFormat(const ::java::lang::String &, const ::java::text::NumberFormat &, const ::java::text::NumberFormat &);

        ::java::lang::String format(const ::java::lang::Double &) const;
        ::java::lang::String format(const ::org::hipparchus::complex::Complex &) const;
        ::java::lang::StringBuffer format(const ::org::hipparchus::complex::Complex &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        ::java::lang::StringBuffer format(const ::java::lang::Object &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        static JArray< ::java::util::Locale > getAvailableLocales();
        static ComplexFormat getComplexFormat();
        static ComplexFormat getComplexFormat(const ::java::util::Locale &);
        static ComplexFormat getComplexFormat(const ::java::lang::String &, const ::java::util::Locale &);
        ::java::lang::String getImaginaryCharacter() const;
        ::java::text::NumberFormat getImaginaryFormat() const;
        ::java::text::NumberFormat getRealFormat() const;
        ::org::hipparchus::complex::Complex parse(const ::java::lang::String &) const;
        ::org::hipparchus::complex::Complex parse(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace complex {
      extern PyType_Def PY_TYPE_DEF(ComplexFormat);
      extern PyTypeObject *PY_TYPE(ComplexFormat);

      class t_ComplexFormat {
      public:
        PyObject_HEAD
        ComplexFormat object;
        static PyObject *wrap_Object(const ComplexFormat&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
