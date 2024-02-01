#ifndef java_text_FieldPosition_H
#define java_text_FieldPosition_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace text {
    class Format$Field;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class FieldPosition : public ::java::lang::Object {
     public:
      enum {
        mid_init$_5d68158e8e002563,
        mid_init$_8fd427ab23829bf5,
        mid_init$_6a3fe29d3103856c,
        mid_equals_72faff9b05f5ed5e,
        mid_getBeginIndex_d6ab429752e7c267,
        mid_getEndIndex_d6ab429752e7c267,
        mid_getField_d6ab429752e7c267,
        mid_getFieldAttribute_c105e9fa7ecd5265,
        mid_hashCode_d6ab429752e7c267,
        mid_setBeginIndex_8fd427ab23829bf5,
        mid_setEndIndex_8fd427ab23829bf5,
        mid_toString_d2c8eb4129821f0e,
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
