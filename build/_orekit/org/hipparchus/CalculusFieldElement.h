#ifndef org_hipparchus_CalculusFieldElement_H
#define org_hipparchus_CalculusFieldElement_H

#include "org/hipparchus/FieldElement.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
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
        mid_abs_99097cb60cf2d774,
        mid_acos_99097cb60cf2d774,
        mid_acosh_99097cb60cf2d774,
        mid_add_36daaf134d6833f6,
        mid_asin_99097cb60cf2d774,
        mid_asinh_99097cb60cf2d774,
        mid_atan_99097cb60cf2d774,
        mid_atan2_013225ac340b432a,
        mid_atanh_99097cb60cf2d774,
        mid_cbrt_99097cb60cf2d774,
        mid_ceil_99097cb60cf2d774,
        mid_copySign_36daaf134d6833f6,
        mid_copySign_013225ac340b432a,
        mid_cos_99097cb60cf2d774,
        mid_cosh_99097cb60cf2d774,
        mid_divide_36daaf134d6833f6,
        mid_exp_99097cb60cf2d774,
        mid_expm1_99097cb60cf2d774,
        mid_floor_99097cb60cf2d774,
        mid_getExponent_570ce0828f81a2c1,
        mid_getPi_99097cb60cf2d774,
        mid_hypot_013225ac340b432a,
        mid_isFinite_b108b35ef48e27bd,
        mid_isInfinite_b108b35ef48e27bd,
        mid_isNaN_b108b35ef48e27bd,
        mid_linearCombination_6c800c3bb1b4baf6,
        mid_linearCombination_4a795dc0409d2025,
        mid_linearCombination_fcb38b77bda5f40d,
        mid_linearCombination_f7bc8a2de40f6518,
        mid_linearCombination_85b1c5ff41d1faac,
        mid_linearCombination_43b8be02a91e7af5,
        mid_linearCombination_f2df3da994c132b7,
        mid_linearCombination_d7a4551094e12825,
        mid_log_99097cb60cf2d774,
        mid_log10_99097cb60cf2d774,
        mid_log1p_99097cb60cf2d774,
        mid_multiply_36daaf134d6833f6,
        mid_newInstance_36daaf134d6833f6,
        mid_norm_dff5885c2c873297,
        mid_pow_36daaf134d6833f6,
        mid_pow_ffcdb6600dc6671a,
        mid_pow_013225ac340b432a,
        mid_reciprocal_99097cb60cf2d774,
        mid_remainder_36daaf134d6833f6,
        mid_remainder_013225ac340b432a,
        mid_rint_99097cb60cf2d774,
        mid_rootN_ffcdb6600dc6671a,
        mid_round_492808a339bfa35f,
        mid_scalb_ffcdb6600dc6671a,
        mid_sign_99097cb60cf2d774,
        mid_sin_99097cb60cf2d774,
        mid_sinCos_a447b7ca640e6b68,
        mid_sinh_99097cb60cf2d774,
        mid_sinhCosh_eef733c8a50b276f,
        mid_sqrt_99097cb60cf2d774,
        mid_subtract_36daaf134d6833f6,
        mid_tan_99097cb60cf2d774,
        mid_tanh_99097cb60cf2d774,
        mid_toDegrees_99097cb60cf2d774,
        mid_toRadians_99097cb60cf2d774,
        mid_ulp_99097cb60cf2d774,
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
