#ifndef org_hipparchus_analysis_differentiation_Gradient_H
#define org_hipparchus_analysis_differentiation_Gradient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
        class DerivativeStructure;
        class Derivative;
        class GradientField;
      }
    }
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalArgumentException;
    }
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
            mid_init$_d50646f27571013a,
            mid_init$_b67fd0977346c69b,
            mid_abs_4ed8e234724fadba,
            mid_acos_4ed8e234724fadba,
            mid_acosh_4ed8e234724fadba,
            mid_add_b766d8418848fc11,
            mid_add_18e14d8ad3d461ab,
            mid_asin_4ed8e234724fadba,
            mid_asinh_4ed8e234724fadba,
            mid_atan_4ed8e234724fadba,
            mid_atan2_b766d8418848fc11,
            mid_atanh_4ed8e234724fadba,
            mid_cbrt_4ed8e234724fadba,
            mid_ceil_4ed8e234724fadba,
            mid_compose_c0842cb6f40fe64e,
            mid_constant_39546ea18c226943,
            mid_copySign_b766d8418848fc11,
            mid_copySign_18e14d8ad3d461ab,
            mid_cos_4ed8e234724fadba,
            mid_cosh_4ed8e234724fadba,
            mid_divide_b766d8418848fc11,
            mid_divide_18e14d8ad3d461ab,
            mid_equals_229c87223f486349,
            mid_exp_4ed8e234724fadba,
            mid_expm1_4ed8e234724fadba,
            mid_floor_4ed8e234724fadba,
            mid_getExponent_f2f64475e4580546,
            mid_getField_36f1b6e993794a5b,
            mid_getFreeParameters_f2f64475e4580546,
            mid_getGradient_7cdc325af0834901,
            mid_getOrder_f2f64475e4580546,
            mid_getPartialDerivative_29ffeeddaa7151a9,
            mid_getPartialDerivative_b772323fc98b7293,
            mid_getPi_4ed8e234724fadba,
            mid_getReal_456d9a2f64d6b28d,
            mid_getValue_456d9a2f64d6b28d,
            mid_hashCode_f2f64475e4580546,
            mid_hypot_b766d8418848fc11,
            mid_linearCombination_a62e5d4409b0b474,
            mid_linearCombination_b59fdbc487124843,
            mid_linearCombination_7fb20c065de2424d,
            mid_linearCombination_71c5daca8fe22baf,
            mid_linearCombination_5a04786dd8440c75,
            mid_linearCombination_2d33601efcd3883c,
            mid_linearCombination_0301c2004d04c4f1,
            mid_linearCombination_7f1485ace86e01e4,
            mid_log_4ed8e234724fadba,
            mid_log10_4ed8e234724fadba,
            mid_log1p_4ed8e234724fadba,
            mid_multiply_b766d8418848fc11,
            mid_multiply_18e14d8ad3d461ab,
            mid_multiply_b2711a04f583f1d3,
            mid_negate_4ed8e234724fadba,
            mid_newInstance_18e14d8ad3d461ab,
            mid_pow_b766d8418848fc11,
            mid_pow_18e14d8ad3d461ab,
            mid_pow_b2711a04f583f1d3,
            mid_pow_ef4b2dc9bc2a300f,
            mid_reciprocal_4ed8e234724fadba,
            mid_remainder_b766d8418848fc11,
            mid_remainder_18e14d8ad3d461ab,
            mid_rint_4ed8e234724fadba,
            mid_rootN_b2711a04f583f1d3,
            mid_scalb_b2711a04f583f1d3,
            mid_sign_4ed8e234724fadba,
            mid_sin_4ed8e234724fadba,
            mid_sinCos_35f2499c71416a1a,
            mid_sinh_4ed8e234724fadba,
            mid_sinhCosh_c388a3eefde9d597,
            mid_sqrt_4ed8e234724fadba,
            mid_subtract_b766d8418848fc11,
            mid_subtract_18e14d8ad3d461ab,
            mid_tan_4ed8e234724fadba,
            mid_tanh_4ed8e234724fadba,
            mid_taylor_f05cb8c6dfd5e0b9,
            mid_toDegrees_4ed8e234724fadba,
            mid_toDerivativeStructure_c8ca2097cc2fbc0a,
            mid_toRadians_4ed8e234724fadba,
            mid_ulp_4ed8e234724fadba,
            mid_variable_df30a86b878f815c,
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
