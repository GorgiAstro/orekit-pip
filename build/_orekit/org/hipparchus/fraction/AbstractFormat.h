#ifndef org_hipparchus_fraction_AbstractFormat_H
#define org_hipparchus_fraction_AbstractFormat_H

#include "java/text/NumberFormat.h"

namespace java {
  namespace lang {
    class Class;
    class StringBuffer;
  }
  namespace text {
    class FieldPosition;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class AbstractFormat : public ::java::text::NumberFormat {
       public:
        enum {
          mid_format_12b2fbc0c0cefa8d,
          mid_format_d9d8c4aa92e35cdf,
          mid_getDenominatorFormat_001645e916bd626d,
          mid_getNumeratorFormat_001645e916bd626d,
          mid_getDefaultNumberFormat_001645e916bd626d,
          mid_getDefaultNumberFormat_eb8cc1bc569326d0,
          mid_parseAndIgnoreWhitespace_c31631851425bff4,
          mid_parseNextCharacter_925fed7c0b932e5a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractFormat(jobject obj) : ::java::text::NumberFormat(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractFormat(const AbstractFormat& obj) : ::java::text::NumberFormat(obj) {}

        ::java::lang::StringBuffer format(jdouble, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        ::java::lang::StringBuffer format(jlong, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        ::java::text::NumberFormat getDenominatorFormat() const;
        ::java::text::NumberFormat getNumeratorFormat() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace fraction {
      extern PyType_Def PY_TYPE_DEF(AbstractFormat);
      extern PyTypeObject *PY_TYPE(AbstractFormat);

      class t_AbstractFormat {
      public:
        PyObject_HEAD
        AbstractFormat object;
        static PyObject *wrap_Object(const AbstractFormat&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
