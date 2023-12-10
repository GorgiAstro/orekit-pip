#ifndef org_hipparchus_CalculusFieldElement_H
#define org_hipparchus_CalculusFieldElement_H

#include "org/hipparchus/FieldElement.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
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
        mid_abs_7e89936bdf79375b,
        mid_acos_7e89936bdf79375b,
        mid_acosh_7e89936bdf79375b,
        mid_add_3b5476c43c448e8a,
        mid_asin_7e89936bdf79375b,
        mid_asinh_7e89936bdf79375b,
        mid_atan_7e89936bdf79375b,
        mid_atan2_2ab3500f2b9ac35d,
        mid_atanh_7e89936bdf79375b,
        mid_cbrt_7e89936bdf79375b,
        mid_ceil_7e89936bdf79375b,
        mid_copySign_3b5476c43c448e8a,
        mid_copySign_2ab3500f2b9ac35d,
        mid_cos_7e89936bdf79375b,
        mid_cosh_7e89936bdf79375b,
        mid_divide_3b5476c43c448e8a,
        mid_exp_7e89936bdf79375b,
        mid_expm1_7e89936bdf79375b,
        mid_floor_7e89936bdf79375b,
        mid_getExponent_f2f64475e4580546,
        mid_getPi_7e89936bdf79375b,
        mid_hypot_2ab3500f2b9ac35d,
        mid_isFinite_e470b6d9e0d979db,
        mid_isInfinite_e470b6d9e0d979db,
        mid_isNaN_e470b6d9e0d979db,
        mid_linearCombination_eedf53227b3d102c,
        mid_linearCombination_6e75d7e881756940,
        mid_linearCombination_249186cb085c5a37,
        mid_linearCombination_f1fc024d133a6394,
        mid_linearCombination_ad53502daa0afef4,
        mid_linearCombination_363270d7927f748a,
        mid_linearCombination_ccc93889d78d864f,
        mid_linearCombination_d108427c89c6d24c,
        mid_log_7e89936bdf79375b,
        mid_log10_7e89936bdf79375b,
        mid_log1p_7e89936bdf79375b,
        mid_multiply_3b5476c43c448e8a,
        mid_newInstance_3b5476c43c448e8a,
        mid_norm_456d9a2f64d6b28d,
        mid_pow_3b5476c43c448e8a,
        mid_pow_5e30662bac3edb02,
        mid_pow_2ab3500f2b9ac35d,
        mid_reciprocal_7e89936bdf79375b,
        mid_remainder_3b5476c43c448e8a,
        mid_remainder_2ab3500f2b9ac35d,
        mid_rint_7e89936bdf79375b,
        mid_rootN_5e30662bac3edb02,
        mid_round_a27fc9afd27e559d,
        mid_scalb_5e30662bac3edb02,
        mid_sign_7e89936bdf79375b,
        mid_sin_7e89936bdf79375b,
        mid_sinCos_35f2499c71416a1a,
        mid_sinh_7e89936bdf79375b,
        mid_sinhCosh_c388a3eefde9d597,
        mid_sqrt_7e89936bdf79375b,
        mid_subtract_3b5476c43c448e8a,
        mid_tan_7e89936bdf79375b,
        mid_tanh_7e89936bdf79375b,
        mid_toDegrees_7e89936bdf79375b,
        mid_toRadians_7e89936bdf79375b,
        mid_ulp_7e89936bdf79375b,
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
