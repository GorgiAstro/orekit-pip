#ifndef org_hipparchus_analysis_differentiation_SparseGradient_H
#define org_hipparchus_analysis_differentiation_SparseGradient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
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
            mid_abs_dd1b4eb82107346a,
            mid_acos_dd1b4eb82107346a,
            mid_acosh_dd1b4eb82107346a,
            mid_add_548dd95c05819ed5,
            mid_add_3b3e2baab4ba214f,
            mid_addInPlace_02f4c748383125f5,
            mid_asin_dd1b4eb82107346a,
            mid_asinh_dd1b4eb82107346a,
            mid_atan_dd1b4eb82107346a,
            mid_atan2_548dd95c05819ed5,
            mid_atan2_87f3fc51f83e8305,
            mid_atanh_dd1b4eb82107346a,
            mid_cbrt_dd1b4eb82107346a,
            mid_ceil_dd1b4eb82107346a,
            mid_compose_27b8300fbec6466e,
            mid_copySign_548dd95c05819ed5,
            mid_copySign_3b3e2baab4ba214f,
            mid_cos_dd1b4eb82107346a,
            mid_cosh_dd1b4eb82107346a,
            mid_createConstant_3b3e2baab4ba214f,
            mid_createVariable_7f13aa129fa2a40a,
            mid_divide_548dd95c05819ed5,
            mid_divide_3b3e2baab4ba214f,
            mid_equals_221e8e85cb385209,
            mid_exp_dd1b4eb82107346a,
            mid_expm1_dd1b4eb82107346a,
            mid_floor_dd1b4eb82107346a,
            mid_getDerivative_69cfb132c661aca4,
            mid_getField_20f98801541dcec1,
            mid_getPi_dd1b4eb82107346a,
            mid_getReal_557b8123390d8d0c,
            mid_getValue_557b8123390d8d0c,
            mid_hashCode_412668abc8d889e9,
            mid_hypot_548dd95c05819ed5,
            mid_hypot_87f3fc51f83e8305,
            mid_linearCombination_5d627bed16f25bd1,
            mid_linearCombination_2fbb5ae2b2d7175e,
            mid_linearCombination_7a18e1156f14ae59,
            mid_linearCombination_a4900d694e4331bc,
            mid_linearCombination_ac5572c1da41411c,
            mid_linearCombination_50e50f5e5e0cdba7,
            mid_linearCombination_b3d3963a7e6f582d,
            mid_linearCombination_79e0b6cf30dd7b36,
            mid_log_dd1b4eb82107346a,
            mid_log10_dd1b4eb82107346a,
            mid_log1p_dd1b4eb82107346a,
            mid_multiply_548dd95c05819ed5,
            mid_multiply_3b3e2baab4ba214f,
            mid_multiply_2d1990ab15bf750f,
            mid_multiplyInPlace_02f4c748383125f5,
            mid_negate_dd1b4eb82107346a,
            mid_newInstance_3b3e2baab4ba214f,
            mid_numVars_412668abc8d889e9,
            mid_pow_548dd95c05819ed5,
            mid_pow_3b3e2baab4ba214f,
            mid_pow_2d1990ab15bf750f,
            mid_pow_f682c8154a4a9788,
            mid_reciprocal_dd1b4eb82107346a,
            mid_remainder_548dd95c05819ed5,
            mid_remainder_3b3e2baab4ba214f,
            mid_rint_dd1b4eb82107346a,
            mid_rootN_2d1990ab15bf750f,
            mid_scalb_2d1990ab15bf750f,
            mid_sign_dd1b4eb82107346a,
            mid_sin_dd1b4eb82107346a,
            mid_sinCos_5efdd92d175db117,
            mid_sinh_dd1b4eb82107346a,
            mid_sinhCosh_e5a948cfec461975,
            mid_sqrt_dd1b4eb82107346a,
            mid_subtract_548dd95c05819ed5,
            mid_subtract_3b3e2baab4ba214f,
            mid_tan_dd1b4eb82107346a,
            mid_tanh_dd1b4eb82107346a,
            mid_taylor_86c4a0582e0747ce,
            mid_toDegrees_dd1b4eb82107346a,
            mid_toRadians_dd1b4eb82107346a,
            mid_ulp_dd1b4eb82107346a,
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
