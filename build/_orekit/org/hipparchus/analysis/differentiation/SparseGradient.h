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
    class Field;
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
    namespace analysis {
      namespace differentiation {
        class SparseGradient;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
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
            mid_abs_696946eeaba4dcdf,
            mid_acos_696946eeaba4dcdf,
            mid_acosh_696946eeaba4dcdf,
            mid_add_b9608530ef4c1741,
            mid_add_b1f11c9800ac2d79,
            mid_addInPlace_fba7be235291669a,
            mid_asin_696946eeaba4dcdf,
            mid_asinh_696946eeaba4dcdf,
            mid_atan_696946eeaba4dcdf,
            mid_atan2_b9608530ef4c1741,
            mid_atan2_fc07438449a274e1,
            mid_atanh_696946eeaba4dcdf,
            mid_cbrt_696946eeaba4dcdf,
            mid_ceil_696946eeaba4dcdf,
            mid_compose_667832caa39a0f1a,
            mid_copySign_b9608530ef4c1741,
            mid_copySign_b1f11c9800ac2d79,
            mid_cos_696946eeaba4dcdf,
            mid_cosh_696946eeaba4dcdf,
            mid_createConstant_b1f11c9800ac2d79,
            mid_createVariable_3b9386c165646dd7,
            mid_divide_b9608530ef4c1741,
            mid_divide_b1f11c9800ac2d79,
            mid_equals_229c87223f486349,
            mid_exp_696946eeaba4dcdf,
            mid_expm1_696946eeaba4dcdf,
            mid_floor_696946eeaba4dcdf,
            mid_getDerivative_b772323fc98b7293,
            mid_getField_70b4bbd3fa378d6b,
            mid_getPi_696946eeaba4dcdf,
            mid_getReal_456d9a2f64d6b28d,
            mid_getValue_456d9a2f64d6b28d,
            mid_hashCode_f2f64475e4580546,
            mid_hypot_b9608530ef4c1741,
            mid_hypot_fc07438449a274e1,
            mid_linearCombination_2c11bc9e4794f37e,
            mid_linearCombination_f5fe33f0c4e1159c,
            mid_linearCombination_625a51937e4c69fd,
            mid_linearCombination_d0186cae63917128,
            mid_linearCombination_4982f3ad320f55d2,
            mid_linearCombination_09ef2cc37db2d813,
            mid_linearCombination_b539347ac1f5e9cb,
            mid_linearCombination_fa43a717320a04b1,
            mid_log_696946eeaba4dcdf,
            mid_log10_696946eeaba4dcdf,
            mid_log1p_696946eeaba4dcdf,
            mid_multiply_b9608530ef4c1741,
            mid_multiply_b1f11c9800ac2d79,
            mid_multiply_12afe5a10b30039b,
            mid_multiplyInPlace_fba7be235291669a,
            mid_negate_696946eeaba4dcdf,
            mid_newInstance_b1f11c9800ac2d79,
            mid_numVars_f2f64475e4580546,
            mid_pow_b9608530ef4c1741,
            mid_pow_b1f11c9800ac2d79,
            mid_pow_12afe5a10b30039b,
            mid_pow_3f65bc801456de75,
            mid_reciprocal_696946eeaba4dcdf,
            mid_remainder_b9608530ef4c1741,
            mid_remainder_b1f11c9800ac2d79,
            mid_rint_696946eeaba4dcdf,
            mid_rootN_12afe5a10b30039b,
            mid_scalb_12afe5a10b30039b,
            mid_sign_696946eeaba4dcdf,
            mid_sin_696946eeaba4dcdf,
            mid_sinCos_35f2499c71416a1a,
            mid_sinh_696946eeaba4dcdf,
            mid_sinhCosh_c388a3eefde9d597,
            mid_sqrt_696946eeaba4dcdf,
            mid_subtract_b9608530ef4c1741,
            mid_subtract_b1f11c9800ac2d79,
            mid_tan_696946eeaba4dcdf,
            mid_tanh_696946eeaba4dcdf,
            mid_taylor_f05cb8c6dfd5e0b9,
            mid_toDegrees_696946eeaba4dcdf,
            mid_toRadians_696946eeaba4dcdf,
            mid_ulp_696946eeaba4dcdf,
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
