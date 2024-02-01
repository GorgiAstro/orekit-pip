#ifndef org_hipparchus_dfp_Dfp_H
#define org_hipparchus_dfp_Dfp_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace dfp {
      class DfpField;
      class Dfp;
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
          mid_abs_4b2d5e048d6e2660,
          mid_acos_4b2d5e048d6e2660,
          mid_acosh_4b2d5e048d6e2660,
          mid_add_f4723517f29214b4,
          mid_add_e99ab98f8c6bb318,
          mid_asin_4b2d5e048d6e2660,
          mid_asinh_4b2d5e048d6e2660,
          mid_atan_4b2d5e048d6e2660,
          mid_atan2_f4723517f29214b4,
          mid_atanh_4b2d5e048d6e2660,
          mid_cbrt_4b2d5e048d6e2660,
          mid_ceil_4b2d5e048d6e2660,
          mid_classify_d6ab429752e7c267,
          mid_copySign_f4723517f29214b4,
          mid_copySign_e99ab98f8c6bb318,
          mid_copysign_6c69a9f186dcd94b,
          mid_cos_4b2d5e048d6e2660,
          mid_cosh_4b2d5e048d6e2660,
          mid_divide_f4723517f29214b4,
          mid_divide_e99ab98f8c6bb318,
          mid_divide_c17cec9f6bbb62d4,
          mid_dotrap_9620c0046f4eef7c,
          mid_equals_72faff9b05f5ed5e,
          mid_exp_4b2d5e048d6e2660,
          mid_expm1_4b2d5e048d6e2660,
          mid_floor_4b2d5e048d6e2660,
          mid_getExponent_d6ab429752e7c267,
          mid_getField_91eaecf9b002e996,
          mid_getOne_4b2d5e048d6e2660,
          mid_getPi_4b2d5e048d6e2660,
          mid_getRadixDigits_d6ab429752e7c267,
          mid_getReal_9981f74b2d109da6,
          mid_getTwo_4b2d5e048d6e2660,
          mid_getZero_4b2d5e048d6e2660,
          mid_greaterThan_d403dcab6dc91191,
          mid_hashCode_d6ab429752e7c267,
          mid_hypot_f4723517f29214b4,
          mid_intLog10_d6ab429752e7c267,
          mid_intValue_d6ab429752e7c267,
          mid_isInfinite_eee3de00fe971136,
          mid_isNaN_eee3de00fe971136,
          mid_isZero_eee3de00fe971136,
          mid_lessThan_d403dcab6dc91191,
          mid_linearCombination_ffad361cc4180cb8,
          mid_linearCombination_bfd89b9a29814844,
          mid_linearCombination_9b546149c4f8f90b,
          mid_linearCombination_4ce49b71e499ce54,
          mid_linearCombination_709b840a4d3a30b0,
          mid_linearCombination_f1d991282feb9cd0,
          mid_linearCombination_9aefc3df123c4248,
          mid_linearCombination_dcdcb1fd614ea595,
          mid_log_4b2d5e048d6e2660,
          mid_log10_4b2d5e048d6e2660,
          mid_log10K_d6ab429752e7c267,
          mid_log1p_4b2d5e048d6e2660,
          mid_multiply_f4723517f29214b4,
          mid_multiply_e99ab98f8c6bb318,
          mid_multiply_c17cec9f6bbb62d4,
          mid_negate_4b2d5e048d6e2660,
          mid_negativeOrNull_eee3de00fe971136,
          mid_newInstance_4b2d5e048d6e2660,
          mid_newInstance_d41bacfbb0036b2f,
          mid_newInstance_f4723517f29214b4,
          mid_newInstance_d026e8379de654e0,
          mid_newInstance_e99ab98f8c6bb318,
          mid_newInstance_c17cec9f6bbb62d4,
          mid_newInstance_9e2bf41ef3516323,
          mid_newInstance_92cf0acc3fd2ce13,
          mid_newInstance_1a6c1bff63409b1a,
          mid_nextAfter_f4723517f29214b4,
          mid_positiveOrNull_eee3de00fe971136,
          mid_pow_f4723517f29214b4,
          mid_pow_e99ab98f8c6bb318,
          mid_pow_c17cec9f6bbb62d4,
          mid_power10_c17cec9f6bbb62d4,
          mid_power10K_c17cec9f6bbb62d4,
          mid_reciprocal_4b2d5e048d6e2660,
          mid_remainder_f4723517f29214b4,
          mid_remainder_e99ab98f8c6bb318,
          mid_rint_4b2d5e048d6e2660,
          mid_rootN_c17cec9f6bbb62d4,
          mid_scalb_c17cec9f6bbb62d4,
          mid_sign_4b2d5e048d6e2660,
          mid_sin_4b2d5e048d6e2660,
          mid_sinCos_31b7b02b4932da60,
          mid_sinh_4b2d5e048d6e2660,
          mid_sinhCosh_b24d5962ea451135,
          mid_sqrt_4b2d5e048d6e2660,
          mid_strictlyNegative_eee3de00fe971136,
          mid_strictlyPositive_eee3de00fe971136,
          mid_subtract_f4723517f29214b4,
          mid_subtract_e99ab98f8c6bb318,
          mid_tan_4b2d5e048d6e2660,
          mid_tanh_4b2d5e048d6e2660,
          mid_toDegrees_4b2d5e048d6e2660,
          mid_toDouble_9981f74b2d109da6,
          mid_toRadians_4b2d5e048d6e2660,
          mid_toSplitDouble_be783177b060994b,
          mid_toString_d2c8eb4129821f0e,
          mid_ulp_4b2d5e048d6e2660,
          mid_unequal_d403dcab6dc91191,
          mid_complement_d938fc64e8c6df2d,
          mid_shiftRight_ff7cb6c242604316,
          mid_align_d938fc64e8c6df2d,
          mid_trunc_d98215d47b874569,
          mid_dfp2sci_d2c8eb4129821f0e,
          mid_dfp2string_d2c8eb4129821f0e,
          mid_trap_765b9e897eb65782,
          mid_shiftLeft_ff7cb6c242604316,
          mid_round_d938fc64e8c6df2d,
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
