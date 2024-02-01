#ifndef org_hipparchus_util_Tuple_H
#define org_hipparchus_util_Tuple_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Tuple;
      class FieldSinhCosh;
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

      class Tuple : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a71c45509eaf92d1,
          mid_abs_f8275f13088d6938,
          mid_acos_f8275f13088d6938,
          mid_acosh_f8275f13088d6938,
          mid_add_f766ee0a22b1c75a,
          mid_add_937156c8cf549acb,
          mid_asin_f8275f13088d6938,
          mid_asinh_f8275f13088d6938,
          mid_atan_f8275f13088d6938,
          mid_atan2_f766ee0a22b1c75a,
          mid_atanh_f8275f13088d6938,
          mid_cbrt_f8275f13088d6938,
          mid_ceil_f8275f13088d6938,
          mid_copySign_f766ee0a22b1c75a,
          mid_copySign_937156c8cf549acb,
          mid_cos_f8275f13088d6938,
          mid_cosh_f8275f13088d6938,
          mid_divide_f766ee0a22b1c75a,
          mid_divide_937156c8cf549acb,
          mid_equals_72faff9b05f5ed5e,
          mid_exp_f8275f13088d6938,
          mid_expm1_f8275f13088d6938,
          mid_floor_f8275f13088d6938,
          mid_getComponent_ce4c02d583456bc9,
          mid_getComponents_be783177b060994b,
          mid_getDimension_d6ab429752e7c267,
          mid_getField_577649682b9910c1,
          mid_getPi_f8275f13088d6938,
          mid_getReal_9981f74b2d109da6,
          mid_hashCode_d6ab429752e7c267,
          mid_hypot_f766ee0a22b1c75a,
          mid_linearCombination_77f3dafb24473b75,
          mid_linearCombination_dd5569bff5aa290d,
          mid_linearCombination_fb42f60df9fcf6db,
          mid_linearCombination_fafe7097b5e514e3,
          mid_linearCombination_1b9bb08e2f38f24c,
          mid_linearCombination_bed226eeb368e85b,
          mid_linearCombination_b11bb8d0a150cbeb,
          mid_linearCombination_1c047ae5b7314367,
          mid_log_f8275f13088d6938,
          mid_log10_f8275f13088d6938,
          mid_log1p_f8275f13088d6938,
          mid_multiply_f766ee0a22b1c75a,
          mid_multiply_937156c8cf549acb,
          mid_multiply_1b26dd71fff197ee,
          mid_negate_f8275f13088d6938,
          mid_newInstance_937156c8cf549acb,
          mid_pow_f766ee0a22b1c75a,
          mid_pow_937156c8cf549acb,
          mid_pow_1b26dd71fff197ee,
          mid_reciprocal_f8275f13088d6938,
          mid_remainder_f766ee0a22b1c75a,
          mid_remainder_937156c8cf549acb,
          mid_rint_f8275f13088d6938,
          mid_rootN_1b26dd71fff197ee,
          mid_scalb_1b26dd71fff197ee,
          mid_sign_f8275f13088d6938,
          mid_sin_f8275f13088d6938,
          mid_sinCos_31b7b02b4932da60,
          mid_sinh_f8275f13088d6938,
          mid_sinhCosh_b24d5962ea451135,
          mid_sqrt_f8275f13088d6938,
          mid_subtract_f766ee0a22b1c75a,
          mid_subtract_937156c8cf549acb,
          mid_tan_f8275f13088d6938,
          mid_tanh_f8275f13088d6938,
          mid_toDegrees_f8275f13088d6938,
          mid_toRadians_f8275f13088d6938,
          mid_ulp_f8275f13088d6938,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Tuple(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Tuple(const Tuple& obj) : ::java::lang::Object(obj) {}

        Tuple(const JArray< jdouble > &);

        Tuple abs() const;
        Tuple acos() const;
        Tuple acosh() const;
        Tuple add(const Tuple &) const;
        Tuple add(jdouble) const;
        Tuple asin() const;
        Tuple asinh() const;
        Tuple atan() const;
        Tuple atan2(const Tuple &) const;
        Tuple atanh() const;
        Tuple cbrt() const;
        Tuple ceil() const;
        Tuple copySign(const Tuple &) const;
        Tuple copySign(jdouble) const;
        Tuple cos() const;
        Tuple cosh() const;
        Tuple divide(const Tuple &) const;
        Tuple divide(jdouble) const;
        jboolean equals(const ::java::lang::Object &) const;
        Tuple exp() const;
        Tuple expm1() const;
        Tuple floor() const;
        jdouble getComponent(jint) const;
        JArray< jdouble > getComponents() const;
        jint getDimension() const;
        ::org::hipparchus::Field getField() const;
        Tuple getPi() const;
        jdouble getReal() const;
        jint hashCode() const;
        Tuple hypot(const Tuple &) const;
        Tuple linearCombination(const JArray< jdouble > &, const JArray< Tuple > &) const;
        Tuple linearCombination(const JArray< Tuple > &, const JArray< Tuple > &) const;
        Tuple linearCombination(const Tuple &, const Tuple &, const Tuple &, const Tuple &) const;
        Tuple linearCombination(jdouble, const Tuple &, jdouble, const Tuple &) const;
        Tuple linearCombination(const Tuple &, const Tuple &, const Tuple &, const Tuple &, const Tuple &, const Tuple &) const;
        Tuple linearCombination(jdouble, const Tuple &, jdouble, const Tuple &, jdouble, const Tuple &) const;
        Tuple linearCombination(const Tuple &, const Tuple &, const Tuple &, const Tuple &, const Tuple &, const Tuple &, const Tuple &, const Tuple &) const;
        Tuple linearCombination(jdouble, const Tuple &, jdouble, const Tuple &, jdouble, const Tuple &, jdouble, const Tuple &) const;
        Tuple log() const;
        Tuple log10() const;
        Tuple log1p() const;
        Tuple multiply(const Tuple &) const;
        Tuple multiply(jdouble) const;
        Tuple multiply(jint) const;
        Tuple negate() const;
        Tuple newInstance(jdouble) const;
        Tuple pow(const Tuple &) const;
        Tuple pow(jdouble) const;
        Tuple pow(jint) const;
        Tuple reciprocal() const;
        Tuple remainder(const Tuple &) const;
        Tuple remainder(jdouble) const;
        Tuple rint() const;
        Tuple rootN(jint) const;
        Tuple scalb(jint) const;
        Tuple sign() const;
        Tuple sin() const;
        ::org::hipparchus::util::FieldSinCos sinCos() const;
        Tuple sinh() const;
        ::org::hipparchus::util::FieldSinhCosh sinhCosh() const;
        Tuple sqrt() const;
        Tuple subtract(const Tuple &) const;
        Tuple subtract(jdouble) const;
        Tuple tan() const;
        Tuple tanh() const;
        Tuple toDegrees() const;
        Tuple toRadians() const;
        Tuple ulp() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace util {
      extern PyType_Def PY_TYPE_DEF(Tuple);
      extern PyTypeObject *PY_TYPE(Tuple);

      class t_Tuple {
      public:
        PyObject_HEAD
        Tuple object;
        static PyObject *wrap_Object(const Tuple&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
