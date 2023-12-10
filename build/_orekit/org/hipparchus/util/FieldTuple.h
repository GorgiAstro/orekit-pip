#ifndef org_hipparchus_util_FieldTuple_H
#define org_hipparchus_util_FieldTuple_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
      class FieldTuple;
    }
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalArgumentException;
    }
    class Field;
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
          mid_init$_72479ee08453ef97,
          mid_abs_c6f44995fb640946,
          mid_acos_c6f44995fb640946,
          mid_acosh_c6f44995fb640946,
          mid_add_1d3be396d6aaf49a,
          mid_add_9d00348fb504e444,
          mid_asin_c6f44995fb640946,
          mid_asinh_c6f44995fb640946,
          mid_atan_c6f44995fb640946,
          mid_atan2_1d3be396d6aaf49a,
          mid_atanh_c6f44995fb640946,
          mid_cbrt_c6f44995fb640946,
          mid_ceil_c6f44995fb640946,
          mid_copySign_1d3be396d6aaf49a,
          mid_copySign_9d00348fb504e444,
          mid_cos_c6f44995fb640946,
          mid_cosh_c6f44995fb640946,
          mid_divide_1d3be396d6aaf49a,
          mid_divide_9d00348fb504e444,
          mid_equals_65c7d273e80d497a,
          mid_exp_c6f44995fb640946,
          mid_expm1_c6f44995fb640946,
          mid_floor_c6f44995fb640946,
          mid_getComponent_93058f0552012043,
          mid_getComponents_226a0b2040b1d2e1,
          mid_getDimension_570ce0828f81a2c1,
          mid_getField_5b28be2d3632a5dc,
          mid_getPi_c6f44995fb640946,
          mid_getReal_dff5885c2c873297,
          mid_hashCode_570ce0828f81a2c1,
          mid_hypot_1d3be396d6aaf49a,
          mid_linearCombination_5f11403806f495fb,
          mid_linearCombination_b905f923649a6e2a,
          mid_linearCombination_8aed902754f7deb3,
          mid_linearCombination_771c499b2e7405bc,
          mid_linearCombination_93faa82c80f2f2d1,
          mid_linearCombination_1536b6a58fc7d47d,
          mid_linearCombination_e8eec0295bba03ca,
          mid_linearCombination_2a46ddadd8de494f,
          mid_log_c6f44995fb640946,
          mid_log10_c6f44995fb640946,
          mid_log1p_c6f44995fb640946,
          mid_multiply_1d3be396d6aaf49a,
          mid_multiply_9d00348fb504e444,
          mid_multiply_a7c5131bda8e71dd,
          mid_negate_c6f44995fb640946,
          mid_newInstance_9d00348fb504e444,
          mid_pow_1d3be396d6aaf49a,
          mid_pow_9d00348fb504e444,
          mid_pow_a7c5131bda8e71dd,
          mid_reciprocal_c6f44995fb640946,
          mid_remainder_1d3be396d6aaf49a,
          mid_remainder_9d00348fb504e444,
          mid_rint_c6f44995fb640946,
          mid_rootN_a7c5131bda8e71dd,
          mid_scalb_a7c5131bda8e71dd,
          mid_sign_c6f44995fb640946,
          mid_sin_c6f44995fb640946,
          mid_sinCos_a447b7ca640e6b68,
          mid_sinh_c6f44995fb640946,
          mid_sinhCosh_eef733c8a50b276f,
          mid_sqrt_c6f44995fb640946,
          mid_subtract_1d3be396d6aaf49a,
          mid_subtract_9d00348fb504e444,
          mid_tan_c6f44995fb640946,
          mid_tanh_c6f44995fb640946,
          mid_toDegrees_c6f44995fb640946,
          mid_toRadians_c6f44995fb640946,
          mid_ulp_c6f44995fb640946,
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
