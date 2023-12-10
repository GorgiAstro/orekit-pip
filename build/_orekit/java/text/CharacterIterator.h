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
        mid_clone_dfd7647d9110ac9f,
        mid_current_29e026b9d068f1c7,
        mid_first_29e026b9d068f1c7,
        mid_getBeginIndex_f2f64475e4580546,
        mid_getEndIndex_f2f64475e4580546,
        mid_getIndex_f2f64475e4580546,
        mid_last_29e026b9d068f1c7,
        mid_next_29e026b9d068f1c7,
        mid_previous_29e026b9d068f1c7,
        mid_setIndex_52047e692b58eb87,
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
