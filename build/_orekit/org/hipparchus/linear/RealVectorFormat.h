#ifndef org_hipparchus_linear_RealVectorFormat_H
#define org_hipparchus_linear_RealVectorFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class ParsePosition;
    class NumberFormat;
    class FieldPosition;
  }
  namespace util {
    class Locale;
  }
  namespace lang {
    class Class;
    class StringBuffer;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class ArrayRealVector;
      class RealVectorFormat;
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
          mid_init$_0640e6acf969ed28,
          mid_init$_d53859bd7ba1b247,
          mid_init$_f5c244a0f15376be,
          mid_init$_5f051ed7add2b099,
          mid_format_c0171abb3ba0b023,
          mid_format_a6e853369bf753b4,
          mid_getAvailableLocales_85ff0d07ca843902,
          mid_getFormat_001645e916bd626d,
          mid_getPrefix_3cffd47377eca18a,
          mid_getRealVectorFormat_f6c83731ab02792b,
          mid_getRealVectorFormat_dd3046636f0c2838,
          mid_getSeparator_3cffd47377eca18a,
          mid_getSuffix_3cffd47377eca18a,
          mid_parse_f3a541aea0c3b97f,
          mid_parse_26152c0fd0d0312a,
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
