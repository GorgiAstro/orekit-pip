#ifndef org_hipparchus_util_FastMath_H
#define org_hipparchus_util_FastMath_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class SinhCosh;
      class FieldSinCos;
      class SinCos;
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
          mid_IEEEremainder_99e3200dafc19573,
          mid_IEEEremainder_eda22c804f80f47e,
          mid_IEEEremainder_c6408fdce2cc6c1a,
          mid_abs_04fd0666b613d2ab,
          mid_abs_5201d7c8dd0d0827,
          mid_abs_0e7cf35192c3effe,
          mid_abs_9db63109f74a74fc,
          mid_abs_6e00dc5eb352fe51,
          mid_absExact_0e7cf35192c3effe,
          mid_absExact_9db63109f74a74fc,
          mid_acos_04fd0666b613d2ab,
          mid_acos_6e00dc5eb352fe51,
          mid_acosh_04fd0666b613d2ab,
          mid_acosh_6e00dc5eb352fe51,
          mid_addExact_92ecd94558bf0c68,
          mid_addExact_8f345e4204401ff5,
          mid_asin_04fd0666b613d2ab,
          mid_asin_6e00dc5eb352fe51,
          mid_asinh_04fd0666b613d2ab,
          mid_asinh_6e00dc5eb352fe51,
          mid_atan_04fd0666b613d2ab,
          mid_atan_6e00dc5eb352fe51,
          mid_atan2_99e3200dafc19573,
          mid_atan2_c6408fdce2cc6c1a,
          mid_atanh_04fd0666b613d2ab,
          mid_atanh_6e00dc5eb352fe51,
          mid_cbrt_04fd0666b613d2ab,
          mid_cbrt_6e00dc5eb352fe51,
          mid_ceil_04fd0666b613d2ab,
          mid_ceil_6e00dc5eb352fe51,
          mid_ceilDiv_92ecd94558bf0c68,
          mid_ceilDiv_a60a6e0b1c5dfa26,
          mid_ceilDiv_8f345e4204401ff5,
          mid_ceilDivExact_92ecd94558bf0c68,
          mid_ceilDivExact_8f345e4204401ff5,
          mid_ceilMod_92ecd94558bf0c68,
          mid_ceilMod_3838a158082992bc,
          mid_ceilMod_8f345e4204401ff5,
          mid_clamp_f804f816b79164cb,
          mid_clamp_b4bd1bc861de7213,
          mid_clamp_06f6ba73b1164abe,
          mid_clamp_88f737e0857bfdfc,
          mid_clamp_fdd9066580f9dcfe,
          mid_copySign_99e3200dafc19573,
          mid_copySign_4f5dd4904966745b,
          mid_copySign_eda22c804f80f47e,
          mid_copySign_c6408fdce2cc6c1a,
          mid_cos_04fd0666b613d2ab,
          mid_cos_6e00dc5eb352fe51,
          mid_cosh_04fd0666b613d2ab,
          mid_cosh_6e00dc5eb352fe51,
          mid_decrementExact_0e7cf35192c3effe,
          mid_decrementExact_9db63109f74a74fc,
          mid_divideExact_92ecd94558bf0c68,
          mid_divideExact_8f345e4204401ff5,
          mid_exp_04fd0666b613d2ab,
          mid_exp_6e00dc5eb352fe51,
          mid_expm1_04fd0666b613d2ab,
          mid_expm1_6e00dc5eb352fe51,
          mid_floor_04fd0666b613d2ab,
          mid_floor_6e00dc5eb352fe51,
          mid_floorDiv_92ecd94558bf0c68,
          mid_floorDiv_a60a6e0b1c5dfa26,
          mid_floorDiv_8f345e4204401ff5,
          mid_floorDivExact_92ecd94558bf0c68,
          mid_floorDivExact_8f345e4204401ff5,
          mid_floorMod_92ecd94558bf0c68,
          mid_floorMod_3838a158082992bc,
          mid_floorMod_8f345e4204401ff5,
          mid_fma_f804f816b79164cb,
          mid_fma_b4bd1bc861de7213,
          mid_getExponent_2af4736545087009,
          mid_getExponent_5a61e72bed090dfc,
          mid_hypot_99e3200dafc19573,
          mid_hypot_c6408fdce2cc6c1a,
          mid_incrementExact_0e7cf35192c3effe,
          mid_incrementExact_9db63109f74a74fc,
          mid_log_04fd0666b613d2ab,
          mid_log_6e00dc5eb352fe51,
          mid_log_99e3200dafc19573,
          mid_log10_04fd0666b613d2ab,
          mid_log10_6e00dc5eb352fe51,
          mid_log1p_04fd0666b613d2ab,
          mid_log1p_6e00dc5eb352fe51,
          mid_max_99e3200dafc19573,
          mid_max_4f5dd4904966745b,
          mid_max_92ecd94558bf0c68,
          mid_max_8f345e4204401ff5,
          mid_max_eda22c804f80f47e,
          mid_max_c6408fdce2cc6c1a,
          mid_min_99e3200dafc19573,
          mid_min_eda22c804f80f47e,
          mid_min_4f5dd4904966745b,
          mid_min_92ecd94558bf0c68,
          mid_min_8f345e4204401ff5,
          mid_min_c6408fdce2cc6c1a,
          mid_multiplyExact_92ecd94558bf0c68,
          mid_multiplyExact_a60a6e0b1c5dfa26,
          mid_multiplyExact_8f345e4204401ff5,
          mid_multiplyFull_86fb9ef85bc94662,
          mid_multiplyHigh_8f345e4204401ff5,
          mid_negateExact_0e7cf35192c3effe,
          mid_negateExact_9db63109f74a74fc,
          mid_nextAfter_99e3200dafc19573,
          mid_nextAfter_209e462362f6f397,
          mid_nextDown_04fd0666b613d2ab,
          mid_nextDown_5201d7c8dd0d0827,
          mid_nextUp_04fd0666b613d2ab,
          mid_nextUp_5201d7c8dd0d0827,
          mid_norm_5baa1648c914a132,
          mid_pow_99e3200dafc19573,
          mid_pow_2eeda88661ae34d3,
          mid_pow_33d9ecc50b5d3d8b,
          mid_pow_eda22c804f80f47e,
          mid_pow_37edb73a69dbfe81,
          mid_pow_c6408fdce2cc6c1a,
          mid_random_b74f83833fdad017,
          mid_rint_04fd0666b613d2ab,
          mid_rint_6e00dc5eb352fe51,
          mid_round_12ed7e7112604870,
          mid_round_5a61e72bed090dfc,
          mid_round_410bdc8dae43e147,
          mid_scalb_2eeda88661ae34d3,
          mid_scalb_7bd2126e67defb15,
          mid_scalb_37edb73a69dbfe81,
          mid_sign_6e00dc5eb352fe51,
          mid_signum_04fd0666b613d2ab,
          mid_signum_5201d7c8dd0d0827,
          mid_sin_04fd0666b613d2ab,
          mid_sin_6e00dc5eb352fe51,
          mid_sinCos_59d0e5a71bc931a1,
          mid_sinCos_eddc913d9f7e73a7,
          mid_sinh_04fd0666b613d2ab,
          mid_sinh_6e00dc5eb352fe51,
          mid_sinhCosh_fd86f31d69a2f5a3,
          mid_sinhCosh_520be849f30d7a2a,
          mid_sqrt_04fd0666b613d2ab,
          mid_sqrt_6e00dc5eb352fe51,
          mid_subtractExact_92ecd94558bf0c68,
          mid_subtractExact_8f345e4204401ff5,
          mid_tan_04fd0666b613d2ab,
          mid_tan_6e00dc5eb352fe51,
          mid_tanh_04fd0666b613d2ab,
          mid_tanh_6e00dc5eb352fe51,
          mid_toDegrees_04fd0666b613d2ab,
          mid_toDegrees_6e00dc5eb352fe51,
          mid_toIntExact_da24d9dc605e436c,
          mid_toRadians_04fd0666b613d2ab,
          mid_toRadians_6e00dc5eb352fe51,
          mid_ulp_04fd0666b613d2ab,
          mid_ulp_5201d7c8dd0d0827,
          mid_ulp_6e00dc5eb352fe51,
          mid_unsignedMultiplyHigh_8f345e4204401ff5,
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
        static jdouble pow(jdouble, jint);
        static jdouble pow(jdouble, jlong);
        static ::org::hipparchus::CalculusFieldElement pow(const ::org::hipparchus::CalculusFieldElement &, jdouble);
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
