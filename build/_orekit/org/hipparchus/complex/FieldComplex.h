#ifndef org_hipparchus_complex_FieldComplex_H
#define org_hipparchus_complex_FieldComplex_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
    }
    namespace complex {
      class FieldComplex;
      class FieldComplexField;
    }
    class CalculusFieldElement;
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    class Field;
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
          mid_init$_072c8635f2164db9,
          mid_init$_eee0c82b0b9e16e9,
          mid_abs_ded2d2c0c0e6239b,
          mid_acos_ded2d2c0c0e6239b,
          mid_acosh_ded2d2c0c0e6239b,
          mid_add_324fe1e1d007a3ed,
          mid_add_a8926203d14b7285,
          mid_add_0fdc8273a3ea131a,
          mid_asin_ded2d2c0c0e6239b,
          mid_asinh_ded2d2c0c0e6239b,
          mid_atan_ded2d2c0c0e6239b,
          mid_atan2_324fe1e1d007a3ed,
          mid_atanh_ded2d2c0c0e6239b,
          mid_cbrt_ded2d2c0c0e6239b,
          mid_ceil_ded2d2c0c0e6239b,
          mid_conjugate_ded2d2c0c0e6239b,
          mid_copySign_324fe1e1d007a3ed,
          mid_copySign_a8926203d14b7285,
          mid_cos_ded2d2c0c0e6239b,
          mid_cosh_ded2d2c0c0e6239b,
          mid_divide_324fe1e1d007a3ed,
          mid_divide_a8926203d14b7285,
          mid_divide_0fdc8273a3ea131a,
          mid_equals_65c7d273e80d497a,
          mid_equals_c16a8a172db0f73a,
          mid_equals_8abeff55a0e6dbc9,
          mid_equals_3e7de8f12a60d0ee,
          mid_equalsWithRelativeTolerance_8abeff55a0e6dbc9,
          mid_exp_ded2d2c0c0e6239b,
          mid_expm1_ded2d2c0c0e6239b,
          mid_floor_ded2d2c0c0e6239b,
          mid_getArgument_eba8e72a22c984ac,
          mid_getField_1049802935714576,
          mid_getI_955e8640c0b9aae1,
          mid_getImaginary_eba8e72a22c984ac,
          mid_getImaginaryPart_eba8e72a22c984ac,
          mid_getInf_955e8640c0b9aae1,
          mid_getMinusI_955e8640c0b9aae1,
          mid_getMinusOne_955e8640c0b9aae1,
          mid_getNaN_955e8640c0b9aae1,
          mid_getOne_955e8640c0b9aae1,
          mid_getPartsField_5b28be2d3632a5dc,
          mid_getPi_ded2d2c0c0e6239b,
          mid_getPi_955e8640c0b9aae1,
          mid_getReal_dff5885c2c873297,
          mid_getRealPart_eba8e72a22c984ac,
          mid_getZero_955e8640c0b9aae1,
          mid_hashCode_570ce0828f81a2c1,
          mid_hypot_324fe1e1d007a3ed,
          mid_isInfinite_b108b35ef48e27bd,
          mid_isMathematicalInteger_b108b35ef48e27bd,
          mid_isNaN_b108b35ef48e27bd,
          mid_isReal_b108b35ef48e27bd,
          mid_isZero_b108b35ef48e27bd,
          mid_linearCombination_1a8b1694a8402932,
          mid_linearCombination_8ee5dcdb698c9396,
          mid_linearCombination_1d93f54300c6f636,
          mid_linearCombination_1f034019e958281e,
          mid_linearCombination_458635edd0acc93d,
          mid_linearCombination_3aab3d9e49980110,
          mid_linearCombination_d98a8f9cc79cd55c,
          mid_linearCombination_76a8958b43b68094,
          mid_log_ded2d2c0c0e6239b,
          mid_log10_ded2d2c0c0e6239b,
          mid_log1p_ded2d2c0c0e6239b,
          mid_multiply_324fe1e1d007a3ed,
          mid_multiply_a8926203d14b7285,
          mid_multiply_4bf8b68306ca9f59,
          mid_multiply_0fdc8273a3ea131a,
          mid_multiplyMinusI_ded2d2c0c0e6239b,
          mid_multiplyPlusI_ded2d2c0c0e6239b,
          mid_negate_ded2d2c0c0e6239b,
          mid_newInstance_a8926203d14b7285,
          mid_nthRoot_9c3e1c79a080a476,
          mid_pow_324fe1e1d007a3ed,
          mid_pow_a8926203d14b7285,
          mid_pow_4bf8b68306ca9f59,
          mid_pow_0fdc8273a3ea131a,
          mid_reciprocal_ded2d2c0c0e6239b,
          mid_remainder_324fe1e1d007a3ed,
          mid_remainder_a8926203d14b7285,
          mid_rint_ded2d2c0c0e6239b,
          mid_rootN_4bf8b68306ca9f59,
          mid_scalb_4bf8b68306ca9f59,
          mid_sign_ded2d2c0c0e6239b,
          mid_sin_ded2d2c0c0e6239b,
          mid_sinCos_a447b7ca640e6b68,
          mid_sinh_ded2d2c0c0e6239b,
          mid_sinhCosh_eef733c8a50b276f,
          mid_sqrt_ded2d2c0c0e6239b,
          mid_sqrt1z_ded2d2c0c0e6239b,
          mid_subtract_324fe1e1d007a3ed,
          mid_subtract_a8926203d14b7285,
          mid_subtract_0fdc8273a3ea131a,
          mid_tan_ded2d2c0c0e6239b,
          mid_tanh_ded2d2c0c0e6239b,
          mid_toDegrees_ded2d2c0c0e6239b,
          mid_toRadians_ded2d2c0c0e6239b,
          mid_toString_11b109bd155ca898,
          mid_ulp_ded2d2c0c0e6239b,
          mid_valueOf_0fdc8273a3ea131a,
          mid_valueOf_7eb6ea04df70146c,
          mid_createComplex_7eb6ea04df70146c,
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
