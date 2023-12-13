#ifndef org_hipparchus_util_FieldTuple_H
#define org_hipparchus_util_FieldTuple_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
      class FieldTuple;
    }
    class Field;
    class CalculusFieldElement;
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
    namespace util {

      class FieldTuple : public ::java::lang::Object {
       public:
        enum {
          mid_init$_8b0f7facc8a6a46e,
          mid_abs_63ce8cc6df99d992,
          mid_acos_63ce8cc6df99d992,
          mid_acosh_63ce8cc6df99d992,
          mid_add_ddc7a4f7f7e61bb9,
          mid_add_8fe4e497158b4411,
          mid_asin_63ce8cc6df99d992,
          mid_asinh_63ce8cc6df99d992,
          mid_atan_63ce8cc6df99d992,
          mid_atan2_ddc7a4f7f7e61bb9,
          mid_atanh_63ce8cc6df99d992,
          mid_cbrt_63ce8cc6df99d992,
          mid_ceil_63ce8cc6df99d992,
          mid_copySign_ddc7a4f7f7e61bb9,
          mid_copySign_8fe4e497158b4411,
          mid_cos_63ce8cc6df99d992,
          mid_cosh_63ce8cc6df99d992,
          mid_divide_ddc7a4f7f7e61bb9,
          mid_divide_8fe4e497158b4411,
          mid_equals_460c5e2d9d51c6cc,
          mid_exp_63ce8cc6df99d992,
          mid_expm1_63ce8cc6df99d992,
          mid_floor_63ce8cc6df99d992,
          mid_getComponent_21e6b3c521b9c768,
          mid_getComponents_883be608cfc68c26,
          mid_getDimension_55546ef6a647f39b,
          mid_getField_04d1f63e17d5c5d4,
          mid_getPi_63ce8cc6df99d992,
          mid_getReal_b74f83833fdad017,
          mid_hashCode_55546ef6a647f39b,
          mid_hypot_ddc7a4f7f7e61bb9,
          mid_linearCombination_647438d304241e5d,
          mid_linearCombination_04a2903ed277e106,
          mid_linearCombination_962ef3f48325ea0d,
          mid_linearCombination_dee09394e88de719,
          mid_linearCombination_3f74f9b1faf5965a,
          mid_linearCombination_931d612f2ff66073,
          mid_linearCombination_4ae000fa06c7a943,
          mid_linearCombination_b24686de8a6eb6df,
          mid_log_63ce8cc6df99d992,
          mid_log10_63ce8cc6df99d992,
          mid_log1p_63ce8cc6df99d992,
          mid_multiply_ddc7a4f7f7e61bb9,
          mid_multiply_8fe4e497158b4411,
          mid_multiply_b86c5b2cc8073ebe,
          mid_negate_63ce8cc6df99d992,
          mid_newInstance_8fe4e497158b4411,
          mid_pow_ddc7a4f7f7e61bb9,
          mid_pow_8fe4e497158b4411,
          mid_pow_b86c5b2cc8073ebe,
          mid_reciprocal_63ce8cc6df99d992,
          mid_remainder_ddc7a4f7f7e61bb9,
          mid_remainder_8fe4e497158b4411,
          mid_rint_63ce8cc6df99d992,
          mid_rootN_b86c5b2cc8073ebe,
          mid_scalb_b86c5b2cc8073ebe,
          mid_sign_63ce8cc6df99d992,
          mid_sin_63ce8cc6df99d992,
          mid_sinCos_e434dd780193da2f,
          mid_sinh_63ce8cc6df99d992,
          mid_sinhCosh_4a1e2142f3481995,
          mid_sqrt_63ce8cc6df99d992,
          mid_subtract_ddc7a4f7f7e61bb9,
          mid_subtract_8fe4e497158b4411,
          mid_tan_63ce8cc6df99d992,
          mid_tanh_63ce8cc6df99d992,
          mid_toDegrees_63ce8cc6df99d992,
          mid_toRadians_63ce8cc6df99d992,
          mid_ulp_63ce8cc6df99d992,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldTuple(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldTuple(const FieldTuple& obj) : ::java::lang::Object(obj) {}

        FieldTuple(const JArray< ::org::hipparchus::CalculusFieldElement > &);

        FieldTuple abs() const;
        FieldTuple acos() const;
        FieldTuple acosh() const;
        FieldTuple add(const FieldTuple &) const;
        FieldTuple add(jdouble) const;
        FieldTuple asin() const;
        FieldTuple asinh() const;
        FieldTuple atan() const;
        FieldTuple atan2(const FieldTuple &) const;
        FieldTuple atanh() const;
        FieldTuple cbrt() const;
        FieldTuple ceil() const;
        FieldTuple copySign(const FieldTuple &) const;
        FieldTuple copySign(jdouble) const;
        FieldTuple cos() const;
        FieldTuple cosh() const;
        FieldTuple divide(const FieldTuple &) const;
        FieldTuple divide(jdouble) const;
        jboolean equals(const ::java::lang::Object &) const;
        FieldTuple exp() const;
        FieldTuple expm1() const;
        FieldTuple floor() const;
        ::org::hipparchus::CalculusFieldElement getComponent(jint) const;
        JArray< ::org::hipparchus::CalculusFieldElement > getComponents() const;
        jint getDimension() const;
        ::org::hipparchus::Field getField() const;
        FieldTuple getPi() const;
        jdouble getReal() const;
        jint hashCode() const;
        FieldTuple hypot(const FieldTuple &) const;
        FieldTuple linearCombination(const JArray< jdouble > &, const JArray< FieldTuple > &) const;
        FieldTuple linearCombination(const JArray< FieldTuple > &, const JArray< FieldTuple > &) const;
        FieldTuple linearCombination(const FieldTuple &, const FieldTuple &, const FieldTuple &, const FieldTuple &) const;
        FieldTuple linearCombination(jdouble, const FieldTuple &, jdouble, const FieldTuple &) const;
        FieldTuple linearCombination(const FieldTuple &, const FieldTuple &, const FieldTuple &, const FieldTuple &, const FieldTuple &, const FieldTuple &) const;
        FieldTuple linearCombination(jdouble, const FieldTuple &, jdouble, const FieldTuple &, jdouble, const FieldTuple &) const;
        FieldTuple linearCombination(const FieldTuple &, const FieldTuple &, const FieldTuple &, const FieldTuple &, const FieldTuple &, const FieldTuple &, const FieldTuple &, const FieldTuple &) const;
        FieldTuple linearCombination(jdouble, const FieldTuple &, jdouble, const FieldTuple &, jdouble, const FieldTuple &, jdouble, const FieldTuple &) const;
        FieldTuple log() const;
        FieldTuple log10() const;
        FieldTuple log1p() const;
        FieldTuple multiply(const FieldTuple &) const;
        FieldTuple multiply(jdouble) const;
        FieldTuple multiply(jint) const;
        FieldTuple negate() const;
        FieldTuple newInstance(jdouble) const;
        FieldTuple pow(const FieldTuple &) const;
        FieldTuple pow(jdouble) const;
        FieldTuple pow(jint) const;
        FieldTuple reciprocal() const;
        FieldTuple remainder(const FieldTuple &) const;
        FieldTuple remainder(jdouble) const;
        FieldTuple rint() const;
        FieldTuple rootN(jint) const;
        FieldTuple scalb(jint) const;
        FieldTuple sign() const;
        FieldTuple sin() const;
        ::org::hipparchus::util::FieldSinCos sinCos() const;
        FieldTuple sinh() const;
        ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
        FieldTuple sqrt() const;
        FieldTuple subtract(const FieldTuple &) const;
        FieldTuple subtract(jdouble) const;
        FieldTuple tan() const;
        FieldTuple tanh() const;
        FieldTuple toDegrees() const;
        FieldTuple toRadians() const;
        FieldTuple ulp() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(FieldTuple);
      extern PyTypeObject *PY_TYPE(FieldTuple);

      class t_FieldTuple {
      public:
        PyObject_HEAD
        FieldTuple object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldTuple *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldTuple&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldTuple&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
