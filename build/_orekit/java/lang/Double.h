#ifndef java_lang_Double_H
#define java_lang_Double_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class NumberFormatException;
    class Double;
    class Class;
    class Object;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Double : public ::java::lang::Number {
     public:
      enum {
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_17db3a65980d3441,
        mid_byteValue_42a1555092006f7f,
        mid_compare_1257850af36d5462,
        mid_compareTo_fb8f1feba905d202,
        mid_doubleToLongBits_cebf7dc9be03a93c,
        mid_doubleToRawLongBits_cebf7dc9be03a93c,
        mid_doubleValue_dff5885c2c873297,
        mid_equals_65c7d273e80d497a,
        mid_floatValue_5adccb493ada08e8,
        mid_hashCode_570ce0828f81a2c1,
        mid_hashCode_4508852644846c83,
        mid_intValue_570ce0828f81a2c1,
        mid_isFinite_2e401133981893e4,
        mid_isInfinite_b108b35ef48e27bd,
        mid_isInfinite_2e401133981893e4,
        mid_isNaN_b108b35ef48e27bd,
        mid_isNaN_2e401133981893e4,
        mid_longBitsToDouble_f0482edaa10e7949,
        mid_longValue_492808a339bfa35f,
        mid_max_86ffecc08a63eff0,
        mid_min_86ffecc08a63eff0,
        mid_parseDouble_b36dde1444e08956,
        mid_shortValue_b5dd6688e7dce57d,
        mid_sum_86ffecc08a63eff0,
        mid_toHexString_e8f51f84167aafbd,
        mid_toString_11b109bd155ca898,
        mid_toString_e8f51f84167aafbd,
        mid_valueOf_e26d3c10645f38b2,
        mid_valueOf_b3bbc231316f8ee9,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Double(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Double(const Double& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jint MAX_EXPONENT;
      static jdouble MAX_VALUE;
      static jint MIN_EXPONENT;
      static jdouble MIN_NORMAL;
      static jdouble MIN_VALUE;
      static jdouble NEGATIVE_INFINITY;
      static jdouble NaN;
      static jdouble POSITIVE_INFINITY;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Double(const ::java::lang::String &);
      Double(jdouble);

      jbyte byteValue() const;
      static jint compare(jdouble, jdouble);
      jint compareTo(const Double &) const;
      static jlong doubleToLongBits(jdouble);
      static jlong doubleToRawLongBits(jdouble);
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jdouble);
      jint intValue() const;
      static jboolean isFinite(jdouble);
      jboolean isInfinite() const;
      static jboolean isInfinite(jdouble);
      jboolean isNaN() const;
      static jboolean isNaN(jdouble);
      static jdouble longBitsToDouble(jlong);
      jlong longValue() const;
      static jdouble max$(jdouble, jdouble);
      static jdouble min$(jdouble, jdouble);
      static jdouble parseDouble(const ::java::lang::String &);
      jshort shortValue() const;
      static jdouble sum(jdouble, jdouble);
      static ::java::lang::String toHexString(jdouble);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jdouble);
      static Double valueOf(const ::java::lang::String &);
      static Double valueOf(jdouble);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Double);
    extern PyTypeObject *PY_TYPE(Double);

    class t_Double {
    public:
      PyObject_HEAD
      Double object;
      static PyObject *wrap_Object(const Double&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
