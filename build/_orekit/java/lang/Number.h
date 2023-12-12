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
        mid_init$_0640e6acf969ed28,
        mid_byteValue_acadfed42a0dbd0d,
        mid_doubleValue_557b8123390d8d0c,
        mid_floatValue_04fe014f7609dc26,
        mid_intValue_412668abc8d889e9,
        mid_longValue_9e26256fb0d384a2,
        mid_shortValue_2554afc868a7ba2a,
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
