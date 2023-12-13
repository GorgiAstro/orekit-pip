#ifndef org_hipparchus_util_Tuple_H
#define org_hipparchus_util_Tuple_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
      class Tuple;
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

      class Tuple : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ab69da052b88f50c,
          mid_abs_c56429b2ce6948e2,
          mid_acos_c56429b2ce6948e2,
          mid_acosh_c56429b2ce6948e2,
          mid_add_5c2281aaec2c84e1,
          mid_add_d28cc2227664dd45,
          mid_asin_c56429b2ce6948e2,
          mid_asinh_c56429b2ce6948e2,
          mid_atan_c56429b2ce6948e2,
          mid_atan2_5c2281aaec2c84e1,
          mid_atanh_c56429b2ce6948e2,
          mid_cbrt_c56429b2ce6948e2,
          mid_ceil_c56429b2ce6948e2,
          mid_copySign_5c2281aaec2c84e1,
          mid_copySign_d28cc2227664dd45,
          mid_cos_c56429b2ce6948e2,
          mid_cosh_c56429b2ce6948e2,
          mid_divide_5c2281aaec2c84e1,
          mid_divide_d28cc2227664dd45,
          mid_equals_460c5e2d9d51c6cc,
          mid_exp_c56429b2ce6948e2,
          mid_expm1_c56429b2ce6948e2,
          mid_floor_c56429b2ce6948e2,
          mid_getComponent_2afcbc21f4e57ab2,
          mid_getComponents_25e1757a36c4dde2,
          mid_getDimension_55546ef6a647f39b,
          mid_getField_04d1f63e17d5c5d4,
          mid_getPi_c56429b2ce6948e2,
          mid_getReal_b74f83833fdad017,
          mid_hashCode_55546ef6a647f39b,
          mid_hypot_5c2281aaec2c84e1,
          mid_linearCombination_4894c3a1eb96c09c,
          mid_linearCombination_e19e77eb669b96b1,
          mid_linearCombination_fca46aee76121de7,
          mid_linearCombination_e2ad02d65d0fb433,
          mid_linearCombination_043d59e4faab09bd,
          mid_linearCombination_193eeb6173a3d718,
          mid_linearCombination_c1a9b26a65dcc34e,
          mid_linearCombination_5532d4ac9f8a4dfe,
          mid_log_c56429b2ce6948e2,
          mid_log10_c56429b2ce6948e2,
          mid_log1p_c56429b2ce6948e2,
          mid_multiply_5c2281aaec2c84e1,
          mid_multiply_d28cc2227664dd45,
          mid_multiply_74e8dcdcae0f2c70,
          mid_negate_c56429b2ce6948e2,
          mid_newInstance_d28cc2227664dd45,
          mid_pow_5c2281aaec2c84e1,
          mid_pow_d28cc2227664dd45,
          mid_pow_74e8dcdcae0f2c70,
          mid_reciprocal_c56429b2ce6948e2,
          mid_remainder_5c2281aaec2c84e1,
          mid_remainder_d28cc2227664dd45,
          mid_rint_c56429b2ce6948e2,
          mid_rootN_74e8dcdcae0f2c70,
          mid_scalb_74e8dcdcae0f2c70,
          mid_sign_c56429b2ce6948e2,
          mid_sin_c56429b2ce6948e2,
          mid_sinCos_e434dd780193da2f,
          mid_sinh_c56429b2ce6948e2,
          mid_sinhCosh_4a1e2142f3481995,
          mid_sqrt_c56429b2ce6948e2,
          mid_subtract_5c2281aaec2c84e1,
          mid_subtract_d28cc2227664dd45,
          mid_tan_c56429b2ce6948e2,
          mid_tanh_c56429b2ce6948e2,
          mid_toDegrees_c56429b2ce6948e2,
          mid_toRadians_c56429b2ce6948e2,
          mid_ulp_c56429b2ce6948e2,
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
