#ifndef org_hipparchus_util_FieldTuple_H
#define org_hipparchus_util_FieldTuple_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class Field;
    namespace util {
      class FieldSinCos;
      class FieldSinhCosh;
      class FieldTuple;
    }
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

      class FieldTuple : public ::java::lang::Object {
       public:
        enum {
          mid_init$_4c337e4c1ec6f647,
          mid_abs_4a6695c32050ea61,
          mid_acos_4a6695c32050ea61,
          mid_acosh_4a6695c32050ea61,
          mid_add_51810153224653b2,
          mid_add_1240ad28c30a567e,
          mid_asin_4a6695c32050ea61,
          mid_asinh_4a6695c32050ea61,
          mid_atan_4a6695c32050ea61,
          mid_atan2_51810153224653b2,
          mid_atanh_4a6695c32050ea61,
          mid_cbrt_4a6695c32050ea61,
          mid_ceil_4a6695c32050ea61,
          mid_copySign_51810153224653b2,
          mid_copySign_1240ad28c30a567e,
          mid_cos_4a6695c32050ea61,
          mid_cosh_4a6695c32050ea61,
          mid_divide_51810153224653b2,
          mid_divide_1240ad28c30a567e,
          mid_equals_229c87223f486349,
          mid_exp_4a6695c32050ea61,
          mid_expm1_4a6695c32050ea61,
          mid_floor_4a6695c32050ea61,
          mid_getComponent_d0960d09d84b1c1d,
          mid_getComponents_01c7d10e96d5cf94,
          mid_getDimension_f2f64475e4580546,
          mid_getField_70b4bbd3fa378d6b,
          mid_getPi_4a6695c32050ea61,
          mid_getReal_456d9a2f64d6b28d,
          mid_hashCode_f2f64475e4580546,
          mid_hypot_51810153224653b2,
          mid_linearCombination_7391b9072e246abe,
          mid_linearCombination_8fcad4b648777d8b,
          mid_linearCombination_8b1ef4e9c28189e6,
          mid_linearCombination_bed0745cdabefae5,
          mid_linearCombination_991c9c7c774e57d2,
          mid_linearCombination_d55f826f3bd0f9b7,
          mid_linearCombination_f333b5cc2e287f27,
          mid_linearCombination_8b532b582b02c069,
          mid_log_4a6695c32050ea61,
          mid_log10_4a6695c32050ea61,
          mid_log1p_4a6695c32050ea61,
          mid_multiply_51810153224653b2,
          mid_multiply_1240ad28c30a567e,
          mid_multiply_bfceb19fe1e84919,
          mid_negate_4a6695c32050ea61,
          mid_newInstance_1240ad28c30a567e,
          mid_pow_51810153224653b2,
          mid_pow_1240ad28c30a567e,
          mid_pow_bfceb19fe1e84919,
          mid_reciprocal_4a6695c32050ea61,
          mid_remainder_51810153224653b2,
          mid_remainder_1240ad28c30a567e,
          mid_rint_4a6695c32050ea61,
          mid_rootN_bfceb19fe1e84919,
          mid_scalb_bfceb19fe1e84919,
          mid_sign_4a6695c32050ea61,
          mid_sin_4a6695c32050ea61,
          mid_sinCos_35f2499c71416a1a,
          mid_sinh_4a6695c32050ea61,
          mid_sinhCosh_c388a3eefde9d597,
          mid_sqrt_4a6695c32050ea61,
          mid_subtract_51810153224653b2,
          mid_subtract_1240ad28c30a567e,
          mid_tan_4a6695c32050ea61,
          mid_tanh_4a6695c32050ea61,
          mid_toDegrees_4a6695c32050ea61,
          mid_toRadians_4a6695c32050ea61,
          mid_ulp_4a6695c32050ea61,
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
