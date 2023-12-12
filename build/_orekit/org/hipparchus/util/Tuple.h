#ifndef org_hipparchus_util_Tuple_H
#define org_hipparchus_util_Tuple_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Tuple;
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
    class CalculusFieldElement;
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
          mid_init$_cc18240f4a737f14,
          mid_abs_b1ed67a59f040e80,
          mid_acos_b1ed67a59f040e80,
          mid_acosh_b1ed67a59f040e80,
          mid_add_c28cc6f3cbc6f10c,
          mid_add_95c35349ca4162c7,
          mid_asin_b1ed67a59f040e80,
          mid_asinh_b1ed67a59f040e80,
          mid_atan_b1ed67a59f040e80,
          mid_atan2_c28cc6f3cbc6f10c,
          mid_atanh_b1ed67a59f040e80,
          mid_cbrt_b1ed67a59f040e80,
          mid_ceil_b1ed67a59f040e80,
          mid_copySign_c28cc6f3cbc6f10c,
          mid_copySign_95c35349ca4162c7,
          mid_cos_b1ed67a59f040e80,
          mid_cosh_b1ed67a59f040e80,
          mid_divide_c28cc6f3cbc6f10c,
          mid_divide_95c35349ca4162c7,
          mid_equals_221e8e85cb385209,
          mid_exp_b1ed67a59f040e80,
          mid_expm1_b1ed67a59f040e80,
          mid_floor_b1ed67a59f040e80,
          mid_getComponent_69cfb132c661aca4,
          mid_getComponents_a53a7513ecedada2,
          mid_getDimension_412668abc8d889e9,
          mid_getField_20f98801541dcec1,
          mid_getPi_b1ed67a59f040e80,
          mid_getReal_557b8123390d8d0c,
          mid_hashCode_412668abc8d889e9,
          mid_hypot_c28cc6f3cbc6f10c,
          mid_linearCombination_68f36b91ff57a38d,
          mid_linearCombination_70964a93784f0e20,
          mid_linearCombination_470fff64832af03a,
          mid_linearCombination_9411c26707c35a01,
          mid_linearCombination_d918a0fc8a303e79,
          mid_linearCombination_448b62d341550a00,
          mid_linearCombination_bfa88ae45a9ed5e1,
          mid_linearCombination_daefa89eb10e6020,
          mid_log_b1ed67a59f040e80,
          mid_log10_b1ed67a59f040e80,
          mid_log1p_b1ed67a59f040e80,
          mid_multiply_c28cc6f3cbc6f10c,
          mid_multiply_95c35349ca4162c7,
          mid_multiply_797fb4ddfb99d895,
          mid_negate_b1ed67a59f040e80,
          mid_newInstance_95c35349ca4162c7,
          mid_pow_c28cc6f3cbc6f10c,
          mid_pow_95c35349ca4162c7,
          mid_pow_797fb4ddfb99d895,
          mid_reciprocal_b1ed67a59f040e80,
          mid_remainder_c28cc6f3cbc6f10c,
          mid_remainder_95c35349ca4162c7,
          mid_rint_b1ed67a59f040e80,
          mid_rootN_797fb4ddfb99d895,
          mid_scalb_797fb4ddfb99d895,
          mid_sign_b1ed67a59f040e80,
          mid_sin_b1ed67a59f040e80,
          mid_sinCos_5efdd92d175db117,
          mid_sinh_b1ed67a59f040e80,
          mid_sinhCosh_e5a948cfec461975,
          mid_sqrt_b1ed67a59f040e80,
          mid_subtract_c28cc6f3cbc6f10c,
          mid_subtract_95c35349ca4162c7,
          mid_tan_b1ed67a59f040e80,
          mid_tanh_b1ed67a59f040e80,
          mid_toDegrees_b1ed67a59f040e80,
          mid_toRadians_b1ed67a59f040e80,
          mid_ulp_b1ed67a59f040e80,
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
