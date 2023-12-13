#ifndef org_hipparchus_analysis_differentiation_FieldDerivativeStructure_H
#define org_hipparchus_analysis_differentiation_FieldDerivativeStructure_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace analysis {
      namespace differentiation {
        class FieldDerivativeStructure;
        class FieldDerivative;
        class FDSFactory;
      }
    }
    class Field;
    class CalculusFieldElement;
    namespace exception {
      class MathRuntimeException;
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

        class FieldDerivativeStructure : public ::java::lang::Object {
         public:
          enum {
            mid_abs_4b6e77c66fd622c3,
            mid_acos_4b6e77c66fd622c3,
            mid_acosh_4b6e77c66fd622c3,
            mid_add_cc839fbc86dd7341,
            mid_add_7aeeac85ca41e793,
            mid_add_af5f7afd2fa6e7d1,
            mid_asin_4b6e77c66fd622c3,
            mid_asinh_4b6e77c66fd622c3,
            mid_atan_4b6e77c66fd622c3,
            mid_atan2_cc839fbc86dd7341,
            mid_atan2_0be75110207435f5,
            mid_atanh_4b6e77c66fd622c3,
            mid_cbrt_4b6e77c66fd622c3,
            mid_ceil_4b6e77c66fd622c3,
            mid_compose_b2e42be64b624f3f,
            mid_compose_1a7f741fb94c3273,
            mid_copySign_cc839fbc86dd7341,
            mid_copySign_7aeeac85ca41e793,
            mid_copySign_af5f7afd2fa6e7d1,
            mid_cos_4b6e77c66fd622c3,
            mid_cosh_4b6e77c66fd622c3,
            mid_differentiate_cfd1f45e767e94b7,
            mid_divide_cc839fbc86dd7341,
            mid_divide_7aeeac85ca41e793,
            mid_divide_af5f7afd2fa6e7d1,
            mid_exp_4b6e77c66fd622c3,
            mid_expm1_4b6e77c66fd622c3,
            mid_floor_4b6e77c66fd622c3,
            mid_getAllDerivatives_883be608cfc68c26,
            mid_getExponent_55546ef6a647f39b,
            mid_getFactory_477f6dd9e98ee543,
            mid_getField_04d1f63e17d5c5d4,
            mid_getFreeParameters_55546ef6a647f39b,
            mid_getOrder_55546ef6a647f39b,
            mid_getPartialDerivative_8224159d85a4681d,
            mid_getPi_4b6e77c66fd622c3,
            mid_getReal_b74f83833fdad017,
            mid_getValue_81520b552cb3fa26,
            mid_hypot_cc839fbc86dd7341,
            mid_hypot_0be75110207435f5,
            mid_integrate_cfd1f45e767e94b7,
            mid_linearCombination_5bd4133ebb89dcf4,
            mid_linearCombination_87473ab350e4e8cb,
            mid_linearCombination_edca25d66ed4c3a0,
            mid_linearCombination_7fb9fed9e7419d34,
            mid_linearCombination_f034bd903ff29aa7,
            mid_linearCombination_e54bdb8dceae4528,
            mid_linearCombination_521e870df170f249,
            mid_linearCombination_421d59cdd05746bc,
            mid_linearCombination_6e03e02022751cf9,
            mid_linearCombination_400156266cfc8847,
            mid_linearCombination_157e160bd151b42d,
            mid_linearCombination_845e044cd131722c,
            mid_log_4b6e77c66fd622c3,
            mid_log10_4b6e77c66fd622c3,
            mid_log1p_4b6e77c66fd622c3,
            mid_multiply_cc839fbc86dd7341,
            mid_multiply_7aeeac85ca41e793,
            mid_multiply_1a54109df9c15fac,
            mid_multiply_af5f7afd2fa6e7d1,
            mid_negate_4b6e77c66fd622c3,
            mid_newInstance_7aeeac85ca41e793,
            mid_pow_cc839fbc86dd7341,
            mid_pow_7aeeac85ca41e793,
            mid_pow_1a54109df9c15fac,
            mid_pow_eaa2836bc635c48a,
            mid_rebase_c7bc6dda2cdaeed6,
            mid_reciprocal_4b6e77c66fd622c3,
            mid_remainder_cc839fbc86dd7341,
            mid_remainder_7aeeac85ca41e793,
            mid_remainder_af5f7afd2fa6e7d1,
            mid_rint_4b6e77c66fd622c3,
            mid_rootN_1a54109df9c15fac,
            mid_scalb_1a54109df9c15fac,
            mid_sign_4b6e77c66fd622c3,
            mid_sin_4b6e77c66fd622c3,
            mid_sinCos_e434dd780193da2f,
            mid_sinh_4b6e77c66fd622c3,
            mid_sinhCosh_4a1e2142f3481995,
            mid_sqrt_4b6e77c66fd622c3,
            mid_subtract_cc839fbc86dd7341,
            mid_subtract_7aeeac85ca41e793,
            mid_subtract_af5f7afd2fa6e7d1,
            mid_tan_4b6e77c66fd622c3,
            mid_tanh_4b6e77c66fd622c3,
            mid_taylor_447413902a94c4ea,
            mid_taylor_ba5ea64a789ad864,
            mid_toDegrees_4b6e77c66fd622c3,
            mid_toRadians_4b6e77c66fd622c3,
            mid_ulp_4b6e77c66fd622c3,
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
