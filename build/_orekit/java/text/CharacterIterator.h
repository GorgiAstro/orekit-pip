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
        mid_clone_704a5bee58538972,
        mid_current_153df32fe8b51cb6,
        mid_first_153df32fe8b51cb6,
        mid_getBeginIndex_d6ab429752e7c267,
        mid_getEndIndex_d6ab429752e7c267,
        mid_getIndex_d6ab429752e7c267,
        mid_last_153df32fe8b51cb6,
        mid_next_153df32fe8b51cb6,
        mid_previous_153df32fe8b51cb6,
        mid_setIndex_80723b5d4f0fdfa2,
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
