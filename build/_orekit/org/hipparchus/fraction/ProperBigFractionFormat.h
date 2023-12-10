#ifndef org_hipparchus_fraction_ProperBigFractionFormat_H
#define org_hipparchus_fraction_ProperBigFractionFormat_H

#include "org/hipparchus/fraction/BigFractionFormat.h"

namespace java {
  namespace lang {
    class StringBuffer;
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
    namespace fraction {
      class BigFraction;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class ProperBigFractionFormat : public ::org::hipparchus::fraction::BigFractionFormat {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_init$_695a782f9c7823f6,
          mid_init$_0d88283ed770bf4b,
          mid_format_42dd4f61513ad308,
          mid_getWholeFormat_d34e2e8dd35583a0,
          mid_parse_3123fd67840e701b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ProperBigFractionFormat(jobject obj) : ::org::hipparchus::fraction::BigFractionFormat(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ProperBigFractionFormat(const ProperBigFractionFormat& obj) : ::org::hipparchus::fraction::BigFractionFormat(obj) {}

        ProperBigFractionFormat();
        ProperBigFractionFormat(const ::java::text::NumberFormat &);
        ProperBigFractionFormat(const ::java::text::NumberFormat &, const ::java::text::NumberFormat &, const ::java::text::NumberFormat &);

        ::java::lang::StringBuffer format(const ::org::hipparchus::fraction::BigFraction &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        ::java::text::NumberFormat getWholeFormat() const;
        ::org::hipparchus::fraction::BigFraction parse(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fraction {
      extern PyType_Def PY_TYPE_DEF(ProperBigFractionFormat);
      extern PyTypeObject *PY_TYPE(ProperBigFractionFormat);

      class t_ProperBigFractionFormat {
      public:
        PyObject_HEAD
        ProperBigFractionFormat object;
        static PyObject *wrap_Object(const ProperBigFractionFormat&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
