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
        mid_abs_2ff8de927fda4153,
        mid_acos_2ff8de927fda4153,
        mid_acosh_2ff8de927fda4153,
        mid_add_24adc9c1a7e0cbd2,
        mid_asin_2ff8de927fda4153,
        mid_asinh_2ff8de927fda4153,
        mid_atan_2ff8de927fda4153,
        mid_atan2_392eff94748018d4,
        mid_atanh_2ff8de927fda4153,
        mid_cbrt_2ff8de927fda4153,
        mid_ceil_2ff8de927fda4153,
        mid_copySign_24adc9c1a7e0cbd2,
        mid_copySign_392eff94748018d4,
        mid_cos_2ff8de927fda4153,
        mid_cosh_2ff8de927fda4153,
        mid_divide_24adc9c1a7e0cbd2,
        mid_exp_2ff8de927fda4153,
        mid_expm1_2ff8de927fda4153,
        mid_floor_2ff8de927fda4153,
        mid_getExponent_55546ef6a647f39b,
        mid_getPi_2ff8de927fda4153,
        mid_hypot_392eff94748018d4,
        mid_isFinite_9ab94ac1dc23b105,
        mid_isInfinite_9ab94ac1dc23b105,
        mid_isNaN_9ab94ac1dc23b105,
        mid_linearCombination_1e67f64fd149ce54,
        mid_linearCombination_ce8088cdfdeca75c,
        mid_linearCombination_c11d3080748c8935,
        mid_linearCombination_fcdbbadd03bede84,
        mid_linearCombination_a7ddec7e866d67ff,
        mid_linearCombination_6c33c9c54c0f67d4,
        mid_linearCombination_e9088396a30da997,
        mid_linearCombination_2ef475d775443e2f,
        mid_log_2ff8de927fda4153,
        mid_log10_2ff8de927fda4153,
        mid_log1p_2ff8de927fda4153,
        mid_multiply_24adc9c1a7e0cbd2,
        mid_newInstance_24adc9c1a7e0cbd2,
        mid_norm_b74f83833fdad017,
        mid_pow_24adc9c1a7e0cbd2,
        mid_pow_6c5caf579ccf9ce5,
        mid_pow_392eff94748018d4,
        mid_reciprocal_2ff8de927fda4153,
        mid_remainder_24adc9c1a7e0cbd2,
        mid_remainder_392eff94748018d4,
        mid_rint_2ff8de927fda4153,
        mid_rootN_6c5caf579ccf9ce5,
        mid_round_6c0ce7e438e5ded4,
        mid_scalb_6c5caf579ccf9ce5,
        mid_sign_2ff8de927fda4153,
        mid_sin_2ff8de927fda4153,
        mid_sinCos_e434dd780193da2f,
        mid_sinh_2ff8de927fda4153,
        mid_sinhCosh_4a1e2142f3481995,
        mid_sqrt_2ff8de927fda4153,
        mid_subtract_24adc9c1a7e0cbd2,
        mid_tan_2ff8de927fda4153,
        mid_tanh_2ff8de927fda4153,
        mid_toDegrees_2ff8de927fda4153,
        mid_toRadians_2ff8de927fda4153,
        mid_ulp_2ff8de927fda4153,
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
