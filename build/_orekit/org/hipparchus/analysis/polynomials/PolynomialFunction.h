#ifndef org_hipparchus_analysis_polynomials_PolynomialFunction_H
#define org_hipparchus_analysis_polynomials_PolynomialFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class PolynomialFunction;
      }
      class FieldUnivariateFunction;
      namespace differentiation {
        class Derivative;
        class UnivariateDifferentiableFunction;
      }
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
            mid_init$_ebc26dcaf4761286,
            mid_add_08f5b27de6522ba7,
            mid_antiDerivative_9acb2e9dad3cd99d,
            mid_degree_f2f64475e4580546,
            mid_equals_229c87223f486349,
            mid_getCoefficients_7cdc325af0834901,
            mid_hashCode_f2f64475e4580546,
            mid_integrate_824133ce4aec3505,
            mid_multiply_08f5b27de6522ba7,
            mid_negate_9acb2e9dad3cd99d,
            mid_polynomialDerivative_9acb2e9dad3cd99d,
            mid_subtract_08f5b27de6522ba7,
            mid_toString_0090f7797e403f43,
            mid_value_0ba5fed9597b693e,
            mid_value_d3398190482814dc,
            mid_value_1f22c1881e72229d,
            mid_evaluate_926a8b9763aa0b21,
            mid_differentiate_4b742fe429c22ba8,
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
