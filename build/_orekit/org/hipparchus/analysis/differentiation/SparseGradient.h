#ifndef org_hipparchus_analysis_differentiation_SparseGradient_H
#define org_hipparchus_analysis_differentiation_SparseGradient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class SparseGradient;
      }
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    class Field;
    class CalculusFieldElement;
    namespace exception {
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

        class SparseGradient : public ::java::lang::Object {
         public:
          enum {
            mid_abs_ed038846c7f4bd09,
            mid_acos_ed038846c7f4bd09,
            mid_acosh_ed038846c7f4bd09,
            mid_add_e5c5abd9bec39419,
            mid_add_5ca9d3603e3064a2,
            mid_addInPlace_dbe52e5696575f72,
            mid_asin_ed038846c7f4bd09,
            mid_asinh_ed038846c7f4bd09,
            mid_atan_ed038846c7f4bd09,
            mid_atan2_e5c5abd9bec39419,
            mid_atan2_42a5d1853433893e,
            mid_atanh_ed038846c7f4bd09,
            mid_cbrt_ed038846c7f4bd09,
            mid_ceil_ed038846c7f4bd09,
            mid_compose_3872a00e57218cc2,
            mid_copySign_e5c5abd9bec39419,
            mid_copySign_5ca9d3603e3064a2,
            mid_cos_ed038846c7f4bd09,
            mid_cosh_ed038846c7f4bd09,
            mid_createConstant_5ca9d3603e3064a2,
            mid_createVariable_92d5281504a41756,
            mid_divide_e5c5abd9bec39419,
            mid_divide_5ca9d3603e3064a2,
            mid_equals_460c5e2d9d51c6cc,
            mid_exp_ed038846c7f4bd09,
            mid_expm1_ed038846c7f4bd09,
            mid_floor_ed038846c7f4bd09,
            mid_getDerivative_2afcbc21f4e57ab2,
            mid_getField_04d1f63e17d5c5d4,
            mid_getPi_ed038846c7f4bd09,
            mid_getReal_b74f83833fdad017,
            mid_getValue_b74f83833fdad017,
            mid_hashCode_55546ef6a647f39b,
            mid_hypot_e5c5abd9bec39419,
            mid_hypot_42a5d1853433893e,
            mid_linearCombination_0060c6313662d4fc,
            mid_linearCombination_2523fe52d964139e,
            mid_linearCombination_e4464c69019b4923,
            mid_linearCombination_30f2e70ab9d1f636,
            mid_linearCombination_ddef5547fa28b008,
            mid_linearCombination_04daf0145ca72d20,
            mid_linearCombination_310343dfd341bcfb,
            mid_linearCombination_530bdfca25919712,
            mid_log_ed038846c7f4bd09,
            mid_log10_ed038846c7f4bd09,
            mid_log1p_ed038846c7f4bd09,
            mid_multiply_e5c5abd9bec39419,
            mid_multiply_5ca9d3603e3064a2,
            mid_multiply_d7f9c7da9c084a57,
            mid_multiplyInPlace_dbe52e5696575f72,
            mid_negate_ed038846c7f4bd09,
            mid_newInstance_5ca9d3603e3064a2,
            mid_numVars_55546ef6a647f39b,
            mid_pow_e5c5abd9bec39419,
            mid_pow_5ca9d3603e3064a2,
            mid_pow_d7f9c7da9c084a57,
            mid_pow_93640243cd5dffdb,
            mid_reciprocal_ed038846c7f4bd09,
            mid_remainder_e5c5abd9bec39419,
            mid_remainder_5ca9d3603e3064a2,
            mid_rint_ed038846c7f4bd09,
            mid_rootN_d7f9c7da9c084a57,
            mid_scalb_d7f9c7da9c084a57,
            mid_sign_ed038846c7f4bd09,
            mid_sin_ed038846c7f4bd09,
            mid_sinCos_e434dd780193da2f,
            mid_sinh_ed038846c7f4bd09,
            mid_sinhCosh_4a1e2142f3481995,
            mid_sqrt_ed038846c7f4bd09,
            mid_subtract_e5c5abd9bec39419,
            mid_subtract_5ca9d3603e3064a2,
            mid_tan_ed038846c7f4bd09,
            mid_tanh_ed038846c7f4bd09,
            mid_taylor_b060e4326765ccf1,
            mid_toDegrees_ed038846c7f4bd09,
            mid_toRadians_ed038846c7f4bd09,
            mid_ulp_ed038846c7f4bd09,
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
