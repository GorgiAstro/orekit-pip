#ifndef org_hipparchus_util_FastMath_H
#define org_hipparchus_util_FastMath_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class SinhCosh;
      class FieldSinhCosh;
      class FieldSinCos;
      class SinCos;
    }
    namespace exception {
      class MathRuntimeException;
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
          mid_IEEEremainder_2268d18be49a6087,
          mid_IEEEremainder_0c85c14ef225acd0,
          mid_IEEEremainder_d5f58731bcb8a011,
          mid_abs_7e960cd6eee376d8,
          mid_abs_d86c73ce94a2219d,
          mid_abs_0092017e99012694,
          mid_abs_f4ad805a81234b49,
          mid_abs_6672ad854985cb64,
          mid_absExact_0092017e99012694,
          mid_absExact_f4ad805a81234b49,
          mid_acos_7e960cd6eee376d8,
          mid_acos_6672ad854985cb64,
          mid_acosh_7e960cd6eee376d8,
          mid_acosh_6672ad854985cb64,
          mid_addExact_5625cf3db98dadc1,
          mid_addExact_c18ab8eab0c49f84,
          mid_asin_7e960cd6eee376d8,
          mid_asin_6672ad854985cb64,
          mid_asinh_7e960cd6eee376d8,
          mid_asinh_6672ad854985cb64,
          mid_atan_7e960cd6eee376d8,
          mid_atan_6672ad854985cb64,
          mid_atan2_2268d18be49a6087,
          mid_atan2_d5f58731bcb8a011,
          mid_atanh_7e960cd6eee376d8,
          mid_atanh_6672ad854985cb64,
          mid_cbrt_7e960cd6eee376d8,
          mid_cbrt_6672ad854985cb64,
          mid_ceil_7e960cd6eee376d8,
          mid_ceil_6672ad854985cb64,
          mid_ceilDiv_5625cf3db98dadc1,
          mid_ceilDiv_974ee1cf526db4b7,
          mid_ceilDiv_c18ab8eab0c49f84,
          mid_ceilDivExact_5625cf3db98dadc1,
          mid_ceilDivExact_c18ab8eab0c49f84,
          mid_ceilMod_5625cf3db98dadc1,
          mid_ceilMod_78d37ce3ced6fae5,
          mid_ceilMod_c18ab8eab0c49f84,
          mid_clamp_8d02ba458f22e508,
          mid_clamp_ef6fd93d07196376,
          mid_clamp_ee4c8761acef5403,
          mid_clamp_ede182ff33d8f114,
          mid_clamp_5cb98f08c34ba41d,
          mid_copySign_2268d18be49a6087,
          mid_copySign_cd0283dc4491c41d,
          mid_copySign_0c85c14ef225acd0,
          mid_copySign_d5f58731bcb8a011,
          mid_cos_7e960cd6eee376d8,
          mid_cos_6672ad854985cb64,
          mid_cosh_7e960cd6eee376d8,
          mid_cosh_6672ad854985cb64,
          mid_decrementExact_0092017e99012694,
          mid_decrementExact_f4ad805a81234b49,
          mid_divideExact_5625cf3db98dadc1,
          mid_divideExact_c18ab8eab0c49f84,
          mid_exp_7e960cd6eee376d8,
          mid_exp_6672ad854985cb64,
          mid_expm1_7e960cd6eee376d8,
          mid_expm1_6672ad854985cb64,
          mid_floor_7e960cd6eee376d8,
          mid_floor_6672ad854985cb64,
          mid_floorDiv_5625cf3db98dadc1,
          mid_floorDiv_974ee1cf526db4b7,
          mid_floorDiv_c18ab8eab0c49f84,
          mid_floorDivExact_5625cf3db98dadc1,
          mid_floorDivExact_c18ab8eab0c49f84,
          mid_floorMod_5625cf3db98dadc1,
          mid_floorMod_78d37ce3ced6fae5,
          mid_floorMod_c18ab8eab0c49f84,
          mid_fma_8d02ba458f22e508,
          mid_fma_ef6fd93d07196376,
          mid_getExponent_abbeb9db7144ca23,
          mid_getExponent_8654c9c587b855bf,
          mid_hypot_2268d18be49a6087,
          mid_hypot_d5f58731bcb8a011,
          mid_incrementExact_0092017e99012694,
          mid_incrementExact_f4ad805a81234b49,
          mid_log_7e960cd6eee376d8,
          mid_log_6672ad854985cb64,
          mid_log_2268d18be49a6087,
          mid_log10_7e960cd6eee376d8,
          mid_log10_6672ad854985cb64,
          mid_log1p_7e960cd6eee376d8,
          mid_log1p_6672ad854985cb64,
          mid_max_2268d18be49a6087,
          mid_max_cd0283dc4491c41d,
          mid_max_5625cf3db98dadc1,
          mid_max_c18ab8eab0c49f84,
          mid_max_0c85c14ef225acd0,
          mid_max_d5f58731bcb8a011,
          mid_min_2268d18be49a6087,
          mid_min_0c85c14ef225acd0,
          mid_min_cd0283dc4491c41d,
          mid_min_5625cf3db98dadc1,
          mid_min_c18ab8eab0c49f84,
          mid_min_d5f58731bcb8a011,
          mid_multiplyExact_5625cf3db98dadc1,
          mid_multiplyExact_974ee1cf526db4b7,
          mid_multiplyExact_c18ab8eab0c49f84,
          mid_multiplyFull_1fba9172e7658368,
          mid_multiplyHigh_c18ab8eab0c49f84,
          mid_negateExact_0092017e99012694,
          mid_negateExact_f4ad805a81234b49,
          mid_nextAfter_2268d18be49a6087,
          mid_nextAfter_59ebbb936ec7101a,
          mid_nextDown_7e960cd6eee376d8,
          mid_nextDown_d86c73ce94a2219d,
          mid_nextUp_7e960cd6eee376d8,
          mid_nextUp_d86c73ce94a2219d,
          mid_norm_11c7b941e8b61f75,
          mid_pow_2268d18be49a6087,
          mid_pow_0c85c14ef225acd0,
          mid_pow_156ae9d72f1c8533,
          mid_pow_f51b4310f89ba5f2,
          mid_pow_a945230069a4182c,
          mid_pow_d5f58731bcb8a011,
          mid_random_557b8123390d8d0c,
          mid_rint_7e960cd6eee376d8,
          mid_rint_6672ad854985cb64,
          mid_round_9d550dd06216a860,
          mid_round_8654c9c587b855bf,
          mid_round_c07ecb10472aff74,
          mid_scalb_156ae9d72f1c8533,
          mid_scalb_ef306825a01b4f72,
          mid_scalb_a945230069a4182c,
          mid_sign_6672ad854985cb64,
          mid_signum_7e960cd6eee376d8,
          mid_signum_d86c73ce94a2219d,
          mid_sin_7e960cd6eee376d8,
          mid_sin_6672ad854985cb64,
          mid_sinCos_99155ddf2f533f1f,
          mid_sinCos_40a4543daa5bfd7a,
          mid_sinh_7e960cd6eee376d8,
          mid_sinh_6672ad854985cb64,
          mid_sinhCosh_37d68e4c87605c4c,
          mid_sinhCosh_0d9477952d33d2a8,
          mid_sqrt_7e960cd6eee376d8,
          mid_sqrt_6672ad854985cb64,
          mid_subtractExact_5625cf3db98dadc1,
          mid_subtractExact_c18ab8eab0c49f84,
          mid_tan_7e960cd6eee376d8,
          mid_tan_6672ad854985cb64,
          mid_tanh_7e960cd6eee376d8,
          mid_tanh_6672ad854985cb64,
          mid_toDegrees_7e960cd6eee376d8,
          mid_toDegrees_6672ad854985cb64,
          mid_toIntExact_06110d73d878b7ae,
          mid_toRadians_7e960cd6eee376d8,
          mid_toRadians_6672ad854985cb64,
          mid_ulp_7e960cd6eee376d8,
          mid_ulp_d86c73ce94a2219d,
          mid_ulp_6672ad854985cb64,
          mid_unsignedMultiplyHigh_c18ab8eab0c49f84,
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
