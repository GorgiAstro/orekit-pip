#ifndef org_hipparchus_fraction_AbstractFormat_H
#define org_hipparchus_fraction_AbstractFormat_H

#include "java/text/NumberFormat.h"

namespace java {
  namespace lang {
    class StringBuffer;
    class Class;
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
          mid_format_c6faa545a7a768dc,
          mid_format_ad0b55b296497605,
          mid_getDenominatorFormat_d34e2e8dd35583a0,
          mid_getNumeratorFormat_d34e2e8dd35583a0,
          mid_getDefaultNumberFormat_41d4a73d4466d8a8,
          mid_getDefaultNumberFormat_d34e2e8dd35583a0,
          mid_parseAndIgnoreWhitespace_3f781e1d901a0f96,
          mid_parseNextCharacter_4aabc917f367b3fd,
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
