#ifndef java_text_AttributedCharacterIterator$Attribute_H
#define java_text_AttributedCharacterIterator$Attribute_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class AttributedCharacterIterator$Attribute;
  }
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class AttributedCharacterIterator$Attribute : public ::java::lang::Object {
     public:
      enum {
        mid_equals_460c5e2d9d51c6cc,
        mid_hashCode_55546ef6a647f39b,
        mid_toString_1c1fa1e935d6cdcf,
        mid_getName_1c1fa1e935d6cdcf,
        mid_readResolve_541690f9ee81d3ad,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AttributedCharacterIterator$Attribute(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AttributedCharacterIterator$Attribute(const AttributedCharacterIterator$Attribute& obj) : ::java::lang::Object(obj) {}

      static AttributedCharacterIterator$Attribute *INPUT_METHOD_SEGMENT;
      static AttributedCharacterIterator$Attribute *LANGUAGE;
      static AttributedCharacterIterator$Attribute *READING;

      jboolean equals(const ::java::lang::Object &) const;
      jint hashCode() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(AttributedCharacterIterator$Attribute);
    extern PyTypeObject *PY_TYPE(AttributedCharacterIterator$Attribute);

    class t_AttributedCharacterIterator$Attribute {
    public:
      PyObject_HEAD
      AttributedCharacterIterator$Attribute object;
      static PyObject *wrap_Object(const AttributedCharacterIterator$Attribute&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
