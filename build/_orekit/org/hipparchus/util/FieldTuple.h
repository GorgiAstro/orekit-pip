#ifndef org_hipparchus_util_FieldTuple_H
#define org_hipparchus_util_FieldTuple_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace util {
      class FieldSinhCosh;
      class FieldSinCos;
      class FieldTuple;
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
          mid_init$_5d9c9afaca2e497c,
          mid_abs_465b8a728f915a54,
          mid_acos_465b8a728f915a54,
          mid_acosh_465b8a728f915a54,
          mid_add_7aececefd0318ce7,
          mid_add_cdd4d2acf1e15014,
          mid_asin_465b8a728f915a54,
          mid_asinh_465b8a728f915a54,
          mid_atan_465b8a728f915a54,
          mid_atan2_7aececefd0318ce7,
          mid_atanh_465b8a728f915a54,
          mid_cbrt_465b8a728f915a54,
          mid_ceil_465b8a728f915a54,
          mid_copySign_7aececefd0318ce7,
          mid_copySign_cdd4d2acf1e15014,
          mid_cos_465b8a728f915a54,
          mid_cosh_465b8a728f915a54,
          mid_divide_7aececefd0318ce7,
          mid_divide_cdd4d2acf1e15014,
          mid_equals_221e8e85cb385209,
          mid_exp_465b8a728f915a54,
          mid_expm1_465b8a728f915a54,
          mid_floor_465b8a728f915a54,
          mid_getComponent_8b3a1c735adfa4bc,
          mid_getComponents_41762fd4377ff26e,
          mid_getDimension_412668abc8d889e9,
          mid_getField_20f98801541dcec1,
          mid_getPi_465b8a728f915a54,
          mid_getReal_557b8123390d8d0c,
          mid_hashCode_412668abc8d889e9,
          mid_hypot_7aececefd0318ce7,
          mid_linearCombination_c5b604b951e16c74,
          mid_linearCombination_9fd49f2b01a2b9a1,
          mid_linearCombination_e73da46f795e19a3,
          mid_linearCombination_380735dfbf2d544c,
          mid_linearCombination_ac5cdccf2e031eba,
          mid_linearCombination_a0a70b0a6df4461f,
          mid_linearCombination_cda3f07dc4985202,
          mid_linearCombination_9bdb517d0c747c3d,
          mid_log_465b8a728f915a54,
          mid_log10_465b8a728f915a54,
          mid_log1p_465b8a728f915a54,
          mid_multiply_7aececefd0318ce7,
          mid_multiply_cdd4d2acf1e15014,
          mid_multiply_45fc9944b12eba17,
          mid_negate_465b8a728f915a54,
          mid_newInstance_cdd4d2acf1e15014,
          mid_pow_7aececefd0318ce7,
          mid_pow_cdd4d2acf1e15014,
          mid_pow_45fc9944b12eba17,
          mid_reciprocal_465b8a728f915a54,
          mid_remainder_7aececefd0318ce7,
          mid_remainder_cdd4d2acf1e15014,
          mid_rint_465b8a728f915a54,
          mid_rootN_45fc9944b12eba17,
          mid_scalb_45fc9944b12eba17,
          mid_sign_465b8a728f915a54,
          mid_sin_465b8a728f915a54,
          mid_sinCos_5efdd92d175db117,
          mid_sinh_465b8a728f915a54,
          mid_sinhCosh_e5a948cfec461975,
          mid_sqrt_465b8a728f915a54,
          mid_subtract_7aececefd0318ce7,
          mid_subtract_cdd4d2acf1e15014,
          mid_tan_465b8a728f915a54,
          mid_tanh_465b8a728f915a54,
          mid_toDegrees_465b8a728f915a54,
          mid_toRadians_465b8a728f915a54,
          mid_ulp_465b8a728f915a54,
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
