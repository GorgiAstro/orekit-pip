#ifndef org_hipparchus_util_CompositeFormat_H
#define org_hipparchus_util_CompositeFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class StringBuffer;
    class Number;
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
    namespace util {

      class CompositeFormat : public ::java::lang::Object {
       public:
        enum {
          mid_formatDouble_17acde89c513ee17,
          mid_getDefaultNumberFormat_d34e2e8dd35583a0,
          mid_getDefaultNumberFormat_41d4a73d4466d8a8,
          mid_parseAndIgnoreWhitespace_3f781e1d901a0f96,
          mid_parseFixedstring_04ad666c861ca7c9,
          mid_parseNextCharacter_4aabc917f367b3fd,
          mid_parseNumber_7da151659ee8d4e7,
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
