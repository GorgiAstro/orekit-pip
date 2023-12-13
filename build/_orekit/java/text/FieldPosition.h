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
        mid_init$_6da7a099f2671014,
        mid_init$_44ed599e93e8a30c,
        mid_init$_5f99e2d4885e07be,
        mid_equals_460c5e2d9d51c6cc,
        mid_getBeginIndex_55546ef6a647f39b,
        mid_getEndIndex_55546ef6a647f39b,
        mid_getField_55546ef6a647f39b,
        mid_getFieldAttribute_7f60d31259f27345,
        mid_hashCode_55546ef6a647f39b,
        mid_setBeginIndex_44ed599e93e8a30c,
        mid_setEndIndex_44ed599e93e8a30c,
        mid_toString_1c1fa1e935d6cdcf,
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
