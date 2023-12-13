#ifndef org_hipparchus_fraction_AbstractFormat_H
#define org_hipparchus_fraction_AbstractFormat_H

#include "java/text/NumberFormat.h"

namespace java {
  namespace text {
    class FieldPosition;
  }
  namespace lang {
    class StringBuffer;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class AbstractFormat : public ::java::text::NumberFormat {
       public:
        enum {
          mid_format_cdee9bc08b68d2f3,
          mid_format_1d561f51d282798c,
          mid_getDenominatorFormat_87ffffc449cd25a5,
          mid_getNumeratorFormat_87ffffc449cd25a5,
          mid_getDefaultNumberFormat_3c858cd11341b00a,
          mid_getDefaultNumberFormat_87ffffc449cd25a5,
          mid_parseAndIgnoreWhitespace_1df84bc342ab1345,
          mid_parseNextCharacter_ab936c5146b74d5a,
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
