#ifndef org_hipparchus_linear_RealVectorFormat_H
#define org_hipparchus_linear_RealVectorFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class FieldPosition;
    class ParsePosition;
    class NumberFormat;
  }
  namespace util {
    class Locale;
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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_b7f3d50b51ef7518,
          mid_init$_ee9345b4af8c40df,
          mid_init$_d047b7641facca84,
          mid_format_f977a35aa156a8cf,
          mid_format_abe2e36bc146cee2,
          mid_getAvailableLocales_8d2cd0b971cc7b85,
          mid_getFormat_87ffffc449cd25a5,
          mid_getPrefix_1c1fa1e935d6cdcf,
          mid_getRealVectorFormat_66f031d367cbb5ab,
          mid_getRealVectorFormat_b8faa7141586f40a,
          mid_getSeparator_1c1fa1e935d6cdcf,
          mid_getSuffix_1c1fa1e935d6cdcf,
          mid_parse_73de0b2a5c7b5aad,
          mid_parse_b466216443db2b86,
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
