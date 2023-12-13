#ifndef org_hipparchus_util_CompositeFormat_H
#define org_hipparchus_util_CompositeFormat_H

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
    class Number;
    class StringBuffer;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class CompositeFormat : public ::java::lang::Object {
       public:
        enum {
          mid_formatDouble_dbb787bb65ee7daa,
          mid_getDefaultNumberFormat_87ffffc449cd25a5,
          mid_getDefaultNumberFormat_3c858cd11341b00a,
          mid_parseAndIgnoreWhitespace_1df84bc342ab1345,
          mid_parseFixedstring_07decc762bc95813,
          mid_parseNextCharacter_ab936c5146b74d5a,
          mid_parseNumber_15d59e9ef502093d,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CompositeFormat(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CompositeFormat(const CompositeFormat& obj) : ::java::lang::Object(obj) {}

        static ::java::lang::StringBuffer formatDouble(jdouble, const ::java::text::NumberFormat &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &);
        static ::java::text::NumberFormat getDefaultNumberFormat();
        static ::java::text::NumberFormat getDefaultNumberFormat(const ::java::util::Locale &);
        static void parseAndIgnoreWhitespace(const ::java::lang::String &, const ::java::text::ParsePosition &);
        static jboolean parseFixedstring(const ::java::lang::String &, const ::java::lang::String &, const ::java::text::ParsePosition &);
        static jchar parseNextCharacter(const ::java::lang::String &, const ::java::text::ParsePosition &);
        static ::java::lang::Number parseNumber(const ::java::lang::String &, const ::java::text::NumberFormat &, const ::java::text::ParsePosition &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(CompositeFormat);
      extern PyTypeObject *PY_TYPE(CompositeFormat);

      class t_CompositeFormat {
      public:
        PyObject_HEAD
        CompositeFormat object;
        static PyObject *wrap_Object(const CompositeFormat&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
