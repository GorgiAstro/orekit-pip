#ifndef org_hipparchus_analysis_differentiation_DerivativeStructure_H
#define org_hipparchus_analysis_differentiation_DerivativeStructure_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Derivative;
        class DSFactory;
        class DerivativeStructure;
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
            mid_abs_9f40c2a430225d38,
            mid_acos_9f40c2a430225d38,
            mid_acosh_9f40c2a430225d38,
            mid_add_8d5b339a942e17f4,
            mid_add_e5494538980257b4,
            mid_asin_9f40c2a430225d38,
            mid_asinh_9f40c2a430225d38,
            mid_atan_9f40c2a430225d38,
            mid_atan2_8d5b339a942e17f4,
            mid_atan2_a2e9ef2c805a8901,
            mid_atanh_9f40c2a430225d38,
            mid_cbrt_9f40c2a430225d38,
            mid_ceil_9f40c2a430225d38,
            mid_compose_51e3f3a70c0b0650,
            mid_copySign_8d5b339a942e17f4,
            mid_copySign_e5494538980257b4,
            mid_cos_9f40c2a430225d38,
            mid_cosh_9f40c2a430225d38,
            mid_differentiate_315cc5446c72b1b3,
            mid_divide_8d5b339a942e17f4,
            mid_divide_e5494538980257b4,
            mid_equals_221e8e85cb385209,
            mid_exp_9f40c2a430225d38,
            mid_expm1_9f40c2a430225d38,
            mid_floor_9f40c2a430225d38,
            mid_getAllDerivatives_a53a7513ecedada2,
            mid_getExponent_412668abc8d889e9,
            mid_getFactory_ed72edf4e59e365e,
            mid_getField_20f98801541dcec1,
            mid_getFreeParameters_412668abc8d889e9,
            mid_getOrder_412668abc8d889e9,
            mid_getPartialDerivative_75914fee15aa69bc,
            mid_getPi_9f40c2a430225d38,
            mid_getReal_557b8123390d8d0c,
            mid_getValue_557b8123390d8d0c,
            mid_hashCode_412668abc8d889e9,
            mid_hypot_8d5b339a942e17f4,
            mid_hypot_a2e9ef2c805a8901,
            mid_integrate_315cc5446c72b1b3,
            mid_linearCombination_84db6487129d2643,
            mid_linearCombination_d41586344ae34ebb,
            mid_linearCombination_5f600a2637357651,
            mid_linearCombination_789eb9634df7cfd1,
            mid_linearCombination_ceb03024cad0d401,
            mid_linearCombination_a73efab443377ec2,
            mid_linearCombination_d74beb9a303bcf8d,
            mid_linearCombination_bdc51eeba62a4d09,
            mid_log_9f40c2a430225d38,
            mid_log10_9f40c2a430225d38,
            mid_log1p_9f40c2a430225d38,
            mid_multiply_8d5b339a942e17f4,
            mid_multiply_e5494538980257b4,
            mid_multiply_aee818789db1d6ac,
            mid_negate_9f40c2a430225d38,
            mid_newInstance_e5494538980257b4,
            mid_pow_8d5b339a942e17f4,
            mid_pow_e5494538980257b4,
            mid_pow_aee818789db1d6ac,
            mid_pow_a170120f31aca901,
            mid_rebase_8bdb7c411329c668,
            mid_reciprocal_9f40c2a430225d38,
            mid_remainder_8d5b339a942e17f4,
            mid_remainder_e5494538980257b4,
            mid_rint_9f40c2a430225d38,
            mid_rootN_aee818789db1d6ac,
            mid_scalb_aee818789db1d6ac,
            mid_sign_9f40c2a430225d38,
            mid_sin_9f40c2a430225d38,
            mid_sinCos_5efdd92d175db117,
            mid_sinh_9f40c2a430225d38,
            mid_sinhCosh_e5a948cfec461975,
            mid_sqrt_9f40c2a430225d38,
            mid_subtract_8d5b339a942e17f4,
            mid_subtract_e5494538980257b4,
            mid_tan_9f40c2a430225d38,
            mid_tanh_9f40c2a430225d38,
            mid_taylor_86c4a0582e0747ce,
            mid_toDegrees_9f40c2a430225d38,
            mid_toRadians_9f40c2a430225d38,
            mid_ulp_9f40c2a430225d38,
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
