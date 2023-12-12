#ifndef org_hipparchus_fraction_ProperBigFractionFormat_H
#define org_hipparchus_fraction_ProperBigFractionFormat_H

#include "org/hipparchus/fraction/BigFractionFormat.h"

namespace java {
  namespace text {
    class ParsePosition;
    class NumberFormat;
    class FieldPosition;
  }
  namespace lang {
    class Class;
    class StringBuffer;
    class String;
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
          mid_init$_0640e6acf969ed28,
          mid_init$_d53859bd7ba1b247,
          mid_init$_0c28e98ce8b6fdd7,
          mid_format_c2b55dec3da6da3b,
          mid_getWholeFormat_001645e916bd626d,
          mid_parse_38d74adaa6fcd6d8,
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
