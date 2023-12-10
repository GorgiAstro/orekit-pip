#ifndef org_hipparchus_analysis_differentiation_DerivativeStructure_H
#define org_hipparchus_analysis_differentiation_DerivativeStructure_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    namespace analysis {
      namespace differentiation {
        class Derivative;
        class DerivativeStructure;
        class DSFactory;
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
            mid_abs_73e277cbd957031a,
            mid_acos_73e277cbd957031a,
            mid_acosh_73e277cbd957031a,
            mid_add_1ed24ac492f4d182,
            mid_add_b3ed376bfd09e93b,
            mid_asin_73e277cbd957031a,
            mid_asinh_73e277cbd957031a,
            mid_atan_73e277cbd957031a,
            mid_atan2_1ed24ac492f4d182,
            mid_atan2_0f74171889ddedd4,
            mid_atanh_73e277cbd957031a,
            mid_cbrt_73e277cbd957031a,
            mid_ceil_73e277cbd957031a,
            mid_compose_b45548a69087af0a,
            mid_copySign_1ed24ac492f4d182,
            mid_copySign_b3ed376bfd09e93b,
            mid_cos_73e277cbd957031a,
            mid_cosh_73e277cbd957031a,
            mid_differentiate_8a8e24319bb4ebe4,
            mid_divide_1ed24ac492f4d182,
            mid_divide_b3ed376bfd09e93b,
            mid_equals_65c7d273e80d497a,
            mid_exp_73e277cbd957031a,
            mid_expm1_73e277cbd957031a,
            mid_floor_73e277cbd957031a,
            mid_getAllDerivatives_60c7040667a7dc5c,
            mid_getExponent_570ce0828f81a2c1,
            mid_getFactory_faa2c22c4e517c7b,
            mid_getField_5b28be2d3632a5dc,
            mid_getFreeParameters_570ce0828f81a2c1,
            mid_getOrder_570ce0828f81a2c1,
            mid_getPartialDerivative_48330f48ce3d930b,
            mid_getPi_73e277cbd957031a,
            mid_getReal_dff5885c2c873297,
            mid_getValue_dff5885c2c873297,
            mid_hashCode_570ce0828f81a2c1,
            mid_hypot_1ed24ac492f4d182,
            mid_hypot_0f74171889ddedd4,
            mid_integrate_8a8e24319bb4ebe4,
            mid_linearCombination_ead6bfada2a4ea6d,
            mid_linearCombination_ac2503aed91e0380,
            mid_linearCombination_9758478e8da0ce32,
            mid_linearCombination_371c4afd906d13cc,
            mid_linearCombination_bf4a0f19de76382d,
            mid_linearCombination_369d3057f7d65905,
            mid_linearCombination_181885b2381d0862,
            mid_linearCombination_a96475ce0fe95785,
            mid_log_73e277cbd957031a,
            mid_log10_73e277cbd957031a,
            mid_log1p_73e277cbd957031a,
            mid_multiply_1ed24ac492f4d182,
            mid_multiply_b3ed376bfd09e93b,
            mid_multiply_7e2a7a2e34cb2504,
            mid_negate_73e277cbd957031a,
            mid_newInstance_b3ed376bfd09e93b,
            mid_pow_1ed24ac492f4d182,
            mid_pow_b3ed376bfd09e93b,
            mid_pow_7e2a7a2e34cb2504,
            mid_pow_100b6a84f1382e19,
            mid_rebase_eba3a2cb3a68c757,
            mid_reciprocal_73e277cbd957031a,
            mid_remainder_1ed24ac492f4d182,
            mid_remainder_b3ed376bfd09e93b,
            mid_rint_73e277cbd957031a,
            mid_rootN_7e2a7a2e34cb2504,
            mid_scalb_7e2a7a2e34cb2504,
            mid_sign_73e277cbd957031a,
            mid_sin_73e277cbd957031a,
            mid_sinCos_a447b7ca640e6b68,
            mid_sinh_73e277cbd957031a,
            mid_sinhCosh_eef733c8a50b276f,
            mid_sqrt_73e277cbd957031a,
            mid_subtract_1ed24ac492f4d182,
            mid_subtract_b3ed376bfd09e93b,
            mid_tan_73e277cbd957031a,
            mid_tanh_73e277cbd957031a,
            mid_taylor_9dc1ec0bcc0a9a29,
            mid_toDegrees_73e277cbd957031a,
            mid_toRadians_73e277cbd957031a,
            mid_ulp_73e277cbd957031a,
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
