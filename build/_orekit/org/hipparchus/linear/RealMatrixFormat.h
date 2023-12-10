#ifndef org_hipparchus_linear_RealMatrixFormat_H
#define org_hipparchus_linear_RealMatrixFormat_H

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
      class RealMatrix;
      class RealMatrixFormat;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class RealMatrixFormat : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_init$_256f36a22c0d0f55,
          mid_init$_0be9bb25c5e386d0,
          mid_init$_57c74c547ec2ab35,
          mid_format_e7aa5a6f1a34a6d6,
          mid_format_6f7ed89c6879f780,
          mid_getAvailableLocales_c5ed07ebd55821bb,
          mid_getColumnSeparator_11b109bd155ca898,
          mid_getFormat_24f83dea4a8657b1,
          mid_getPrefix_11b109bd155ca898,
          mid_getRealMatrixFormat_840dbe7816392c76,
          mid_getRealMatrixFormat_f75c44444261c69a,
          mid_getRowPrefix_11b109bd155ca898,
          mid_getRowSeparator_11b109bd155ca898,
          mid_getRowSuffix_11b109bd155ca898,
          mid_getSuffix_11b109bd155ca898,
          mid_parse_953cb7e531a567df,
          mid_parse_9142c3e00ceede7e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit RealMatrixFormat(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        RealMatrixFormat(const RealMatrixFormat& obj) : ::java::lang::Object(obj) {}

        RealMatrixFormat();
        RealMatrixFormat(const ::java::text::NumberFormat &);
        RealMatrixFormat(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
        RealMatrixFormat(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::text::NumberFormat &);

        ::java::lang::String format(const ::org::hipparchus::linear::RealMatrix &) const;
        ::java::lang::StringBuffer format(const ::org::hipparchus::linear::RealMatrix &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        static JArray< ::java::util::Locale > getAvailableLocales();
        ::java::lang::String getColumnSeparator() const;
        ::java::text::NumberFormat getFormat() const;
        ::java::lang::String getPrefix() const;
        static RealMatrixFormat getRealMatrixFormat();
        static RealMatrixFormat getRealMatrixFormat(const ::java::util::Locale &);
        ::java::lang::String getRowPrefix() const;
        ::java::lang::String getRowSeparator() const;
        ::java::lang::String getRowSuffix() const;
        ::java::lang::String getSuffix() const;
        ::org::hipparchus::linear::RealMatrix parse(const ::java::lang::String &) const;
        ::org::hipparchus::linear::RealMatrix parse(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace linear {
      extern PyType_Def PY_TYPE_DEF(RealMatrixFormat);
      extern PyTypeObject *PY_TYPE(RealMatrixFormat);

      class t_RealMatrixFormat {
      public:
        PyObject_HEAD
        RealMatrixFormat object;
        static PyObject *wrap_Object(const RealMatrixFormat&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
