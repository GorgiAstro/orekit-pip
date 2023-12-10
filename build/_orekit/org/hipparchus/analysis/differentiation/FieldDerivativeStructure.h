#ifndef org_hipparchus_analysis_differentiation_FieldDerivativeStructure_H
#define org_hipparchus_analysis_differentiation_FieldDerivativeStructure_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace analysis {
      namespace differentiation {
        class FieldDerivative;
        class FDSFactory;
        class FieldDerivativeStructure;
      }
    }
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
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
            mid_abs_aa5c3ca19ecbe240,
            mid_acos_aa5c3ca19ecbe240,
            mid_acosh_aa5c3ca19ecbe240,
            mid_add_92faf58b9a0bd4a3,
            mid_add_629ba89773b89477,
            mid_add_dc82eda6d2eed253,
            mid_asin_aa5c3ca19ecbe240,
            mid_asinh_aa5c3ca19ecbe240,
            mid_atan_aa5c3ca19ecbe240,
            mid_atan2_92faf58b9a0bd4a3,
            mid_atan2_ab641a208c40f840,
            mid_atanh_aa5c3ca19ecbe240,
            mid_cbrt_aa5c3ca19ecbe240,
            mid_ceil_aa5c3ca19ecbe240,
            mid_compose_418b3af1711b43e6,
            mid_compose_44d0136f1427ef1d,
            mid_copySign_92faf58b9a0bd4a3,
            mid_copySign_629ba89773b89477,
            mid_copySign_dc82eda6d2eed253,
            mid_cos_aa5c3ca19ecbe240,
            mid_cosh_aa5c3ca19ecbe240,
            mid_differentiate_64b030afd4e7438b,
            mid_divide_92faf58b9a0bd4a3,
            mid_divide_629ba89773b89477,
            mid_divide_dc82eda6d2eed253,
            mid_exp_aa5c3ca19ecbe240,
            mid_expm1_aa5c3ca19ecbe240,
            mid_floor_aa5c3ca19ecbe240,
            mid_getAllDerivatives_226a0b2040b1d2e1,
            mid_getExponent_570ce0828f81a2c1,
            mid_getFactory_03b6c45268c88340,
            mid_getField_5b28be2d3632a5dc,
            mid_getFreeParameters_570ce0828f81a2c1,
            mid_getOrder_570ce0828f81a2c1,
            mid_getPartialDerivative_46366c1e17d1d442,
            mid_getPi_aa5c3ca19ecbe240,
            mid_getReal_dff5885c2c873297,
            mid_getValue_eba8e72a22c984ac,
            mid_hypot_92faf58b9a0bd4a3,
            mid_hypot_ab641a208c40f840,
            mid_integrate_64b030afd4e7438b,
            mid_linearCombination_bf7ca04c1859a29d,
            mid_linearCombination_3ad69d613db4204e,
            mid_linearCombination_de806f1154fa7679,
            mid_linearCombination_e3bfff7dc62eb9e4,
            mid_linearCombination_db1717bb830be001,
            mid_linearCombination_4544214d3dd4ea9a,
            mid_linearCombination_75156d0fbba42216,
            mid_linearCombination_4a2b9849339eedb8,
            mid_linearCombination_e2459d81ca072238,
            mid_linearCombination_09af4654d2ee4ef1,
            mid_linearCombination_075d04a35efdd771,
            mid_linearCombination_f221bb4ab1a2b975,
            mid_log_aa5c3ca19ecbe240,
            mid_log10_aa5c3ca19ecbe240,
            mid_log1p_aa5c3ca19ecbe240,
            mid_multiply_92faf58b9a0bd4a3,
            mid_multiply_629ba89773b89477,
            mid_multiply_5209187934217f90,
            mid_multiply_dc82eda6d2eed253,
            mid_negate_aa5c3ca19ecbe240,
            mid_newInstance_629ba89773b89477,
            mid_pow_92faf58b9a0bd4a3,
            mid_pow_629ba89773b89477,
            mid_pow_5209187934217f90,
            mid_pow_637cacc50ab693cf,
            mid_rebase_5c8aa3a2a6e5f11e,
            mid_reciprocal_aa5c3ca19ecbe240,
            mid_remainder_92faf58b9a0bd4a3,
            mid_remainder_629ba89773b89477,
            mid_remainder_dc82eda6d2eed253,
            mid_rint_aa5c3ca19ecbe240,
            mid_rootN_5209187934217f90,
            mid_scalb_5209187934217f90,
            mid_sign_aa5c3ca19ecbe240,
            mid_sin_aa5c3ca19ecbe240,
            mid_sinCos_a447b7ca640e6b68,
            mid_sinh_aa5c3ca19ecbe240,
            mid_sinhCosh_eef733c8a50b276f,
            mid_sqrt_aa5c3ca19ecbe240,
            mid_subtract_92faf58b9a0bd4a3,
            mid_subtract_629ba89773b89477,
            mid_subtract_dc82eda6d2eed253,
            mid_tan_aa5c3ca19ecbe240,
            mid_tanh_aa5c3ca19ecbe240,
            mid_taylor_48885a3a6ec88a01,
            mid_taylor_f2dc4f0d2f87d390,
            mid_toDegrees_aa5c3ca19ecbe240,
            mid_toRadians_aa5c3ca19ecbe240,
            mid_ulp_aa5c3ca19ecbe240,
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
