#ifndef org_hipparchus_util_Tuple_H
#define org_hipparchus_util_Tuple_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
      class Tuple;
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

      class Tuple : public ::java::lang::Object {
       public:
        enum {
          mid_init$_fa9d415d19f69361,
          mid_abs_d9288005ba44d28d,
          mid_acos_d9288005ba44d28d,
          mid_acosh_d9288005ba44d28d,
          mid_add_6c06f9afb21901b2,
          mid_add_4833aa97a9d8973e,
          mid_asin_d9288005ba44d28d,
          mid_asinh_d9288005ba44d28d,
          mid_atan_d9288005ba44d28d,
          mid_atan2_6c06f9afb21901b2,
          mid_atanh_d9288005ba44d28d,
          mid_cbrt_d9288005ba44d28d,
          mid_ceil_d9288005ba44d28d,
          mid_copySign_6c06f9afb21901b2,
          mid_copySign_4833aa97a9d8973e,
          mid_cos_d9288005ba44d28d,
          mid_cosh_d9288005ba44d28d,
          mid_divide_6c06f9afb21901b2,
          mid_divide_4833aa97a9d8973e,
          mid_equals_65c7d273e80d497a,
          mid_exp_d9288005ba44d28d,
          mid_expm1_d9288005ba44d28d,
          mid_floor_d9288005ba44d28d,
          mid_getComponent_46f85b53d9aedd96,
          mid_getComponents_60c7040667a7dc5c,
          mid_getDimension_570ce0828f81a2c1,
          mid_getField_5b28be2d3632a5dc,
          mid_getPi_d9288005ba44d28d,
          mid_getReal_dff5885c2c873297,
          mid_hashCode_570ce0828f81a2c1,
          mid_hypot_6c06f9afb21901b2,
          mid_linearCombination_5e69d1b114b5d0d7,
          mid_linearCombination_7dd468971ce76cbc,
          mid_linearCombination_34782246f40302b2,
          mid_linearCombination_b317b6b70a98d429,
          mid_linearCombination_235c7e69b41265b5,
          mid_linearCombination_577a20cdb3ad4517,
          mid_linearCombination_045549e2452b181f,
          mid_linearCombination_13d8a1345cdfe462,
          mid_log_d9288005ba44d28d,
          mid_log10_d9288005ba44d28d,
          mid_log1p_d9288005ba44d28d,
          mid_multiply_6c06f9afb21901b2,
          mid_multiply_4833aa97a9d8973e,
          mid_multiply_7676ee274236867c,
          mid_negate_d9288005ba44d28d,
          mid_newInstance_4833aa97a9d8973e,
          mid_pow_6c06f9afb21901b2,
          mid_pow_4833aa97a9d8973e,
          mid_pow_7676ee274236867c,
          mid_reciprocal_d9288005ba44d28d,
          mid_remainder_6c06f9afb21901b2,
          mid_remainder_4833aa97a9d8973e,
          mid_rint_d9288005ba44d28d,
          mid_rootN_7676ee274236867c,
          mid_scalb_7676ee274236867c,
          mid_sign_d9288005ba44d28d,
          mid_sin_d9288005ba44d28d,
          mid_sinCos_a447b7ca640e6b68,
          mid_sinh_d9288005ba44d28d,
          mid_sinhCosh_eef733c8a50b276f,
          mid_sqrt_d9288005ba44d28d,
          mid_subtract_6c06f9afb21901b2,
          mid_subtract_4833aa97a9d8973e,
          mid_tan_d9288005ba44d28d,
          mid_tanh_d9288005ba44d28d,
          mid_toDegrees_d9288005ba44d28d,
          mid_toRadians_d9288005ba44d28d,
          mid_ulp_d9288005ba44d28d,
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
