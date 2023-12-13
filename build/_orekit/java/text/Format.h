#ifndef java_text_Format_H
#define java_text_Format_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class FieldPosition;
    class ParsePosition;
    class ParseException;
    class AttributedCharacterIterator;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class StringBuffer;
    class Class;
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
        mid_clone_541690f9ee81d3ad,
        mid_format_9a3ac03d9f8571c6,
        mid_format_b972afa1d89f0ad4,
        mid_formatToCharacterIterator_1e9e330ed3e6edfe,
        mid_parseObject_b5bfd4959be00bde,
        mid_parseObject_ad5444510b7b5820,
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
