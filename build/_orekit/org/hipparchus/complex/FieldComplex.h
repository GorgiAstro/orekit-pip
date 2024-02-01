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
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
    }
    namespace complex {
      class FieldComplex;
      class FieldComplexField;
    }
    class Field;
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace complex {

      class FieldComplex : public ::java::lang::Object {
       public:
        enum {
          mid_init$_f63ca9e3185c722e,
          mid_init$_bab44dcbad09a0fe,
          mid_abs_082d0eb1eb81e571,
          mid_acos_082d0eb1eb81e571,
          mid_acosh_082d0eb1eb81e571,
          mid_add_44ec11f3ee7128be,
          mid_add_f738e060ca13afad,
          mid_add_8581134ac015d992,
          mid_asin_082d0eb1eb81e571,
          mid_asinh_082d0eb1eb81e571,
          mid_atan_082d0eb1eb81e571,
          mid_atan2_44ec11f3ee7128be,
          mid_atanh_082d0eb1eb81e571,
          mid_cbrt_082d0eb1eb81e571,
          mid_ceil_082d0eb1eb81e571,
          mid_conjugate_082d0eb1eb81e571,
          mid_copySign_44ec11f3ee7128be,
          mid_copySign_f738e060ca13afad,
          mid_cos_082d0eb1eb81e571,
          mid_cosh_082d0eb1eb81e571,
          mid_divide_44ec11f3ee7128be,
          mid_divide_f738e060ca13afad,
          mid_divide_8581134ac015d992,
          mid_equals_72faff9b05f5ed5e,
          mid_equals_c2458996c0aeaf74,
          mid_equals_b3e1132068c3e32c,
          mid_equals_40927563e4138115,
          mid_equalsWithRelativeTolerance_b3e1132068c3e32c,
          mid_exp_082d0eb1eb81e571,
          mid_expm1_082d0eb1eb81e571,
          mid_floor_082d0eb1eb81e571,
          mid_getArgument_08d37e3f77b7239d,
          mid_getField_fb49046101e8d48e,
          mid_getI_4e759bda7570b5d0,
          mid_getImaginary_08d37e3f77b7239d,
          mid_getImaginaryPart_08d37e3f77b7239d,
          mid_getInf_4e759bda7570b5d0,
          mid_getMinusI_4e759bda7570b5d0,
          mid_getMinusOne_4e759bda7570b5d0,
          mid_getNaN_4e759bda7570b5d0,
          mid_getOne_4e759bda7570b5d0,
          mid_getPartsField_577649682b9910c1,
          mid_getPi_082d0eb1eb81e571,
          mid_getPi_4e759bda7570b5d0,
          mid_getReal_9981f74b2d109da6,
          mid_getRealPart_08d37e3f77b7239d,
          mid_getZero_4e759bda7570b5d0,
          mid_hashCode_d6ab429752e7c267,
          mid_hypot_44ec11f3ee7128be,
          mid_isInfinite_eee3de00fe971136,
          mid_isMathematicalInteger_eee3de00fe971136,
          mid_isNaN_eee3de00fe971136,
          mid_isReal_eee3de00fe971136,
          mid_isZero_eee3de00fe971136,
          mid_linearCombination_e850ca118aa003e2,
          mid_linearCombination_dfc45b6365518be1,
          mid_linearCombination_1853272de87ee45b,
          mid_linearCombination_7e606ef42a185705,
          mid_linearCombination_5c9afab420b462c1,
          mid_linearCombination_4820bda83845f7fb,
          mid_linearCombination_d582c5bf671ad768,
          mid_linearCombination_12c35659a1f1799b,
          mid_log_082d0eb1eb81e571,
          mid_log10_082d0eb1eb81e571,
          mid_log1p_082d0eb1eb81e571,
          mid_multiply_44ec11f3ee7128be,
          mid_multiply_f738e060ca13afad,
          mid_multiply_894db97839eec318,
          mid_multiply_8581134ac015d992,
          mid_multiplyMinusI_082d0eb1eb81e571,
          mid_multiplyPlusI_082d0eb1eb81e571,
          mid_negate_082d0eb1eb81e571,
          mid_newInstance_f738e060ca13afad,
          mid_nthRoot_11883c1c01a1aa4c,
          mid_pow_44ec11f3ee7128be,
          mid_pow_f738e060ca13afad,
          mid_pow_894db97839eec318,
          mid_pow_8581134ac015d992,
          mid_reciprocal_082d0eb1eb81e571,
          mid_remainder_44ec11f3ee7128be,
          mid_remainder_f738e060ca13afad,
          mid_rint_082d0eb1eb81e571,
          mid_rootN_894db97839eec318,
          mid_scalb_894db97839eec318,
          mid_sign_082d0eb1eb81e571,
          mid_sin_082d0eb1eb81e571,
          mid_sinCos_31b7b02b4932da60,
          mid_sinh_082d0eb1eb81e571,
          mid_sinhCosh_b24d5962ea451135,
          mid_sqrt_082d0eb1eb81e571,
          mid_sqrt1z_082d0eb1eb81e571,
          mid_subtract_44ec11f3ee7128be,
          mid_subtract_f738e060ca13afad,
          mid_subtract_8581134ac015d992,
          mid_tan_082d0eb1eb81e571,
          mid_tanh_082d0eb1eb81e571,
          mid_toDegrees_082d0eb1eb81e571,
          mid_toRadians_082d0eb1eb81e571,
          mid_toString_d2c8eb4129821f0e,
          mid_ulp_082d0eb1eb81e571,
          mid_valueOf_8581134ac015d992,
          mid_valueOf_151d0ca7c89aa768,
          mid_createComplex_151d0ca7c89aa768,
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
