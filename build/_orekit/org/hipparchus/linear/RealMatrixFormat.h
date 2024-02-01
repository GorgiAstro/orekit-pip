#ifndef org_hipparchus_linear_RealMatrixFormat_H
#define org_hipparchus_linear_RealMatrixFormat_H

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
      class RealMatrixFormat;
      class RealMatrix;
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
          mid_init$_ff7cb6c242604316,
          mid_init$_327b6d3ae10b544b,
          mid_init$_799a817065a795a1,
          mid_init$_73dd2d7a47d6eb4e,
          mid_format_9a8c300d410b936f,
          mid_format_62e5a2ca96e58f23,
          mid_getAvailableLocales_faf2576acf90261b,
          mid_getColumnSeparator_d2c8eb4129821f0e,
          mid_getFormat_525709eb5c5b5ea6,
          mid_getPrefix_d2c8eb4129821f0e,
          mid_getRealMatrixFormat_ba919a7e2a8d4dec,
          mid_getRealMatrixFormat_15d47cc6f5e552e9,
          mid_getRowPrefix_d2c8eb4129821f0e,
          mid_getRowSeparator_d2c8eb4129821f0e,
          mid_getRowSuffix_d2c8eb4129821f0e,
          mid_getSuffix_d2c8eb4129821f0e,
          mid_parse_171665f57cb7cc4c,
          mid_parse_0b70eda82915d4b5,
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
