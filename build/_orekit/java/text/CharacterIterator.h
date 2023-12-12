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
        mid_clone_e661fe3ba2fafb22,
        mid_current_d156d1ce330f6993,
        mid_first_d156d1ce330f6993,
        mid_getBeginIndex_412668abc8d889e9,
        mid_getEndIndex_412668abc8d889e9,
        mid_getIndex_412668abc8d889e9,
        mid_last_d156d1ce330f6993,
        mid_next_d156d1ce330f6993,
        mid_previous_d156d1ce330f6993,
        mid_setIndex_4affd00329d5d4cf,
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
