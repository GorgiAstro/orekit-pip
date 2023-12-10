#ifndef org_hipparchus_complex_FieldComplex_H
#define org_hipparchus_complex_FieldComplex_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class FieldComplexField;
      class FieldComplex;
    }
    class Field;
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class FieldComplex : public ::java::lang::Object {
       public:
        enum {
          mid_init$_03a16642f77779e7,
          mid_init$_46c20bc1304e9cc4,
          mid_abs_fe347867d3dfbc81,
          mid_acos_fe347867d3dfbc81,
          mid_acosh_fe347867d3dfbc81,
          mid_add_e335ffa535ec807c,
          mid_add_ce539a2d22a1271d,
          mid_add_2a1376cabc11c637,
          mid_asin_fe347867d3dfbc81,
          mid_asinh_fe347867d3dfbc81,
          mid_atan_fe347867d3dfbc81,
          mid_atan2_e335ffa535ec807c,
          mid_atanh_fe347867d3dfbc81,
          mid_cbrt_fe347867d3dfbc81,
          mid_ceil_fe347867d3dfbc81,
          mid_conjugate_fe347867d3dfbc81,
          mid_copySign_e335ffa535ec807c,
          mid_copySign_ce539a2d22a1271d,
          mid_cos_fe347867d3dfbc81,
          mid_cosh_fe347867d3dfbc81,
          mid_divide_e335ffa535ec807c,
          mid_divide_ce539a2d22a1271d,
          mid_divide_2a1376cabc11c637,
          mid_equals_229c87223f486349,
          mid_equals_f2f09f383af3e2ba,
          mid_equals_9f1d94cec701966f,
          mid_equals_3843d89860c3d713,
          mid_equalsWithRelativeTolerance_9f1d94cec701966f,
          mid_exp_fe347867d3dfbc81,
          mid_expm1_fe347867d3dfbc81,
          mid_floor_fe347867d3dfbc81,
          mid_getArgument_e6d4d3215c30992a,
          mid_getField_c550e66763263934,
          mid_getI_d153c77c65bc68dd,
          mid_getImaginary_e6d4d3215c30992a,
          mid_getImaginaryPart_e6d4d3215c30992a,
          mid_getInf_d153c77c65bc68dd,
          mid_getMinusI_d153c77c65bc68dd,
          mid_getMinusOne_d153c77c65bc68dd,
          mid_getNaN_d153c77c65bc68dd,
          mid_getOne_d153c77c65bc68dd,
          mid_getPartsField_70b4bbd3fa378d6b,
          mid_getPi_fe347867d3dfbc81,
          mid_getPi_d153c77c65bc68dd,
          mid_getReal_456d9a2f64d6b28d,
          mid_getRealPart_e6d4d3215c30992a,
          mid_getZero_d153c77c65bc68dd,
          mid_hashCode_f2f64475e4580546,
          mid_hypot_e335ffa535ec807c,
          mid_isInfinite_e470b6d9e0d979db,
          mid_isMathematicalInteger_e470b6d9e0d979db,
          mid_isNaN_e470b6d9e0d979db,
          mid_isReal_e470b6d9e0d979db,
          mid_isZero_e470b6d9e0d979db,
          mid_linearCombination_447df1d4ce356731,
          mid_linearCombination_98bc4c5fdbd494d2,
          mid_linearCombination_7ad503e18c9c5784,
          mid_linearCombination_dee6a4c7a12ea295,
          mid_linearCombination_ddd43ad46a3bee22,
          mid_linearCombination_8f777134f031b6c9,
          mid_linearCombination_c46d51195f9443a5,
          mid_linearCombination_9890eb3cc10f0927,
          mid_log_fe347867d3dfbc81,
          mid_log10_fe347867d3dfbc81,
          mid_log1p_fe347867d3dfbc81,
          mid_multiply_e335ffa535ec807c,
          mid_multiply_ce539a2d22a1271d,
          mid_multiply_68b4f88cb521e978,
          mid_multiply_2a1376cabc11c637,
          mid_multiplyMinusI_fe347867d3dfbc81,
          mid_multiplyPlusI_fe347867d3dfbc81,
          mid_negate_fe347867d3dfbc81,
          mid_newInstance_ce539a2d22a1271d,
          mid_nthRoot_0096b74d5921c439,
          mid_pow_e335ffa535ec807c,
          mid_pow_ce539a2d22a1271d,
          mid_pow_68b4f88cb521e978,
          mid_pow_2a1376cabc11c637,
          mid_reciprocal_fe347867d3dfbc81,
          mid_remainder_e335ffa535ec807c,
          mid_remainder_ce539a2d22a1271d,
          mid_rint_fe347867d3dfbc81,
          mid_rootN_68b4f88cb521e978,
          mid_scalb_68b4f88cb521e978,
          mid_sign_fe347867d3dfbc81,
          mid_sin_fe347867d3dfbc81,
          mid_sinCos_35f2499c71416a1a,
          mid_sinh_fe347867d3dfbc81,
          mid_sinhCosh_c388a3eefde9d597,
          mid_sqrt_fe347867d3dfbc81,
          mid_sqrt1z_fe347867d3dfbc81,
          mid_subtract_e335ffa535ec807c,
          mid_subtract_ce539a2d22a1271d,
          mid_subtract_2a1376cabc11c637,
          mid_tan_fe347867d3dfbc81,
          mid_tanh_fe347867d3dfbc81,
          mid_toDegrees_fe347867d3dfbc81,
          mid_toRadians_fe347867d3dfbc81,
          mid_toString_0090f7797e403f43,
          mid_ulp_fe347867d3dfbc81,
          mid_valueOf_2a1376cabc11c637,
          mid_valueOf_90ceabb919e66ea9,
          mid_createComplex_90ceabb919e66ea9,
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
