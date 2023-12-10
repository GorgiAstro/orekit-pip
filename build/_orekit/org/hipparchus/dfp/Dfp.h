#ifndef org_hipparchus_dfp_Dfp_H
#define org_hipparchus_dfp_Dfp_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      class DfpField;
      class Dfp;
      class DfpField$RoundingMode;
    }
    namespace util {
      class FieldSinCos;
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
          mid_abs_20a565cdc6596121,
          mid_acos_20a565cdc6596121,
          mid_acosh_20a565cdc6596121,
          mid_add_f0d5166eeb6b0680,
          mid_add_5caa6ddeafdf80db,
          mid_asin_20a565cdc6596121,
          mid_asinh_20a565cdc6596121,
          mid_atan_20a565cdc6596121,
          mid_atan2_f0d5166eeb6b0680,
          mid_atanh_20a565cdc6596121,
          mid_cbrt_20a565cdc6596121,
          mid_ceil_20a565cdc6596121,
          mid_classify_f2f64475e4580546,
          mid_copySign_f0d5166eeb6b0680,
          mid_copySign_5caa6ddeafdf80db,
          mid_copysign_5f4c8a207222b7cd,
          mid_cos_20a565cdc6596121,
          mid_cosh_20a565cdc6596121,
          mid_divide_f0d5166eeb6b0680,
          mid_divide_5caa6ddeafdf80db,
          mid_divide_f72d07eb955b446b,
          mid_dotrap_dd3b370054806993,
          mid_equals_229c87223f486349,
          mid_exp_20a565cdc6596121,
          mid_expm1_20a565cdc6596121,
          mid_floor_20a565cdc6596121,
          mid_getExponent_f2f64475e4580546,
          mid_getField_7adca8a434a69c24,
          mid_getOne_20a565cdc6596121,
          mid_getPi_20a565cdc6596121,
          mid_getRadixDigits_f2f64475e4580546,
          mid_getReal_456d9a2f64d6b28d,
          mid_getTwo_20a565cdc6596121,
          mid_getZero_20a565cdc6596121,
          mid_greaterThan_7887f0abbdd3e7f5,
          mid_hashCode_f2f64475e4580546,
          mid_hypot_f0d5166eeb6b0680,
          mid_intLog10_f2f64475e4580546,
          mid_intValue_f2f64475e4580546,
          mid_isInfinite_e470b6d9e0d979db,
          mid_isNaN_e470b6d9e0d979db,
          mid_isZero_e470b6d9e0d979db,
          mid_lessThan_7887f0abbdd3e7f5,
          mid_linearCombination_c5c3dc8b1c53a334,
          mid_linearCombination_f4e46154c6eba2a3,
          mid_linearCombination_6b2daef0a7ee2e73,
          mid_linearCombination_4e4dc81ad0f79cee,
          mid_linearCombination_fb8499445481cc88,
          mid_linearCombination_8963aa043da685eb,
          mid_linearCombination_166070229d3a8b53,
          mid_linearCombination_e0bf973bf7ff116c,
          mid_log_20a565cdc6596121,
          mid_log10_20a565cdc6596121,
          mid_log10K_f2f64475e4580546,
          mid_log1p_20a565cdc6596121,
          mid_multiply_f0d5166eeb6b0680,
          mid_multiply_5caa6ddeafdf80db,
          mid_multiply_f72d07eb955b446b,
          mid_negate_20a565cdc6596121,
          mid_negativeOrNull_e470b6d9e0d979db,
          mid_newInstance_20a565cdc6596121,
          mid_newInstance_3f89d25657eee84e,
          mid_newInstance_f0d5166eeb6b0680,
          mid_newInstance_970ab21c4d121514,
          mid_newInstance_5caa6ddeafdf80db,
          mid_newInstance_f72d07eb955b446b,
          mid_newInstance_aaf2a1c8efdefd0f,
          mid_newInstance_ecc4c322de4c3f09,
          mid_newInstance_7c8aa6cad7f772b2,
          mid_nextAfter_f0d5166eeb6b0680,
          mid_positiveOrNull_e470b6d9e0d979db,
          mid_pow_f0d5166eeb6b0680,
          mid_pow_5caa6ddeafdf80db,
          mid_pow_f72d07eb955b446b,
          mid_power10_f72d07eb955b446b,
          mid_power10K_f72d07eb955b446b,
          mid_reciprocal_20a565cdc6596121,
          mid_remainder_f0d5166eeb6b0680,
          mid_remainder_5caa6ddeafdf80db,
          mid_rint_20a565cdc6596121,
          mid_rootN_f72d07eb955b446b,
          mid_scalb_f72d07eb955b446b,
          mid_sign_20a565cdc6596121,
          mid_sin_20a565cdc6596121,
          mid_sinCos_35f2499c71416a1a,
          mid_sinh_20a565cdc6596121,
          mid_sinhCosh_c388a3eefde9d597,
          mid_sqrt_20a565cdc6596121,
          mid_strictlyNegative_e470b6d9e0d979db,
          mid_strictlyPositive_e470b6d9e0d979db,
          mid_subtract_f0d5166eeb6b0680,
          mid_subtract_5caa6ddeafdf80db,
          mid_tan_20a565cdc6596121,
          mid_tanh_20a565cdc6596121,
          mid_toDegrees_20a565cdc6596121,
          mid_toDouble_456d9a2f64d6b28d,
          mid_toRadians_20a565cdc6596121,
          mid_toSplitDouble_7cdc325af0834901,
          mid_toString_0090f7797e403f43,
          mid_ulp_20a565cdc6596121,
          mid_unequal_7887f0abbdd3e7f5,
          mid_complement_38565d58479aa24a,
          mid_shiftRight_7ae3461a92a43152,
          mid_align_38565d58479aa24a,
          mid_trunc_4e2b92a542bdeaf1,
          mid_dfp2sci_0090f7797e403f43,
          mid_dfp2string_0090f7797e403f43,
          mid_trap_51b38bcd21024ab9,
          mid_shiftLeft_7ae3461a92a43152,
          mid_round_38565d58479aa24a,
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
