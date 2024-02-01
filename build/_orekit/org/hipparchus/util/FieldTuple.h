#ifndef org_hipparchus_util_FieldTuple_H
#define org_hipparchus_util_FieldTuple_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class FieldTuple;
      class FieldSinCos;
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
    class CalculusFieldElement;
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
          mid_init$_77e61a645c496adc,
          mid_abs_2f8d59c9ac519600,
          mid_acos_2f8d59c9ac519600,
          mid_acosh_2f8d59c9ac519600,
          mid_add_e351ffcdc2c0be06,
          mid_add_ec1b1370a0721aea,
          mid_asin_2f8d59c9ac519600,
          mid_asinh_2f8d59c9ac519600,
          mid_atan_2f8d59c9ac519600,
          mid_atan2_e351ffcdc2c0be06,
          mid_atanh_2f8d59c9ac519600,
          mid_cbrt_2f8d59c9ac519600,
          mid_ceil_2f8d59c9ac519600,
          mid_copySign_e351ffcdc2c0be06,
          mid_copySign_ec1b1370a0721aea,
          mid_cos_2f8d59c9ac519600,
          mid_cosh_2f8d59c9ac519600,
          mid_divide_e351ffcdc2c0be06,
          mid_divide_ec1b1370a0721aea,
          mid_equals_72faff9b05f5ed5e,
          mid_exp_2f8d59c9ac519600,
          mid_expm1_2f8d59c9ac519600,
          mid_floor_2f8d59c9ac519600,
          mid_getComponent_dfcf702144fd7bc1,
          mid_getComponents_94ed2e0620f8833d,
          mid_getDimension_d6ab429752e7c267,
          mid_getField_577649682b9910c1,
          mid_getPi_2f8d59c9ac519600,
          mid_getReal_9981f74b2d109da6,
          mid_hashCode_d6ab429752e7c267,
          mid_hypot_e351ffcdc2c0be06,
          mid_linearCombination_5b0201e41d284aec,
          mid_linearCombination_ae6f6e846cc023c3,
          mid_linearCombination_3d02a23fdc64128b,
          mid_linearCombination_d3cb773a190d9706,
          mid_linearCombination_fb2eef78dbcef4b5,
          mid_linearCombination_4bd8afa7a6bb8922,
          mid_linearCombination_7e43e94819fe3145,
          mid_linearCombination_adb1f6d4a0566c51,
          mid_log_2f8d59c9ac519600,
          mid_log10_2f8d59c9ac519600,
          mid_log1p_2f8d59c9ac519600,
          mid_multiply_e351ffcdc2c0be06,
          mid_multiply_ec1b1370a0721aea,
          mid_multiply_3e235218b49146f4,
          mid_negate_2f8d59c9ac519600,
          mid_newInstance_ec1b1370a0721aea,
          mid_pow_e351ffcdc2c0be06,
          mid_pow_ec1b1370a0721aea,
          mid_pow_3e235218b49146f4,
          mid_reciprocal_2f8d59c9ac519600,
          mid_remainder_e351ffcdc2c0be06,
          mid_remainder_ec1b1370a0721aea,
          mid_rint_2f8d59c9ac519600,
          mid_rootN_3e235218b49146f4,
          mid_scalb_3e235218b49146f4,
          mid_sign_2f8d59c9ac519600,
          mid_sin_2f8d59c9ac519600,
          mid_sinCos_31b7b02b4932da60,
          mid_sinh_2f8d59c9ac519600,
          mid_sinhCosh_b24d5962ea451135,
          mid_sqrt_2f8d59c9ac519600,
          mid_subtract_e351ffcdc2c0be06,
          mid_subtract_ec1b1370a0721aea,
          mid_tan_2f8d59c9ac519600,
          mid_tanh_2f8d59c9ac519600,
          mid_toDegrees_2f8d59c9ac519600,
          mid_toRadians_2f8d59c9ac519600,
          mid_ulp_2f8d59c9ac519600,
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
