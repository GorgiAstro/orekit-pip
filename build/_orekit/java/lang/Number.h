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
        mid_init$_0fa09c18fee449d5,
        mid_byteValue_42a1555092006f7f,
        mid_doubleValue_dff5885c2c873297,
        mid_floatValue_5adccb493ada08e8,
        mid_intValue_570ce0828f81a2c1,
        mid_longValue_492808a339bfa35f,
        mid_shortValue_b5dd6688e7dce57d,
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
