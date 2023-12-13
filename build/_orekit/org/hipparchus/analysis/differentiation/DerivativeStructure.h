#ifndef org_hipparchus_analysis_differentiation_DerivativeStructure_H
#define org_hipparchus_analysis_differentiation_DerivativeStructure_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace analysis {
      namespace differentiation {
        class Derivative;
        class DerivativeStructure;
        class DSFactory;
      }
    }
    class Field;
    namespace exception {
      class MathRuntimeException;
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

        class DerivativeStructure : public ::java::lang::Object {
         public:
          enum {
            mid_abs_57983c4d4b4a2f7f,
            mid_acos_57983c4d4b4a2f7f,
            mid_acosh_57983c4d4b4a2f7f,
            mid_add_d767b94ffc51b3ba,
            mid_add_d33302169f933b5a,
            mid_asin_57983c4d4b4a2f7f,
            mid_asinh_57983c4d4b4a2f7f,
            mid_atan_57983c4d4b4a2f7f,
            mid_atan2_d767b94ffc51b3ba,
            mid_atan2_9a7c28a832777f54,
            mid_atanh_57983c4d4b4a2f7f,
            mid_cbrt_57983c4d4b4a2f7f,
            mid_ceil_57983c4d4b4a2f7f,
            mid_compose_86f1b5af7e082a1a,
            mid_copySign_d767b94ffc51b3ba,
            mid_copySign_d33302169f933b5a,
            mid_cos_57983c4d4b4a2f7f,
            mid_cosh_57983c4d4b4a2f7f,
            mid_differentiate_e6bd03b9f9ff3a4e,
            mid_divide_d767b94ffc51b3ba,
            mid_divide_d33302169f933b5a,
            mid_equals_460c5e2d9d51c6cc,
            mid_exp_57983c4d4b4a2f7f,
            mid_expm1_57983c4d4b4a2f7f,
            mid_floor_57983c4d4b4a2f7f,
            mid_getAllDerivatives_25e1757a36c4dde2,
            mid_getExponent_55546ef6a647f39b,
            mid_getFactory_d9c5beecbcd9df82,
            mid_getField_04d1f63e17d5c5d4,
            mid_getFreeParameters_55546ef6a647f39b,
            mid_getOrder_55546ef6a647f39b,
            mid_getPartialDerivative_bff393394ab19dc1,
            mid_getPi_57983c4d4b4a2f7f,
            mid_getReal_b74f83833fdad017,
            mid_getValue_b74f83833fdad017,
            mid_hashCode_55546ef6a647f39b,
            mid_hypot_d767b94ffc51b3ba,
            mid_hypot_9a7c28a832777f54,
            mid_integrate_e6bd03b9f9ff3a4e,
            mid_linearCombination_81ad9b647c3c3ec4,
            mid_linearCombination_7986851850e4ac5c,
            mid_linearCombination_562245d44ef8769c,
            mid_linearCombination_b14deccf979d9f01,
            mid_linearCombination_e817b9efb5fd6633,
            mid_linearCombination_31b2412b461aaf8a,
            mid_linearCombination_56d37fe4945be603,
            mid_linearCombination_1e657464bae8fb96,
            mid_log_57983c4d4b4a2f7f,
            mid_log10_57983c4d4b4a2f7f,
            mid_log1p_57983c4d4b4a2f7f,
            mid_multiply_d767b94ffc51b3ba,
            mid_multiply_d33302169f933b5a,
            mid_multiply_7d1614ef7f412b0c,
            mid_negate_57983c4d4b4a2f7f,
            mid_newInstance_d33302169f933b5a,
            mid_pow_d767b94ffc51b3ba,
            mid_pow_d33302169f933b5a,
            mid_pow_7d1614ef7f412b0c,
            mid_pow_39751935285e5df3,
            mid_rebase_a789982882efd99b,
            mid_reciprocal_57983c4d4b4a2f7f,
            mid_remainder_d767b94ffc51b3ba,
            mid_remainder_d33302169f933b5a,
            mid_rint_57983c4d4b4a2f7f,
            mid_rootN_7d1614ef7f412b0c,
            mid_scalb_7d1614ef7f412b0c,
            mid_sign_57983c4d4b4a2f7f,
            mid_sin_57983c4d4b4a2f7f,
            mid_sinCos_e434dd780193da2f,
            mid_sinh_57983c4d4b4a2f7f,
            mid_sinhCosh_4a1e2142f3481995,
            mid_sqrt_57983c4d4b4a2f7f,
            mid_subtract_d767b94ffc51b3ba,
            mid_subtract_d33302169f933b5a,
            mid_tan_57983c4d4b4a2f7f,
            mid_tanh_57983c4d4b4a2f7f,
            mid_taylor_b060e4326765ccf1,
            mid_toDegrees_57983c4d4b4a2f7f,
            mid_toRadians_57983c4d4b4a2f7f,
            mid_ulp_57983c4d4b4a2f7f,
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
