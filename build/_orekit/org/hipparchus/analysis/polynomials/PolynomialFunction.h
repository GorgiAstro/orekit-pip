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
            mid_init$_a71c45509eaf92d1,
            mid_add_6420feed26440ceb,
            mid_antiDerivative_23af9c2be1ac4d50,
            mid_degree_d6ab429752e7c267,
            mid_equals_72faff9b05f5ed5e,
            mid_getCoefficients_be783177b060994b,
            mid_hashCode_d6ab429752e7c267,
            mid_integrate_82f92590f4247da1,
            mid_multiply_6420feed26440ceb,
            mid_negate_23af9c2be1ac4d50,
            mid_polynomialDerivative_23af9c2be1ac4d50,
            mid_subtract_6420feed26440ceb,
            mid_toString_d2c8eb4129821f0e,
            mid_value_bf28ed64d6e8576b,
            mid_value_a3b854adede8eaaa,
            mid_value_ba85b555c6f0b809,
            mid_evaluate_02811febb145516c,
            mid_differentiate_51f624c89851da7e,
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
