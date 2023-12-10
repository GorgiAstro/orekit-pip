#ifndef org_hipparchus_fraction_ProperBigFractionFormat_H
#define org_hipparchus_fraction_ProperBigFractionFormat_H

#include "org/hipparchus/fraction/BigFractionFormat.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      class BigFraction;
    }
  }
}
namespace java {
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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class ProperBigFractionFormat : public ::org::hipparchus::fraction::BigFractionFormat {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_init$_256f36a22c0d0f55,
          mid_init$_2af517d7a6ef01c6,
          mid_format_848518009c5606f2,
          mid_getWholeFormat_24f83dea4a8657b1,
          mid_parse_7ca853134336de7b,
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
