#ifndef org_hipparchus_complex_FieldComplex_H
#define org_hipparchus_complex_FieldComplex_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace complex {
      class FieldComplexField;
      class FieldComplex;
    }
    class CalculusFieldElement;
    class Field;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class FieldComplex : public ::java::lang::Object {
       public:
        enum {
          mid_init$_1ee4bed350fde589,
          mid_init$_b38c15e176684020,
          mid_abs_bfc6d3bb8e8278b9,
          mid_acos_bfc6d3bb8e8278b9,
          mid_acosh_bfc6d3bb8e8278b9,
          mid_add_285633f17a3543fe,
          mid_add_e2d5da6df3932ed5,
          mid_add_f57793921fab57ff,
          mid_asin_bfc6d3bb8e8278b9,
          mid_asinh_bfc6d3bb8e8278b9,
          mid_atan_bfc6d3bb8e8278b9,
          mid_atan2_285633f17a3543fe,
          mid_atanh_bfc6d3bb8e8278b9,
          mid_cbrt_bfc6d3bb8e8278b9,
          mid_ceil_bfc6d3bb8e8278b9,
          mid_conjugate_bfc6d3bb8e8278b9,
          mid_copySign_285633f17a3543fe,
          mid_copySign_e2d5da6df3932ed5,
          mid_cos_bfc6d3bb8e8278b9,
          mid_cosh_bfc6d3bb8e8278b9,
          mid_divide_285633f17a3543fe,
          mid_divide_e2d5da6df3932ed5,
          mid_divide_f57793921fab57ff,
          mid_equals_221e8e85cb385209,
          mid_equals_b64f7b86ea42933f,
          mid_equals_8c1c5bfb62ec9e77,
          mid_equals_aa36df59778a2741,
          mid_equalsWithRelativeTolerance_8c1c5bfb62ec9e77,
          mid_exp_bfc6d3bb8e8278b9,
          mid_expm1_bfc6d3bb8e8278b9,
          mid_floor_bfc6d3bb8e8278b9,
          mid_getArgument_613c8f46c659f636,
          mid_getField_e375492fc5089ec2,
          mid_getI_3c0a641df62d761b,
          mid_getImaginary_613c8f46c659f636,
          mid_getImaginaryPart_613c8f46c659f636,
          mid_getInf_3c0a641df62d761b,
          mid_getMinusI_3c0a641df62d761b,
          mid_getMinusOne_3c0a641df62d761b,
          mid_getNaN_3c0a641df62d761b,
          mid_getOne_3c0a641df62d761b,
          mid_getPartsField_20f98801541dcec1,
          mid_getPi_bfc6d3bb8e8278b9,
          mid_getPi_3c0a641df62d761b,
          mid_getReal_557b8123390d8d0c,
          mid_getRealPart_613c8f46c659f636,
          mid_getZero_3c0a641df62d761b,
          mid_hashCode_412668abc8d889e9,
          mid_hypot_285633f17a3543fe,
          mid_isInfinite_89b302893bdbe1f1,
          mid_isMathematicalInteger_89b302893bdbe1f1,
          mid_isNaN_89b302893bdbe1f1,
          mid_isReal_89b302893bdbe1f1,
          mid_isZero_89b302893bdbe1f1,
          mid_linearCombination_562358f2140bc648,
          mid_linearCombination_4dbefbb8e4f1b04f,
          mid_linearCombination_bb0e7d413a12990c,
          mid_linearCombination_254e1bef073dfc8a,
          mid_linearCombination_3ece5534ccd4ad08,
          mid_linearCombination_6061ea88f7be0c2f,
          mid_linearCombination_7e3492abfbd5981e,
          mid_linearCombination_2828fd2c1f08d0c5,
          mid_log_bfc6d3bb8e8278b9,
          mid_log10_bfc6d3bb8e8278b9,
          mid_log1p_bfc6d3bb8e8278b9,
          mid_multiply_285633f17a3543fe,
          mid_multiply_e2d5da6df3932ed5,
          mid_multiply_508bc7943661469d,
          mid_multiply_f57793921fab57ff,
          mid_multiplyMinusI_bfc6d3bb8e8278b9,
          mid_multiplyPlusI_bfc6d3bb8e8278b9,
          mid_negate_bfc6d3bb8e8278b9,
          mid_newInstance_e2d5da6df3932ed5,
          mid_nthRoot_da0a0ad213c4fa7f,
          mid_pow_285633f17a3543fe,
          mid_pow_e2d5da6df3932ed5,
          mid_pow_508bc7943661469d,
          mid_pow_f57793921fab57ff,
          mid_reciprocal_bfc6d3bb8e8278b9,
          mid_remainder_285633f17a3543fe,
          mid_remainder_e2d5da6df3932ed5,
          mid_rint_bfc6d3bb8e8278b9,
          mid_rootN_508bc7943661469d,
          mid_scalb_508bc7943661469d,
          mid_sign_bfc6d3bb8e8278b9,
          mid_sin_bfc6d3bb8e8278b9,
          mid_sinCos_5efdd92d175db117,
          mid_sinh_bfc6d3bb8e8278b9,
          mid_sinhCosh_e5a948cfec461975,
          mid_sqrt_bfc6d3bb8e8278b9,
          mid_sqrt1z_bfc6d3bb8e8278b9,
          mid_subtract_285633f17a3543fe,
          mid_subtract_e2d5da6df3932ed5,
          mid_subtract_f57793921fab57ff,
          mid_tan_bfc6d3bb8e8278b9,
          mid_tanh_bfc6d3bb8e8278b9,
          mid_toDegrees_bfc6d3bb8e8278b9,
          mid_toRadians_bfc6d3bb8e8278b9,
          mid_toString_3cffd47377eca18a,
          mid_ulp_bfc6d3bb8e8278b9,
          mid_valueOf_f57793921fab57ff,
          mid_valueOf_e9dc5bca1487ec04,
          mid_createComplex_e9dc5bca1487ec04,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldComplex(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldComplex(const FieldComplex& obj) : ::java::lang::Object(obj) {}

        FieldComplex(const ::org::hipparchus::CalculusFieldElement &);
        FieldComplex(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);

        FieldComplex abs() const;
        FieldComplex acos() const;
        FieldComplex acosh() const;
        FieldComplex add(const FieldComplex &) const;
        FieldComplex add(jdouble) const;
        FieldComplex add(const ::org::hipparchus::CalculusFieldElement &) const;
        FieldComplex asin() const;
        FieldComplex asinh() const;
        FieldComplex atan() const;
        FieldComplex atan2(const FieldComplex &) const;
        FieldComplex atanh() const;
        FieldComplex cbrt() const;
        FieldComplex ceil() const;
        FieldComplex conjugate() const;
        FieldComplex copySign(const FieldComplex &) const;
        FieldComplex copySign(jdouble) const;
        FieldComplex cos() const;
        FieldComplex cosh() const;
        FieldComplex divide(const FieldComplex &) const;
        FieldComplex divide(jdouble) const;
        FieldComplex divide(const ::org::hipparchus::CalculusFieldElement &) const;
        jboolean equals(const ::java::lang::Object &) const;
        static jboolean equals(const FieldComplex &, const FieldComplex &);
        static jboolean equals(const FieldComplex &, const FieldComplex &, jdouble);
        static jboolean equals(const FieldComplex &, const FieldComplex &, jint);
        static jboolean equalsWithRelativeTolerance(const FieldComplex &, const FieldComplex &, jdouble);
        FieldComplex exp() const;
        FieldComplex expm1() const;
        FieldComplex floor() const;
        ::org::hipparchus::CalculusFieldElement getArgument() const;
        ::org::hipparchus::complex::FieldComplexField getField() const;
        static FieldComplex getI(const ::org::hipparchus::Field &);
        ::org::hipparchus::CalculusFieldElement getImaginary() const;
        ::org::hipparchus::CalculusFieldElement getImaginaryPart() const;
        static FieldComplex getInf(const ::org::hipparchus::Field &);
        static FieldComplex getMinusI(const ::org::hipparchus::Field &);
        static FieldComplex getMinusOne(const ::org::hipparchus::Field &);
        static FieldComplex getNaN(const ::org::hipparchus::Field &);
        static FieldComplex getOne(const ::org::hipparchus::Field &);
        ::org::hipparchus::Field getPartsField() const;
        FieldComplex getPi() const;
        static FieldComplex getPi(const ::org::hipparchus::Field &);
        jdouble getReal() const;
        ::org::hipparchus::CalculusFieldElement getRealPart() const;
        static FieldComplex getZero(const ::org::hipparchus::Field &);
        jint hashCode() const;
        FieldComplex hypot(const FieldComplex &) const;
        jboolean isInfinite() const;
        jboolean isMathematicalInteger() const;
        jboolean isNaN() const;
        jboolean isReal() const;
        jboolean isZero() const;
        FieldComplex linearCombination(const JArray< jdouble > &, const JArray< FieldComplex > &) const;
        FieldComplex linearCombination(const JArray< FieldComplex > &, const JArray< FieldComplex > &) const;
        FieldComplex linearCombination(const FieldComplex &, const FieldComplex &, const FieldComplex &, const FieldComplex &) const;
        FieldComplex linearCombination(jdouble, const FieldComplex &, jdouble, const FieldComplex &) const;
        FieldComplex linearCombination(const FieldComplex &, const FieldComplex &, const FieldComplex &, const FieldComplex &, const FieldComplex &, const FieldComplex &) const;
        FieldComplex linearCombination(jdouble, const FieldComplex &, jdouble, const FieldComplex &, jdouble, const FieldComplex &) const;
        FieldComplex linearCombination(const FieldComplex &, const FieldComplex &, const FieldComplex &, const FieldComplex &, const FieldComplex &, const FieldComplex &, const FieldComplex &, const FieldComplex &) const;
        FieldComplex linearCombination(jdouble, const FieldComplex &, jdouble, const FieldComplex &, jdouble, const FieldComplex &, jdouble, const FieldComplex &) const;
        FieldComplex log() const;
        FieldComplex log10() const;
        FieldComplex log1p() const;
        FieldComplex multiply(const FieldComplex &) const;
        FieldComplex multiply(jdouble) const;
        FieldComplex multiply(jint) const;
        FieldComplex multiply(const ::org::hipparchus::CalculusFieldElement &) const;
        FieldComplex multiplyMinusI() const;
        FieldComplex multiplyPlusI() const;
        FieldComplex negate() const;
        FieldComplex newInstance(jdouble) const;
        ::java::util::List nthRoot(jint) const;
        FieldComplex pow(const FieldComplex &) const;
        FieldComplex pow(jdouble) const;
        FieldComplex pow(jint) const;
        FieldComplex pow(const ::org::hipparchus::CalculusFieldElement &) const;
        FieldComplex reciprocal() const;
        FieldComplex remainder(const FieldComplex &) const;
        FieldComplex remainder(jdouble) const;
        FieldComplex rint() const;
        FieldComplex rootN(jint) const;
        FieldComplex scalb(jint) const;
        FieldComplex sign() const;
        FieldComplex sin() const;
        ::org::hipparchus::util::FieldSinCos sinCos() const;
        FieldComplex sinh() const;
        ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
        FieldComplex sqrt() const;
        FieldComplex sqrt1z() const;
        FieldComplex subtract(const FieldComplex &) const;
        FieldComplex subtract(jdouble) const;
        FieldComplex subtract(const ::org::hipparchus::CalculusFieldElement &) const;
        FieldComplex tan() const;
        FieldComplex tanh() const;
        FieldComplex toDegrees() const;
        FieldComplex toRadians() const;
        ::java::lang::String toString() const;
        FieldComplex ulp() const;
        static FieldComplex valueOf(const ::org::hipparchus::CalculusFieldElement &);
        static FieldComplex valueOf(const ::org::hipparchus::CalculusFieldElement &, const ::org::hipparchus::CalculusFieldElement &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace complex {
      extern PyType_Def PY_TYPE_DEF(FieldComplex);
      extern PyTypeObject *PY_TYPE(FieldComplex);

      class t_FieldComplex {
      public:
        PyObject_HEAD
        FieldComplex object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldComplex *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldComplex&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldComplex&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
