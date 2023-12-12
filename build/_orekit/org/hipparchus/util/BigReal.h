#ifndef org_hipparchus_util_BigReal_H
#define org_hipparchus_util_BigReal_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class BigReal;
    }
    class FieldElement;
    class Field;
    namespace exception {
      class MathRuntimeException;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class BigReal : public ::java::lang::Object {
       public:
        enum {
          mid_init$_916bf6d42d285c69,
          mid_init$_f5ffdf29129ef90a,
          mid_init$_10f281d777284cea,
          mid_init$_a3da1a935cb37f7b,
          mid_init$_3cd6a6b354c6aa22,
          mid_init$_5421d1c1f03cf945,
          mid_add_754ca702113ce3a8,
          mid_compareTo_886ba1973cae04cd,
          mid_divide_754ca702113ce3a8,
          mid_doubleValue_557b8123390d8d0c,
          mid_equals_221e8e85cb385209,
          mid_getField_20f98801541dcec1,
          mid_getReal_557b8123390d8d0c,
          mid_getScale_412668abc8d889e9,
          mid_hashCode_412668abc8d889e9,
          mid_multiply_754ca702113ce3a8,
          mid_multiply_9627ebcb527ee60f,
          mid_negate_2073e31f7b6bcf19,
          mid_reciprocal_2073e31f7b6bcf19,
          mid_setScale_a3da1a935cb37f7b,
          mid_subtract_754ca702113ce3a8,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit BigReal(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        BigReal(const BigReal& obj) : ::java::lang::Object(obj) {}

        static BigReal *ONE;
        static BigReal *ZERO;

        BigReal(const JArray< jchar > &);
        BigReal(const ::java::lang::String &);
        BigReal(jdouble);
        BigReal(jint);
        BigReal(jlong);
        BigReal(const JArray< jchar > &, jint, jint);

        BigReal add(const BigReal &) const;
        jint compareTo(const BigReal &) const;
        BigReal divide(const BigReal &) const;
        jdouble doubleValue() const;
        jboolean equals(const ::java::lang::Object &) const;
        ::org::hipparchus::Field getField() const;
        jdouble getReal() const;
        jint getScale() const;
        jint hashCode() const;
        BigReal multiply(const BigReal &) const;
        BigReal multiply(jint) const;
        BigReal negate() const;
        BigReal reciprocal() const;
        void setScale(jint) const;
        BigReal subtract(const BigReal &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(BigReal);
      extern PyTypeObject *PY_TYPE(BigReal);

      class t_BigReal {
      public:
        PyObject_HEAD
        BigReal object;
        static PyObject *wrap_Object(const BigReal&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
