#ifndef org_hipparchus_analysis_differentiation_FieldGradient_H
#define org_hipparchus_analysis_differentiation_FieldGradient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldDerivative;
        class FieldGradientField;
        class FieldGradient;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        class FieldGradient : public ::java::lang::Object {
         public:
          enum {
            mid_init$_d5582e6a53cddd0c,
            mid_init$_ef0bb554ba052051,
            mid_abs_851fced738c97d02,
            mid_acos_851fced738c97d02,
            mid_acosh_851fced738c97d02,
            mid_add_65c422e763f3db46,
            mid_add_7c05cc19420282ed,
            mid_add_750ab8e881e992d2,
            mid_asin_851fced738c97d02,
            mid_asinh_851fced738c97d02,
            mid_atan_851fced738c97d02,
            mid_atan2_65c422e763f3db46,
            mid_atanh_851fced738c97d02,
            mid_cbrt_851fced738c97d02,
            mid_ceil_851fced738c97d02,
            mid_compose_4cce945c538c4a2d,
            mid_constant_2b015d88b1f5affa,
            mid_copySign_65c422e763f3db46,
            mid_copySign_7c05cc19420282ed,
            mid_copySign_750ab8e881e992d2,
            mid_cos_851fced738c97d02,
            mid_cosh_851fced738c97d02,
            mid_divide_65c422e763f3db46,
            mid_divide_7c05cc19420282ed,
            mid_divide_750ab8e881e992d2,
            mid_equals_229c87223f486349,
            mid_exp_851fced738c97d02,
            mid_expm1_851fced738c97d02,
            mid_floor_851fced738c97d02,
            mid_getExponent_f2f64475e4580546,
            mid_getField_eaee35878aa9fd7c,
            mid_getFreeParameters_f2f64475e4580546,
            mid_getGradient_01c7d10e96d5cf94,
            mid_getOrder_f2f64475e4580546,
            mid_getPartialDerivative_f622835d869c0081,
            mid_getPartialDerivative_d0960d09d84b1c1d,
            mid_getPi_851fced738c97d02,
            mid_getReal_456d9a2f64d6b28d,
            mid_getValue_e6d4d3215c30992a,
            mid_getValueField_70b4bbd3fa378d6b,
            mid_hashCode_f2f64475e4580546,
            mid_hypot_65c422e763f3db46,
            mid_linearCombination_d83ba043fd763eae,
            mid_linearCombination_233139fc8f728fd2,
            mid_linearCombination_978f2aed19cad37a,
            mid_linearCombination_e5acb866d76d9b25,
            mid_linearCombination_46e2eb2d36e14bc3,
            mid_linearCombination_82aa0e4514a16f10,
            mid_linearCombination_4033ffa367494482,
            mid_linearCombination_fd2f5d1de1813202,
            mid_linearCombination_192bdc44a81de9fc,
            mid_linearCombination_b17fedfe3af5622c,
            mid_log_851fced738c97d02,
            mid_log10_851fced738c97d02,
            mid_log1p_851fced738c97d02,
            mid_multiply_65c422e763f3db46,
            mid_multiply_7c05cc19420282ed,
            mid_multiply_f5a652a5467bb563,
            mid_multiply_750ab8e881e992d2,
            mid_negate_851fced738c97d02,
            mid_newInstance_7c05cc19420282ed,
            mid_newInstance_750ab8e881e992d2,
            mid_pow_65c422e763f3db46,
            mid_pow_7c05cc19420282ed,
            mid_pow_f5a652a5467bb563,
            mid_pow_9a0abf650e52a0a0,
            mid_reciprocal_851fced738c97d02,
            mid_remainder_65c422e763f3db46,
            mid_remainder_7c05cc19420282ed,
            mid_remainder_750ab8e881e992d2,
            mid_rint_851fced738c97d02,
            mid_rootN_f5a652a5467bb563,
            mid_scalb_f5a652a5467bb563,
            mid_sign_851fced738c97d02,
            mid_sin_851fced738c97d02,
            mid_sinCos_35f2499c71416a1a,
            mid_sinh_851fced738c97d02,
            mid_sinhCosh_c388a3eefde9d597,
            mid_sqrt_851fced738c97d02,
            mid_subtract_65c422e763f3db46,
            mid_subtract_7c05cc19420282ed,
            mid_subtract_750ab8e881e992d2,
            mid_tan_851fced738c97d02,
            mid_tanh_851fced738c97d02,
            mid_taylor_5e09d3ff87d23c4c,
            mid_taylor_05c598bf3375e090,
            mid_toDegrees_851fced738c97d02,
            mid_toDerivativeStructure_7208bb4259086f92,
            mid_toRadians_851fced738c97d02,
            mid_ulp_851fced738c97d02,
            mid_variable_dc0fc4ae96d1f8ea,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldGradient(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldGradient(const FieldGradient& obj) : ::java::lang::Object(obj) {}

          FieldGradient(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure &);
          FieldGradient(const ::org::hipparchus::CalculusFieldElement &, const JArray< ::org::hipparchus::CalculusFieldElement > &);

          FieldGradient abs() const;
          FieldGradient acos() const;
          FieldGradient acosh() const;
          FieldGradient add(const FieldGradient &) const;
          FieldGradient add(jdouble) const;
          FieldGradient add(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldGradient asin() const;
          FieldGradient asinh() const;
          FieldGradient atan() const;
          FieldGradient atan2(const FieldGradient &) const;
          FieldGradient atanh() const;
          FieldGradient cbrt() const;
          FieldGradient ceil() const;
          FieldGradient compose(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &) const;
          static FieldGradient constant(jint, const ::org::hipparchus::CalculusFieldElement &);
          FieldGradient copySign(const FieldGradient &) const;
          FieldGradient copySign(jdouble) const;
          FieldGradient copySign(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldGradient cos() const;
          FieldGradient cosh() const;
          FieldGradient divide(const FieldGradient &) const;
          FieldGradient divide(jdouble) const;
          FieldGradient divide(const ::org::hipparchus::CalculusFieldElement &) const;
          jboolean equals(const ::java::lang::Object &) const;
          FieldGradient exp() const;
          FieldGradient expm1() const;
          FieldGradient floor() const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::FieldGradientField getField() const;
          jint getFreeParameters() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getGradient() const;
          jint getOrder() const;
          ::org::hipparchus::CalculusFieldElement getPartialDerivative(const JArray< jint > &) const;
          ::org::hipparchus::CalculusFieldElement getPartialDerivative(jint) const;
          FieldGradient getPi() const;
          jdouble getReal() const;
          ::org::hipparchus::CalculusFieldElement getValue() const;
          ::org::hipparchus::Field getValueField() const;
          jint hashCode() const;
          FieldGradient hypot(const FieldGradient &) const;
          FieldGradient linearCombination(const JArray< jdouble > &, const JArray< FieldGradient > &) const;
          FieldGradient linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< FieldGradient > &) const;
          FieldGradient linearCombination(const JArray< FieldGradient > &, const JArray< FieldGradient > &) const;
          FieldGradient linearCombination(const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &) const;
          FieldGradient linearCombination(jdouble, const FieldGradient &, jdouble, const FieldGradient &) const;
          FieldGradient linearCombination(const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &) const;
          FieldGradient linearCombination(jdouble, const FieldGradient &, jdouble, const FieldGradient &, jdouble, const FieldGradient &) const;
          FieldGradient linearCombination(const ::org::hipparchus::CalculusFieldElement &, const FieldGradient &, const ::org::hipparchus::CalculusFieldElement &, const FieldGradient &, const ::org::hipparchus::CalculusFieldElement &, const FieldGradient &) const;
          FieldGradient linearCombination(const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &, const FieldGradient &) const;
          FieldGradient linearCombination(jdouble, const FieldGradient &, jdouble, const FieldGradient &, jdouble, const FieldGradient &, jdouble, const FieldGradient &) const;
          FieldGradient log() const;
          FieldGradient log10() const;
          FieldGradient log1p() const;
          FieldGradient multiply(const FieldGradient &) const;
          FieldGradient multiply(jdouble) const;
          FieldGradient multiply(jint) const;
          FieldGradient multiply(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldGradient negate() const;
          FieldGradient newInstance(jdouble) const;
          FieldGradient newInstance(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldGradient pow(const FieldGradient &) const;
          FieldGradient pow(jdouble) const;
          FieldGradient pow(jint) const;
          static FieldGradient pow(jdouble, const FieldGradient &);
          FieldGradient reciprocal() const;
          FieldGradient remainder(const FieldGradient &) const;
          FieldGradient remainder(jdouble) const;
          FieldGradient remainder(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldGradient rint() const;
          FieldGradient rootN(jint) const;
          FieldGradient scalb(jint) const;
          FieldGradient sign() const;
          FieldGradient sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          FieldGradient sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          FieldGradient sqrt() const;
          FieldGradient subtract(const FieldGradient &) const;
          FieldGradient subtract(jdouble) const;
          FieldGradient subtract(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldGradient tan() const;
          FieldGradient tanh() const;
          ::org::hipparchus::CalculusFieldElement taylor(const JArray< jdouble > &) const;
          ::org::hipparchus::CalculusFieldElement taylor(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          FieldGradient toDegrees() const;
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure toDerivativeStructure() const;
          FieldGradient toRadians() const;
          FieldGradient ulp() const;
          static FieldGradient variable(jint, jint, const ::org::hipparchus::CalculusFieldElement &);
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
        extern PyType_Def PY_TYPE_DEF(FieldGradient);
        extern PyTypeObject *PY_TYPE(FieldGradient);

        class t_FieldGradient {
        public:
          PyObject_HEAD
          FieldGradient object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldGradient *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldGradient&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldGradient&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
