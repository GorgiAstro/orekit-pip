#ifndef org_hipparchus_analysis_polynomials_PolynomialFunction_H
#define org_hipparchus_analysis_polynomials_PolynomialFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDifferentiableFunction;
        class Derivative;
      }
      namespace polynomials {
        class PolynomialFunction;
      }
      class FieldUnivariateFunction;
    }
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        class PolynomialFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ab69da052b88f50c,
            mid_add_54f3e3329edce1eb,
            mid_antiDerivative_c3e7249fd6a78747,
            mid_degree_55546ef6a647f39b,
            mid_equals_460c5e2d9d51c6cc,
            mid_getCoefficients_25e1757a36c4dde2,
            mid_hashCode_55546ef6a647f39b,
            mid_integrate_99e3200dafc19573,
            mid_multiply_54f3e3329edce1eb,
            mid_negate_c3e7249fd6a78747,
            mid_polynomialDerivative_c3e7249fd6a78747,
            mid_subtract_54f3e3329edce1eb,
            mid_toString_1c1fa1e935d6cdcf,
            mid_value_04fd0666b613d2ab,
            mid_value_6e00dc5eb352fe51,
            mid_value_a5332de4d4d64b08,
            mid_evaluate_79e4db9e1e3d84c9,
            mid_differentiate_14dee4cb8cc3e959,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PolynomialFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PolynomialFunction(const PolynomialFunction& obj) : ::java::lang::Object(obj) {}

          PolynomialFunction(const JArray< jdouble > &);

          PolynomialFunction add(const PolynomialFunction &) const;
          PolynomialFunction antiDerivative() const;
          jint degree() const;
          jboolean equals(const ::java::lang::Object &) const;
          JArray< jdouble > getCoefficients() const;
          jint hashCode() const;
          jdouble integrate(jdouble, jdouble) const;
          PolynomialFunction multiply(const PolynomialFunction &) const;
          PolynomialFunction negate() const;
          PolynomialFunction polynomialDerivative() const;
          PolynomialFunction subtract(const PolynomialFunction &) const;
          ::java::lang::String toString() const;
          jdouble value(jdouble) const;
          ::org::hipparchus::CalculusFieldElement value(const ::org::hipparchus::CalculusFieldElement &) const;
          ::org::hipparchus::analysis::differentiation::Derivative value(const ::org::hipparchus::analysis::differentiation::Derivative &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        extern PyType_Def PY_TYPE_DEF(PolynomialFunction);
        extern PyTypeObject *PY_TYPE(PolynomialFunction);

        class t_PolynomialFunction {
        public:
          PyObject_HEAD
          PolynomialFunction object;
          static PyObject *wrap_Object(const PolynomialFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
