#ifndef org_hipparchus_complex_ComplexFormat_H
#define org_hipparchus_complex_ComplexFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuffer;
    class Double;
    class Class;
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
    namespace complex {
      class ComplexFormat;
      class Complex;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
          mid_init$_7ae3461a92a43152,
          mid_init$_695a782f9c7823f6,
          mid_init$_e939c6558ae8d313,
          mid_init$_4c0f990589d379b7,
          mid_init$_2dd0fdcd0278a9e6,
          mid_init$_52c6037a572c1ef2,
          mid_format_7cff086552af0272,
          mid_format_02e9e6c186e20234,
          mid_format_f20e7b4edfd97d6d,
          mid_format_e231795b026d93db,
          mid_getAvailableLocales_81e8fdf65840780c,
          mid_getComplexFormat_e2eb2ce91686932b,
          mid_getComplexFormat_e05876d8c95db5d6,
          mid_getComplexFormat_38bf57659ba484dd,
          mid_getImaginaryCharacter_0090f7797e403f43,
          mid_getImaginaryFormat_d34e2e8dd35583a0,
          mid_getRealFormat_d34e2e8dd35583a0,
          mid_parse_52becf08b9975dd8,
          mid_parse_b9e4d04c32002f79,
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
