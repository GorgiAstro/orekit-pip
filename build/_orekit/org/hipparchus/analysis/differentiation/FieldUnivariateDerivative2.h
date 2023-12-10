#ifndef org_hipparchus_analysis_differentiation_FieldUnivariateDerivative2_H
#define org_hipparchus_analysis_differentiation_FieldUnivariateDerivative2_H

#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldUnivariateDerivative2Field;
        class FieldDerivativeStructure;
        class FieldUnivariateDerivative2;
      }
    }
    class Field;
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

        class FieldUnivariateDerivative2 : public ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative {
         public:
          enum {
            mid_init$_d5582e6a53cddd0c,
            mid_init$_5b191078c5a85105,
            mid_abs_93920066ce6cb101,
            mid_acos_93920066ce6cb101,
            mid_acosh_93920066ce6cb101,
            mid_add_61645050a5bf1069,
            mid_add_a7c4fcfc68490ba0,
            mid_add_032b87e28c3487a8,
            mid_asin_93920066ce6cb101,
            mid_asinh_93920066ce6cb101,
            mid_atan_93920066ce6cb101,
            mid_atan2_61645050a5bf1069,
            mid_atanh_93920066ce6cb101,
            mid_cbrt_93920066ce6cb101,
            mid_ceil_93920066ce6cb101,
            mid_compose_7e7d3f7c520203ea,
            mid_copySign_61645050a5bf1069,
            mid_copySign_a7c4fcfc68490ba0,
            mid_copySign_032b87e28c3487a8,
            mid_cos_93920066ce6cb101,
            mid_cosh_93920066ce6cb101,
            mid_divide_61645050a5bf1069,
            mid_divide_a7c4fcfc68490ba0,
            mid_divide_032b87e28c3487a8,
            mid_equals_229c87223f486349,
            mid_exp_93920066ce6cb101,
            mid_expm1_93920066ce6cb101,
            mid_floor_93920066ce6cb101,
            mid_getDerivative_d0960d09d84b1c1d,
            mid_getExponent_f2f64475e4580546,
            mid_getField_f3cf80c7f2a55c83,
            mid_getFirstDerivative_e6d4d3215c30992a,
            mid_getOrder_f2f64475e4580546,
            mid_getPi_93920066ce6cb101,
            mid_getReal_456d9a2f64d6b28d,
            mid_getSecondDerivative_e6d4d3215c30992a,
            mid_getValue_e6d4d3215c30992a,
            mid_getValueField_70b4bbd3fa378d6b,
            mid_hashCode_f2f64475e4580546,
            mid_hypot_61645050a5bf1069,
            mid_linearCombination_32ee2a05356a085c,
            mid_linearCombination_6165779c10815d6f,
            mid_linearCombination_f8d717ba7a1a39c4,
            mid_linearCombination_3c3556b4cafe1806,
            mid_linearCombination_9e3d685b4665907d,
            mid_linearCombination_ed3e7195bbf094d1,
            mid_linearCombination_4b9431d705d26f5b,
            mid_linearCombination_4285511ac1c807a4,
            mid_linearCombination_c1848064206e2afd,
            mid_linearCombination_919398f757bbbdde,
            mid_log_93920066ce6cb101,
            mid_log10_93920066ce6cb101,
            mid_log1p_93920066ce6cb101,
            mid_multiply_61645050a5bf1069,
            mid_multiply_a7c4fcfc68490ba0,
            mid_multiply_2c66592623e4e056,
            mid_multiply_032b87e28c3487a8,
            mid_negate_93920066ce6cb101,
            mid_newInstance_a7c4fcfc68490ba0,
            mid_pow_61645050a5bf1069,
            mid_pow_a7c4fcfc68490ba0,
            mid_pow_2c66592623e4e056,
            mid_pow_aaab3831596c003a,
            mid_reciprocal_93920066ce6cb101,
            mid_remainder_61645050a5bf1069,
            mid_remainder_a7c4fcfc68490ba0,
            mid_remainder_032b87e28c3487a8,
            mid_rint_93920066ce6cb101,
            mid_rootN_2c66592623e4e056,
            mid_scalb_2c66592623e4e056,
            mid_sign_93920066ce6cb101,
            mid_sin_93920066ce6cb101,
            mid_sinCos_35f2499c71416a1a,
            mid_sinh_93920066ce6cb101,
            mid_sinhCosh_c388a3eefde9d597,
            mid_sqrt_93920066ce6cb101,
            mid_subtract_61645050a5bf1069,
            mid_subtract_a7c4fcfc68490ba0,
            mid_subtract_032b87e28c3487a8,
            mid_tan_93920066ce6cb101,
            mid_tanh_93920066ce6cb101,
            mid_taylor_cc0a3d6abf820939,
            mid_taylor_d3398190482814dc,
            mid_toDegrees_93920066ce6cb101,
            mid_toDerivativeStructure_7208bb4259086f92,
            mid_toRadians_93920066ce6cb101,
            mid_ulp_93920066ce6cb101,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldUnivariateDerivative2(jobject obj) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldUnivariateDerivative2(const FieldUnivariateDerivative2& obj) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(obj) {}

          FieldUnivariateDerivative2(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure &);
          FieldUnivariateDerivative2(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);

          FieldUnivariateDerivative2 abs() const;
          FieldUnivariateDerivative2 acos() const;
          FieldUnivariateDerivative2 acosh() const;
          FieldUnivariateDerivative2 add(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 add(jdouble) const;
          FieldUnivariateDerivative2 add(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative2 asin() const;
          FieldUnivariateDerivative2 asinh() const;
          FieldUnivariateDerivative2 atan() const;
          FieldUnivariateDerivative2 atan2(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 atanh() const;
          FieldUnivariateDerivative2 cbrt() const;
          FieldUnivariateDerivative2 ceil() const;
          FieldUnivariateDerivative2 compose(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative2 copySign(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 copySign(jdouble) const;
          FieldUnivariateDerivative2 copySign(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative2 cos() const;
          FieldUnivariateDerivative2 cosh() const;
          FieldUnivariateDerivative2 divide(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 divide(jdouble) const;
          FieldUnivariateDerivative2 divide(const ::org::hipparchus::CalculusFieldElement &) const;
          jboolean equals(const ::java::lang::Object &) const;
          FieldUnivariateDerivative2 exp() const;
          FieldUnivariateDerivative2 expm1() const;
          FieldUnivariateDerivative2 floor() const;
          ::org::hipparchus::CalculusFieldElement getDerivative(jint) const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field getField() const;
          ::org::hipparchus::CalculusFieldElement getFirstDerivative() const;
          jint getOrder() const;
          FieldUnivariateDerivative2 getPi() const;
          jdouble getReal() const;
          ::org::hipparchus::CalculusFieldElement getSecondDerivative() const;
          ::org::hipparchus::CalculusFieldElement getValue() const;
          ::org::hipparchus::Field getValueField() const;
          jint hashCode() const;
          FieldUnivariateDerivative2 hypot(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 linearCombination(const JArray< jdouble > &, const JArray< FieldUnivariateDerivative2 > &) const;
          FieldUnivariateDerivative2 linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< FieldUnivariateDerivative2 > &) const;
          FieldUnivariateDerivative2 linearCombination(const JArray< FieldUnivariateDerivative2 > &, const JArray< FieldUnivariateDerivative2 > &) const;
          FieldUnivariateDerivative2 linearCombination(const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 linearCombination(jdouble, const FieldUnivariateDerivative2 &, jdouble, const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 linearCombination(const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 linearCombination(jdouble, const FieldUnivariateDerivative2 &, jdouble, const FieldUnivariateDerivative2 &, jdouble, const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 linearCombination(const ::org::hipparchus::CalculusFieldElement &, const FieldUnivariateDerivative2 &, const ::org::hipparchus::CalculusFieldElement &, const FieldUnivariateDerivative2 &, const ::org::hipparchus::CalculusFieldElement &, const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 linearCombination(const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &, const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 linearCombination(jdouble, const FieldUnivariateDerivative2 &, jdouble, const FieldUnivariateDerivative2 &, jdouble, const FieldUnivariateDerivative2 &, jdouble, const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 log() const;
          FieldUnivariateDerivative2 log10() const;
          FieldUnivariateDerivative2 log1p() const;
          FieldUnivariateDerivative2 multiply(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 multiply(jdouble) const;
          FieldUnivariateDerivative2 multiply(jint) const;
          FieldUnivariateDerivative2 multiply(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative2 negate() const;
          FieldUnivariateDerivative2 newInstance(jdouble) const;
          FieldUnivariateDerivative2 pow(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 pow(jdouble) const;
          FieldUnivariateDerivative2 pow(jint) const;
          static FieldUnivariateDerivative2 pow(jdouble, const FieldUnivariateDerivative2 &);
          FieldUnivariateDerivative2 reciprocal() const;
          FieldUnivariateDerivative2 remainder(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 remainder(jdouble) const;
          FieldUnivariateDerivative2 remainder(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative2 rint() const;
          FieldUnivariateDerivative2 rootN(jint) const;
          FieldUnivariateDerivative2 scalb(jint) const;
          FieldUnivariateDerivative2 sign() const;
          FieldUnivariateDerivative2 sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          FieldUnivariateDerivative2 sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          FieldUnivariateDerivative2 sqrt() const;
          FieldUnivariateDerivative2 subtract(const FieldUnivariateDerivative2 &) const;
          FieldUnivariateDerivative2 subtract(jdouble) const;
          FieldUnivariateDerivative2 subtract(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative2 tan() const;
          FieldUnivariateDerivative2 tanh() const;
          ::org::hipparchus::CalculusFieldElement taylor(jdouble) const;
          ::org::hipparchus::CalculusFieldElement taylor(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldUnivariateDerivative2 toDegrees() const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure toDerivativeStructure() const;
          FieldUnivariateDerivative2 toRadians() const;
          FieldUnivariateDerivative2 ulp() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldUnivariateDerivative2);
        extern PyTypeObject *PY_TYPE(FieldUnivariateDerivative2);

        class t_FieldUnivariateDerivative2 {
        public:
          PyObject_HEAD
          FieldUnivariateDerivative2 object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldUnivariateDerivative2 *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldUnivariateDerivative2&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldUnivariateDerivative2&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
