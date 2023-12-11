#ifndef org_hipparchus_linear_RealMatrixFormat_H
#define org_hipparchus_linear_RealMatrixFormat_H

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
          mid_init$_0640e6acf969ed28,
          mid_init$_d53859bd7ba1b247,
          mid_init$_7ef3cb05fa691170,
          mid_init$_27cbbcdef5ceb319,
          mid_format_d9d9257bc38f92d9,
          mid_format_f5a59753aa65c5c2,
          mid_getAvailableLocales_85ff0d07ca843902,
          mid_getColumnSeparator_3cffd47377eca18a,
          mid_getFormat_001645e916bd626d,
          mid_getPrefix_3cffd47377eca18a,
          mid_getRealMatrixFormat_585ececd2b2dc96d,
          mid_getRealMatrixFormat_9305d502db00d8a7,
          mid_getRowPrefix_3cffd47377eca18a,
          mid_getRowSeparator_3cffd47377eca18a,
          mid_getRowSuffix_3cffd47377eca18a,
          mid_getSuffix_3cffd47377eca18a,
          mid_parse_f40bf79e7cf80d97,
          mid_parse_89d35fd76436d8a2,
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
