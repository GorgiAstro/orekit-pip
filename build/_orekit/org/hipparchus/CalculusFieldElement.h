#ifndef org_hipparchus_CalculusFieldElement_H
#define org_hipparchus_CalculusFieldElement_H

#include "org/hipparchus/FieldElement.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {

    class CalculusFieldElement : public ::org::hipparchus::FieldElement {
     public:
      enum {
        mid_abs_f6328613456309a1,
        mid_acos_f6328613456309a1,
        mid_acosh_f6328613456309a1,
        mid_add_2931f2385f0244b2,
        mid_asin_f6328613456309a1,
        mid_asinh_f6328613456309a1,
        mid_atan_f6328613456309a1,
        mid_atan2_6c107bef87eef23a,
        mid_atanh_f6328613456309a1,
        mid_cbrt_f6328613456309a1,
        mid_ceil_f6328613456309a1,
        mid_copySign_2931f2385f0244b2,
        mid_copySign_6c107bef87eef23a,
        mid_cos_f6328613456309a1,
        mid_cosh_f6328613456309a1,
        mid_divide_2931f2385f0244b2,
        mid_exp_f6328613456309a1,
        mid_expm1_f6328613456309a1,
        mid_floor_f6328613456309a1,
        mid_getExponent_d6ab429752e7c267,
        mid_getPi_f6328613456309a1,
        mid_hypot_6c107bef87eef23a,
        mid_isFinite_eee3de00fe971136,
        mid_isInfinite_eee3de00fe971136,
        mid_isNaN_eee3de00fe971136,
        mid_linearCombination_00286450062ca7cc,
        mid_linearCombination_e1fce98e75df5d98,
        mid_linearCombination_797e174db380e13a,
        mid_linearCombination_1179bbafe6054a62,
        mid_linearCombination_cd0fbf0395a62bd3,
        mid_linearCombination_84340afa1e5f2d75,
        mid_linearCombination_a37c7637839d3af2,
        mid_linearCombination_1dd3245a75ae068a,
        mid_log_f6328613456309a1,
        mid_log10_f6328613456309a1,
        mid_log1p_f6328613456309a1,
        mid_multiply_2931f2385f0244b2,
        mid_newInstance_2931f2385f0244b2,
        mid_norm_9981f74b2d109da6,
        mid_pow_2931f2385f0244b2,
        mid_pow_bae57aba20797b29,
        mid_pow_6c107bef87eef23a,
        mid_reciprocal_f6328613456309a1,
        mid_remainder_2931f2385f0244b2,
        mid_remainder_6c107bef87eef23a,
        mid_rint_f6328613456309a1,
        mid_rootN_bae57aba20797b29,
        mid_round_42c72b98e3c2e08a,
        mid_scalb_bae57aba20797b29,
        mid_sign_f6328613456309a1,
        mid_sin_f6328613456309a1,
        mid_sinCos_31b7b02b4932da60,
        mid_sinh_f6328613456309a1,
        mid_sinhCosh_b24d5962ea451135,
        mid_sqrt_f6328613456309a1,
        mid_subtract_2931f2385f0244b2,
        mid_tan_f6328613456309a1,
        mid_tanh_f6328613456309a1,
        mid_toDegrees_f6328613456309a1,
        mid_toRadians_f6328613456309a1,
        mid_ulp_f6328613456309a1,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit CalculusFieldElement(jobject obj) : ::org::hipparchus::FieldElement(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      CalculusFieldElement(const CalculusFieldElement& obj) : ::org::hipparchus::FieldElement(obj) {}

      ::org::hipparchus::FieldElement abs() const;
      ::org::hipparchus::FieldElement acos() const;
      ::org::hipparchus::FieldElement acosh() const;
      ::org::hipparchus::FieldElement add(jdouble) const;
      ::org::hipparchus::FieldElement asin() const;
      ::org::hipparchus::FieldElement asinh() const;
      ::org::hipparchus::FieldElement atan() const;
      ::org::hipparchus::FieldElement atan2(const ::org::hipparchus::FieldElement &) const;
      ::org::hipparchus::FieldElement atanh() const;
      ::org::hipparchus::FieldElement cbrt() const;
      ::org::hipparchus::FieldElement ceil() const;
      ::org::hipparchus::FieldElement copySign(jdouble) const;
      ::org::hipparchus::FieldElement copySign(const ::org::hipparchus::FieldElement &) const;
      ::org::hipparchus::FieldElement cos() const;
      ::org::hipparchus::FieldElement cosh() const;
      ::org::hipparchus::FieldElement divide(jdouble) const;
      ::org::hipparchus::FieldElement exp() const;
      ::org::hipparchus::FieldElement expm1() const;
      ::org::hipparchus::FieldElement floor() const;
      jint getExponent() const;
      ::org::hipparchus::FieldElement getPi() const;
      ::org::hipparchus::FieldElement hypot(const ::org::hipparchus::FieldElement &) const;
      jboolean isFinite() const;
      jboolean isInfinite() const;
      jboolean isNaN() const;
      ::org::hipparchus::FieldElement linearCombination(const JArray< jdouble > &, const JArray< ::org::hipparchus::FieldElement > &) const;
      ::org::hipparchus::FieldElement linearCombination(const JArray< ::org::hipparchus::FieldElement > &, const JArray< ::org::hipparchus::FieldElement > &) const;
      ::org::hipparchus::FieldElement linearCombination(jdouble, const ::org::hipparchus::FieldElement &, jdouble, const ::org::hipparchus::FieldElement &) const;
      ::org::hipparchus::FieldElement linearCombination(const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &) const;
      ::org::hipparchus::FieldElement linearCombination(jdouble, const ::org::hipparchus::FieldElement &, jdouble, const ::org::hipparchus::FieldElement &, jdouble, const ::org::hipparchus::FieldElement &) const;
      ::org::hipparchus::FieldElement linearCombination(const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &) const;
      ::org::hipparchus::FieldElement linearCombination(jdouble, const ::org::hipparchus::FieldElement &, jdouble, const ::org::hipparchus::FieldElement &, jdouble, const ::org::hipparchus::FieldElement &, jdouble, const ::org::hipparchus::FieldElement &) const;
      ::org::hipparchus::FieldElement linearCombination(const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &, const ::org::hipparchus::FieldElement &) const;
      ::org::hipparchus::FieldElement log() const;
      ::org::hipparchus::FieldElement log10() const;
      ::org::hipparchus::FieldElement log1p() const;
      ::org::hipparchus::FieldElement multiply(jdouble) const;
      ::org::hipparchus::FieldElement newInstance(jdouble) const;
      jdouble norm() const;
      ::org::hipparchus::FieldElement pow(jdouble) const;
      ::org::hipparchus::FieldElement pow(jint) const;
      ::org::hipparchus::FieldElement pow(const ::org::hipparchus::FieldElement &) const;
      ::org::hipparchus::FieldElement reciprocal() const;
      ::org::hipparchus::FieldElement remainder(jdouble) const;
      ::org::hipparchus::FieldElement remainder(const ::org::hipparchus::FieldElement &) const;
      ::org::hipparchus::FieldElement rint() const;
      ::org::hipparchus::FieldElement rootN(jint) const;
      jlong round() const;
      ::org::hipparchus::FieldElement scalb(jint) const;
      ::org::hipparchus::FieldElement sign() const;
      ::org::hipparchus::FieldElement sin() const;
      ::org::hipparchus::util::FieldSinCos sinCos() const;
      ::org::hipparchus::FieldElement sinh() const;
      ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
      ::org::hipparchus::FieldElement sqrt() const;
      ::org::hipparchus::FieldElement subtract(jdouble) const;
      ::org::hipparchus::FieldElement tan() const;
      ::org::hipparchus::FieldElement tanh() const;
      ::org::hipparchus::FieldElement toDegrees() const;
      ::org::hipparchus::FieldElement toRadians() const;
      ::org::hipparchus::FieldElement ulp() const;
    };
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    extern PyType_Def PY_TYPE_DEF(CalculusFieldElement);
    extern PyTypeObject *PY_TYPE(CalculusFieldElement);

    class t_CalculusFieldElement {
    public:
      PyObject_HEAD
      CalculusFieldElement object;
      PyTypeObject *parameters[1];
      static PyTypeObject **parameters_(t_CalculusFieldElement *self)
      {
        return (PyTypeObject **) &(self->parameters);
      }
      static PyObject *wrap_Object(const CalculusFieldElement&);
      static PyObject *wrap_jobject(const jobject&);
      static PyObject *wrap_Object(const CalculusFieldElement&, PyTypeObject *);
      static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
