#ifndef org_hipparchus_util_FastMath_H
#define org_hipparchus_util_FastMath_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class SinhCosh;
      class SinCos;
      class FieldSinCos;
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
          mid_IEEEremainder_824133ce4aec3505,
          mid_IEEEremainder_e6afc264a8ab5469,
          mid_IEEEremainder_75c7ce7d33e7324b,
          mid_abs_0ba5fed9597b693e,
          mid_abs_1b04dd3cb8ced99e,
          mid_abs_38565d58479aa24a,
          mid_abs_955f7541fca701ab,
          mid_abs_d3398190482814dc,
          mid_absExact_38565d58479aa24a,
          mid_absExact_955f7541fca701ab,
          mid_acos_0ba5fed9597b693e,
          mid_acos_d3398190482814dc,
          mid_acosh_0ba5fed9597b693e,
          mid_acosh_d3398190482814dc,
          mid_addExact_d9790ac9eecfe931,
          mid_addExact_8f974216cbe53aea,
          mid_asin_0ba5fed9597b693e,
          mid_asin_d3398190482814dc,
          mid_asinh_0ba5fed9597b693e,
          mid_asinh_d3398190482814dc,
          mid_atan_0ba5fed9597b693e,
          mid_atan_d3398190482814dc,
          mid_atan2_824133ce4aec3505,
          mid_atan2_75c7ce7d33e7324b,
          mid_atanh_0ba5fed9597b693e,
          mid_atanh_d3398190482814dc,
          mid_cbrt_0ba5fed9597b693e,
          mid_cbrt_d3398190482814dc,
          mid_ceil_0ba5fed9597b693e,
          mid_ceil_d3398190482814dc,
          mid_ceilDiv_d9790ac9eecfe931,
          mid_ceilDiv_1672c32325bd5d4a,
          mid_ceilDiv_8f974216cbe53aea,
          mid_ceilDivExact_d9790ac9eecfe931,
          mid_ceilDivExact_8f974216cbe53aea,
          mid_ceilMod_d9790ac9eecfe931,
          mid_ceilMod_c2ad10dacdb56c74,
          mid_ceilMod_8f974216cbe53aea,
          mid_clamp_c564d6ace53a5934,
          mid_clamp_b791f597b97e9b2b,
          mid_clamp_d725bd0ab17bf037,
          mid_clamp_faaeb4e0662ead6f,
          mid_clamp_300151394254e45c,
          mid_copySign_824133ce4aec3505,
          mid_copySign_c50b565e19875e8e,
          mid_copySign_e6afc264a8ab5469,
          mid_copySign_75c7ce7d33e7324b,
          mid_cos_0ba5fed9597b693e,
          mid_cos_d3398190482814dc,
          mid_cosh_0ba5fed9597b693e,
          mid_cosh_d3398190482814dc,
          mid_decrementExact_38565d58479aa24a,
          mid_decrementExact_955f7541fca701ab,
          mid_divideExact_d9790ac9eecfe931,
          mid_divideExact_8f974216cbe53aea,
          mid_exp_0ba5fed9597b693e,
          mid_exp_d3398190482814dc,
          mid_expm1_0ba5fed9597b693e,
          mid_expm1_d3398190482814dc,
          mid_floor_0ba5fed9597b693e,
          mid_floor_d3398190482814dc,
          mid_floorDiv_d9790ac9eecfe931,
          mid_floorDiv_1672c32325bd5d4a,
          mid_floorDiv_8f974216cbe53aea,
          mid_floorDivExact_d9790ac9eecfe931,
          mid_floorDivExact_8f974216cbe53aea,
          mid_floorMod_d9790ac9eecfe931,
          mid_floorMod_c2ad10dacdb56c74,
          mid_floorMod_8f974216cbe53aea,
          mid_fma_c564d6ace53a5934,
          mid_fma_b791f597b97e9b2b,
          mid_getExponent_12ebab281ee35c98,
          mid_getExponent_255f1fc90438be86,
          mid_hypot_824133ce4aec3505,
          mid_hypot_75c7ce7d33e7324b,
          mid_incrementExact_38565d58479aa24a,
          mid_incrementExact_955f7541fca701ab,
          mid_log_0ba5fed9597b693e,
          mid_log_d3398190482814dc,
          mid_log_824133ce4aec3505,
          mid_log10_0ba5fed9597b693e,
          mid_log10_d3398190482814dc,
          mid_log1p_0ba5fed9597b693e,
          mid_log1p_d3398190482814dc,
          mid_max_824133ce4aec3505,
          mid_max_c50b565e19875e8e,
          mid_max_d9790ac9eecfe931,
          mid_max_8f974216cbe53aea,
          mid_max_e6afc264a8ab5469,
          mid_max_75c7ce7d33e7324b,
          mid_min_824133ce4aec3505,
          mid_min_e6afc264a8ab5469,
          mid_min_c50b565e19875e8e,
          mid_min_d9790ac9eecfe931,
          mid_min_8f974216cbe53aea,
          mid_min_75c7ce7d33e7324b,
          mid_multiplyExact_d9790ac9eecfe931,
          mid_multiplyExact_1672c32325bd5d4a,
          mid_multiplyExact_8f974216cbe53aea,
          mid_multiplyFull_c8198fb6cafc4f66,
          mid_multiplyHigh_8f974216cbe53aea,
          mid_negateExact_38565d58479aa24a,
          mid_negateExact_955f7541fca701ab,
          mid_nextAfter_824133ce4aec3505,
          mid_nextAfter_489a78d9dd6c8647,
          mid_nextDown_0ba5fed9597b693e,
          mid_nextDown_1b04dd3cb8ced99e,
          mid_nextUp_0ba5fed9597b693e,
          mid_nextUp_1b04dd3cb8ced99e,
          mid_norm_81a605f8f6c5d3b2,
          mid_pow_824133ce4aec3505,
          mid_pow_e6afc264a8ab5469,
          mid_pow_bcad94b64f1e2dd8,
          mid_pow_640d4bfe091088ec,
          mid_pow_fe52a10392d0b9c8,
          mid_pow_75c7ce7d33e7324b,
          mid_random_456d9a2f64d6b28d,
          mid_rint_0ba5fed9597b693e,
          mid_rint_d3398190482814dc,
          mid_round_7920263ad8deab44,
          mid_round_255f1fc90438be86,
          mid_round_1074a0e6d384e416,
          mid_scalb_bcad94b64f1e2dd8,
          mid_scalb_7206cd26f5dcc2c0,
          mid_scalb_fe52a10392d0b9c8,
          mid_sign_d3398190482814dc,
          mid_signum_0ba5fed9597b693e,
          mid_signum_1b04dd3cb8ced99e,
          mid_sin_0ba5fed9597b693e,
          mid_sin_d3398190482814dc,
          mid_sinCos_d74701318f74ff9c,
          mid_sinCos_1e571468b6e8a0fc,
          mid_sinh_0ba5fed9597b693e,
          mid_sinh_d3398190482814dc,
          mid_sinhCosh_98f870be91df2639,
          mid_sinhCosh_52888d8ca21af4a2,
          mid_sqrt_0ba5fed9597b693e,
          mid_sqrt_d3398190482814dc,
          mid_subtractExact_d9790ac9eecfe931,
          mid_subtractExact_8f974216cbe53aea,
          mid_tan_0ba5fed9597b693e,
          mid_tan_d3398190482814dc,
          mid_tanh_0ba5fed9597b693e,
          mid_tanh_d3398190482814dc,
          mid_toDegrees_0ba5fed9597b693e,
          mid_toDegrees_d3398190482814dc,
          mid_toIntExact_81b31113dbb4e784,
          mid_toRadians_0ba5fed9597b693e,
          mid_toRadians_d3398190482814dc,
          mid_ulp_0ba5fed9597b693e,
          mid_ulp_1b04dd3cb8ced99e,
          mid_ulp_d3398190482814dc,
          mid_unsignedMultiplyHigh_8f974216cbe53aea,
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
