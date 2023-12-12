#ifndef org_hipparchus_analysis_differentiation_FieldDerivativeStructure_H
#define org_hipparchus_analysis_differentiation_FieldDerivativeStructure_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class FieldDerivative;
        class FieldDerivativeStructure;
        class FDSFactory;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    class CalculusFieldElement;
    class Field;
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

        class FieldDerivativeStructure : public ::java::lang::Object {
         public:
          enum {
            mid_abs_5997f22f8d76210e,
            mid_acos_5997f22f8d76210e,
            mid_acosh_5997f22f8d76210e,
            mid_add_429596958fb69dd1,
            mid_add_16af759261ef50b4,
            mid_add_bcb3f877ec28ee10,
            mid_asin_5997f22f8d76210e,
            mid_asinh_5997f22f8d76210e,
            mid_atan_5997f22f8d76210e,
            mid_atan2_429596958fb69dd1,
            mid_atan2_2d018f5095643882,
            mid_atanh_5997f22f8d76210e,
            mid_cbrt_5997f22f8d76210e,
            mid_ceil_5997f22f8d76210e,
            mid_compose_1e72ceb97300ff53,
            mid_compose_276eb72cb82e871b,
            mid_copySign_429596958fb69dd1,
            mid_copySign_16af759261ef50b4,
            mid_copySign_bcb3f877ec28ee10,
            mid_cos_5997f22f8d76210e,
            mid_cosh_5997f22f8d76210e,
            mid_differentiate_6e4843d040f889ad,
            mid_divide_429596958fb69dd1,
            mid_divide_16af759261ef50b4,
            mid_divide_bcb3f877ec28ee10,
            mid_exp_5997f22f8d76210e,
            mid_expm1_5997f22f8d76210e,
            mid_floor_5997f22f8d76210e,
            mid_getAllDerivatives_41762fd4377ff26e,
            mid_getExponent_412668abc8d889e9,
            mid_getFactory_658f2293700a611b,
            mid_getField_20f98801541dcec1,
            mid_getFreeParameters_412668abc8d889e9,
            mid_getOrder_412668abc8d889e9,
            mid_getPartialDerivative_12d47fa54f2033ee,
            mid_getPi_5997f22f8d76210e,
            mid_getReal_557b8123390d8d0c,
            mid_getValue_613c8f46c659f636,
            mid_hypot_429596958fb69dd1,
            mid_hypot_2d018f5095643882,
            mid_integrate_6e4843d040f889ad,
            mid_linearCombination_d5f37cac3c26392b,
            mid_linearCombination_85436f76b3fd6d98,
            mid_linearCombination_63740f678ff04e3d,
            mid_linearCombination_afec3b6d6b6b1351,
            mid_linearCombination_de8a714941bdf870,
            mid_linearCombination_86c86b8b3c4165ed,
            mid_linearCombination_8b427598a4050513,
            mid_linearCombination_5dc5854450f18701,
            mid_linearCombination_1db09076edab1e5c,
            mid_linearCombination_c8dd04492392291b,
            mid_linearCombination_2e0c76a933f3e0fc,
            mid_linearCombination_0991b9364c93ace2,
            mid_log_5997f22f8d76210e,
            mid_log10_5997f22f8d76210e,
            mid_log1p_5997f22f8d76210e,
            mid_multiply_429596958fb69dd1,
            mid_multiply_16af759261ef50b4,
            mid_multiply_40193fcf634e0858,
            mid_multiply_bcb3f877ec28ee10,
            mid_negate_5997f22f8d76210e,
            mid_newInstance_16af759261ef50b4,
            mid_pow_429596958fb69dd1,
            mid_pow_16af759261ef50b4,
            mid_pow_40193fcf634e0858,
            mid_pow_152278d6668a3a71,
            mid_rebase_80af53a36b68e2b4,
            mid_reciprocal_5997f22f8d76210e,
            mid_remainder_429596958fb69dd1,
            mid_remainder_16af759261ef50b4,
            mid_remainder_bcb3f877ec28ee10,
            mid_rint_5997f22f8d76210e,
            mid_rootN_40193fcf634e0858,
            mid_scalb_40193fcf634e0858,
            mid_sign_5997f22f8d76210e,
            mid_sin_5997f22f8d76210e,
            mid_sinCos_5efdd92d175db117,
            mid_sinh_5997f22f8d76210e,
            mid_sinhCosh_e5a948cfec461975,
            mid_sqrt_5997f22f8d76210e,
            mid_subtract_429596958fb69dd1,
            mid_subtract_16af759261ef50b4,
            mid_subtract_bcb3f877ec28ee10,
            mid_tan_5997f22f8d76210e,
            mid_tanh_5997f22f8d76210e,
            mid_taylor_c2a9122c04338397,
            mid_taylor_e3919ad898361abd,
            mid_toDegrees_5997f22f8d76210e,
            mid_toRadians_5997f22f8d76210e,
            mid_ulp_5997f22f8d76210e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldDerivativeStructure(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldDerivativeStructure(const FieldDerivativeStructure& obj) : ::java::lang::Object(obj) {}

          FieldDerivativeStructure abs() const;
          FieldDerivativeStructure acos() const;
          FieldDerivativeStructure acosh() const;
          FieldDerivativeStructure add(const FieldDerivativeStructure &) const;
          FieldDerivativeStructure add(jdouble) const;
          FieldDerivativeStructure add(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldDerivativeStructure asin() const;
          FieldDerivativeStructure asinh() const;
          FieldDerivativeStructure atan() const;
          FieldDerivativeStructure atan2(const FieldDerivativeStructure &) const;
          static FieldDerivativeStructure atan2(const FieldDerivativeStructure &, const FieldDerivativeStructure &);
          FieldDerivativeStructure atanh() const;
          FieldDerivativeStructure cbrt() const;
          FieldDerivativeStructure ceil() const;
          FieldDerivativeStructure compose(const JArray< jdouble > &) const;
          FieldDerivativeStructure compose(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          FieldDerivativeStructure copySign(const FieldDerivativeStructure &) const;
          FieldDerivativeStructure copySign(jdouble) const;
          FieldDerivativeStructure copySign(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldDerivativeStructure cos() const;
          FieldDerivativeStructure cosh() const;
          FieldDerivativeStructure differentiate(jint, jint) const;
          FieldDerivativeStructure divide(const FieldDerivativeStructure &) const;
          FieldDerivativeStructure divide(jdouble) const;
          FieldDerivativeStructure divide(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldDerivativeStructure exp() const;
          FieldDerivativeStructure expm1() const;
          FieldDerivativeStructure floor() const;
          JArray< ::org::hipparchus::CalculusFieldElement > getAllDerivatives() const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::FDSFactory getFactory() const;
          ::org::hipparchus::Field getField() const;
          jint getFreeParameters() const;
          jint getOrder() const;
          ::org::hipparchus::CalculusFieldElement getPartialDerivative(const JArray< jint > &) const;
          FieldDerivativeStructure getPi() const;
          jdouble getReal() const;
          ::org::hipparchus::CalculusFieldElement getValue() const;
          FieldDerivativeStructure hypot(const FieldDerivativeStructure &) const;
          static FieldDerivativeStructure hypot(const FieldDerivativeStructure &, const FieldDerivativeStructure &);
          FieldDerivativeStructure integrate(jint, jint) const;
          FieldDerivativeStructure linearCombination(const JArray< jdouble > &, const JArray< FieldDerivativeStructure > &) const;
          FieldDerivativeStructure linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > &, const JArray< FieldDerivativeStructure > &) const;
          FieldDerivativeStructure linearCombination(const JArray< FieldDerivativeStructure > &, const JArray< FieldDerivativeStructure > &) const;
          FieldDerivativeStructure linearCombination(const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(jdouble, const FieldDerivativeStructure &, jdouble, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &, const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(jdouble, const FieldDerivativeStructure &, jdouble, const FieldDerivativeStructure &, jdouble, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &, const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &, const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(jdouble, const FieldDerivativeStructure &, jdouble, const FieldDerivativeStructure &, jdouble, const FieldDerivativeStructure &, jdouble, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure linearCombination(const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &, const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &, const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &, const ::org::hipparchus::CalculusFieldElement &, const FieldDerivativeStructure &) const;
          FieldDerivativeStructure log() const;
          FieldDerivativeStructure log10() const;
          FieldDerivativeStructure log1p() const;
          FieldDerivativeStructure multiply(const FieldDerivativeStructure &) const;
          FieldDerivativeStructure multiply(jdouble) const;
          FieldDerivativeStructure multiply(jint) const;
          FieldDerivativeStructure multiply(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldDerivativeStructure negate() const;
          FieldDerivativeStructure newInstance(jdouble) const;
          FieldDerivativeStructure pow(const FieldDerivativeStructure &) const;
          FieldDerivativeStructure pow(jdouble) const;
          FieldDerivativeStructure pow(jint) const;
          static FieldDerivativeStructure pow(jdouble, const FieldDerivativeStructure &);
          FieldDerivativeStructure rebase(const JArray< FieldDerivativeStructure > &) const;
          FieldDerivativeStructure reciprocal() const;
          FieldDerivativeStructure remainder(const FieldDerivativeStructure &) const;
          FieldDerivativeStructure remainder(jdouble) const;
          FieldDerivativeStructure remainder(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldDerivativeStructure rint() const;
          FieldDerivativeStructure rootN(jint) const;
          FieldDerivativeStructure scalb(jint) const;
          FieldDerivativeStructure sign() const;
          FieldDerivativeStructure sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          FieldDerivativeStructure sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          FieldDerivativeStructure sqrt() const;
          FieldDerivativeStructure subtract(const FieldDerivativeStructure &) const;
          FieldDerivativeStructure subtract(jdouble) const;
          FieldDerivativeStructure subtract(const ::org::hipparchus::CalculusFieldElement &) const;
          FieldDerivativeStructure tan() const;
          FieldDerivativeStructure tanh() const;
          ::org::hipparchus::CalculusFieldElement taylor(const JArray< jdouble > &) const;
          ::org::hipparchus::CalculusFieldElement taylor(const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
          FieldDerivativeStructure toDegrees() const;
          FieldDerivativeStructure toRadians() const;
          FieldDerivativeStructure ulp() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldDerivativeStructure);
        extern PyTypeObject *PY_TYPE(FieldDerivativeStructure);

        class t_FieldDerivativeStructure {
        public:
          PyObject_HEAD
          FieldDerivativeStructure object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldDerivativeStructure *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldDerivativeStructure&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldDerivativeStructure&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
