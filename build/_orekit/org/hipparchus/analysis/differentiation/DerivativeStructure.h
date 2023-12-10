#ifndef org_hipparchus_analysis_differentiation_DerivativeStructure_H
#define org_hipparchus_analysis_differentiation_DerivativeStructure_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class Field;
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class DSFactory;
        class Derivative;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathRuntimeException;
    }
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
            mid_abs_c8ca2097cc2fbc0a,
            mid_acos_c8ca2097cc2fbc0a,
            mid_acosh_c8ca2097cc2fbc0a,
            mid_add_fb434e13a8e86d82,
            mid_add_c8b983f259312c1e,
            mid_asin_c8ca2097cc2fbc0a,
            mid_asinh_c8ca2097cc2fbc0a,
            mid_atan_c8ca2097cc2fbc0a,
            mid_atan2_fb434e13a8e86d82,
            mid_atan2_45eb9750ccb66723,
            mid_atanh_c8ca2097cc2fbc0a,
            mid_cbrt_c8ca2097cc2fbc0a,
            mid_ceil_c8ca2097cc2fbc0a,
            mid_compose_a99895f2c956a8f6,
            mid_copySign_fb434e13a8e86d82,
            mid_copySign_c8b983f259312c1e,
            mid_cos_c8ca2097cc2fbc0a,
            mid_cosh_c8ca2097cc2fbc0a,
            mid_differentiate_9d37b633f691b62a,
            mid_divide_fb434e13a8e86d82,
            mid_divide_c8b983f259312c1e,
            mid_equals_229c87223f486349,
            mid_exp_c8ca2097cc2fbc0a,
            mid_expm1_c8ca2097cc2fbc0a,
            mid_floor_c8ca2097cc2fbc0a,
            mid_getAllDerivatives_7cdc325af0834901,
            mid_getExponent_f2f64475e4580546,
            mid_getFactory_e7935a18a3f27d68,
            mid_getField_70b4bbd3fa378d6b,
            mid_getFreeParameters_f2f64475e4580546,
            mid_getOrder_f2f64475e4580546,
            mid_getPartialDerivative_29ffeeddaa7151a9,
            mid_getPi_c8ca2097cc2fbc0a,
            mid_getReal_456d9a2f64d6b28d,
            mid_getValue_456d9a2f64d6b28d,
            mid_hashCode_f2f64475e4580546,
            mid_hypot_fb434e13a8e86d82,
            mid_hypot_45eb9750ccb66723,
            mid_integrate_9d37b633f691b62a,
            mid_linearCombination_3195fd1e5e45bf64,
            mid_linearCombination_7dce6f66052819b2,
            mid_linearCombination_5c52d034a51c52e0,
            mid_linearCombination_0e1c413695673d3f,
            mid_linearCombination_50edebed1eed703c,
            mid_linearCombination_566d6c70969909c9,
            mid_linearCombination_3a128f0a25f95075,
            mid_linearCombination_5b33406378fdd5ff,
            mid_log_c8ca2097cc2fbc0a,
            mid_log10_c8ca2097cc2fbc0a,
            mid_log1p_c8ca2097cc2fbc0a,
            mid_multiply_fb434e13a8e86d82,
            mid_multiply_c8b983f259312c1e,
            mid_multiply_e42bfd21ac531fa1,
            mid_negate_c8ca2097cc2fbc0a,
            mid_newInstance_c8b983f259312c1e,
            mid_pow_fb434e13a8e86d82,
            mid_pow_c8b983f259312c1e,
            mid_pow_e42bfd21ac531fa1,
            mid_pow_d1def76ca0efa92b,
            mid_rebase_5d4ac565bbe32c28,
            mid_reciprocal_c8ca2097cc2fbc0a,
            mid_remainder_fb434e13a8e86d82,
            mid_remainder_c8b983f259312c1e,
            mid_rint_c8ca2097cc2fbc0a,
            mid_rootN_e42bfd21ac531fa1,
            mid_scalb_e42bfd21ac531fa1,
            mid_sign_c8ca2097cc2fbc0a,
            mid_sin_c8ca2097cc2fbc0a,
            mid_sinCos_35f2499c71416a1a,
            mid_sinh_c8ca2097cc2fbc0a,
            mid_sinhCosh_c388a3eefde9d597,
            mid_sqrt_c8ca2097cc2fbc0a,
            mid_subtract_fb434e13a8e86d82,
            mid_subtract_c8b983f259312c1e,
            mid_tan_c8ca2097cc2fbc0a,
            mid_tanh_c8ca2097cc2fbc0a,
            mid_taylor_f05cb8c6dfd5e0b9,
            mid_toDegrees_c8ca2097cc2fbc0a,
            mid_toRadians_c8ca2097cc2fbc0a,
            mid_ulp_c8ca2097cc2fbc0a,
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
