#ifndef org_hipparchus_complex_FieldComplex_H
#define org_hipparchus_complex_FieldComplex_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace complex {
      class FieldComplexField;
      class FieldComplex;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    class Field;
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
          mid_init$_f2b4bfa0af1007e8,
          mid_init$_e337ae7145f7989c,
          mid_abs_ba578f832ae965ef,
          mid_acos_ba578f832ae965ef,
          mid_acosh_ba578f832ae965ef,
          mid_add_cfbd18691ba7b7af,
          mid_add_ce488f7123d85e8d,
          mid_add_42271350c82bf3fd,
          mid_asin_ba578f832ae965ef,
          mid_asinh_ba578f832ae965ef,
          mid_atan_ba578f832ae965ef,
          mid_atan2_cfbd18691ba7b7af,
          mid_atanh_ba578f832ae965ef,
          mid_cbrt_ba578f832ae965ef,
          mid_ceil_ba578f832ae965ef,
          mid_conjugate_ba578f832ae965ef,
          mid_copySign_cfbd18691ba7b7af,
          mid_copySign_ce488f7123d85e8d,
          mid_cos_ba578f832ae965ef,
          mid_cosh_ba578f832ae965ef,
          mid_divide_cfbd18691ba7b7af,
          mid_divide_ce488f7123d85e8d,
          mid_divide_42271350c82bf3fd,
          mid_equals_460c5e2d9d51c6cc,
          mid_equals_3087f5647a28df29,
          mid_equals_50b5f38423069828,
          mid_equals_a4a562041ee259e7,
          mid_equalsWithRelativeTolerance_50b5f38423069828,
          mid_exp_ba578f832ae965ef,
          mid_expm1_ba578f832ae965ef,
          mid_floor_ba578f832ae965ef,
          mid_getArgument_81520b552cb3fa26,
          mid_getField_26ce9b36926acd46,
          mid_getI_29b3449caee8cd64,
          mid_getImaginary_81520b552cb3fa26,
          mid_getImaginaryPart_81520b552cb3fa26,
          mid_getInf_29b3449caee8cd64,
          mid_getMinusI_29b3449caee8cd64,
          mid_getMinusOne_29b3449caee8cd64,
          mid_getNaN_29b3449caee8cd64,
          mid_getOne_29b3449caee8cd64,
          mid_getPartsField_04d1f63e17d5c5d4,
          mid_getPi_ba578f832ae965ef,
          mid_getPi_29b3449caee8cd64,
          mid_getReal_b74f83833fdad017,
          mid_getRealPart_81520b552cb3fa26,
          mid_getZero_29b3449caee8cd64,
          mid_hashCode_55546ef6a647f39b,
          mid_hypot_cfbd18691ba7b7af,
          mid_isInfinite_9ab94ac1dc23b105,
          mid_isMathematicalInteger_9ab94ac1dc23b105,
          mid_isNaN_9ab94ac1dc23b105,
          mid_isReal_9ab94ac1dc23b105,
          mid_isZero_9ab94ac1dc23b105,
          mid_linearCombination_f58fe576c9332e25,
          mid_linearCombination_80ef4a822274046f,
          mid_linearCombination_d9560f48e4b68b28,
          mid_linearCombination_cfcea2997bb6f6a6,
          mid_linearCombination_dbf14106a8d9bfae,
          mid_linearCombination_02dcb4e990448695,
          mid_linearCombination_9136abeb8767bc81,
          mid_linearCombination_d8590adf5e8dc2ab,
          mid_log_ba578f832ae965ef,
          mid_log10_ba578f832ae965ef,
          mid_log1p_ba578f832ae965ef,
          mid_multiply_cfbd18691ba7b7af,
          mid_multiply_ce488f7123d85e8d,
          mid_multiply_1a01c34364f69876,
          mid_multiply_42271350c82bf3fd,
          mid_multiplyMinusI_ba578f832ae965ef,
          mid_multiplyPlusI_ba578f832ae965ef,
          mid_negate_ba578f832ae965ef,
          mid_newInstance_ce488f7123d85e8d,
          mid_nthRoot_f8cea93815fe5eaa,
          mid_pow_cfbd18691ba7b7af,
          mid_pow_ce488f7123d85e8d,
          mid_pow_1a01c34364f69876,
          mid_pow_42271350c82bf3fd,
          mid_reciprocal_ba578f832ae965ef,
          mid_remainder_cfbd18691ba7b7af,
          mid_remainder_ce488f7123d85e8d,
          mid_rint_ba578f832ae965ef,
          mid_rootN_1a01c34364f69876,
          mid_scalb_1a01c34364f69876,
          mid_sign_ba578f832ae965ef,
          mid_sin_ba578f832ae965ef,
          mid_sinCos_e434dd780193da2f,
          mid_sinh_ba578f832ae965ef,
          mid_sinhCosh_4a1e2142f3481995,
          mid_sqrt_ba578f832ae965ef,
          mid_sqrt1z_ba578f832ae965ef,
          mid_subtract_cfbd18691ba7b7af,
          mid_subtract_ce488f7123d85e8d,
          mid_subtract_42271350c82bf3fd,
          mid_tan_ba578f832ae965ef,
          mid_tanh_ba578f832ae965ef,
          mid_toDegrees_ba578f832ae965ef,
          mid_toRadians_ba578f832ae965ef,
          mid_toString_1c1fa1e935d6cdcf,
          mid_ulp_ba578f832ae965ef,
          mid_valueOf_42271350c82bf3fd,
          mid_valueOf_6c42f6363408fc6a,
          mid_createComplex_6c42f6363408fc6a,
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
