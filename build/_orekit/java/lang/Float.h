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
        mid_init$_e939c6558ae8d313,
        mid_init$_77e0f9a1f260e2e5,
        mid_init$_ca234f4580d28ea3,
        mid_byteValue_1d06dd1980a98d13,
        mid_compare_643e38b841cbf17e,
        mid_compareTo_75a46186f4f693e1,
        mid_doubleValue_456d9a2f64d6b28d,
        mid_equals_229c87223f486349,
        mid_floatToIntBits_255f1fc90438be86,
        mid_floatToRawIntBits_255f1fc90438be86,
        mid_floatValue_966c782d3223854d,
        mid_hashCode_f2f64475e4580546,
        mid_hashCode_255f1fc90438be86,
        mid_intBitsToFloat_25b6ee18af4e3c01,
        mid_intValue_f2f64475e4580546,
        mid_isFinite_17deb5e1968726fd,
        mid_isInfinite_e470b6d9e0d979db,
        mid_isInfinite_17deb5e1968726fd,
        mid_isNaN_e470b6d9e0d979db,
        mid_isNaN_17deb5e1968726fd,
        mid_longValue_a27fc9afd27e559d,
        mid_max_c50b565e19875e8e,
        mid_min_c50b565e19875e8e,
        mid_parseFloat_bf9c992a58fb3c9b,
        mid_shortValue_f89720844d790ad7,
        mid_sum_c50b565e19875e8e,
        mid_toHexString_9173130ae370f7b2,
        mid_toString_0090f7797e403f43,
        mid_toString_9173130ae370f7b2,
        mid_valueOf_d222c39c2be0b7e6,
        mid_valueOf_453bc60b40136aed,
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
