#ifndef org_hipparchus_util_CompositeFormat_H
#define org_hipparchus_util_CompositeFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class StringBuffer;
    class Number;
    class Class;
    class String;
  }
  namespace text {
    class FieldPosition;
    class NumberFormat;
    class ParsePosition;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class CompositeFormat : public ::java::lang::Object {
       public:
        enum {
          mid_formatDouble_9af170d7b13de246,
          mid_getDefaultNumberFormat_525709eb5c5b5ea6,
          mid_getDefaultNumberFormat_5ed382d8d7b942c5,
          mid_parseAndIgnoreWhitespace_63c49683e3fd0aef,
          mid_parseFixedstring_cb5d9035704f8693,
          mid_parseNextCharacter_5ce3a6c37aaf3132,
          mid_parseNumber_61147cd9424632d0,
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
