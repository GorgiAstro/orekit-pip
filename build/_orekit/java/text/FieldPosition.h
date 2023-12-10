#ifndef java_text_FieldPosition_H
#define java_text_FieldPosition_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class Format$Field;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class FieldPosition : public ::java::lang::Object {
     public:
      enum {
        mid_init$_4dcd4db55447f521,
        mid_init$_99803b0791f320ff,
        mid_init$_0e5e8e3c6fdb72c5,
        mid_equals_65c7d273e80d497a,
        mid_getBeginIndex_570ce0828f81a2c1,
        mid_getEndIndex_570ce0828f81a2c1,
        mid_getField_570ce0828f81a2c1,
        mid_getFieldAttribute_ed7f324d12ac0e45,
        mid_hashCode_570ce0828f81a2c1,
        mid_setBeginIndex_99803b0791f320ff,
        mid_setEndIndex_99803b0791f320ff,
        mid_toString_11b109bd155ca898,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit FieldPosition(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      FieldPosition(const FieldPosition& obj) : ::java::lang::Object(obj) {}

      FieldPosition(const ::java::text::Format$Field &);
      FieldPosition(jint);
      FieldPosition(const ::java::text::Format$Field &, jint);

      jboolean equals(const ::java::lang::Object &) const;
      jint getBeginIndex() const;
      jint getEndIndex() const;
      jint getField() const;
      ::java::text::Format$Field getFieldAttribute() const;
      jint hashCode() const;
      void setBeginIndex(jint) const;
      void setEndIndex(jint) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(FieldPosition);
    extern PyTypeObject *PY_TYPE(FieldPosition);

    class t_FieldPosition {
    public:
      PyObject_HEAD
      FieldPosition object;
      static PyObject *wrap_Object(const FieldPosition&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
