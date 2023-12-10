#ifndef java_text_ParsePosition_H
#define java_text_ParsePosition_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class ParsePosition : public ::java::lang::Object {
     public:
      enum {
        mid_init$_0a2a1ac2721c0336,
        mid_equals_229c87223f486349,
        mid_getErrorIndex_f2f64475e4580546,
        mid_getIndex_f2f64475e4580546,
        mid_hashCode_f2f64475e4580546,
        mid_setErrorIndex_0a2a1ac2721c0336,
        mid_setIndex_0a2a1ac2721c0336,
        mid_toString_0090f7797e403f43,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ParsePosition(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ParsePosition(const ParsePosition& obj) : ::java::lang::Object(obj) {}

      ParsePosition(jint);

      jboolean equals(const ::java::lang::Object &) const;
      jint getErrorIndex() const;
      jint getIndex() const;
      jint hashCode() const;
      void setErrorIndex(jint) const;
      void setIndex(jint) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(ParsePosition);
    extern PyTypeObject *PY_TYPE(ParsePosition);

    class t_ParsePosition {
    public:
      PyObject_HEAD
      ParsePosition object;
      static PyObject *wrap_Object(const ParsePosition&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
