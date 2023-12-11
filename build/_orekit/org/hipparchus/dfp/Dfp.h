#ifndef org_hipparchus_dfp_Dfp_H
#define org_hipparchus_dfp_Dfp_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace dfp {
      class Dfp;
      class DfpField;
      class DfpField$RoundingMode;
    }
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace dfp {

      class Dfp : public ::java::lang::Object {
       public:
        enum {
          mid_abs_dce9a968b1de6538,
          mid_acos_dce9a968b1de6538,
          mid_acosh_dce9a968b1de6538,
          mid_add_f081bcbf4bd8f1ad,
          mid_add_48c0a79cfaaf4ea7,
          mid_asin_dce9a968b1de6538,
          mid_asinh_dce9a968b1de6538,
          mid_atan_dce9a968b1de6538,
          mid_atan2_f081bcbf4bd8f1ad,
          mid_atanh_dce9a968b1de6538,
          mid_cbrt_dce9a968b1de6538,
          mid_ceil_dce9a968b1de6538,
          mid_classify_412668abc8d889e9,
          mid_copySign_f081bcbf4bd8f1ad,
          mid_copySign_48c0a79cfaaf4ea7,
          mid_copysign_badefef06f0dff33,
          mid_cos_dce9a968b1de6538,
          mid_cosh_dce9a968b1de6538,
          mid_divide_f081bcbf4bd8f1ad,
          mid_divide_48c0a79cfaaf4ea7,
          mid_divide_8418d0fac935c091,
          mid_dotrap_ae590c3e8cbc2723,
          mid_equals_221e8e85cb385209,
          mid_exp_dce9a968b1de6538,
          mid_expm1_dce9a968b1de6538,
          mid_floor_dce9a968b1de6538,
          mid_getExponent_412668abc8d889e9,
          mid_getField_5a77f9c80b33fd5a,
          mid_getOne_dce9a968b1de6538,
          mid_getPi_dce9a968b1de6538,
          mid_getRadixDigits_412668abc8d889e9,
          mid_getReal_557b8123390d8d0c,
          mid_getTwo_dce9a968b1de6538,
          mid_getZero_dce9a968b1de6538,
          mid_greaterThan_f711ea474040e8fa,
          mid_hashCode_412668abc8d889e9,
          mid_hypot_f081bcbf4bd8f1ad,
          mid_intLog10_412668abc8d889e9,
          mid_intValue_412668abc8d889e9,
          mid_isInfinite_89b302893bdbe1f1,
          mid_isNaN_89b302893bdbe1f1,
          mid_isZero_89b302893bdbe1f1,
          mid_lessThan_f711ea474040e8fa,
          mid_linearCombination_19bbc204d20f8540,
          mid_linearCombination_02f814f49dfef721,
          mid_linearCombination_ec6553a6b54db0e5,
          mid_linearCombination_b0562de35779a422,
          mid_linearCombination_0155f8f7121286b5,
          mid_linearCombination_6de12e2f74c8f855,
          mid_linearCombination_06edfb4921c1f375,
          mid_linearCombination_056ad35ad9be28a8,
          mid_log_dce9a968b1de6538,
          mid_log10_dce9a968b1de6538,
          mid_log10K_412668abc8d889e9,
          mid_log1p_dce9a968b1de6538,
          mid_multiply_f081bcbf4bd8f1ad,
          mid_multiply_48c0a79cfaaf4ea7,
          mid_multiply_8418d0fac935c091,
          mid_negate_dce9a968b1de6538,
          mid_negativeOrNull_89b302893bdbe1f1,
          mid_newInstance_dce9a968b1de6538,
          mid_newInstance_4cf97baa750c9172,
          mid_newInstance_f081bcbf4bd8f1ad,
          mid_newInstance_e45f329aeeedfd27,
          mid_newInstance_48c0a79cfaaf4ea7,
          mid_newInstance_8418d0fac935c091,
          mid_newInstance_521fd622f2a09126,
          mid_newInstance_eb48fee777e8e985,
          mid_newInstance_7b144e66c7452202,
          mid_nextAfter_f081bcbf4bd8f1ad,
          mid_positiveOrNull_89b302893bdbe1f1,
          mid_pow_f081bcbf4bd8f1ad,
          mid_pow_48c0a79cfaaf4ea7,
          mid_pow_8418d0fac935c091,
          mid_power10_8418d0fac935c091,
          mid_power10K_8418d0fac935c091,
          mid_reciprocal_dce9a968b1de6538,
          mid_remainder_f081bcbf4bd8f1ad,
          mid_remainder_48c0a79cfaaf4ea7,
          mid_rint_dce9a968b1de6538,
          mid_rootN_8418d0fac935c091,
          mid_scalb_8418d0fac935c091,
          mid_sign_dce9a968b1de6538,
          mid_sin_dce9a968b1de6538,
          mid_sinCos_5efdd92d175db117,
          mid_sinh_dce9a968b1de6538,
          mid_sinhCosh_e5a948cfec461975,
          mid_sqrt_dce9a968b1de6538,
          mid_strictlyNegative_89b302893bdbe1f1,
          mid_strictlyPositive_89b302893bdbe1f1,
          mid_subtract_f081bcbf4bd8f1ad,
          mid_subtract_48c0a79cfaaf4ea7,
          mid_tan_dce9a968b1de6538,
          mid_tanh_dce9a968b1de6538,
          mid_toDegrees_dce9a968b1de6538,
          mid_toDouble_557b8123390d8d0c,
          mid_toRadians_dce9a968b1de6538,
          mid_toSplitDouble_a53a7513ecedada2,
          mid_toString_3cffd47377eca18a,
          mid_ulp_dce9a968b1de6538,
          mid_unequal_f711ea474040e8fa,
          mid_shiftRight_0640e6acf969ed28,
          mid_align_0092017e99012694,
          mid_trunc_da4b052ce8cfcaf7,
          mid_dfp2sci_3cffd47377eca18a,
          mid_dfp2string_3cffd47377eca18a,
          mid_trap_e6d2b492ecfcb70d,
          mid_complement_0092017e99012694,
          mid_shiftLeft_0640e6acf969ed28,
          mid_round_0092017e99012694,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Dfp(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Dfp(const Dfp& obj) : ::java::lang::Object(obj) {}

        static jint ERR_SCALE;
        static jbyte FINITE;
        static jbyte INFINITE$;
        static jint MAX_EXP;
        static jint MIN_EXP;
        static jbyte QNAN;
        static jint RADIX;
        static jbyte SNAN$;

        Dfp abs() const;
        Dfp acos() const;
        Dfp acosh() const;
        Dfp add(const Dfp &) const;
        Dfp add(jdouble) const;
        Dfp asin() const;
        Dfp asinh() const;
        Dfp atan() const;
        Dfp atan2(const Dfp &) const;
        Dfp atanh() const;
        Dfp cbrt() const;
        Dfp ceil() const;
        jint classify() const;
        Dfp copySign(const Dfp &) const;
        Dfp copySign(jdouble) const;
        static Dfp copysign(const Dfp &, const Dfp &);
        Dfp cos() const;
        Dfp cosh() const;
        Dfp divide(const Dfp &) const;
        Dfp divide(jdouble) const;
        Dfp divide(jint) const;
        Dfp dotrap(jint, const ::java::lang::String &, const Dfp &, const Dfp &) const;
        jboolean equals(const ::java::lang::Object &) const;
        Dfp exp() const;
        Dfp expm1() const;
        Dfp floor() const;
        jint getExponent() const;
        ::org::hipparchus::dfp::DfpField getField() const;
        Dfp getOne() const;
        Dfp getPi() const;
        jint getRadixDigits() const;
        jdouble getReal() const;
        Dfp getTwo() const;
        Dfp getZero() const;
        jboolean greaterThan(const Dfp &) const;
        jint hashCode() const;
        Dfp hypot(const Dfp &) const;
        jint intLog10() const;
        jint intValue() const;
        jboolean isInfinite() const;
        jboolean isNaN() const;
        jboolean isZero() const;
        jboolean lessThan(const Dfp &) const;
        Dfp linearCombination(const JArray< jdouble > &, const JArray< Dfp > &) const;
        Dfp linearCombination(const JArray< Dfp > &, const JArray< Dfp > &) const;
        Dfp linearCombination(const Dfp &, const Dfp &, const Dfp &, const Dfp &) const;
        Dfp linearCombination(jdouble, const Dfp &, jdouble, const Dfp &) const;
        Dfp linearCombination(const Dfp &, const Dfp &, const Dfp &, const Dfp &, const Dfp &, const Dfp &) const;
        Dfp linearCombination(jdouble, const Dfp &, jdouble, const Dfp &, jdouble, const Dfp &) const;
        Dfp linearCombination(const Dfp &, const Dfp &, const Dfp &, const Dfp &, const Dfp &, const Dfp &, const Dfp &, const Dfp &) const;
        Dfp linearCombination(jdouble, const Dfp &, jdouble, const Dfp &, jdouble, const Dfp &, jdouble, const Dfp &) const;
        Dfp log() const;
        Dfp log10() const;
        jint log10K() const;
        Dfp log1p() const;
        Dfp multiply(const Dfp &) const;
        Dfp multiply(jdouble) const;
        Dfp multiply(jint) const;
        Dfp negate() const;
        jboolean negativeOrNull() const;
        Dfp newInstance() const;
        Dfp newInstance(const ::java::lang::String &) const;
        Dfp newInstance(const Dfp &) const;
        Dfp newInstance(jbyte) const;
        Dfp newInstance(jdouble) const;
        Dfp newInstance(jint) const;
        Dfp newInstance(jlong) const;
        Dfp newInstance(const ::org::hipparchus::dfp::DfpField &, const ::org::hipparchus::dfp::DfpField$RoundingMode &) const;
        Dfp newInstance(jbyte, jbyte) const;
        Dfp nextAfter(const Dfp &) const;
        jboolean positiveOrNull() const;
        Dfp pow(const Dfp &) const;
        Dfp pow(jdouble) const;
        Dfp pow(jint) const;
        Dfp power10(jint) const;
        Dfp power10K(jint) const;
        Dfp reciprocal() const;
        Dfp remainder(const Dfp &) const;
        Dfp remainder(jdouble) const;
        Dfp rint() const;
        Dfp rootN(jint) const;
        Dfp scalb(jint) const;
        Dfp sign() const;
        Dfp sin() const;
        ::org::hipparchus::util::FieldSinCos sinCos() const;
        Dfp sinh() const;
        ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
        Dfp sqrt() const;
        jboolean strictlyNegative() const;
        jboolean strictlyPositive() const;
        Dfp subtract(const Dfp &) const;
        Dfp subtract(jdouble) const;
        Dfp tan() const;
        Dfp tanh() const;
        Dfp toDegrees() const;
        jdouble toDouble() const;
        Dfp toRadians() const;
        JArray< jdouble > toSplitDouble() const;
        ::java::lang::String toString() const;
        Dfp ulp() const;
        jboolean unequal(const Dfp &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace dfp {
      extern PyType_Def PY_TYPE_DEF(Dfp);
      extern PyTypeObject *PY_TYPE(Dfp);

      class t_Dfp {
      public:
        PyObject_HEAD
        Dfp object;
        static PyObject *wrap_Object(const Dfp&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
