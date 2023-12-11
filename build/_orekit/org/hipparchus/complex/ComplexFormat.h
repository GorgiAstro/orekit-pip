#ifndef org_hipparchus_complex_ComplexFormat_H
#define org_hipparchus_complex_ComplexFormat_H

#include "java/lang/Object.h"

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
    class Double;
    class Class;
    class StringBuffer;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
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
          mid_init$_0640e6acf969ed28,
          mid_init$_d53859bd7ba1b247,
          mid_init$_f5ffdf29129ef90a,
          mid_init$_3190c52142e043eb,
          mid_init$_f8346b669961714d,
          mid_init$_11201179d5af1746,
          mid_format_ca2cdf8fc9022e15,
          mid_format_5d64c3cb4ee44c91,
          mid_format_3891bf712b0a97e9,
          mid_format_60ec49fc2ad8aa0e,
          mid_getAvailableLocales_85ff0d07ca843902,
          mid_getComplexFormat_dd63ef9c6b55c846,
          mid_getComplexFormat_88ba113ef3e3cc4d,
          mid_getComplexFormat_451577ae69011247,
          mid_getImaginaryCharacter_3cffd47377eca18a,
          mid_getImaginaryFormat_001645e916bd626d,
          mid_getRealFormat_001645e916bd626d,
          mid_parse_086aa5c20f9f9f57,
          mid_parse_7b7750207000a556,
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
