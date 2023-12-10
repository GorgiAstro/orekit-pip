#ifndef org_hipparchus_fraction_ProperFractionFormat_H
#define org_hipparchus_fraction_ProperFractionFormat_H

#include "org/hipparchus/fraction/FractionFormat.h"

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
      class Fraction;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class ProperFractionFormat : public ::org::hipparchus::fraction::FractionFormat {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_init$_695a782f9c7823f6,
          mid_init$_0d88283ed770bf4b,
          mid_format_c19c8e97de8c2158,
          mid_getWholeFormat_d34e2e8dd35583a0,
          mid_parse_7b370dc16c7b13a9,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ProperFractionFormat(jobject obj) : ::org::hipparchus::fraction::FractionFormat(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ProperFractionFormat(const ProperFractionFormat& obj) : ::org::hipparchus::fraction::FractionFormat(obj) {}

        ProperFractionFormat();
        ProperFractionFormat(const ::java::text::NumberFormat &);
        ProperFractionFormat(const ::java::text::NumberFormat &, const ::java::text::NumberFormat &, const ::java::text::NumberFormat &);

        ::java::lang::StringBuffer format(const ::org::hipparchus::fraction::Fraction &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        ::java::text::NumberFormat getWholeFormat() const;
        ::org::hipparchus::fraction::Fraction parse(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fraction {
      extern PyType_Def PY_TYPE_DEF(ProperFractionFormat);
      extern PyTypeObject *PY_TYPE(ProperFractionFormat);

      class t_ProperFractionFormat {
      public:
        PyObject_HEAD
        ProperFractionFormat object;
        static PyObject *wrap_Object(const ProperFractionFormat&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
