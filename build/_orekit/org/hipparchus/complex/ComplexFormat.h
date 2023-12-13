#ifndef org_hipparchus_complex_ComplexFormat_H
#define org_hipparchus_complex_ComplexFormat_H

#include "java/lang/Object.h"

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
    class Double;
    class Class;
    class String;
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
      class ComplexFormat;
      class Complex;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_b7f3d50b51ef7518,
          mid_init$_734b91ac30d5f9b4,
          mid_init$_a87510accfde9c74,
          mid_init$_1b1de848c187f338,
          mid_init$_b1394edf81bf8325,
          mid_format_3351787dda287cdf,
          mid_format_19646432b3806a2a,
          mid_format_f87b9603d4d067a9,
          mid_format_b972afa1d89f0ad4,
          mid_getAvailableLocales_8d2cd0b971cc7b85,
          mid_getComplexFormat_fd55193634edb023,
          mid_getComplexFormat_640ebfa8879b8bf2,
          mid_getComplexFormat_d54474d4837bd5a1,
          mid_getImaginaryCharacter_1c1fa1e935d6cdcf,
          mid_getImaginaryFormat_87ffffc449cd25a5,
          mid_getRealFormat_87ffffc449cd25a5,
          mid_parse_02e1897cad01bc88,
          mid_parse_7140aaf11af966f0,
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
