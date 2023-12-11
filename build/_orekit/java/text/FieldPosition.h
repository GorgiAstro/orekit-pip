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
        mid_init$_7c052a0e5fb545b8,
        mid_init$_a3da1a935cb37f7b,
        mid_init$_90bb37c33b672951,
        mid_equals_221e8e85cb385209,
        mid_getBeginIndex_412668abc8d889e9,
        mid_getEndIndex_412668abc8d889e9,
        mid_getField_412668abc8d889e9,
        mid_getFieldAttribute_bea81de6d2ca4b7c,
        mid_hashCode_412668abc8d889e9,
        mid_setBeginIndex_a3da1a935cb37f7b,
        mid_setEndIndex_a3da1a935cb37f7b,
        mid_toString_3cffd47377eca18a,
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
