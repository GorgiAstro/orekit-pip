#ifndef org_hipparchus_dfp_Dfp_H
#define org_hipparchus_dfp_Dfp_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace dfp {
      class Dfp;
      class DfpField$RoundingMode;
      class DfpField;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
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
          mid_abs_7fd146fa3f090bf3,
          mid_acos_7fd146fa3f090bf3,
          mid_acosh_7fd146fa3f090bf3,
          mid_add_63aa6f5f01162583,
          mid_add_81c4d69757062546,
          mid_asin_7fd146fa3f090bf3,
          mid_asinh_7fd146fa3f090bf3,
          mid_atan_7fd146fa3f090bf3,
          mid_atan2_63aa6f5f01162583,
          mid_atanh_7fd146fa3f090bf3,
          mid_cbrt_7fd146fa3f090bf3,
          mid_ceil_7fd146fa3f090bf3,
          mid_classify_570ce0828f81a2c1,
          mid_copySign_63aa6f5f01162583,
          mid_copySign_81c4d69757062546,
          mid_copysign_e130e149d282e384,
          mid_cos_7fd146fa3f090bf3,
          mid_cosh_7fd146fa3f090bf3,
          mid_divide_63aa6f5f01162583,
          mid_divide_81c4d69757062546,
          mid_divide_0fe5880f95528b86,
          mid_dotrap_969b6f66aa492678,
          mid_equals_65c7d273e80d497a,
          mid_exp_7fd146fa3f090bf3,
          mid_expm1_7fd146fa3f090bf3,
          mid_floor_7fd146fa3f090bf3,
          mid_getExponent_570ce0828f81a2c1,
          mid_getField_94e96f6ecee99c5a,
          mid_getOne_7fd146fa3f090bf3,
          mid_getPi_7fd146fa3f090bf3,
          mid_getRadixDigits_570ce0828f81a2c1,
          mid_getReal_dff5885c2c873297,
          mid_getTwo_7fd146fa3f090bf3,
          mid_getZero_7fd146fa3f090bf3,
          mid_greaterThan_96527d9496d16a4e,
          mid_hashCode_570ce0828f81a2c1,
          mid_hypot_63aa6f5f01162583,
          mid_intLog10_570ce0828f81a2c1,
          mid_intValue_570ce0828f81a2c1,
          mid_isInfinite_b108b35ef48e27bd,
          mid_isNaN_b108b35ef48e27bd,
          mid_isZero_b108b35ef48e27bd,
          mid_lessThan_96527d9496d16a4e,
          mid_linearCombination_088bf6a33898365e,
          mid_linearCombination_66bef23964cfd1f0,
          mid_linearCombination_8b4a3cbc8e76d6ac,
          mid_linearCombination_ed7bc1532c661c92,
          mid_linearCombination_2a8439ba1ba1c6e6,
          mid_linearCombination_6008eb98192036df,
          mid_linearCombination_602e82307bb82ebe,
          mid_linearCombination_80f49b40e22a5968,
          mid_log_7fd146fa3f090bf3,
          mid_log10_7fd146fa3f090bf3,
          mid_log10K_570ce0828f81a2c1,
          mid_log1p_7fd146fa3f090bf3,
          mid_multiply_63aa6f5f01162583,
          mid_multiply_81c4d69757062546,
          mid_multiply_0fe5880f95528b86,
          mid_negate_7fd146fa3f090bf3,
          mid_negativeOrNull_b108b35ef48e27bd,
          mid_newInstance_7fd146fa3f090bf3,
          mid_newInstance_71d71a82cc65a754,
          mid_newInstance_63aa6f5f01162583,
          mid_newInstance_57809bf392b66806,
          mid_newInstance_81c4d69757062546,
          mid_newInstance_0fe5880f95528b86,
          mid_newInstance_0b19f2e563b71fc5,
          mid_newInstance_2239a7d4dd08eb2e,
          mid_newInstance_84679f0649faeef6,
          mid_nextAfter_63aa6f5f01162583,
          mid_positiveOrNull_b108b35ef48e27bd,
          mid_pow_63aa6f5f01162583,
          mid_pow_81c4d69757062546,
          mid_pow_0fe5880f95528b86,
          mid_power10_0fe5880f95528b86,
          mid_power10K_0fe5880f95528b86,
          mid_reciprocal_7fd146fa3f090bf3,
          mid_remainder_63aa6f5f01162583,
          mid_remainder_81c4d69757062546,
          mid_rint_7fd146fa3f090bf3,
          mid_rootN_0fe5880f95528b86,
          mid_scalb_0fe5880f95528b86,
          mid_sign_7fd146fa3f090bf3,
          mid_sin_7fd146fa3f090bf3,
          mid_sinCos_a447b7ca640e6b68,
          mid_sinh_7fd146fa3f090bf3,
          mid_sinhCosh_eef733c8a50b276f,
          mid_sqrt_7fd146fa3f090bf3,
          mid_strictlyNegative_b108b35ef48e27bd,
          mid_strictlyPositive_b108b35ef48e27bd,
          mid_subtract_63aa6f5f01162583,
          mid_subtract_81c4d69757062546,
          mid_tan_7fd146fa3f090bf3,
          mid_tanh_7fd146fa3f090bf3,
          mid_toDegrees_7fd146fa3f090bf3,
          mid_toDouble_dff5885c2c873297,
          mid_toRadians_7fd146fa3f090bf3,
          mid_toSplitDouble_60c7040667a7dc5c,
          mid_toString_11b109bd155ca898,
          mid_ulp_7fd146fa3f090bf3,
          mid_unequal_96527d9496d16a4e,
          mid_shiftRight_0fa09c18fee449d5,
          mid_align_2235cd056f5a882b,
          mid_trunc_3e44fca7c65270d0,
          mid_complement_2235cd056f5a882b,
          mid_dfp2sci_11b109bd155ca898,
          mid_dfp2string_11b109bd155ca898,
          mid_trap_4b21fe36ab487b2e,
          mid_shiftLeft_0fa09c18fee449d5,
          mid_round_2235cd056f5a882b,
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
