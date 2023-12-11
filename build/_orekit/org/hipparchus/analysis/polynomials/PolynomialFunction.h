#ifndef org_hipparchus_analysis_polynomials_PolynomialFunction_H
#define org_hipparchus_analysis_polynomials_PolynomialFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class FieldUnivariateFunction;
      namespace differentiation {
        class Derivative;
        class UnivariateDifferentiableFunction;
      }
      namespace polynomials {
        class PolynomialFunction;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class NullArgumentException;
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
            mid_init$_cc18240f4a737f14,
            mid_add_9b28b9c1f8a5c1e6,
            mid_antiDerivative_1de01c95bfe9897b,
            mid_degree_412668abc8d889e9,
            mid_equals_221e8e85cb385209,
            mid_getCoefficients_a53a7513ecedada2,
            mid_hashCode_412668abc8d889e9,
            mid_integrate_2268d18be49a6087,
            mid_multiply_9b28b9c1f8a5c1e6,
            mid_negate_1de01c95bfe9897b,
            mid_polynomialDerivative_1de01c95bfe9897b,
            mid_subtract_9b28b9c1f8a5c1e6,
            mid_toString_3cffd47377eca18a,
            mid_value_7e960cd6eee376d8,
            mid_value_6672ad854985cb64,
            mid_value_3eb2b84dba0ab7d2,
            mid_evaluate_05f591cf0826202b,
            mid_differentiate_1db7c087750eaffe,
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
