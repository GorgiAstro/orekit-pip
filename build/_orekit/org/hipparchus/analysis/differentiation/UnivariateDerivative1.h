#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative1_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative1_H

#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDerivative1;
        class UnivariateDerivative1Field;
        class DerivativeStructure;
      }
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
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
            mid_init$_0e3cd27f693a0167,
            mid_init$_369b4c97255d5afa,
            mid_abs_7826974382aac05b,
            mid_acos_7826974382aac05b,
            mid_acosh_7826974382aac05b,
            mid_add_a70b8cbdc3613363,
            mid_add_f85c512395e6884c,
            mid_asin_7826974382aac05b,
            mid_asinh_7826974382aac05b,
            mid_atan_7826974382aac05b,
            mid_atan2_a70b8cbdc3613363,
            mid_atanh_7826974382aac05b,
            mid_cbrt_7826974382aac05b,
            mid_ceil_7826974382aac05b,
            mid_compareTo_f8e60c181e510a89,
            mid_compose_3ebcb47dbae0f3f9,
            mid_copySign_a70b8cbdc3613363,
            mid_copySign_f85c512395e6884c,
            mid_cos_7826974382aac05b,
            mid_cosh_7826974382aac05b,
            mid_divide_a70b8cbdc3613363,
            mid_divide_f85c512395e6884c,
            mid_equals_460c5e2d9d51c6cc,
            mid_exp_7826974382aac05b,
            mid_expm1_7826974382aac05b,
            mid_floor_7826974382aac05b,
            mid_getDerivative_2afcbc21f4e57ab2,
            mid_getExponent_55546ef6a647f39b,
            mid_getField_99ac5972aa279a25,
            mid_getFirstDerivative_b74f83833fdad017,
            mid_getOrder_55546ef6a647f39b,
            mid_getPi_7826974382aac05b,
            mid_getReal_b74f83833fdad017,
            mid_getValue_b74f83833fdad017,
            mid_hashCode_55546ef6a647f39b,
            mid_hypot_a70b8cbdc3613363,
            mid_linearCombination_52288f81019d2ada,
            mid_linearCombination_cc0b0196c8231e40,
            mid_linearCombination_9ca7cf237f1213ef,
            mid_linearCombination_00a4b720dea21f59,
            mid_linearCombination_be3b39149c562198,
            mid_linearCombination_6718f298ee4f43b0,
            mid_linearCombination_19fa63b1cd1b72c5,
            mid_linearCombination_1fd8a27a51b26f5c,
            mid_log_7826974382aac05b,
            mid_log10_7826974382aac05b,
            mid_log1p_7826974382aac05b,
            mid_multiply_a70b8cbdc3613363,
            mid_multiply_f85c512395e6884c,
            mid_multiply_41e12cbc32008fc0,
            mid_negate_7826974382aac05b,
            mid_newInstance_f85c512395e6884c,
            mid_pow_a70b8cbdc3613363,
            mid_pow_f85c512395e6884c,
            mid_pow_41e12cbc32008fc0,
            mid_pow_c8c5f953f921b257,
            mid_reciprocal_7826974382aac05b,
            mid_remainder_a70b8cbdc3613363,
            mid_remainder_f85c512395e6884c,
            mid_rint_7826974382aac05b,
            mid_rootN_41e12cbc32008fc0,
            mid_scalb_41e12cbc32008fc0,
            mid_sign_7826974382aac05b,
            mid_sin_7826974382aac05b,
            mid_sinCos_e434dd780193da2f,
            mid_sinh_7826974382aac05b,
            mid_sinhCosh_4a1e2142f3481995,
            mid_sqrt_7826974382aac05b,
            mid_subtract_a70b8cbdc3613363,
            mid_subtract_f85c512395e6884c,
            mid_tan_7826974382aac05b,
            mid_tanh_7826974382aac05b,
            mid_taylor_04fd0666b613d2ab,
            mid_toDegrees_7826974382aac05b,
            mid_toDerivativeStructure_57983c4d4b4a2f7f,
            mid_toRadians_7826974382aac05b,
            mid_ulp_7826974382aac05b,
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
