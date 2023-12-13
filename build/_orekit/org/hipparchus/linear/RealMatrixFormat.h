#ifndef org_hipparchus_linear_RealMatrixFormat_H
#define org_hipparchus_linear_RealMatrixFormat_H

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
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_b7f3d50b51ef7518,
          mid_init$_e39b9463875d2aea,
          mid_init$_c96fc87aa2f40e42,
          mid_format_51220323ff2ddb56,
          mid_format_b0b951c748fccbee,
          mid_getAvailableLocales_8d2cd0b971cc7b85,
          mid_getColumnSeparator_1c1fa1e935d6cdcf,
          mid_getFormat_87ffffc449cd25a5,
          mid_getPrefix_1c1fa1e935d6cdcf,
          mid_getRealMatrixFormat_45ea15869ae5e87f,
          mid_getRealMatrixFormat_1a7724022b3f9dd3,
          mid_getRowPrefix_1c1fa1e935d6cdcf,
          mid_getRowSeparator_1c1fa1e935d6cdcf,
          mid_getRowSuffix_1c1fa1e935d6cdcf,
          mid_getSuffix_1c1fa1e935d6cdcf,
          mid_parse_6473eeaad285ae36,
          mid_parse_ed9629889638c09b,
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
