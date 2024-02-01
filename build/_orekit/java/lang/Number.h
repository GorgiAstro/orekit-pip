#ifndef java_lang_Number_H
#define java_lang_Number_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Number : public ::java::lang::Object {
     public:
      enum {
        mid_init$_ff7cb6c242604316,
        mid_byteValue_5bc9c54e4a4e6e3f,
        mid_doubleValue_9981f74b2d109da6,
        mid_floatValue_0e3b995f823d65ff,
        mid_intValue_d6ab429752e7c267,
        mid_longValue_42c72b98e3c2e08a,
        mid_shortValue_5067fec74ceda473,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Number(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Number(const Number& obj) : ::java::lang::Object(obj) {}

      Number();

      jbyte byteValue() const;
      jdouble doubleValue() const;
      jfloat floatValue() const;
      jint intValue() const;
      jlong longValue() const;
      jshort shortValue() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Number);
    extern PyTypeObject *PY_TYPE(Number);

    class t_Number {
    public:
      PyObject_HEAD
      Number object;
      static PyObject *wrap_Object(const Number&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
