#ifndef java_lang_Float_H
#define java_lang_Float_H

#include "java/lang/Number.h"

namespace java {
  namespace lang {
    class Float;
    class NumberFormatException;
    class Class;
    class Object;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class Float : public ::java::lang::Number {
     public:
      enum {
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_17db3a65980d3441,
        mid_init$_f63147a1690942cc,
        mid_byteValue_42a1555092006f7f,
        mid_compare_f0f18d086c6c6bea,
        mid_compareTo_d9424729eac19935,
        mid_doubleValue_dff5885c2c873297,
        mid_equals_65c7d273e80d497a,
        mid_floatToIntBits_a420854bf0746aa6,
        mid_floatToRawIntBits_a420854bf0746aa6,
        mid_floatValue_5adccb493ada08e8,
        mid_hashCode_570ce0828f81a2c1,
        mid_hashCode_a420854bf0746aa6,
        mid_intBitsToFloat_82a32f686d72165a,
        mid_intValue_570ce0828f81a2c1,
        mid_isFinite_fe32376435eb98dd,
        mid_isInfinite_b108b35ef48e27bd,
        mid_isInfinite_fe32376435eb98dd,
        mid_isNaN_b108b35ef48e27bd,
        mid_isNaN_fe32376435eb98dd,
        mid_longValue_492808a339bfa35f,
        mid_max_b2255e57f862a26c,
        mid_min_b2255e57f862a26c,
        mid_parseFloat_976b0c497f7e39a4,
        mid_shortValue_b5dd6688e7dce57d,
        mid_sum_b2255e57f862a26c,
        mid_toHexString_fd11166b57af1364,
        mid_toString_11b109bd155ca898,
        mid_toString_fd11166b57af1364,
        mid_valueOf_ba1e27d0ad98876c,
        mid_valueOf_c84b57cda5bfcd7a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Float(jobject obj) : ::java::lang::Number(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Float(const Float& obj) : ::java::lang::Number(obj) {}

      static jint BYTES;
      static jint MAX_EXPONENT;
      static jfloat MAX_VALUE;
      static jint MIN_EXPONENT;
      static jfloat MIN_NORMAL;
      static jfloat MIN_VALUE;
      static jfloat NEGATIVE_INFINITY;
      static jfloat NaN;
      static jfloat POSITIVE_INFINITY;
      static jint SIZE;
      static ::java::lang::Class *TYPE;

      Float(const ::java::lang::String &);
      Float(jdouble);
      Float(jfloat);

      jbyte byteValue() const;
      static jint compare(jfloat, jfloat);
      jint compareTo(const Float &) const;
      jdouble doubleValue() const;
      jboolean equals(const ::java::lang::Object &) const;
      static jint floatToIntBits(jfloat);
      static jint floatToRawIntBits(jfloat);
      jfloat floatValue() const;
      jint hashCode() const;
      static jint hashCode(jfloat);
      static jfloat intBitsToFloat(jint);
      jint intValue() const;
      static jboolean isFinite(jfloat);
      jboolean isInfinite() const;
      static jboolean isInfinite(jfloat);
      jboolean isNaN() const;
      static jboolean isNaN(jfloat);
      jlong longValue() const;
      static jfloat max$(jfloat, jfloat);
      static jfloat min$(jfloat, jfloat);
      static jfloat parseFloat(const ::java::lang::String &);
      jshort shortValue() const;
      static jfloat sum(jfloat, jfloat);
      static ::java::lang::String toHexString(jfloat);
      ::java::lang::String toString() const;
      static ::java::lang::String toString(jfloat);
      static Float valueOf(const ::java::lang::String &);
      static Float valueOf(jfloat);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(Float);
    extern PyTypeObject *PY_TYPE(Float);

    class t_Float {
    public:
      PyObject_HEAD
      Float object;
      static PyObject *wrap_Object(const Float&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
