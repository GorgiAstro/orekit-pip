#ifndef org_hipparchus_dfp_Dfp_H
#define org_hipparchus_dfp_Dfp_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      class Dfp;
      class DfpField$RoundingMode;
      class DfpField;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
          mid_abs_2b93193437c3f00d,
          mid_acos_2b93193437c3f00d,
          mid_acosh_2b93193437c3f00d,
          mid_add_a714269abf022321,
          mid_add_757f32f1791cffc4,
          mid_asin_2b93193437c3f00d,
          mid_asinh_2b93193437c3f00d,
          mid_atan_2b93193437c3f00d,
          mid_atan2_a714269abf022321,
          mid_atanh_2b93193437c3f00d,
          mid_cbrt_2b93193437c3f00d,
          mid_ceil_2b93193437c3f00d,
          mid_classify_55546ef6a647f39b,
          mid_copySign_a714269abf022321,
          mid_copySign_757f32f1791cffc4,
          mid_copysign_cd2054800f3587f2,
          mid_cos_2b93193437c3f00d,
          mid_cosh_2b93193437c3f00d,
          mid_divide_a714269abf022321,
          mid_divide_757f32f1791cffc4,
          mid_divide_026cdd2d1c22b25b,
          mid_dotrap_05168b982b23240b,
          mid_equals_460c5e2d9d51c6cc,
          mid_exp_2b93193437c3f00d,
          mid_expm1_2b93193437c3f00d,
          mid_floor_2b93193437c3f00d,
          mid_getExponent_55546ef6a647f39b,
          mid_getField_ee1a1cb642795f5d,
          mid_getOne_2b93193437c3f00d,
          mid_getPi_2b93193437c3f00d,
          mid_getRadixDigits_55546ef6a647f39b,
          mid_getReal_b74f83833fdad017,
          mid_getTwo_2b93193437c3f00d,
          mid_getZero_2b93193437c3f00d,
          mid_greaterThan_7df7f60b9abe67da,
          mid_hashCode_55546ef6a647f39b,
          mid_hypot_a714269abf022321,
          mid_intLog10_55546ef6a647f39b,
          mid_intValue_55546ef6a647f39b,
          mid_isInfinite_9ab94ac1dc23b105,
          mid_isNaN_9ab94ac1dc23b105,
          mid_isZero_9ab94ac1dc23b105,
          mid_lessThan_7df7f60b9abe67da,
          mid_linearCombination_977d9dd11ccd3173,
          mid_linearCombination_bff307fe0b833d14,
          mid_linearCombination_a2c478fc8981d5b7,
          mid_linearCombination_e222379307dd4b32,
          mid_linearCombination_cfdac956e821ce46,
          mid_linearCombination_ef1588c94af8b0ba,
          mid_linearCombination_d5ca073f5e9a873b,
          mid_linearCombination_c9179c24e516b4e9,
          mid_log_2b93193437c3f00d,
          mid_log10_2b93193437c3f00d,
          mid_log10K_55546ef6a647f39b,
          mid_log1p_2b93193437c3f00d,
          mid_multiply_a714269abf022321,
          mid_multiply_757f32f1791cffc4,
          mid_multiply_026cdd2d1c22b25b,
          mid_negate_2b93193437c3f00d,
          mid_negativeOrNull_9ab94ac1dc23b105,
          mid_newInstance_2b93193437c3f00d,
          mid_newInstance_844df78cba5c1168,
          mid_newInstance_a714269abf022321,
          mid_newInstance_3dbae42c27edb89e,
          mid_newInstance_757f32f1791cffc4,
          mid_newInstance_026cdd2d1c22b25b,
          mid_newInstance_a276979b31da24ca,
          mid_newInstance_8efd31d061954170,
          mid_newInstance_65a23ba49b68f64d,
          mid_nextAfter_a714269abf022321,
          mid_positiveOrNull_9ab94ac1dc23b105,
          mid_pow_a714269abf022321,
          mid_pow_757f32f1791cffc4,
          mid_pow_026cdd2d1c22b25b,
          mid_power10_026cdd2d1c22b25b,
          mid_power10K_026cdd2d1c22b25b,
          mid_reciprocal_2b93193437c3f00d,
          mid_remainder_a714269abf022321,
          mid_remainder_757f32f1791cffc4,
          mid_rint_2b93193437c3f00d,
          mid_rootN_026cdd2d1c22b25b,
          mid_scalb_026cdd2d1c22b25b,
          mid_sign_2b93193437c3f00d,
          mid_sin_2b93193437c3f00d,
          mid_sinCos_e434dd780193da2f,
          mid_sinh_2b93193437c3f00d,
          mid_sinhCosh_4a1e2142f3481995,
          mid_sqrt_2b93193437c3f00d,
          mid_strictlyNegative_9ab94ac1dc23b105,
          mid_strictlyPositive_9ab94ac1dc23b105,
          mid_subtract_a714269abf022321,
          mid_subtract_757f32f1791cffc4,
          mid_tan_2b93193437c3f00d,
          mid_tanh_2b93193437c3f00d,
          mid_toDegrees_2b93193437c3f00d,
          mid_toDouble_b74f83833fdad017,
          mid_toRadians_2b93193437c3f00d,
          mid_toSplitDouble_25e1757a36c4dde2,
          mid_toString_1c1fa1e935d6cdcf,
          mid_ulp_2b93193437c3f00d,
          mid_unequal_7df7f60b9abe67da,
          mid_shiftRight_a1fa5dae97ea5ed2,
          mid_align_0e7cf35192c3effe,
          mid_trunc_35d0839807afb655,
          mid_dfp2sci_1c1fa1e935d6cdcf,
          mid_dfp2string_1c1fa1e935d6cdcf,
          mid_trap_f48337930e947ce9,
          mid_complement_0e7cf35192c3effe,
          mid_shiftLeft_a1fa5dae97ea5ed2,
          mid_round_0e7cf35192c3effe,
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
