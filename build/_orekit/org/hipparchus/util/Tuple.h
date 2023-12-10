#ifndef org_hipparchus_util_Tuple_H
#define org_hipparchus_util_Tuple_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace util {
      class FieldSinCos;
      class Tuple;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace util {

      class Tuple : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ebc26dcaf4761286,
          mid_abs_963b4d2ebe4fb63a,
          mid_acos_963b4d2ebe4fb63a,
          mid_acosh_963b4d2ebe4fb63a,
          mid_add_c7f42f4b622b3d8f,
          mid_add_98e8fb71f9cf92f0,
          mid_asin_963b4d2ebe4fb63a,
          mid_asinh_963b4d2ebe4fb63a,
          mid_atan_963b4d2ebe4fb63a,
          mid_atan2_c7f42f4b622b3d8f,
          mid_atanh_963b4d2ebe4fb63a,
          mid_cbrt_963b4d2ebe4fb63a,
          mid_ceil_963b4d2ebe4fb63a,
          mid_copySign_c7f42f4b622b3d8f,
          mid_copySign_98e8fb71f9cf92f0,
          mid_cos_963b4d2ebe4fb63a,
          mid_cosh_963b4d2ebe4fb63a,
          mid_divide_c7f42f4b622b3d8f,
          mid_divide_98e8fb71f9cf92f0,
          mid_equals_229c87223f486349,
          mid_exp_963b4d2ebe4fb63a,
          mid_expm1_963b4d2ebe4fb63a,
          mid_floor_963b4d2ebe4fb63a,
          mid_getComponent_b772323fc98b7293,
          mid_getComponents_7cdc325af0834901,
          mid_getDimension_f2f64475e4580546,
          mid_getField_70b4bbd3fa378d6b,
          mid_getPi_963b4d2ebe4fb63a,
          mid_getReal_456d9a2f64d6b28d,
          mid_hashCode_f2f64475e4580546,
          mid_hypot_c7f42f4b622b3d8f,
          mid_linearCombination_bfc561e080507c13,
          mid_linearCombination_cd5908fe60eab4dc,
          mid_linearCombination_d12a4653f404e86e,
          mid_linearCombination_8ff90fae2977f9f8,
          mid_linearCombination_da4ab078c018e53e,
          mid_linearCombination_18ac515651db94ce,
          mid_linearCombination_c745d1a5b4e505bd,
          mid_linearCombination_296ab47b79aef07f,
          mid_log_963b4d2ebe4fb63a,
          mid_log10_963b4d2ebe4fb63a,
          mid_log1p_963b4d2ebe4fb63a,
          mid_multiply_c7f42f4b622b3d8f,
          mid_multiply_98e8fb71f9cf92f0,
          mid_multiply_3c2eb2f03dc9bc61,
          mid_negate_963b4d2ebe4fb63a,
          mid_newInstance_98e8fb71f9cf92f0,
          mid_pow_c7f42f4b622b3d8f,
          mid_pow_98e8fb71f9cf92f0,
          mid_pow_3c2eb2f03dc9bc61,
          mid_reciprocal_963b4d2ebe4fb63a,
          mid_remainder_c7f42f4b622b3d8f,
          mid_remainder_98e8fb71f9cf92f0,
          mid_rint_963b4d2ebe4fb63a,
          mid_rootN_3c2eb2f03dc9bc61,
          mid_scalb_3c2eb2f03dc9bc61,
          mid_sign_963b4d2ebe4fb63a,
          mid_sin_963b4d2ebe4fb63a,
          mid_sinCos_35f2499c71416a1a,
          mid_sinh_963b4d2ebe4fb63a,
          mid_sinhCosh_c388a3eefde9d597,
          mid_sqrt_963b4d2ebe4fb63a,
          mid_subtract_c7f42f4b622b3d8f,
          mid_subtract_98e8fb71f9cf92f0,
          mid_tan_963b4d2ebe4fb63a,
          mid_tanh_963b4d2ebe4fb63a,
          mid_toDegrees_963b4d2ebe4fb63a,
          mid_toRadians_963b4d2ebe4fb63a,
          mid_ulp_963b4d2ebe4fb63a,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Tuple(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Tuple(const Tuple& obj) : ::java::lang::Object(obj) {}

        Tuple(const JArray< jdouble > &);

        Tuple abs() const;
        Tuple acos() const;
        Tuple acosh() const;
        Tuple add(const Tuple &) const;
        Tuple add(jdouble) const;
        Tuple asin() const;
        Tuple asinh() const;
        Tuple atan() const;
        Tuple atan2(const Tuple &) const;
        Tuple atanh() const;
        Tuple cbrt() const;
        Tuple ceil() const;
        Tuple copySign(const Tuple &) const;
        Tuple copySign(jdouble) const;
        Tuple cos() const;
        Tuple cosh() const;
        Tuple divide(const Tuple &) const;
        Tuple divide(jdouble) const;
        jboolean equals(const ::java::lang::Object &) const;
        Tuple exp() const;
        Tuple expm1() const;
        Tuple floor() const;
        jdouble getComponent(jint) const;
        JArray< jdouble > getComponents() const;
        jint getDimension() const;
        ::org::hipparchus::Field getField() const;
        Tuple getPi() const;
        jdouble getReal() const;
        jint hashCode() const;
        Tuple hypot(const Tuple &) const;
        Tuple linearCombination(const JArray< jdouble > &, const JArray< Tuple > &) const;
        Tuple linearCombination(const JArray< Tuple > &, const JArray< Tuple > &) const;
        Tuple linearCombination(const Tuple &, const Tuple &, const Tuple &, const Tuple &) const;
        Tuple linearCombination(jdouble, const Tuple &, jdouble, const Tuple &) const;
        Tuple linearCombination(const Tuple &, const Tuple &, const Tuple &, const Tuple &, const Tuple &, const Tuple &) const;
        Tuple linearCombination(jdouble, const Tuple &, jdouble, const Tuple &, jdouble, const Tuple &) const;
        Tuple linearCombination(const Tuple &, const Tuple &, const Tuple &, const Tuple &, const Tuple &, const Tuple &, const Tuple &, const Tuple &) const;
        Tuple linearCombination(jdouble, const Tuple &, jdouble, const Tuple &, jdouble, const Tuple &, jdouble, const Tuple &) const;
        Tuple log() const;
        Tuple log10() const;
        Tuple log1p() const;
        Tuple multiply(const Tuple &) const;
        Tuple multiply(jdouble) const;
        Tuple multiply(jint) const;
        Tuple negate() const;
        Tuple newInstance(jdouble) const;
        Tuple pow(const Tuple &) const;
        Tuple pow(jdouble) const;
        Tuple pow(jint) const;
        Tuple reciprocal() const;
        Tuple remainder(const Tuple &) const;
        Tuple remainder(jdouble) const;
        Tuple rint() const;
        Tuple rootN(jint) const;
        Tuple scalb(jint) const;
        Tuple sign() const;
        Tuple sin() const;
        ::org::hipparchus::util::FieldSinCos sinCos() const;
        Tuple sinh() const;
        ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
        Tuple sqrt() const;
        Tuple subtract(const Tuple &) const;
        Tuple subtract(jdouble) const;
        Tuple tan() const;
        Tuple tanh() const;
        Tuple toDegrees() const;
        Tuple toRadians() const;
        Tuple ulp() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(Tuple);
      extern PyTypeObject *PY_TYPE(Tuple);

      class t_Tuple {
      public:
        PyObject_HEAD
        Tuple object;
        static PyObject *wrap_Object(const Tuple&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
