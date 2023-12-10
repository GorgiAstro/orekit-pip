#ifndef org_hipparchus_analysis_differentiation_SparseGradient_H
#define org_hipparchus_analysis_differentiation_SparseGradient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      namespace differentiation {
        class SparseGradient;
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

        class SparseGradient : public ::java::lang::Object {
         public:
          enum {
            mid_abs_2934351c6e7dae3f,
            mid_acos_2934351c6e7dae3f,
            mid_acosh_2934351c6e7dae3f,
            mid_add_9f534c309edf98dc,
            mid_add_414481af548a05c6,
            mid_addInPlace_fea3f28dd010c551,
            mid_asin_2934351c6e7dae3f,
            mid_asinh_2934351c6e7dae3f,
            mid_atan_2934351c6e7dae3f,
            mid_atan2_9f534c309edf98dc,
            mid_atan2_9c836264a82f0c84,
            mid_atanh_2934351c6e7dae3f,
            mid_cbrt_2934351c6e7dae3f,
            mid_ceil_2934351c6e7dae3f,
            mid_compose_756b544848fd6877,
            mid_copySign_9f534c309edf98dc,
            mid_copySign_414481af548a05c6,
            mid_cos_2934351c6e7dae3f,
            mid_cosh_2934351c6e7dae3f,
            mid_createConstant_414481af548a05c6,
            mid_createVariable_4af239edc1612dca,
            mid_divide_9f534c309edf98dc,
            mid_divide_414481af548a05c6,
            mid_equals_65c7d273e80d497a,
            mid_exp_2934351c6e7dae3f,
            mid_expm1_2934351c6e7dae3f,
            mid_floor_2934351c6e7dae3f,
            mid_getDerivative_46f85b53d9aedd96,
            mid_getField_5b28be2d3632a5dc,
            mid_getPi_2934351c6e7dae3f,
            mid_getReal_dff5885c2c873297,
            mid_getValue_dff5885c2c873297,
            mid_hashCode_570ce0828f81a2c1,
            mid_hypot_9f534c309edf98dc,
            mid_hypot_9c836264a82f0c84,
            mid_linearCombination_e9caad9adab65e68,
            mid_linearCombination_e28390e7a9d3d4ac,
            mid_linearCombination_fcf8e0fa3f8f7def,
            mid_linearCombination_8e0c39de1bf1da7c,
            mid_linearCombination_f22a74eeb5d61dba,
            mid_linearCombination_f05ab3c63c686eb3,
            mid_linearCombination_8035e59f48419ce1,
            mid_linearCombination_e415ce7cfb3956af,
            mid_log_2934351c6e7dae3f,
            mid_log10_2934351c6e7dae3f,
            mid_log1p_2934351c6e7dae3f,
            mid_multiply_9f534c309edf98dc,
            mid_multiply_414481af548a05c6,
            mid_multiply_794fd59fc4f0fb37,
            mid_multiplyInPlace_fea3f28dd010c551,
            mid_negate_2934351c6e7dae3f,
            mid_newInstance_414481af548a05c6,
            mid_numVars_570ce0828f81a2c1,
            mid_pow_9f534c309edf98dc,
            mid_pow_414481af548a05c6,
            mid_pow_794fd59fc4f0fb37,
            mid_pow_afd287fe62d634b4,
            mid_reciprocal_2934351c6e7dae3f,
            mid_remainder_9f534c309edf98dc,
            mid_remainder_414481af548a05c6,
            mid_rint_2934351c6e7dae3f,
            mid_rootN_794fd59fc4f0fb37,
            mid_scalb_794fd59fc4f0fb37,
            mid_sign_2934351c6e7dae3f,
            mid_sin_2934351c6e7dae3f,
            mid_sinCos_a447b7ca640e6b68,
            mid_sinh_2934351c6e7dae3f,
            mid_sinhCosh_eef733c8a50b276f,
            mid_sqrt_2934351c6e7dae3f,
            mid_subtract_9f534c309edf98dc,
            mid_subtract_414481af548a05c6,
            mid_tan_2934351c6e7dae3f,
            mid_tanh_2934351c6e7dae3f,
            mid_taylor_9dc1ec0bcc0a9a29,
            mid_toDegrees_2934351c6e7dae3f,
            mid_toRadians_2934351c6e7dae3f,
            mid_ulp_2934351c6e7dae3f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SparseGradient(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SparseGradient(const SparseGradient& obj) : ::java::lang::Object(obj) {}

          SparseGradient abs() const;
          SparseGradient acos() const;
          SparseGradient acosh() const;
          SparseGradient add(const SparseGradient &) const;
          SparseGradient add(jdouble) const;
          void addInPlace(const SparseGradient &) const;
          SparseGradient asin() const;
          SparseGradient asinh() const;
          SparseGradient atan() const;
          SparseGradient atan2(const SparseGradient &) const;
          static SparseGradient atan2(const SparseGradient &, const SparseGradient &);
          SparseGradient atanh() const;
          SparseGradient cbrt() const;
          SparseGradient ceil() const;
          SparseGradient compose(const JArray< jdouble > &) const;
          SparseGradient copySign(const SparseGradient &) const;
          SparseGradient copySign(jdouble) const;
          SparseGradient cos() const;
          SparseGradient cosh() const;
          static SparseGradient createConstant(jdouble);
          static SparseGradient createVariable(jint, jdouble);
          SparseGradient divide(const SparseGradient &) const;
          SparseGradient divide(jdouble) const;
          jboolean equals(const ::java::lang::Object &) const;
          SparseGradient exp() const;
          SparseGradient expm1() const;
          SparseGradient floor() const;
          jdouble getDerivative(jint) const;
          ::org::hipparchus::Field getField() const;
          SparseGradient getPi() const;
          jdouble getReal() const;
          jdouble getValue() const;
          jint hashCode() const;
          SparseGradient hypot(const SparseGradient &) const;
          static SparseGradient hypot(const SparseGradient &, const SparseGradient &);
          SparseGradient linearCombination(const JArray< jdouble > &, const JArray< SparseGradient > &) const;
          SparseGradient linearCombination(const JArray< SparseGradient > &, const JArray< SparseGradient > &) const;
          SparseGradient linearCombination(const SparseGradient &, const SparseGradient &, const SparseGradient &, const SparseGradient &) const;
          SparseGradient linearCombination(jdouble, const SparseGradient &, jdouble, const SparseGradient &) const;
          SparseGradient linearCombination(const SparseGradient &, const SparseGradient &, const SparseGradient &, const SparseGradient &, const SparseGradient &, const SparseGradient &) const;
          SparseGradient linearCombination(jdouble, const SparseGradient &, jdouble, const SparseGradient &, jdouble, const SparseGradient &) const;
          SparseGradient linearCombination(const SparseGradient &, const SparseGradient &, const SparseGradient &, const SparseGradient &, const SparseGradient &, const SparseGradient &, const SparseGradient &, const SparseGradient &) const;
          SparseGradient linearCombination(jdouble, const SparseGradient &, jdouble, const SparseGradient &, jdouble, const SparseGradient &, jdouble, const SparseGradient &) const;
          SparseGradient log() const;
          SparseGradient log10() const;
          SparseGradient log1p() const;
          SparseGradient multiply(const SparseGradient &) const;
          SparseGradient multiply(jdouble) const;
          SparseGradient multiply(jint) const;
          void multiplyInPlace(const SparseGradient &) const;
          SparseGradient negate() const;
          SparseGradient newInstance(jdouble) const;
          jint numVars() const;
          SparseGradient pow(const SparseGradient &) const;
          SparseGradient pow(jdouble) const;
          SparseGradient pow(jint) const;
          static SparseGradient pow(jdouble, const SparseGradient &);
          SparseGradient reciprocal() const;
          SparseGradient remainder(const SparseGradient &) const;
          SparseGradient remainder(jdouble) const;
          SparseGradient rint() const;
          SparseGradient rootN(jint) const;
          SparseGradient scalb(jint) const;
          SparseGradient sign() const;
          SparseGradient sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          SparseGradient sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          SparseGradient sqrt() const;
          SparseGradient subtract(const SparseGradient &) const;
          SparseGradient subtract(jdouble) const;
          SparseGradient tan() const;
          SparseGradient tanh() const;
          jdouble taylor(const JArray< jdouble > &) const;
          SparseGradient toDegrees() const;
          SparseGradient toRadians() const;
          SparseGradient ulp() const;
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
        extern PyType_Def PY_TYPE_DEF(SparseGradient);
        extern PyTypeObject *PY_TYPE(SparseGradient);

        class t_SparseGradient {
        public:
          PyObject_HEAD
          SparseGradient object;
          static PyObject *wrap_Object(const SparseGradient&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
