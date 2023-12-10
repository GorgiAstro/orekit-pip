#ifndef org_hipparchus_complex_ComplexFormat_H
#define org_hipparchus_complex_ComplexFormat_H

#include "java/lang/Object.h"

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
    class Double;
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
      class NullArgumentException;
      class MathIllegalArgumentException;
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
          mid_init$_0fa09c18fee449d5,
          mid_init$_256f36a22c0d0f55,
          mid_init$_d0bc48d5b00dc40c,
          mid_init$_e2028a486c5b97a5,
          mid_init$_4f25566dcb220520,
          mid_init$_8db4b6f129d3dd87,
          mid_format_29f1b93744775b94,
          mid_format_25cc0288c0c0b8ed,
          mid_format_ffd5cf5906ec2ab3,
          mid_format_f5c3717ad7292c63,
          mid_getAvailableLocales_c5ed07ebd55821bb,
          mid_getComplexFormat_0b252931508f6d4e,
          mid_getComplexFormat_1e232ce2e7570743,
          mid_getComplexFormat_37105b18a0225257,
          mid_getImaginaryCharacter_11b109bd155ca898,
          mid_getImaginaryFormat_24f83dea4a8657b1,
          mid_getRealFormat_24f83dea4a8657b1,
          mid_parse_32a35bb7fb909be7,
          mid_parse_dc6a5fb6090ca71d,
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
