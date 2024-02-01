#ifndef org_hipparchus_util_FastMath_H
#define org_hipparchus_util_FastMath_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
      class SinCos;
      class SinhCosh;
    }
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

      class FastMath : public ::java::lang::Object {
       public:
        enum {
          mid_IEEEremainder_82f92590f4247da1,
          mid_IEEEremainder_d15f4b9153503460,
          mid_IEEEremainder_b5ecd7df9e053968,
          mid_abs_bf28ed64d6e8576b,
          mid_abs_0770b540745e2c06,
          mid_abs_d938fc64e8c6df2d,
          mid_abs_1eaf6eb0a3f3163f,
          mid_abs_a3b854adede8eaaa,
          mid_absExact_d938fc64e8c6df2d,
          mid_absExact_1eaf6eb0a3f3163f,
          mid_acos_bf28ed64d6e8576b,
          mid_acos_a3b854adede8eaaa,
          mid_acosh_bf28ed64d6e8576b,
          mid_acosh_a3b854adede8eaaa,
          mid_addExact_91b9e1e34b2235d5,
          mid_addExact_7912418dc9bc44e3,
          mid_asin_bf28ed64d6e8576b,
          mid_asin_a3b854adede8eaaa,
          mid_asinh_bf28ed64d6e8576b,
          mid_asinh_a3b854adede8eaaa,
          mid_atan_bf28ed64d6e8576b,
          mid_atan_a3b854adede8eaaa,
          mid_atan2_82f92590f4247da1,
          mid_atan2_b5ecd7df9e053968,
          mid_atanh_bf28ed64d6e8576b,
          mid_atanh_a3b854adede8eaaa,
          mid_cbrt_bf28ed64d6e8576b,
          mid_cbrt_a3b854adede8eaaa,
          mid_ceil_bf28ed64d6e8576b,
          mid_ceil_a3b854adede8eaaa,
          mid_ceilDiv_91b9e1e34b2235d5,
          mid_ceilDiv_e7e8a55529a0db0c,
          mid_ceilDiv_7912418dc9bc44e3,
          mid_ceilDivExact_91b9e1e34b2235d5,
          mid_ceilDivExact_7912418dc9bc44e3,
          mid_ceilMod_91b9e1e34b2235d5,
          mid_ceilMod_7ba8a6d68b9adf60,
          mid_ceilMod_7912418dc9bc44e3,
          mid_clamp_db06d8c3fc3d9670,
          mid_clamp_5028b3b1e10fe724,
          mid_clamp_9f191fbdf87612b4,
          mid_clamp_4f56fd978294a989,
          mid_clamp_3d8b4f22da917798,
          mid_copySign_82f92590f4247da1,
          mid_copySign_376a3c0184df58e2,
          mid_copySign_d15f4b9153503460,
          mid_copySign_b5ecd7df9e053968,
          mid_cos_bf28ed64d6e8576b,
          mid_cos_a3b854adede8eaaa,
          mid_cosh_bf28ed64d6e8576b,
          mid_cosh_a3b854adede8eaaa,
          mid_decrementExact_d938fc64e8c6df2d,
          mid_decrementExact_1eaf6eb0a3f3163f,
          mid_divideExact_91b9e1e34b2235d5,
          mid_divideExact_7912418dc9bc44e3,
          mid_exp_bf28ed64d6e8576b,
          mid_exp_a3b854adede8eaaa,
          mid_expm1_bf28ed64d6e8576b,
          mid_expm1_a3b854adede8eaaa,
          mid_floor_bf28ed64d6e8576b,
          mid_floor_a3b854adede8eaaa,
          mid_floorDiv_91b9e1e34b2235d5,
          mid_floorDiv_e7e8a55529a0db0c,
          mid_floorDiv_7912418dc9bc44e3,
          mid_floorDivExact_91b9e1e34b2235d5,
          mid_floorDivExact_7912418dc9bc44e3,
          mid_floorMod_91b9e1e34b2235d5,
          mid_floorMod_7ba8a6d68b9adf60,
          mid_floorMod_7912418dc9bc44e3,
          mid_fma_db06d8c3fc3d9670,
          mid_fma_5028b3b1e10fe724,
          mid_getExponent_9e72cb20adb363fb,
          mid_getExponent_d5ac1630ba9f4935,
          mid_hypot_82f92590f4247da1,
          mid_hypot_b5ecd7df9e053968,
          mid_incrementExact_d938fc64e8c6df2d,
          mid_incrementExact_1eaf6eb0a3f3163f,
          mid_log_bf28ed64d6e8576b,
          mid_log_a3b854adede8eaaa,
          mid_log_82f92590f4247da1,
          mid_log10_bf28ed64d6e8576b,
          mid_log10_a3b854adede8eaaa,
          mid_log1p_bf28ed64d6e8576b,
          mid_log1p_a3b854adede8eaaa,
          mid_max_82f92590f4247da1,
          mid_max_376a3c0184df58e2,
          mid_max_91b9e1e34b2235d5,
          mid_max_7912418dc9bc44e3,
          mid_max_d15f4b9153503460,
          mid_max_b5ecd7df9e053968,
          mid_min_82f92590f4247da1,
          mid_min_d15f4b9153503460,
          mid_min_376a3c0184df58e2,
          mid_min_91b9e1e34b2235d5,
          mid_min_7912418dc9bc44e3,
          mid_min_b5ecd7df9e053968,
          mid_multiplyExact_91b9e1e34b2235d5,
          mid_multiplyExact_e7e8a55529a0db0c,
          mid_multiplyExact_7912418dc9bc44e3,
          mid_multiplyFull_038d815c660e2779,
          mid_multiplyHigh_7912418dc9bc44e3,
          mid_negateExact_d938fc64e8c6df2d,
          mid_negateExact_1eaf6eb0a3f3163f,
          mid_nextAfter_82f92590f4247da1,
          mid_nextAfter_2b91677fd9f83abc,
          mid_nextDown_bf28ed64d6e8576b,
          mid_nextDown_0770b540745e2c06,
          mid_nextUp_bf28ed64d6e8576b,
          mid_nextUp_0770b540745e2c06,
          mid_norm_56a150973c69fd10,
          mid_pow_82f92590f4247da1,
          mid_pow_988810e80d644418,
          mid_pow_be99726ca21db94b,
          mid_pow_d15f4b9153503460,
          mid_pow_620e45e6055b3312,
          mid_pow_b5ecd7df9e053968,
          mid_random_9981f74b2d109da6,
          mid_rint_bf28ed64d6e8576b,
          mid_rint_a3b854adede8eaaa,
          mid_round_6883df933d8a0182,
          mid_round_d5ac1630ba9f4935,
          mid_round_f558aac2905fea6f,
          mid_scalb_988810e80d644418,
          mid_scalb_52c941e30b3f23b6,
          mid_scalb_620e45e6055b3312,
          mid_sign_a3b854adede8eaaa,
          mid_signum_bf28ed64d6e8576b,
          mid_signum_0770b540745e2c06,
          mid_sin_bf28ed64d6e8576b,
          mid_sin_a3b854adede8eaaa,
          mid_sinCos_1a320d21482054c4,
          mid_sinCos_0b916a0ac1230877,
          mid_sinh_bf28ed64d6e8576b,
          mid_sinh_a3b854adede8eaaa,
          mid_sinhCosh_6835346c34f988e8,
          mid_sinhCosh_db5159235070d1c2,
          mid_sqrt_bf28ed64d6e8576b,
          mid_sqrt_a3b854adede8eaaa,
          mid_subtractExact_91b9e1e34b2235d5,
          mid_subtractExact_7912418dc9bc44e3,
          mid_tan_bf28ed64d6e8576b,
          mid_tan_a3b854adede8eaaa,
          mid_tanh_bf28ed64d6e8576b,
          mid_tanh_a3b854adede8eaaa,
          mid_toDegrees_bf28ed64d6e8576b,
          mid_toDegrees_a3b854adede8eaaa,
          mid_toIntExact_e9d351dcffb1a696,
          mid_toRadians_bf28ed64d6e8576b,
          mid_toRadians_a3b854adede8eaaa,
          mid_ulp_bf28ed64d6e8576b,
          mid_ulp_0770b540745e2c06,
          mid_ulp_a3b854adede8eaaa,
          mid_unsignedMultiplyHigh_7912418dc9bc44e3,
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
