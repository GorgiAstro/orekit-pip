#ifndef java_text_AttributedCharacterIterator_H
#define java_text_AttributedCharacterIterator_H

#include "java/text/CharacterIterator.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace text {
    class AttributedCharacterIterator$Attribute;
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
        mid_getAllAttributeKeys_7e8f11dd23d1142c,
        mid_getAttribute_35104434eb6bd0ee,
        mid_getAttributes_810bed48fafb0b9a,
        mid_getRunLimit_55546ef6a647f39b,
        mid_getRunLimit_b0eeda8f546a1c45,
        mid_getRunLimit_9dfa3140bb9ea2c1,
        mid_getRunStart_55546ef6a647f39b,
        mid_getRunStart_b0eeda8f546a1c45,
        mid_getRunStart_9dfa3140bb9ea2c1,
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
