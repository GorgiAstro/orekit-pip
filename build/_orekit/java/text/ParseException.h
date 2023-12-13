#ifndef java_text_ParseException_H
#define java_text_ParseException_H

#include "java/lang/Exception.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class ParseException : public ::java::lang::Exception {
     public:
      enum {
        mid_init$_02c6e5855745e0e2,
        mid_getErrorOffset_55546ef6a647f39b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ParseException(jobject obj) : ::java::lang::Exception(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ParseException(const ParseException& obj) : ::java::lang::Exception(obj) {}

      ParseException(const ::java::lang::String &, jint);

      jint getErrorOffset() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(ParseException);
    extern PyTypeObject *PY_TYPE(ParseException);

    class t_ParseException {
    public:
      PyObject_HEAD
      ParseException object;
      static PyObject *wrap_Object(const ParseException&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
