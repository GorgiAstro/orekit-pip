#ifndef org_hipparchus_linear_RealVectorFormat_H
#define org_hipparchus_linear_RealVectorFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealVectorFormat;
      class ArrayRealVector;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace linear {

      class RealVectorFormat : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_init$_695a782f9c7823f6,
          mid_init$_de8316969b81209c,
          mid_init$_3420ce131d6f9e7d,
          mid_format_459b23c8344eb314,
          mid_format_bf0c14f894c2e4a2,
          mid_getAvailableLocales_81e8fdf65840780c,
          mid_getFormat_d34e2e8dd35583a0,
          mid_getPrefix_0090f7797e403f43,
          mid_getRealVectorFormat_6c214984d05c94b5,
          mid_getRealVectorFormat_adc9672f20fe85f0,
          mid_getSeparator_0090f7797e403f43,
          mid_getSuffix_0090f7797e403f43,
          mid_parse_10d2a9948714ddd3,
          mid_parse_7861297daafe2b42,
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
