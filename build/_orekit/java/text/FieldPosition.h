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
        mid_init$_fc614ca28d5c4727,
        mid_init$_0a2a1ac2721c0336,
        mid_init$_1fb84685894eb9b6,
        mid_equals_229c87223f486349,
        mid_getBeginIndex_f2f64475e4580546,
        mid_getEndIndex_f2f64475e4580546,
        mid_getField_f2f64475e4580546,
        mid_getFieldAttribute_79c8167006688aa7,
        mid_hashCode_f2f64475e4580546,
        mid_setBeginIndex_0a2a1ac2721c0336,
        mid_setEndIndex_0a2a1ac2721c0336,
        mid_toString_0090f7797e403f43,
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
