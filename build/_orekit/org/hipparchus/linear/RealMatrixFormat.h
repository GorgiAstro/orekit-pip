#ifndef org_hipparchus_linear_RealMatrixFormat_H
#define org_hipparchus_linear_RealMatrixFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuffer;
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
          mid_init$_7ae3461a92a43152,
          mid_init$_695a782f9c7823f6,
          mid_init$_0ed06339391372ae,
          mid_init$_2538090b505fb359,
          mid_format_9b0089f0864a6e3c,
          mid_format_30eab4431b0ccc57,
          mid_getAvailableLocales_81e8fdf65840780c,
          mid_getColumnSeparator_0090f7797e403f43,
          mid_getFormat_d34e2e8dd35583a0,
          mid_getPrefix_0090f7797e403f43,
          mid_getRealMatrixFormat_781980547e5b377f,
          mid_getRealMatrixFormat_5cf1d305e0489d9f,
          mid_getRowPrefix_0090f7797e403f43,
          mid_getRowSeparator_0090f7797e403f43,
          mid_getRowSuffix_0090f7797e403f43,
          mid_getSuffix_0090f7797e403f43,
          mid_parse_9e86325e5f106865,
          mid_parse_26cc2d1eb4cf3e9c,
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
