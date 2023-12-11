#ifndef java_text_AttributedCharacterIterator_H
#define java_text_AttributedCharacterIterator_H

#include "java/text/CharacterIterator.h"

namespace java {
  namespace text {
    class AttributedCharacterIterator$Attribute;
  }
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class AttributedCharacterIterator : public ::java::text::CharacterIterator {
     public:
      enum {
        mid_getAllAttributeKeys_2dfcbd371d62f4e1,
        mid_getAttribute_9787e68ba2c9c1c9,
        mid_getAttributes_1e62c2f73fbdd1c4,
        mid_getRunLimit_412668abc8d889e9,
        mid_getRunLimit_f0718cf8fe2061ba,
        mid_getRunLimit_709858000440f433,
        mid_getRunStart_412668abc8d889e9,
        mid_getRunStart_f0718cf8fe2061ba,
        mid_getRunStart_709858000440f433,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit AttributedCharacterIterator(jobject obj) : ::java::text::CharacterIterator(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      AttributedCharacterIterator(const AttributedCharacterIterator& obj) : ::java::text::CharacterIterator(obj) {}

      ::java::util::Set getAllAttributeKeys() const;
      ::java::lang::Object getAttribute(const ::java::text::AttributedCharacterIterator$Attribute &) const;
      ::java::util::Map getAttributes() const;
      jint getRunLimit() const;
      jint getRunLimit(const ::java::text::AttributedCharacterIterator$Attribute &) const;
      jint getRunLimit(const ::java::util::Set &) const;
      jint getRunStart() const;
      jint getRunStart(const ::java::text::AttributedCharacterIterator$Attribute &) const;
      jint getRunStart(const ::java::util::Set &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(AttributedCharacterIterator);
    extern PyTypeObject *PY_TYPE(AttributedCharacterIterator);

    class t_AttributedCharacterIterator {
    public:
      PyObject_HEAD
      AttributedCharacterIterator object;
      static PyObject *wrap_Object(const AttributedCharacterIterator&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
