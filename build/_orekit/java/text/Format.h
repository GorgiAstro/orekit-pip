#ifndef java_text_Format_H
#define java_text_Format_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class ParsePosition;
    class ParseException;
    class AttributedCharacterIterator;
    class FieldPosition;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class StringBuffer;
    class Cloneable;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class Format : public ::java::lang::Object {
     public:
      enum {
        mid_clone_e661fe3ba2fafb22,
        mid_format_fa48e6cfb0766bbf,
        mid_format_60ec49fc2ad8aa0e,
        mid_formatToCharacterIterator_67523d7667ad62e2,
        mid_parseObject_86c4b8560f4aa70f,
        mid_parseObject_a7f2c32d9be5fd0d,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Format(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Format(const Format& obj) : ::java::lang::Object(obj) {}

      ::java::lang::Object clone() const;
      ::java::lang::String format(const ::java::lang::Object &) const;
      ::java::lang::StringBuffer format(const ::java::lang::Object &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
      ::java::text::AttributedCharacterIterator formatToCharacterIterator(const ::java::lang::Object &) const;
      ::java::lang::Object parseObject(const ::java::lang::String &) const;
      ::java::lang::Object parseObject(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(Format);
    extern PyTypeObject *PY_TYPE(Format);

    class t_Format {
    public:
      PyObject_HEAD
      Format object;
      static PyObject *wrap_Object(const Format&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
