#ifndef org_hipparchus_analysis_differentiation_UnivariateDerivative1_H
#define org_hipparchus_analysis_differentiation_UnivariateDerivative1_H

#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace analysis {
      namespace differentiation {
        class DerivativeStructure;
        class UnivariateDerivative1;
        class UnivariateDerivative1Field;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        class UnivariateDerivative1 : public ::org::hipparchus::analysis::differentiation::UnivariateDerivative {
         public:
          enum {
            mid_init$_db212c86bccc027a,
            mid_init$_ab23f4ae0fb33968,
            mid_abs_23c0f53d490c173c,
            mid_acos_23c0f53d490c173c,
            mid_acosh_23c0f53d490c173c,
            mid_add_8e24ca97f1ddac52,
            mid_add_3abecf1dd8bcdfaa,
            mid_asin_23c0f53d490c173c,
            mid_asinh_23c0f53d490c173c,
            mid_atan_23c0f53d490c173c,
            mid_atan2_8e24ca97f1ddac52,
            mid_atanh_23c0f53d490c173c,
            mid_cbrt_23c0f53d490c173c,
            mid_ceil_23c0f53d490c173c,
            mid_compareTo_79066c0a10a9c90a,
            mid_compose_07c566f537564bf9,
            mid_copySign_8e24ca97f1ddac52,
            mid_copySign_3abecf1dd8bcdfaa,
            mid_cos_23c0f53d490c173c,
            mid_cosh_23c0f53d490c173c,
            mid_divide_8e24ca97f1ddac52,
            mid_divide_3abecf1dd8bcdfaa,
            mid_equals_221e8e85cb385209,
            mid_exp_23c0f53d490c173c,
            mid_expm1_23c0f53d490c173c,
            mid_floor_23c0f53d490c173c,
            mid_getDerivative_69cfb132c661aca4,
            mid_getExponent_412668abc8d889e9,
            mid_getField_a70907128b423cca,
            mid_getFirstDerivative_557b8123390d8d0c,
            mid_getOrder_412668abc8d889e9,
            mid_getPi_23c0f53d490c173c,
            mid_getReal_557b8123390d8d0c,
            mid_getValue_557b8123390d8d0c,
            mid_hashCode_412668abc8d889e9,
            mid_hypot_8e24ca97f1ddac52,
            mid_linearCombination_5cd64a6ee7a7f2c6,
            mid_linearCombination_98079e401755bb9b,
            mid_linearCombination_6ccb231305ea52f9,
            mid_linearCombination_a843fdc2486f08c0,
            mid_linearCombination_be7180be9b9c508e,
            mid_linearCombination_e6e2c2f17852186e,
            mid_linearCombination_f87b54fa6425b9d2,
            mid_linearCombination_256606dc17f37e12,
            mid_log_23c0f53d490c173c,
            mid_log10_23c0f53d490c173c,
            mid_log1p_23c0f53d490c173c,
            mid_multiply_8e24ca97f1ddac52,
            mid_multiply_3abecf1dd8bcdfaa,
            mid_multiply_0a0f5be08be889b0,
            mid_negate_23c0f53d490c173c,
            mid_newInstance_3abecf1dd8bcdfaa,
            mid_pow_8e24ca97f1ddac52,
            mid_pow_3abecf1dd8bcdfaa,
            mid_pow_0a0f5be08be889b0,
            mid_pow_f20f95cf728c3c7a,
            mid_reciprocal_23c0f53d490c173c,
            mid_remainder_8e24ca97f1ddac52,
            mid_remainder_3abecf1dd8bcdfaa,
            mid_rint_23c0f53d490c173c,
            mid_rootN_0a0f5be08be889b0,
            mid_scalb_0a0f5be08be889b0,
            mid_sign_23c0f53d490c173c,
            mid_sin_23c0f53d490c173c,
            mid_sinCos_5efdd92d175db117,
            mid_sinh_23c0f53d490c173c,
            mid_sinhCosh_e5a948cfec461975,
            mid_sqrt_23c0f53d490c173c,
            mid_subtract_8e24ca97f1ddac52,
            mid_subtract_3abecf1dd8bcdfaa,
            mid_tan_23c0f53d490c173c,
            mid_tanh_23c0f53d490c173c,
            mid_taylor_7e960cd6eee376d8,
            mid_toDegrees_23c0f53d490c173c,
            mid_toDerivativeStructure_9f40c2a430225d38,
            mid_toRadians_23c0f53d490c173c,
            mid_ulp_23c0f53d490c173c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnivariateDerivative1(jobject obj) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnivariateDerivative1(const UnivariateDerivative1& obj) : ::org::hipparchus::analysis::differentiation::UnivariateDerivative(obj) {}

          static UnivariateDerivative1 *PI;

          UnivariateDerivative1(const ::org::hipparchus::analysis::differentiation::DerivativeStructure &);
          UnivariateDerivative1(jdouble, jdouble);

          UnivariateDerivative1 abs() const;
          UnivariateDerivative1 acos() const;
          UnivariateDerivative1 acosh() const;
          UnivariateDerivative1 add(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 add(jdouble) const;
          UnivariateDerivative1 asin() const;
          UnivariateDerivative1 asinh() const;
          UnivariateDerivative1 atan() const;
          UnivariateDerivative1 atan2(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 atanh() const;
          UnivariateDerivative1 cbrt() const;
          UnivariateDerivative1 ceil() const;
          jint compareTo(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 compose(const JArray< jdouble > &) const;
          UnivariateDerivative1 copySign(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 copySign(jdouble) const;
          UnivariateDerivative1 cos() const;
          UnivariateDerivative1 cosh() const;
          UnivariateDerivative1 divide(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 divide(jdouble) const;
          jboolean equals(const ::java::lang::Object &) const;
          UnivariateDerivative1 exp() const;
          UnivariateDerivative1 expm1() const;
          UnivariateDerivative1 floor() const;
          jdouble getDerivative(jint) const;
          jint getExponent() const;
          ::org::hipparchus::analysis::differentiation::UnivariateDerivative1Field getField() const;
          jdouble getFirstDerivative() const;
          jint getOrder() const;
          UnivariateDerivative1 getPi() const;
          jdouble getReal() const;
          jdouble getValue() const;
          jint hashCode() const;
          UnivariateDerivative1 hypot(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(const JArray< jdouble > &, const JArray< UnivariateDerivative1 > &) const;
          UnivariateDerivative1 linearCombination(const JArray< UnivariateDerivative1 > &, const JArray< UnivariateDerivative1 > &) const;
          UnivariateDerivative1 linearCombination(const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 linearCombination(jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &, jdouble, const UnivariateDerivative1 &) const;
          UnivariateDerivative1 log() const;
          UnivariateDerivative1 log10() const;
          UnivariateDerivative1 log1p() const;
          UnivariateDerivative1 multiply(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 multiply(jdouble) const;
          UnivariateDerivative1 multiply(jint) const;
          UnivariateDerivative1 negate() const;
          UnivariateDerivative1 newInstance(jdouble) const;
          UnivariateDerivative1 pow(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 pow(jdouble) const;
          UnivariateDerivative1 pow(jint) const;
          static UnivariateDerivative1 pow(jdouble, const UnivariateDerivative1 &);
          UnivariateDerivative1 reciprocal() const;
          UnivariateDerivative1 remainder(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 remainder(jdouble) const;
          UnivariateDerivative1 rint() const;
          UnivariateDerivative1 rootN(jint) const;
          UnivariateDerivative1 scalb(jint) const;
          UnivariateDerivative1 sign() const;
          UnivariateDerivative1 sin() const;
          ::org::hipparchus::util::FieldSinCos sinCos() const;
          UnivariateDerivative1 sinh() const;
          ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
          UnivariateDerivative1 sqrt() const;
          UnivariateDerivative1 subtract(const UnivariateDerivative1 &) const;
          UnivariateDerivative1 subtract(jdouble) const;
          UnivariateDerivative1 tan() const;
          UnivariateDerivative1 tanh() const;
          jdouble taylor(jdouble) const;
          UnivariateDerivative1 toDegrees() const;
          ::org::hipparchus::analysis::differentiation::DerivativeStructure toDerivativeStructure() const;
          UnivariateDerivative1 toRadians() const;
          UnivariateDerivative1 ulp() const;
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
        extern PyType_Def PY_TYPE_DEF(UnivariateDerivative1);
        extern PyTypeObject *PY_TYPE(UnivariateDerivative1);

        class t_UnivariateDerivative1 {
        public:
          PyObject_HEAD
          UnivariateDerivative1 object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_UnivariateDerivative1 *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const UnivariateDerivative1&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const UnivariateDerivative1&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
