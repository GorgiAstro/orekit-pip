#ifndef org_hipparchus_analysis_differentiation_DerivativeStructure_H
#define org_hipparchus_analysis_differentiation_DerivativeStructure_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class Derivative;
        class DSFactory;
      }
    }
    class Field;
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

        class DerivativeStructure : public ::java::lang::Object {
         public:
          enum {
            mid_abs_ce114c5dd035d753,
            mid_acos_ce114c5dd035d753,
            mid_acosh_ce114c5dd035d753,
            mid_add_f842b4bbbc82e44f,
            mid_add_f7de6915022fec9a,
            mid_asin_ce114c5dd035d753,
            mid_asinh_ce114c5dd035d753,
            mid_atan_ce114c5dd035d753,
            mid_atan2_f842b4bbbc82e44f,
            mid_atan2_9cc215aa9cda8821,
            mid_atanh_ce114c5dd035d753,
            mid_cbrt_ce114c5dd035d753,
            mid_ceil_ce114c5dd035d753,
            mid_compose_1e0d37b52d091497,
            mid_copySign_f842b4bbbc82e44f,
            mid_copySign_f7de6915022fec9a,
            mid_cos_ce114c5dd035d753,
            mid_cosh_ce114c5dd035d753,
            mid_differentiate_0db5f42b010a612d,
            mid_divide_f842b4bbbc82e44f,
            mid_divide_f7de6915022fec9a,
            mid_equals_72faff9b05f5ed5e,
            mid_exp_ce114c5dd035d753,
            mid_expm1_ce114c5dd035d753,
            mid_floor_ce114c5dd035d753,
            mid_getAllDerivatives_be783177b060994b,
            mid_getExponent_d6ab429752e7c267,
            mid_getFactory_73c80928d7b3a59e,
            mid_getField_577649682b9910c1,
            mid_getFreeParameters_d6ab429752e7c267,
            mid_getOrder_d6ab429752e7c267,
            mid_getPartialDerivative_7f744e43a2f098aa,
            mid_getPi_ce114c5dd035d753,
            mid_getReal_9981f74b2d109da6,
            mid_getValue_9981f74b2d109da6,
            mid_hashCode_d6ab429752e7c267,
            mid_hypot_f842b4bbbc82e44f,
            mid_hypot_9cc215aa9cda8821,
            mid_integrate_0db5f42b010a612d,
            mid_linearCombination_94d0b414bb2993c4,
            mid_linearCombination_7de22af51d01a7eb,
            mid_linearCombination_7e9f4feed7ecaf7a,
            mid_linearCombination_5f37cf8ec468a054,
            mid_linearCombination_ed00b5b290807096,
            mid_linearCombination_a243a9e89d5611f3,
            mid_linearCombination_ae3d88c6d75db937,
            mid_linearCombination_44dc6d143cd1cf30,
            mid_log_ce114c5dd035d753,
            mid_log10_ce114c5dd035d753,
            mid_log1p_ce114c5dd035d753,
            mid_multiply_f842b4bbbc82e44f,
            mid_multiply_f7de6915022fec9a,
            mid_multiply_d2b8014a1c7d22f6,
            mid_negate_ce114c5dd035d753,
            mid_newInstance_f7de6915022fec9a,
            mid_pow_f842b4bbbc82e44f,
            mid_pow_f7de6915022fec9a,
            mid_pow_d2b8014a1c7d22f6,
            mid_pow_ab49f8b6840e123c,
            mid_rebase_bdcda54333f10bef,
            mid_reciprocal_ce114c5dd035d753,
            mid_remainder_f842b4bbbc82e44f,
            mid_remainder_f7de6915022fec9a,
            mid_rint_ce114c5dd035d753,
            mid_rootN_d2b8014a1c7d22f6,
            mid_scalb_d2b8014a1c7d22f6,
            mid_sign_ce114c5dd035d753,
            mid_sin_ce114c5dd035d753,
            mid_sinCos_31b7b02b4932da60,
            mid_sinh_ce114c5dd035d753,
            mid_sinhCosh_b24d5962ea451135,
            mid_sqrt_ce114c5dd035d753,
            mid_subtract_f842b4bbbc82e44f,
            mid_subtract_f7de6915022fec9a,
            mid_tan_ce114c5dd035d753,
            mid_tanh_ce114c5dd035d753,
            mid_taylor_a40ce4fdf6559ac0,
            mid_toDegrees_ce114c5dd035d753,
            mid_toRadians_ce114c5dd035d753,
            mid_ulp_ce114c5dd035d753,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DerivativeStructure(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DerivativeStructure(const DerivativeStructure& obj) : ::java::lang::Object(obj) {}

          DerivativeStructure abs() const;
          DerivativeStructure acos() const;
          DerivativeStructure acosh() const;
          DerivativeStructure add(const DerivativeStructure &) const;
          DerivativeStructure add(jdouble) const;
          DerivativeStructure asin() const;
          DerivativeStructure asinh() const;
          DerivativeStructure atan() const;
          DerivativeStructure atan2(const DerivativeStructure &) const;
          static DerivativeStructure atan2(const DerivativeStructure &, const DerivativeStructure &);
          DerivativeStructure atanh() const;
          DerivativeStructure cbrt() const;
          DerivativeStructure ceil() const;
          DerivativeStructure compose(const JArray< jdouble > &) const;
          DerivativeStructure copySign(const DerivativeStructure &) const;
          DerivativeStructure copySign(jdouble) const;
          DerivativeStructure cos() const;
          DerivativeStructure cosh() const;
          DerivativeStructure differentiate(jint, jint) const;
          DerivativeStructure divide(const DerivativeStructure &) const;
          DerivativeStructure divide(jdouble) const;
          jboolean equals(const ::java::lang::Object &) const;
          DerivativeStructure exp() const;
          DerivativeStructure expm1() const;
          DerivativeStructure floor() const;
          JArray< jdouble > getAllDerivatives() const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::DSFactory getFactory() const;
          ::org::hipparchus::Field getField() const;
          jint getFreeParameters() const;
          jint getOrder() const;
          jdouble getPartialDerivative(const JArray< jint > &) const;
          DerivativeStructure getPi() const;
          jdouble getReal() const;
          jdouble getValue() const;
          jint hashCode() const;
          DerivativeStructure hypot(const DerivativeStructure &) const;
          static DerivativeStructure hypot(const DerivativeStructure &, const DerivativeStructure &);
          DerivativeStructure integrate(jint, jint) const;
          DerivativeStructure linearCombination(const JArray< jdouble > &, const JArray< DerivativeStructure > &) const;
          DerivativeStructure linearCombination(const JArray< DerivativeStructure > &, const JArray< DerivativeStructure > &) const;
          DerivativeStructure linearCombination(const DerivativeStructure &, const DerivativeStructure &, const DerivativeStructure &, const DerivativeStructure &) const;
          DerivativeStructure linearCombination(jdouble, const DerivativeStructure &, jdouble, const DerivativeStructure &) const;
          DerivativeStructure linearCombination(const DerivativeStructure &, const DerivativeStructure &, const DerivativeStructure &, const DerivativeStructure &, const DerivativeStructure &, const DerivativeStructure &) const;
          DerivativeStructure linearCombination(jdouble, const DerivativeStructure &, jdouble, const DerivativeStructure &, jdouble, const DerivativeStructure &) const;
          DerivativeStructure linearCombination(const DerivativeStructure &, const DerivativeStructure &, const DerivativeStructure &, const DerivativeStructure &, const DerivativeStructure &, const DerivativeStructure &, const DerivativeStructure &, const DerivativeStructure &) const;
          DerivativeStructure linearCombination(jdouble, const DerivativeStructure &, jdouble, const DerivativeStructure &, jdouble, const DerivativeStructure &, jdouble, const DerivativeStructure &) const;
          DerivativeStructure log() const;
          DerivativeStructure log10() const;
          DerivativeStructure log1p() const;
          DerivativeStructure multiply(const DerivativeStructure &) const;
          DerivativeStructure multiply(jdouble) const;
          DerivativeStructure multiply(jint) const;
          DerivativeStructure negate() const;
          DerivativeStructure newInstance(jdouble) const;
          DerivativeStructure pow(const DerivativeStructure &) const;
          DerivativeStructure pow(jdouble) const;
          DerivativeStructure pow(jint) const;
          static DerivativeStructure pow(jdouble, const DerivativeStructure &);
          DerivativeStructure rebase(const JArray< DerivativeStructure > &) const;
          DerivativeStructure reciprocal() const;
          DerivativeStructure remainder(const DerivativeStructure &) const;
          DerivativeStructure remainder(jdouble) const;
          DerivativeStructure rint() const;
          DerivativeStructure rootN(jint) const;
          DerivativeStructure scalb(jint) const;
          DerivativeStructure sign() const;
          DerivativeStructure sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          DerivativeStructure sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          DerivativeStructure sqrt() const;
          DerivativeStructure subtract(const DerivativeStructure &) const;
          DerivativeStructure subtract(jdouble) const;
          DerivativeStructure tan() const;
          DerivativeStructure tanh() const;
          jdouble taylor(const JArray< jdouble > &) const;
          DerivativeStructure toDegrees() const;
          DerivativeStructure toRadians() const;
          DerivativeStructure ulp() const;
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
        extern PyType_Def PY_TYPE_DEF(DerivativeStructure);
        extern PyTypeObject *PY_TYPE(DerivativeStructure);

        class t_DerivativeStructure {
        public:
          PyObject_HEAD
          DerivativeStructure object;
          static PyObject *wrap_Object(const DerivativeStructure&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
