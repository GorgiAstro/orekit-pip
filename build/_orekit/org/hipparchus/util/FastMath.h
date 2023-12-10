#ifndef org_hipparchus_util_FastMath_H
#define org_hipparchus_util_FastMath_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class SinhCosh;
      class SinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace exception {
      class MathRuntimeException;
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

      class FastMath : public ::java::lang::Object {
       public:
        enum {
          mid_IEEEremainder_86ffecc08a63eff0,
          mid_IEEEremainder_40cfe74535da4622,
          mid_IEEEremainder_6746cc1cd9210d54,
          mid_abs_dcbc7ce2902fa136,
          mid_abs_b0cdbb488a56cf9c,
          mid_abs_2235cd056f5a882b,
          mid_abs_02b241598e254a3f,
          mid_abs_a4b1871f4d29e58b,
          mid_absExact_2235cd056f5a882b,
          mid_absExact_02b241598e254a3f,
          mid_acos_dcbc7ce2902fa136,
          mid_acos_a4b1871f4d29e58b,
          mid_acosh_dcbc7ce2902fa136,
          mid_acosh_a4b1871f4d29e58b,
          mid_addExact_819f91eddf220c5b,
          mid_addExact_fe4804b67425641b,
          mid_asin_dcbc7ce2902fa136,
          mid_asin_a4b1871f4d29e58b,
          mid_asinh_dcbc7ce2902fa136,
          mid_asinh_a4b1871f4d29e58b,
          mid_atan_dcbc7ce2902fa136,
          mid_atan_a4b1871f4d29e58b,
          mid_atan2_86ffecc08a63eff0,
          mid_atan2_6746cc1cd9210d54,
          mid_atanh_dcbc7ce2902fa136,
          mid_atanh_a4b1871f4d29e58b,
          mid_cbrt_dcbc7ce2902fa136,
          mid_cbrt_a4b1871f4d29e58b,
          mid_ceil_dcbc7ce2902fa136,
          mid_ceil_a4b1871f4d29e58b,
          mid_ceilDiv_819f91eddf220c5b,
          mid_ceilDiv_559895cd752223b6,
          mid_ceilDiv_fe4804b67425641b,
          mid_ceilDivExact_819f91eddf220c5b,
          mid_ceilDivExact_fe4804b67425641b,
          mid_ceilMod_819f91eddf220c5b,
          mid_ceilMod_ebaf2854e1c09ea3,
          mid_ceilMod_fe4804b67425641b,
          mid_clamp_8c19bdea212fe058,
          mid_clamp_7d1f92abaededf20,
          mid_clamp_0332a3c43a24cb33,
          mid_clamp_6d92ec28f5cac1cb,
          mid_clamp_54fdaa0e49c3d6a2,
          mid_copySign_86ffecc08a63eff0,
          mid_copySign_b2255e57f862a26c,
          mid_copySign_40cfe74535da4622,
          mid_copySign_6746cc1cd9210d54,
          mid_cos_dcbc7ce2902fa136,
          mid_cos_a4b1871f4d29e58b,
          mid_cosh_dcbc7ce2902fa136,
          mid_cosh_a4b1871f4d29e58b,
          mid_decrementExact_2235cd056f5a882b,
          mid_decrementExact_02b241598e254a3f,
          mid_divideExact_819f91eddf220c5b,
          mid_divideExact_fe4804b67425641b,
          mid_exp_dcbc7ce2902fa136,
          mid_exp_a4b1871f4d29e58b,
          mid_expm1_dcbc7ce2902fa136,
          mid_expm1_a4b1871f4d29e58b,
          mid_floor_dcbc7ce2902fa136,
          mid_floor_a4b1871f4d29e58b,
          mid_floorDiv_819f91eddf220c5b,
          mid_floorDiv_559895cd752223b6,
          mid_floorDiv_fe4804b67425641b,
          mid_floorDivExact_819f91eddf220c5b,
          mid_floorDivExact_fe4804b67425641b,
          mid_floorMod_819f91eddf220c5b,
          mid_floorMod_ebaf2854e1c09ea3,
          mid_floorMod_fe4804b67425641b,
          mid_fma_8c19bdea212fe058,
          mid_fma_7d1f92abaededf20,
          mid_getExponent_4508852644846c83,
          mid_getExponent_a420854bf0746aa6,
          mid_hypot_86ffecc08a63eff0,
          mid_hypot_6746cc1cd9210d54,
          mid_incrementExact_2235cd056f5a882b,
          mid_incrementExact_02b241598e254a3f,
          mid_log_dcbc7ce2902fa136,
          mid_log_a4b1871f4d29e58b,
          mid_log_86ffecc08a63eff0,
          mid_log10_dcbc7ce2902fa136,
          mid_log10_a4b1871f4d29e58b,
          mid_log1p_dcbc7ce2902fa136,
          mid_log1p_a4b1871f4d29e58b,
          mid_max_86ffecc08a63eff0,
          mid_max_b2255e57f862a26c,
          mid_max_819f91eddf220c5b,
          mid_max_fe4804b67425641b,
          mid_max_40cfe74535da4622,
          mid_max_6746cc1cd9210d54,
          mid_min_86ffecc08a63eff0,
          mid_min_40cfe74535da4622,
          mid_min_b2255e57f862a26c,
          mid_min_819f91eddf220c5b,
          mid_min_fe4804b67425641b,
          mid_min_6746cc1cd9210d54,
          mid_multiplyExact_819f91eddf220c5b,
          mid_multiplyExact_559895cd752223b6,
          mid_multiplyExact_fe4804b67425641b,
          mid_multiplyFull_30f7d12d17ddfa28,
          mid_multiplyHigh_fe4804b67425641b,
          mid_negateExact_2235cd056f5a882b,
          mid_negateExact_02b241598e254a3f,
          mid_nextAfter_86ffecc08a63eff0,
          mid_nextAfter_407b8c118410863a,
          mid_nextDown_dcbc7ce2902fa136,
          mid_nextDown_b0cdbb488a56cf9c,
          mid_nextUp_dcbc7ce2902fa136,
          mid_nextUp_b0cdbb488a56cf9c,
          mid_norm_60915becce1cbd8b,
          mid_pow_86ffecc08a63eff0,
          mid_pow_40cfe74535da4622,
          mid_pow_948617e69b66e15d,
          mid_pow_50367ad71bdff0f8,
          mid_pow_7fc015d41da5fb84,
          mid_pow_6746cc1cd9210d54,
          mid_random_dff5885c2c873297,
          mid_rint_dcbc7ce2902fa136,
          mid_rint_a4b1871f4d29e58b,
          mid_round_cebf7dc9be03a93c,
          mid_round_a420854bf0746aa6,
          mid_round_f06b0a67d7f85a65,
          mid_scalb_948617e69b66e15d,
          mid_scalb_8842c007fabd6574,
          mid_scalb_7fc015d41da5fb84,
          mid_sign_a4b1871f4d29e58b,
          mid_signum_dcbc7ce2902fa136,
          mid_signum_b0cdbb488a56cf9c,
          mid_sin_dcbc7ce2902fa136,
          mid_sin_a4b1871f4d29e58b,
          mid_sinCos_5b68da498d3c3153,
          mid_sinCos_e9c0163cbe21a86f,
          mid_sinh_dcbc7ce2902fa136,
          mid_sinh_a4b1871f4d29e58b,
          mid_sinhCosh_15df630f2a63a755,
          mid_sinhCosh_7f302e208b09f1bd,
          mid_sqrt_dcbc7ce2902fa136,
          mid_sqrt_a4b1871f4d29e58b,
          mid_subtractExact_819f91eddf220c5b,
          mid_subtractExact_fe4804b67425641b,
          mid_tan_dcbc7ce2902fa136,
          mid_tan_a4b1871f4d29e58b,
          mid_tanh_dcbc7ce2902fa136,
          mid_tanh_a4b1871f4d29e58b,
          mid_toDegrees_dcbc7ce2902fa136,
          mid_toDegrees_a4b1871f4d29e58b,
          mid_toIntExact_d0f2acf0c955e055,
          mid_toRadians_dcbc7ce2902fa136,
          mid_toRadians_a4b1871f4d29e58b,
          mid_ulp_dcbc7ce2902fa136,
          mid_ulp_b0cdbb488a56cf9c,
          mid_ulp_a4b1871f4d29e58b,
          mid_unsignedMultiplyHigh_fe4804b67425641b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FastMath(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FastMath(const FastMath& obj) : ::java::lang::Object(obj) {}

        static jdouble E;
        static jdouble PI;

        static jdouble IEEEremainder(jdouble, jdouble);
        static ::org::hipparchus::CalculusFieldElement IEEEremainder(const ::org::hipparchus::CalculusFieldElement &, jdouble);
        static ::org::hipparchus::CalculusFieldElement IEEEremainder(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static jdouble abs(jdouble);
        static jfloat abs(jfloat);
        static jint abs(jint);
        static jlong abs(jlong);
        static ::org::hipparchus::CalculusFieldElement abs(const ::org::hipparchus::CalculusFieldElement &);
        static jint absExact(jint);
        static jlong absExact(jlong);
        static jdouble acos(jdouble);
        static ::org::hipparchus::CalculusFieldElement acos(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble acosh(jdouble);
        static ::org::hipparchus::CalculusFieldElement acosh(const ::org::hipparchus::CalculusFieldElement &);
        static jint addExact(jint, jint);
        static jlong addExact(jlong, jlong);
        static jdouble asin(jdouble);
        static ::org::hipparchus::CalculusFieldElement asin(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble asinh(jdouble);
        static ::org::hipparchus::CalculusFieldElement asinh(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble atan(jdouble);
        static ::org::hipparchus::CalculusFieldElement atan(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble atan2(jdouble, jdouble);
        static ::org::hipparchus::CalculusFieldElement atan2(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static jdouble atanh(jdouble);
        static ::org::hipparchus::CalculusFieldElement atanh(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble cbrt(jdouble);
        static ::org::hipparchus::CalculusFieldElement cbrt(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble ceil(jdouble);
        static ::org::hipparchus::CalculusFieldElement ceil(const ::org::hipparchus::CalculusFieldElement &);
        static jint ceilDiv(jint, jint);
        static jlong ceilDiv(jlong, jint);
        static jlong ceilDiv(jlong, jlong);
        static jint ceilDivExact(jint, jint);
        static jlong ceilDivExact(jlong, jlong);
        static jint ceilMod(jint, jint);
        static jint ceilMod(jlong, jint);
        static jlong ceilMod(jlong, jlong);
        static jdouble clamp(jdouble, jdouble, jdouble);
        static jfloat clamp(jfloat, jfloat, jfloat);
        static jint clamp(jint, jint, jint);
        static jint clamp(jlong, jint, jint);
        static jlong clamp(jlong, jlong, jlong);
        static jdouble copySign(jdouble, jdouble);
        static jfloat copySign(jfloat, jfloat);
        static ::org::hipparchus::CalculusFieldElement copySign(const ::org::hipparchus::CalculusFieldElement &, jdouble);
        static ::org::hipparchus::CalculusFieldElement copySign(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static jdouble cos(jdouble);
        static ::org::hipparchus::CalculusFieldElement cos(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble cosh(jdouble);
        static ::org::hipparchus::CalculusFieldElement cosh(const ::org::hipparchus::CalculusFieldElement &);
        static jint decrementExact(jint);
        static jlong decrementExact(jlong);
        static jint divideExact(jint, jint);
        static jlong divideExact(jlong, jlong);
        static jdouble exp(jdouble);
        static ::org::hipparchus::CalculusFieldElement exp(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble expm1(jdouble);
        static ::org::hipparchus::CalculusFieldElement expm1(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble floor(jdouble);
        static ::org::hipparchus::CalculusFieldElement floor(const ::org::hipparchus::CalculusFieldElement &);
        static jint floorDiv(jint, jint);
        static jlong floorDiv(jlong, jint);
        static jlong floorDiv(jlong, jlong);
        static jint floorDivExact(jint, jint);
        static jlong floorDivExact(jlong, jlong);
        static jint floorMod(jint, jint);
        static jint floorMod(jlong, jint);
        static jlong floorMod(jlong, jlong);
        static jdouble fma(jdouble, jdouble, jdouble);
        static jfloat fma(jfloat, jfloat, jfloat);
        static jint getExponent(jdouble);
        static jint getExponent(jfloat);
        static jdouble hypot(jdouble, jdouble);
        static ::org::hipparchus::CalculusFieldElement hypot(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static jint incrementExact(jint);
        static jlong incrementExact(jlong);
        static jdouble log(jdouble);
        static ::org::hipparchus::CalculusFieldElement log(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble log(jdouble, jdouble);
        static jdouble log10(jdouble);
        static ::org::hipparchus::CalculusFieldElement log10(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble log1p(jdouble);
        static ::org::hipparchus::CalculusFieldElement log1p(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble max$(jdouble, jdouble);
        static jfloat max$(jfloat, jfloat);
        static jint max$(jint, jint);
        static jlong max$(jlong, jlong);
        static ::org::hipparchus::CalculusFieldElement max$(const ::org::hipparchus::CalculusFieldElement &, jdouble);
        static ::org::hipparchus::CalculusFieldElement max$(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static jdouble min$(jdouble, jdouble);
        static ::org::hipparchus::CalculusFieldElement min$(const ::org::hipparchus::CalculusFieldElement &, jdouble);
        static jfloat min$(jfloat, jfloat);
        static jint min$(jint, jint);
        static jlong min$(jlong, jlong);
        static ::org::hipparchus::CalculusFieldElement min$(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static jint multiplyExact(jint, jint);
        static jlong multiplyExact(jlong, jint);
        static jlong multiplyExact(jlong, jlong);
        static jlong multiplyFull(jint, jint);
        static jlong multiplyHigh(jlong, jlong);
        static jint negateExact(jint);
        static jlong negateExact(jlong);
        static jdouble nextAfter(jdouble, jdouble);
        static jfloat nextAfter(jfloat, jdouble);
        static jdouble nextDown(jdouble);
        static jfloat nextDown(jfloat);
        static jdouble nextUp(jdouble);
        static jfloat nextUp(jfloat);
        static jdouble norm(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble pow(jdouble, jdouble);
        static ::org::hipparchus::CalculusFieldElement pow(const ::org::hipparchus::CalculusFieldElement &, jdouble);
        static jdouble pow(jdouble, jint);
        static jdouble pow(jdouble, jlong);
        static ::org::hipparchus::CalculusFieldElement pow(const ::org::hipparchus::CalculusFieldElement &, jint);
        static ::org::hipparchus::CalculusFieldElement pow(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
        static jdouble random();
        static jdouble rint(jdouble);
        static ::org::hipparchus::CalculusFieldElement rint(const ::org::hipparchus::CalculusFieldElement &);
        static jlong round(jdouble);
        static jint round(jfloat);
        static jlong round(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble scalb(jdouble, jint);
        static jfloat scalb(jfloat, jint);
        static ::org::hipparchus::CalculusFieldElement scalb(const ::org::hipparchus::CalculusFieldElement &, jint);
        static ::org::hipparchus::CalculusFieldElement sign(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble signum(jdouble);
        static jfloat signum(jfloat);
        static jdouble sin(jdouble);
        static ::org::hipparchus::CalculusFieldElement sin(const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::util::SinCos sinCos(jdouble);
        static ::org::hipparchus::util::FieldSinCos sinCos(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble sinh(jdouble);
        static ::org::hipparchus::CalculusFieldElement sinh(const ::org::hipparchus::CalculusFieldElement &);
        static ::org::hipparchus::util::SinhCosh sinhCosh(jdouble);
        static ::org::hipparchus::util::FieldSinhCosh sinhCosh(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble sqrt(jdouble);
        static ::org::hipparchus::CalculusFieldElement sqrt(const ::org::hipparchus::CalculusFieldElement &);
        static jint subtractExact(jint, jint);
        static jlong subtractExact(jlong, jlong);
        static jdouble tan(jdouble);
        static ::org::hipparchus::CalculusFieldElement tan(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble tanh(jdouble);
        static ::org::hipparchus::CalculusFieldElement tanh(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble toDegrees(jdouble);
        static ::org::hipparchus::CalculusFieldElement toDegrees(const ::org::hipparchus::CalculusFieldElement &);
        static jint toIntExact(jlong);
        static jdouble toRadians(jdouble);
        static ::org::hipparchus::CalculusFieldElement toRadians(const ::org::hipparchus::CalculusFieldElement &);
        static jdouble ulp(jdouble);
        static jfloat ulp(jfloat);
        static ::org::hipparchus::CalculusFieldElement ulp(const ::org::hipparchus::CalculusFieldElement &);
        static jlong unsignedMultiplyHigh(jlong, jlong);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(FastMath);
      extern PyTypeObject *PY_TYPE(FastMath);

      class t_FastMath {
      public:
        PyObject_HEAD
        FastMath object;
        static PyObject *wrap_Object(const FastMath&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
