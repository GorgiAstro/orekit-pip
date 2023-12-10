#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative1_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative1_H

#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    namespace analysis {
      namespace differentiation {
        class UnivariateDerivative1Field;
        class DerivativeStructure;
        class UnivariateDerivative1;
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

        class UnivariateDerivative1 : public ::org::hipparchus::analysis::differentiation::UnivariateDerivative {
         public:
          enum {
            mid_init$_ff2e40d13a189b48,
            mid_init$_8f2e782d5278b131,
            mid_abs_81b5d8fdb5d06385,
            mid_acos_81b5d8fdb5d06385,
            mid_acosh_81b5d8fdb5d06385,
            mid_add_fbdfe4ad0fefc339,
            mid_add_65c8eb73c3fa277c,
            mid_asin_81b5d8fdb5d06385,
            mid_asinh_81b5d8fdb5d06385,
            mid_atan_81b5d8fdb5d06385,
            mid_atan2_fbdfe4ad0fefc339,
            mid_atanh_81b5d8fdb5d06385,
            mid_cbrt_81b5d8fdb5d06385,
            mid_ceil_81b5d8fdb5d06385,
            mid_compareTo_d23fc20e566443fe,
            mid_compose_96f30ba8751ed2eb,
            mid_copySign_fbdfe4ad0fefc339,
            mid_copySign_65c8eb73c3fa277c,
            mid_cos_81b5d8fdb5d06385,
            mid_cosh_81b5d8fdb5d06385,
            mid_divide_fbdfe4ad0fefc339,
            mid_divide_65c8eb73c3fa277c,
            mid_equals_65c7d273e80d497a,
            mid_exp_81b5d8fdb5d06385,
            mid_expm1_81b5d8fdb5d06385,
            mid_floor_81b5d8fdb5d06385,
            mid_getDerivative_46f85b53d9aedd96,
            mid_getExponent_570ce0828f81a2c1,
            mid_getField_4efec6a5aa4fd021,
            mid_getFirstDerivative_dff5885c2c873297,
            mid_getOrder_570ce0828f81a2c1,
            mid_getPi_81b5d8fdb5d06385,
            mid_getReal_dff5885c2c873297,
            mid_getValue_dff5885c2c873297,
            mid_hashCode_570ce0828f81a2c1,
            mid_hypot_fbdfe4ad0fefc339,
            mid_linearCombination_f81f2f5ebd0efe47,
            mid_linearCombination_b35c90aa9997a256,
            mid_linearCombination_617a1ca33ab23843,
            mid_linearCombination_a6d16fea2a095452,
            mid_linearCombination_073d708533923ffb,
            mid_linearCombination_1cd6b748bfdb22c3,
            mid_linearCombination_3c60fd27a9bb1859,
            mid_linearCombination_6dd269fb356f90ca,
            mid_log_81b5d8fdb5d06385,
            mid_log10_81b5d8fdb5d06385,
            mid_log1p_81b5d8fdb5d06385,
            mid_multiply_fbdfe4ad0fefc339,
            mid_multiply_65c8eb73c3fa277c,
            mid_multiply_6f4d2a282bd8f60e,
            mid_negate_81b5d8fdb5d06385,
            mid_newInstance_65c8eb73c3fa277c,
            mid_pow_fbdfe4ad0fefc339,
            mid_pow_65c8eb73c3fa277c,
            mid_pow_6f4d2a282bd8f60e,
            mid_pow_2295d0130ebbe5ed,
            mid_reciprocal_81b5d8fdb5d06385,
            mid_remainder_fbdfe4ad0fefc339,
            mid_remainder_65c8eb73c3fa277c,
            mid_rint_81b5d8fdb5d06385,
            mid_rootN_6f4d2a282bd8f60e,
            mid_scalb_6f4d2a282bd8f60e,
            mid_sign_81b5d8fdb5d06385,
            mid_sin_81b5d8fdb5d06385,
            mid_sinCos_a447b7ca640e6b68,
            mid_sinh_81b5d8fdb5d06385,
            mid_sinhCosh_eef733c8a50b276f,
            mid_sqrt_81b5d8fdb5d06385,
            mid_subtract_fbdfe4ad0fefc339,
            mid_subtract_65c8eb73c3fa277c,
            mid_tan_81b5d8fdb5d06385,
            mid_tanh_81b5d8fdb5d06385,
            mid_taylor_dcbc7ce2902fa136,
            mid_toDegrees_81b5d8fdb5d06385,
            mid_toDerivativeStructure_73e277cbd957031a,
            mid_toRadians_81b5d8fdb5d06385,
            mid_ulp_81b5d8fdb5d06385,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateDerivative1(jobject obj) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateDerivative1(const UnivariateDerivative1& obj) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(obj) {}

          static UnivariateDerivative1 *PI;

          UnivariateDerivative1(const ::org::hipparchus::analysis::differentiation::DerivativeStructure &);
          UnivariateDerivative1(jdouble, jdouble);

          UnivariateDerivative1 abs() const;
          UnivariateDerivative1 acos() const;
          UnivariateDerivative1 acosh() const;
          UnivariateDerivative1 add(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 add(jdouble) const;
          UnivariateDerivative1 asin() const;
          UnivariateDerivative1 asinh() const;
          UnivariateDerivative1 atan() const;
          UnivariateDerivative1 atan2(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 atanh() const;
          UnivariateDerivative1 cbrt() const;
          UnivariateDerivative1 ceil() const;
          jint compareTo(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 compose(const JArray< jdouble > &) const;
          UnivariateDerivative1 copySign(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 copySign(jdouble) const;
          UnivariateDerivative1 cos() const;
          UnivariateDerivative1 cosh() const;
          UnivariateDerivative1 divide(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 divide(jdouble) const;
          jboolean equals(const ::java::lang::Object &) const;
          UnivariateDerivative1 exp() const;
          UnivariateDerivative1 expm1() const;
          UnivariateDerivative1 floor() const;
          jdouble getDerivative(jint) const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field getField() const;
          jdouble getFirstDerivative() const;
          jint getOrder() const;
          UnivariateDerivative1 getPi() const;
          jdouble getReal() const;
          jdouble getValue() const;
          jint hashCode() const;
          UnivariateDerivative1 hypot(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(const JArray< jdouble > &, const JArray< UnivariateDerivative1 > &) const;
          UnivariateDerivative1 linearCombination(const JArray< UnivariateDerivative1 > &, const JArray< UnivariateDerivative1 > &) const;
          UnivariateDerivative1 linearCombination(const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 log() const;
          UnivariateDerivative1 log10() const;
          UnivariateDerivative1 log1p() const;
          UnivariateDerivative1 multiply(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 multiply(jdouble) const;
          UnivariateDerivative1 multiply(jint) const;
          UnivariateDerivative1 negate() const;
          UnivariateDerivative1 newInstance(jdouble) const;
          UnivariateDerivative1 pow(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 pow(jdouble) const;
          UnivariateDerivative1 pow(jint) const;
          static UnivariateDerivative1 pow(jdouble, const UnivariateDerivative1 &);
          UnivariateDerivative1 reciprocal() const;
          UnivariateDerivative1 remainder(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 remainder(jdouble) const;
          UnivariateDerivative1 rint() const;
          UnivariateDerivative1 rootN(jint) const;
          UnivariateDerivative1 scalb(jint) const;
          UnivariateDerivative1 sign() const;
          UnivariateDerivative1 sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          UnivariateDerivative1 sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          UnivariateDerivative1 sqrt() const;
          UnivariateDerivative1 subtract(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 subtract(jdouble) const;
          UnivariateDerivative1 tan() const;
          UnivariateDerivative1 tanh() const;
          jdouble taylor(jdouble) const;
          UnivariateDerivative1 toDegrees() const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure toDerivativeStructure() const;
          UnivariateDerivative1 toRadians() const;
          UnivariateDerivative1 ulp() const;
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
        extern PyType_Def PY_TYPE_DEF(UnivariateDerivative1);
        extern PyTypeObject *PY_TYPE(UnivariateDerivative1);

        class t_UnivariateDerivative1 {
        public:
          PyObject_HEAD
          UnivariateDerivative1 object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_UnivariateDerivative1 *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const UnivariateDerivative1&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const UnivariateDerivative1&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
