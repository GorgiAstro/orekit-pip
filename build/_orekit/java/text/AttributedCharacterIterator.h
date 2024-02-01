#ifndef java_text_AttributedCharacterIterator_H
#define java_text_AttributedCharacterIterator_H

#include "java/text/CharacterIterator.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class Class;
    class Object;
  }
  namespace text {
    class AttributedCharacterIterator$Attribute;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class AttributedCharacterIterator : public ::java::text::CharacterIterator {
     public:
      enum {
        mid_getAllAttributeKeys_6b191a9b12c1004b,
        mid_getAttribute_009dc5eb5b86cd32,
        mid_getAttributes_dbcb8bbac6b35e0d,
        mid_getRunLimit_d6ab429752e7c267,
        mid_getRunLimit_cab5680f9fdd97c7,
        mid_getRunLimit_0835576b5c91f7a0,
        mid_getRunStart_d6ab429752e7c267,
        mid_getRunStart_cab5680f9fdd97c7,
        mid_getRunStart_0835576b5c91f7a0,
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
