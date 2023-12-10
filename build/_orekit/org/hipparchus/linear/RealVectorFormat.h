#ifndef org_hipparchus_linear_RealVectorFormat_H
#define org_hipparchus_linear_RealVectorFormat_H

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
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVectorFormat;
      class RealVector;
      class ArrayRealVector;
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
          mid_init$_0fa09c18fee449d5,
          mid_init$_256f36a22c0d0f55,
          mid_init$_3c57e287341c9288,
          mid_init$_4ed7d7dd28d1bddd,
          mid_format_ed0d223f69bb75cc,
          mid_format_39b5b20e8e62d3bb,
          mid_getAvailableLocales_c5ed07ebd55821bb,
          mid_getFormat_24f83dea4a8657b1,
          mid_getPrefix_11b109bd155ca898,
          mid_getRealVectorFormat_dbafcc70378c90ab,
          mid_getRealVectorFormat_c6647bbef3e873a0,
          mid_getSeparator_11b109bd155ca898,
          mid_getSuffix_11b109bd155ca898,
          mid_parse_534cde3579de93aa,
          mid_parse_d76e447a19a63b65,
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
