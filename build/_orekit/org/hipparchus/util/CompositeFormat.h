#ifndef org_hipparchus_util_CompositeFormat_H
#define org_hipparchus_util_CompositeFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace text {
    class NumberFormat;
    class ParsePosition;
    class FieldPosition;
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
          mid_formatDouble_011f6c03d2da5cfc,
          mid_getDefaultNumberFormat_24f83dea4a8657b1,
          mid_getDefaultNumberFormat_09db48c8af63ef24,
          mid_parseAndIgnoreWhitespace_e097ee22c3f6fd45,
          mid_parseFixedstring_cbbf5c6c125aa0e5,
          mid_parseNextCharacter_3867dd0052a198da,
          mid_parseNumber_12cb0ffadecc8e5c,
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
