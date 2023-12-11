#ifndef org_hipparchus_CalculusFieldElement_H
#define org_hipparchus_CalculusFieldElement_H

#include "org/hipparchus/FieldElement.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
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
        mid_abs_ce0470d468f80a56,
        mid_acos_ce0470d468f80a56,
        mid_acosh_ce0470d468f80a56,
        mid_add_b29830b726a52a07,
        mid_asin_ce0470d468f80a56,
        mid_asinh_ce0470d468f80a56,
        mid_atan_ce0470d468f80a56,
        mid_atan2_a6cf95a93b365fc9,
        mid_atanh_ce0470d468f80a56,
        mid_cbrt_ce0470d468f80a56,
        mid_ceil_ce0470d468f80a56,
        mid_copySign_b29830b726a52a07,
        mid_copySign_a6cf95a93b365fc9,
        mid_cos_ce0470d468f80a56,
        mid_cosh_ce0470d468f80a56,
        mid_divide_b29830b726a52a07,
        mid_exp_ce0470d468f80a56,
        mid_expm1_ce0470d468f80a56,
        mid_floor_ce0470d468f80a56,
        mid_getExponent_412668abc8d889e9,
        mid_getPi_ce0470d468f80a56,
        mid_hypot_a6cf95a93b365fc9,
        mid_isFinite_89b302893bdbe1f1,
        mid_isInfinite_89b302893bdbe1f1,
        mid_isNaN_89b302893bdbe1f1,
        mid_linearCombination_756695c84a504e59,
        mid_linearCombination_e7be2922cadf37bc,
        mid_linearCombination_a34eba6491407903,
        mid_linearCombination_98abfed322dba58f,
        mid_linearCombination_7d906108163a0c42,
        mid_linearCombination_17883d83f40161c7,
        mid_linearCombination_43dc2ec66058007f,
        mid_linearCombination_e31b03a294074512,
        mid_log_ce0470d468f80a56,
        mid_log10_ce0470d468f80a56,
        mid_log1p_ce0470d468f80a56,
        mid_multiply_b29830b726a52a07,
        mid_newInstance_b29830b726a52a07,
        mid_norm_557b8123390d8d0c,
        mid_pow_b29830b726a52a07,
        mid_pow_d40ba91356b6a058,
        mid_pow_a6cf95a93b365fc9,
        mid_reciprocal_ce0470d468f80a56,
        mid_remainder_b29830b726a52a07,
        mid_remainder_a6cf95a93b365fc9,
        mid_rint_ce0470d468f80a56,
        mid_rootN_d40ba91356b6a058,
        mid_round_9e26256fb0d384a2,
        mid_scalb_d40ba91356b6a058,
        mid_sign_ce0470d468f80a56,
        mid_sin_ce0470d468f80a56,
        mid_sinCos_5efdd92d175db117,
        mid_sinh_ce0470d468f80a56,
        mid_sinhCosh_e5a948cfec461975,
        mid_sqrt_ce0470d468f80a56,
        mid_subtract_b29830b726a52a07,
        mid_tan_ce0470d468f80a56,
        mid_tanh_ce0470d468f80a56,
        mid_toDegrees_ce0470d468f80a56,
        mid_toRadians_ce0470d468f80a56,
        mid_ulp_ce0470d468f80a56,
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
