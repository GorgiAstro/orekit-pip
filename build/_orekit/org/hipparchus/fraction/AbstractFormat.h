#ifndef org_hipparchus_fraction_AbstractFormat_H
#define org_hipparchus_fraction_AbstractFormat_H

#include "java/text/NumberFormat.h"

namespace java {
  namespace text {
    class FieldPosition;
  }
  namespace lang {
    class Class;
    class StringBuffer;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace fraction {

      class AbstractFormat : public ::java::text::NumberFormat {
       public:
        enum {
          mid_format_71cdbf949acd3c79,
          mid_format_1ad97cb6c82be27f,
          mid_getDenominatorFormat_24f83dea4a8657b1,
          mid_getNumeratorFormat_24f83dea4a8657b1,
          mid_getDefaultNumberFormat_09db48c8af63ef24,
          mid_getDefaultNumberFormat_24f83dea4a8657b1,
          mid_parseAndIgnoreWhitespace_e097ee22c3f6fd45,
          mid_parseNextCharacter_3867dd0052a198da,
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
