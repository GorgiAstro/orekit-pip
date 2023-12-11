#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative2_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative2_H

#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class UnivariateDerivative2Field;
        class UnivariateDerivative2;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        class UnivariateDerivative2 : public ::org::hipparchus::analysis::differentiation::UnivariateDerivative {
         public:
          enum {
            mid_init$_db212c86bccc027a,
            mid_init$_87096e3fd8086100,
            mid_abs_7cbeead5edd31cdd,
            mid_acos_7cbeead5edd31cdd,
            mid_acosh_7cbeead5edd31cdd,
            mid_add_ad3422e9f9087e74,
            mid_add_6a23345f32b0596c,
            mid_asin_7cbeead5edd31cdd,
            mid_asinh_7cbeead5edd31cdd,
            mid_atan_7cbeead5edd31cdd,
            mid_atan2_ad3422e9f9087e74,
            mid_atanh_7cbeead5edd31cdd,
            mid_cbrt_7cbeead5edd31cdd,
            mid_ceil_7cbeead5edd31cdd,
            mid_compareTo_80cb4624ccc10756,
            mid_compose_b4fabb26f6e1ea0a,
            mid_copySign_ad3422e9f9087e74,
            mid_copySign_6a23345f32b0596c,
            mid_cos_7cbeead5edd31cdd,
            mid_cosh_7cbeead5edd31cdd,
            mid_divide_ad3422e9f9087e74,
            mid_divide_6a23345f32b0596c,
            mid_equals_221e8e85cb385209,
            mid_exp_7cbeead5edd31cdd,
            mid_expm1_7cbeead5edd31cdd,
            mid_floor_7cbeead5edd31cdd,
            mid_getDerivative_69cfb132c661aca4,
            mid_getExponent_412668abc8d889e9,
            mid_getField_6b368213087be900,
            mid_getFirstDerivative_557b8123390d8d0c,
            mid_getOrder_412668abc8d889e9,
            mid_getPi_7cbeead5edd31cdd,
            mid_getReal_557b8123390d8d0c,
            mid_getSecondDerivative_557b8123390d8d0c,
            mid_getValue_557b8123390d8d0c,
            mid_hashCode_412668abc8d889e9,
            mid_hypot_ad3422e9f9087e74,
            mid_linearCombination_90687942c4162c23,
            mid_linearCombination_2d21119e506b9638,
            mid_linearCombination_aa0f4c6f10725c36,
            mid_linearCombination_411aaa21bbf16ecb,
            mid_linearCombination_daffa22255703b7c,
            mid_linearCombination_57396198ea21871e,
            mid_linearCombination_2ebd544a86b8c288,
            mid_linearCombination_d8b5c311034a3e6f,
            mid_log_7cbeead5edd31cdd,
            mid_log10_7cbeead5edd31cdd,
            mid_log1p_7cbeead5edd31cdd,
            mid_multiply_ad3422e9f9087e74,
            mid_multiply_6a23345f32b0596c,
            mid_multiply_aaf20910de5ca2a0,
            mid_negate_7cbeead5edd31cdd,
            mid_newInstance_6a23345f32b0596c,
            mid_pow_ad3422e9f9087e74,
            mid_pow_6a23345f32b0596c,
            mid_pow_aaf20910de5ca2a0,
            mid_pow_c4ceba6831c05feb,
            mid_reciprocal_7cbeead5edd31cdd,
            mid_remainder_ad3422e9f9087e74,
            mid_remainder_6a23345f32b0596c,
            mid_rint_7cbeead5edd31cdd,
            mid_rootN_aaf20910de5ca2a0,
            mid_scalb_aaf20910de5ca2a0,
            mid_sign_7cbeead5edd31cdd,
            mid_sin_7cbeead5edd31cdd,
            mid_sinCos_5efdd92d175db117,
            mid_sinh_7cbeead5edd31cdd,
            mid_sinhCosh_e5a948cfec461975,
            mid_sqrt_7cbeead5edd31cdd,
            mid_subtract_ad3422e9f9087e74,
            mid_subtract_6a23345f32b0596c,
            mid_tan_7cbeead5edd31cdd,
            mid_tanh_7cbeead5edd31cdd,
            mid_taylor_7e960cd6eee376d8,
            mid_toDegrees_7cbeead5edd31cdd,
            mid_toDerivativeStructure_9f40c2a430225d38,
            mid_toRadians_7cbeead5edd31cdd,
            mid_ulp_7cbeead5edd31cdd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateDerivative2(jobject obj) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateDerivative2(const UnivariateDerivative2& obj) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(obj) {}

          static UnivariateDerivative2 *PI;

          UnivariateDerivative2(const ::org::hipparchus::analysis::differentiation::DerivativeStructure &);
          UnivariateDerivative2(jdouble, jdouble, jdouble);

          UnivariateDerivative2 abs() const;
          UnivariateDerivative2 acos() const;
          UnivariateDerivative2 acosh() const;
          UnivariateDerivative2 add(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 add(jdouble) const;
          UnivariateDerivative2 asin() const;
          UnivariateDerivative2 asinh() const;
          UnivariateDerivative2 atan() const;
          UnivariateDerivative2 atan2(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 atanh() const;
          UnivariateDerivative2 cbrt() const;
          UnivariateDerivative2 ceil() const;
          jint compareTo(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 compose(const JArray< jdouble > &) const;
          UnivariateDerivative2 copySign(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 copySign(jdouble) const;
          UnivariateDerivative2 cos() const;
          UnivariateDerivative2 cosh() const;
          UnivariateDerivative2 divide(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 divide(jdouble) const;
          jboolean equals(const ::java::lang::Object &) const;
          UnivariateDerivative2 exp() const;
          UnivariateDerivative2 expm1() const;
          UnivariateDerivative2 floor() const;
          jdouble getDerivative(jint) const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative2Field getField() const;
          jdouble getFirstDerivative() const;
          jint getOrder() const;
          UnivariateDerivative2 getPi() const;
          jdouble getReal() const;
          jdouble getSecondDerivative() const;
          jdouble getValue() const;
          jint hashCode() const;
          UnivariateDerivative2 hypot(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 linearCombination(const JArray< jdouble > &, const JArray< UnivariateDerivative2 > &) const;
          UnivariateDerivative2 linearCombination(const JArray< UnivariateDerivative2 > &, const JArray< UnivariateDerivative2 > &) const;
          UnivariateDerivative2 linearCombination(const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &) const;
          UnivariateDerivative2 linearCombination(jdouble, const UnivariateDerivative2 &, jdouble, const UnivariateDerivative2 &) const;
          UnivariateDerivative2 linearCombination(const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &) const;
          UnivariateDerivative2 linearCombination(jdouble, const UnivariateDerivative2 &, jdouble, const UnivariateDerivative2 &, jdouble, const UnivariateDerivative2 &) const;
          UnivariateDerivative2 linearCombination(const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &, const UnivariateDerivative2 &) const;
          UnivariateDerivative2 linearCombination(jdouble, const UnivariateDerivative2 &, jdouble, const UnivariateDerivative2 &, jdouble, const UnivariateDerivative2 &, jdouble, const UnivariateDerivative2 &) const;
          UnivariateDerivative2 log() const;
          UnivariateDerivative2 log10() const;
          UnivariateDerivative2 log1p() const;
          UnivariateDerivative2 multiply(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 multiply(jdouble) const;
          UnivariateDerivative2 multiply(jint) const;
          UnivariateDerivative2 negate() const;
          UnivariateDerivative2 newInstance(jdouble) const;
          UnivariateDerivative2 pow(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 pow(jdouble) const;
          UnivariateDerivative2 pow(jint) const;
          static UnivariateDerivative2 pow(jdouble, const UnivariateDerivative2 &);
          UnivariateDerivative2 reciprocal() const;
          UnivariateDerivative2 remainder(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 remainder(jdouble) const;
          UnivariateDerivative2 rint() const;
          UnivariateDerivative2 rootN(jint) const;
          UnivariateDerivative2 scalb(jint) const;
          UnivariateDerivative2 sign() const;
          UnivariateDerivative2 sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          UnivariateDerivative2 sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          UnivariateDerivative2 sqrt() const;
          UnivariateDerivative2 subtract(const UnivariateDerivative2 &) const;
          UnivariateDerivative2 subtract(jdouble) const;
          UnivariateDerivative2 tan() const;
          UnivariateDerivative2 tanh() const;
          jdouble taylor(jdouble) const;
          UnivariateDerivative2 toDegrees() const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure toDerivativeStructure() const;
          UnivariateDerivative2 toRadians() const;
          UnivariateDerivative2 ulp() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        extern PyType_Def PY_TYPE_DEF(UnivariateDerivative2);
        extern PyTypeObject *PY_TYPE(UnivariateDerivative2);

        class t_UnivariateDerivative2 {
        public:
          PyObject_HEAD
          UnivariateDerivative2 object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_UnivariateDerivative2 *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const UnivariateDerivative2&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const UnivariateDerivative2&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
