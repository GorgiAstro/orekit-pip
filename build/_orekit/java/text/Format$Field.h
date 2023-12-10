#ifndef java_text_Format$Field_H
#define java_text_Format$Field_H

#include "java/text/AttributedCharacterIterator$Attribute.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class Format$Field : public ::java::text::AttributedCharacterIterator$Attribute {
     public:

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Format$Field(jobject obj) : ::java::text::AttributedCharacterIterator$Attribute(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Format$Field(const Format$Field& obj) : ::java::text::AttributedCharacterIterator$Attribute(obj) {}
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(Format$Field);
    extern PyTypeObject *PY_TYPE(Format$Field);

    class t_Format$Field {
    public:
      PyObject_HEAD
      Format$Field object;
      static PyObject *wrap_Object(const Format$Field&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
