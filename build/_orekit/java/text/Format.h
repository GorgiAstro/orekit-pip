#ifndef java_text_Format_H
#define java_text_Format_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class ParseException;
    class ParsePosition;
    class AttributedCharacterIterator;
    class FieldPosition;
  }
  namespace lang {
    class StringBuffer;
    class Class;
    class Cloneable;
    class String;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class Format : public ::java::lang::Object {
     public:
      enum {
        mid_clone_4d26fd885228c716,
        mid_format_e816b890c4273bbd,
        mid_format_f5c3717ad7292c63,
        mid_formatToCharacterIterator_9456d3ba5fac0c0f,
        mid_parseObject_f639320a33718c6c,
        mid_parseObject_621466ec4567b9e0,
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
