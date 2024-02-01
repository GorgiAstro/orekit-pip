#ifndef org_hipparchus_linear_RealVectorFormat_H
#define org_hipparchus_linear_RealVectorFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class StringBuffer;
    class Class;
    class String;
  }
  namespace text {
    class FieldPosition;
    class NumberFormat;
    class ParsePosition;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class ArrayRealVector;
      class RealVectorFormat;
      class RealVector;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class RealVectorFormat : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_init$_327b6d3ae10b544b,
          mid_init$_56b987237c71cdbb,
          mid_init$_21a024496acf58f0,
          mid_format_6983b1b6aa229619,
          mid_format_78476b49258c2578,
          mid_getAvailableLocales_faf2576acf90261b,
          mid_getFormat_525709eb5c5b5ea6,
          mid_getPrefix_d2c8eb4129821f0e,
          mid_getRealVectorFormat_0b282b8ef9359020,
          mid_getRealVectorFormat_e891a93af627cd50,
          mid_getSeparator_d2c8eb4129821f0e,
          mid_getSuffix_d2c8eb4129821f0e,
          mid_parse_07cb04cf78c83004,
          mid_parse_a81ab6a2d02866ab,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RealVectorFormat(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RealVectorFormat(const RealVectorFormat& obj) : ::java::lang::Object(obj) {}

        RealVectorFormat();
        RealVectorFormat(const ::java::text::NumberFormat &);
        RealVectorFormat(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
        RealVectorFormat(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::text::NumberFormat &);

        ::java::lang::String format(const ::org::hipparchus::linear::RealVector &) const;
        ::java::lang::StringBuffer format(const ::org::hipparchus::linear::RealVector &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        static JArray< ::java::util::Locale > getAvailableLocales();
        ::java::text::NumberFormat getFormat() const;
        ::java::lang::String getPrefix() const;
        static RealVectorFormat getRealVectorFormat();
        static RealVectorFormat getRealVectorFormat(const ::java::util::Locale &);
        ::java::lang::String getSeparator() const;
        ::java::lang::String getSuffix() const;
        ::org::hipparchus::linear::ArrayRealVector parse(const ::java::lang::String &) const;
        ::org::hipparchus::linear::ArrayRealVector parse(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(RealVectorFormat);
      extern PyTypeObject *PY_TYPE(RealVectorFormat);

      class t_RealVectorFormat {
      public:
        PyObject_HEAD
        RealVectorFormat object;
        static PyObject *wrap_Object(const RealVectorFormat&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
