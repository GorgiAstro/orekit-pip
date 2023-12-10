#ifndef java_text_CharacterIterator_H
#define java_text_CharacterIterator_H

#include "java/lang/Cloneable.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class CharacterIterator : public ::java::lang::Cloneable {
     public:
      enum {
        mid_clone_4d26fd885228c716,
        mid_current_7818f5b58320cd1f,
        mid_first_7818f5b58320cd1f,
        mid_getBeginIndex_570ce0828f81a2c1,
        mid_getEndIndex_570ce0828f81a2c1,
        mid_getIndex_570ce0828f81a2c1,
        mid_last_7818f5b58320cd1f,
        mid_next_7818f5b58320cd1f,
        mid_previous_7818f5b58320cd1f,
        mid_setIndex_9d4c2604195fbadb,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit CharacterIterator(jobject obj) : ::java::lang::Cloneable(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      CharacterIterator(const CharacterIterator& obj) : ::java::lang::Cloneable(obj) {}

      static jchar DONE;

      ::java::lang::Object clone() const;
      jchar current() const;
      jchar first() const;
      jint getBeginIndex() const;
      jint getEndIndex() const;
      jint getIndex() const;
      jchar last() const;
      jchar next() const;
      jchar previous() const;
      jchar setIndex(jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(CharacterIterator);
    extern PyTypeObject *PY_TYPE(CharacterIterator);

    class t_CharacterIterator {
    public:
      PyObject_HEAD
      CharacterIterator object;
      static PyObject *wrap_Object(const CharacterIterator&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
