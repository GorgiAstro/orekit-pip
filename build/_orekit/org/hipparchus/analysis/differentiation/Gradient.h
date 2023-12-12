#ifndef org_hipparchus_analysis_differentiation_Gradient_H
#define org_hipparchus_analysis_differentiation_Gradient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
        class Derivative;
        class GradientField;
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
    class CalculusFieldElement;
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        class Gradient : public ::java::lang::Object {
         public:
          enum {
            mid_init$_db212c86bccc027a,
            mid_init$_092013acd44a9e63,
            mid_abs_b157bc83ac48b3b3,
            mid_acos_b157bc83ac48b3b3,
            mid_acosh_b157bc83ac48b3b3,
            mid_add_8450c99fce53950a,
            mid_add_4daf157c6c3e2bac,
            mid_asin_b157bc83ac48b3b3,
            mid_asinh_b157bc83ac48b3b3,
            mid_atan_b157bc83ac48b3b3,
            mid_atan2_8450c99fce53950a,
            mid_atanh_b157bc83ac48b3b3,
            mid_cbrt_b157bc83ac48b3b3,
            mid_ceil_b157bc83ac48b3b3,
            mid_compose_8ad940146a4dc764,
            mid_constant_1e33a6f5b190762b,
            mid_copySign_8450c99fce53950a,
            mid_copySign_4daf157c6c3e2bac,
            mid_cos_b157bc83ac48b3b3,
            mid_cosh_b157bc83ac48b3b3,
            mid_divide_8450c99fce53950a,
            mid_divide_4daf157c6c3e2bac,
            mid_equals_221e8e85cb385209,
            mid_exp_b157bc83ac48b3b3,
            mid_expm1_b157bc83ac48b3b3,
            mid_floor_b157bc83ac48b3b3,
            mid_getExponent_412668abc8d889e9,
            mid_getField_0220b0561b303d27,
            mid_getFreeParameters_412668abc8d889e9,
            mid_getGradient_a53a7513ecedada2,
            mid_getOrder_412668abc8d889e9,
            mid_getPartialDerivative_75914fee15aa69bc,
            mid_getPartialDerivative_69cfb132c661aca4,
            mid_getPi_b157bc83ac48b3b3,
            mid_getReal_557b8123390d8d0c,
            mid_getValue_557b8123390d8d0c,
            mid_hashCode_412668abc8d889e9,
            mid_hypot_8450c99fce53950a,
            mid_linearCombination_fd21135a85c91f7d,
            mid_linearCombination_045e5a30857c0f68,
            mid_linearCombination_90d7be270d5182ac,
            mid_linearCombination_1a22ff9fc5003cd9,
            mid_linearCombination_1fef1967b3b3bfce,
            mid_linearCombination_3528ee32632d941d,
            mid_linearCombination_0eede1e5527c2b02,
            mid_linearCombination_19b4c8c7846ae49b,
            mid_log_b157bc83ac48b3b3,
            mid_log10_b157bc83ac48b3b3,
            mid_log1p_b157bc83ac48b3b3,
            mid_multiply_8450c99fce53950a,
            mid_multiply_4daf157c6c3e2bac,
            mid_multiply_6f1134332d5e73c5,
            mid_negate_b157bc83ac48b3b3,
            mid_newInstance_4daf157c6c3e2bac,
            mid_pow_8450c99fce53950a,
            mid_pow_4daf157c6c3e2bac,
            mid_pow_6f1134332d5e73c5,
            mid_pow_8393fa0c9dd710f1,
            mid_reciprocal_b157bc83ac48b3b3,
            mid_remainder_8450c99fce53950a,
            mid_remainder_4daf157c6c3e2bac,
            mid_rint_b157bc83ac48b3b3,
            mid_rootN_6f1134332d5e73c5,
            mid_scalb_6f1134332d5e73c5,
            mid_sign_b157bc83ac48b3b3,
            mid_sin_b157bc83ac48b3b3,
            mid_sinCos_5efdd92d175db117,
            mid_sinh_b157bc83ac48b3b3,
            mid_sinhCosh_e5a948cfec461975,
            mid_sqrt_b157bc83ac48b3b3,
            mid_subtract_8450c99fce53950a,
            mid_subtract_4daf157c6c3e2bac,
            mid_tan_b157bc83ac48b3b3,
            mid_tanh_b157bc83ac48b3b3,
            mid_taylor_86c4a0582e0747ce,
            mid_toDegrees_b157bc83ac48b3b3,
            mid_toDerivativeStructure_9f40c2a430225d38,
            mid_toRadians_b157bc83ac48b3b3,
            mid_ulp_b157bc83ac48b3b3,
            mid_variable_f883e044ad5079c2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Gradient(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Gradient(const Gradient& obj) : ::java::lang::Object(obj) {}

          Gradient(const ::org::hipparchus::analysis::differentiation::DerivativeStructure &);
          Gradient(jdouble, const JArray< jdouble > &);

          Gradient abs() const;
          Gradient acos() const;
          Gradient acosh() const;
          Gradient add(const Gradient &) const;
          Gradient add(jdouble) const;
          Gradient asin() const;
          Gradient asinh() const;
          Gradient atan() const;
          Gradient atan2(const Gradient &) const;
          Gradient atanh() const;
          Gradient cbrt() const;
          Gradient ceil() const;
          Gradient compose(const JArray< jdouble > &) const;
          static Gradient constant(jint, jdouble);
          Gradient copySign(const Gradient &) const;
          Gradient copySign(jdouble) const;
          Gradient cos() const;
          Gradient cosh() const;
          Gradient divide(const Gradient &) const;
          Gradient divide(jdouble) const;
          jboolean equals(const ::java::lang::Object &) const;
          Gradient exp() const;
          Gradient expm1() const;
          Gradient floor() const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::GradientField getField() const;
          jint getFreeParameters() const;
          JArray< jdouble > getGradient() const;
          jint getOrder() const;
          jdouble getPartialDerivative(const JArray< jint > &) const;
          jdouble getPartialDerivative(jint) const;
          Gradient getPi() const;
          jdouble getReal() const;
          jdouble getValue() const;
          jint hashCode() const;
          Gradient hypot(const Gradient &) const;
          Gradient linearCombination(const JArray< jdouble > &, const JArray< Gradient > &) const;
          Gradient linearCombination(const JArray< Gradient > &, const JArray< Gradient > &) const;
          Gradient linearCombination(const Gradient &, const Gradient &, const Gradient &, const Gradient &) const;
          Gradient linearCombination(jdouble, const Gradient &, jdouble, const Gradient &) const;
          Gradient linearCombination(const Gradient &, const Gradient &, const Gradient &, const Gradient &, const Gradient &, const Gradient &) const;
          Gradient linearCombination(jdouble, const Gradient &, jdouble, const Gradient &, jdouble, const Gradient &) const;
          Gradient linearCombination(const Gradient &, const Gradient &, const Gradient &, const Gradient &, const Gradient &, const Gradient &, const Gradient &, const Gradient &) const;
          Gradient linearCombination(jdouble, const Gradient &, jdouble, const Gradient &, jdouble, const Gradient &, jdouble, const Gradient &) const;
          Gradient log() const;
          Gradient log10() const;
          Gradient log1p() const;
          Gradient multiply(const Gradient &) const;
          Gradient multiply(jdouble) const;
          Gradient multiply(jint) const;
          Gradient negate() const;
          Gradient newInstance(jdouble) const;
          Gradient pow(const Gradient &) const;
          Gradient pow(jdouble) const;
          Gradient pow(jint) const;
          static Gradient pow(jdouble, const Gradient &);
          Gradient reciprocal() const;
          Gradient remainder(const Gradient &) const;
          Gradient remainder(jdouble) const;
          Gradient rint() const;
          Gradient rootN(jint) const;
          Gradient scalb(jint) const;
          Gradient sign() const;
          Gradient sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          Gradient sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          Gradient sqrt() const;
          Gradient subtract(const Gradient &) const;
          Gradient subtract(jdouble) const;
          Gradient tan() const;
          Gradient tanh() const;
          jdouble taylor(const JArray< jdouble > &) const;
          Gradient toDegrees() const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure toDerivativeStructure() const;
          Gradient toRadians() const;
          Gradient ulp() const;
          static Gradient variable(jint, jint, jdouble);
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
        extern PyType_Def PY_TYPE_DEF(Gradient);
        extern PyTypeObject *PY_TYPE(Gradient);

        class t_Gradient {
        public:
          PyObject_HEAD
          Gradient object;
          static PyObject *wrap_Object(const Gradient&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
