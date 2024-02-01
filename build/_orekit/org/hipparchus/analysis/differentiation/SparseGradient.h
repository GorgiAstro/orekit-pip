#ifndef org_hipparchus_analysis_differentiation_SparseGradient_H
#define org_hipparchus_analysis_differentiation_SparseGradient_H

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
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
    namespace analysis {
      namespace differentiation {
        class SparseGradient;
      }
    }
    class CalculusFieldElement;
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
            mid_abs_1f03f2e65dbb6407,
            mid_acos_1f03f2e65dbb6407,
            mid_acosh_1f03f2e65dbb6407,
            mid_add_4a013d2a9dc557f4,
            mid_add_3f2467b7f7b2d7ca,
            mid_addInPlace_47cb2eff1cfcea1d,
            mid_asin_1f03f2e65dbb6407,
            mid_asinh_1f03f2e65dbb6407,
            mid_atan_1f03f2e65dbb6407,
            mid_atan2_4a013d2a9dc557f4,
            mid_atan2_c84f8a61ad86e337,
            mid_atanh_1f03f2e65dbb6407,
            mid_cbrt_1f03f2e65dbb6407,
            mid_ceil_1f03f2e65dbb6407,
            mid_compose_f455cbca559ab382,
            mid_copySign_4a013d2a9dc557f4,
            mid_copySign_3f2467b7f7b2d7ca,
            mid_cos_1f03f2e65dbb6407,
            mid_cosh_1f03f2e65dbb6407,
            mid_createConstant_3f2467b7f7b2d7ca,
            mid_createVariable_1307e84c2eb1c24f,
            mid_divide_4a013d2a9dc557f4,
            mid_divide_3f2467b7f7b2d7ca,
            mid_equals_72faff9b05f5ed5e,
            mid_exp_1f03f2e65dbb6407,
            mid_expm1_1f03f2e65dbb6407,
            mid_floor_1f03f2e65dbb6407,
            mid_getDerivative_ce4c02d583456bc9,
            mid_getField_577649682b9910c1,
            mid_getPi_1f03f2e65dbb6407,
            mid_getReal_9981f74b2d109da6,
            mid_getValue_9981f74b2d109da6,
            mid_hashCode_d6ab429752e7c267,
            mid_hypot_4a013d2a9dc557f4,
            mid_hypot_c84f8a61ad86e337,
            mid_linearCombination_335b7cf168dc3d8b,
            mid_linearCombination_1e4e20e1749d22c7,
            mid_linearCombination_62c0cef30f3b8835,
            mid_linearCombination_d00ed8f88e71d5c6,
            mid_linearCombination_7e0fa4a0e91725c2,
            mid_linearCombination_193c829cc5a96e93,
            mid_linearCombination_4a22cfc14e405dab,
            mid_linearCombination_9fb3c042d3423ae5,
            mid_log_1f03f2e65dbb6407,
            mid_log10_1f03f2e65dbb6407,
            mid_log1p_1f03f2e65dbb6407,
            mid_multiply_4a013d2a9dc557f4,
            mid_multiply_3f2467b7f7b2d7ca,
            mid_multiply_71acadd828c4caad,
            mid_multiplyInPlace_47cb2eff1cfcea1d,
            mid_negate_1f03f2e65dbb6407,
            mid_newInstance_3f2467b7f7b2d7ca,
            mid_numVars_d6ab429752e7c267,
            mid_pow_4a013d2a9dc557f4,
            mid_pow_3f2467b7f7b2d7ca,
            mid_pow_71acadd828c4caad,
            mid_pow_136200e24fde2468,
            mid_reciprocal_1f03f2e65dbb6407,
            mid_remainder_4a013d2a9dc557f4,
            mid_remainder_3f2467b7f7b2d7ca,
            mid_rint_1f03f2e65dbb6407,
            mid_rootN_71acadd828c4caad,
            mid_scalb_71acadd828c4caad,
            mid_sign_1f03f2e65dbb6407,
            mid_sin_1f03f2e65dbb6407,
            mid_sinCos_31b7b02b4932da60,
            mid_sinh_1f03f2e65dbb6407,
            mid_sinhCosh_b24d5962ea451135,
            mid_sqrt_1f03f2e65dbb6407,
            mid_subtract_4a013d2a9dc557f4,
            mid_subtract_3f2467b7f7b2d7ca,
            mid_tan_1f03f2e65dbb6407,
            mid_tanh_1f03f2e65dbb6407,
            mid_taylor_a40ce4fdf6559ac0,
            mid_toDegrees_1f03f2e65dbb6407,
            mid_toRadians_1f03f2e65dbb6407,
            mid_ulp_1f03f2e65dbb6407,
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
