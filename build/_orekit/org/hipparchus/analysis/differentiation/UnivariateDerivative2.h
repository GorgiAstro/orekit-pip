#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative2_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative2_H

#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class UnivariateDerivative2;
        class UnivariateDerivative2Field;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
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
            mid_init$_ff2e40d13a189b48,
            mid_init$_2c56b6dd4d4b1dec,
            mid_abs_43633a9b98e8a859,
            mid_acos_43633a9b98e8a859,
            mid_acosh_43633a9b98e8a859,
            mid_add_b1c1a939ab76cf1a,
            mid_add_c4fc76a1f90f6642,
            mid_asin_43633a9b98e8a859,
            mid_asinh_43633a9b98e8a859,
            mid_atan_43633a9b98e8a859,
            mid_atan2_b1c1a939ab76cf1a,
            mid_atanh_43633a9b98e8a859,
            mid_cbrt_43633a9b98e8a859,
            mid_ceil_43633a9b98e8a859,
            mid_compareTo_b59bad3ad46ede9c,
            mid_compose_9d708eccb0f03fe9,
            mid_copySign_b1c1a939ab76cf1a,
            mid_copySign_c4fc76a1f90f6642,
            mid_cos_43633a9b98e8a859,
            mid_cosh_43633a9b98e8a859,
            mid_divide_b1c1a939ab76cf1a,
            mid_divide_c4fc76a1f90f6642,
            mid_equals_65c7d273e80d497a,
            mid_exp_43633a9b98e8a859,
            mid_expm1_43633a9b98e8a859,
            mid_floor_43633a9b98e8a859,
            mid_getDerivative_46f85b53d9aedd96,
            mid_getExponent_570ce0828f81a2c1,
            mid_getField_1c87ae1002e9b199,
            mid_getFirstDerivative_dff5885c2c873297,
            mid_getOrder_570ce0828f81a2c1,
            mid_getPi_43633a9b98e8a859,
            mid_getReal_dff5885c2c873297,
            mid_getSecondDerivative_dff5885c2c873297,
            mid_getValue_dff5885c2c873297,
            mid_hashCode_570ce0828f81a2c1,
            mid_hypot_b1c1a939ab76cf1a,
            mid_linearCombination_b613845af661a5bb,
            mid_linearCombination_3cf5c18109f98a94,
            mid_linearCombination_66bf047fb4795709,
            mid_linearCombination_8c5299885c06bf9d,
            mid_linearCombination_126d02c475e81755,
            mid_linearCombination_c5aa5ffb02d2aead,
            mid_linearCombination_c613fb6d1418e11a,
            mid_linearCombination_238258cd02862cc0,
            mid_log_43633a9b98e8a859,
            mid_log10_43633a9b98e8a859,
            mid_log1p_43633a9b98e8a859,
            mid_multiply_b1c1a939ab76cf1a,
            mid_multiply_c4fc76a1f90f6642,
            mid_multiply_57f0f682f9d96e0b,
            mid_negate_43633a9b98e8a859,
            mid_newInstance_c4fc76a1f90f6642,
            mid_pow_b1c1a939ab76cf1a,
            mid_pow_c4fc76a1f90f6642,
            mid_pow_57f0f682f9d96e0b,
            mid_pow_f154c64d05752581,
            mid_reciprocal_43633a9b98e8a859,
            mid_remainder_b1c1a939ab76cf1a,
            mid_remainder_c4fc76a1f90f6642,
            mid_rint_43633a9b98e8a859,
            mid_rootN_57f0f682f9d96e0b,
            mid_scalb_57f0f682f9d96e0b,
            mid_sign_43633a9b98e8a859,
            mid_sin_43633a9b98e8a859,
            mid_sinCos_a447b7ca640e6b68,
            mid_sinh_43633a9b98e8a859,
            mid_sinhCosh_eef733c8a50b276f,
            mid_sqrt_43633a9b98e8a859,
            mid_subtract_b1c1a939ab76cf1a,
            mid_subtract_c4fc76a1f90f6642,
            mid_tan_43633a9b98e8a859,
            mid_tanh_43633a9b98e8a859,
            mid_taylor_dcbc7ce2902fa136,
            mid_toDegrees_43633a9b98e8a859,
            mid_toDerivativeStructure_73e277cbd957031a,
            mid_toRadians_43633a9b98e8a859,
            mid_ulp_43633a9b98e8a859,
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
