#ifndef org_hipparchus_analysis_polynomials_PolynomialFunctionNewtonForm_H
#define org_hipparchus_analysis_polynomials_PolynomialFunctionNewtonForm_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class FieldUnivariateFunction;
      namespace differentiation {
        class Derivative;
        class UnivariateDifferentiableFunction;
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
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        class PolynomialFunctionNewtonForm : public ::java::lang::Object {
         public:
          enum {
            mid_init$_64100e41ba74de8f,
            mid_degree_d6ab429752e7c267,
            mid_evaluate_65d620e9532c2371,
            mid_getCenters_be783177b060994b,
            mid_getCoefficients_be783177b060994b,
            mid_getNewtonCoefficients_be783177b060994b,
            mid_value_bf28ed64d6e8576b,
            mid_value_a3b854adede8eaaa,
            mid_value_ba85b555c6f0b809,
            mid_computeCoefficients_ff7cb6c242604316,
            mid_verifyInputArray_64100e41ba74de8f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PolynomialFunctionNewtonForm(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PolynomialFunctionNewtonForm(const PolynomialFunctionNewtonForm& obj) : ::java::lang::Object(obj) {}

          PolynomialFunctionNewtonForm(const JArray< jdouble > &, const JArray< jdouble > &);

          jint degree() const;
          static jdouble evaluate(const JArray< jdouble > &, const JArray< jdouble > &, jdouble);
          JArray< jdouble > getCenters() const;
          JArray< jdouble > getCoefficients() const;
          JArray< jdouble > getNewtonCoefficients() const;
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
        extern PyType_Def PY_TYPE_DEF(PolynomialFunctionNewtonForm);
        extern PyTypeObject *PY_TYPE(PolynomialFunctionNewtonForm);

        class t_PolynomialFunctionNewtonForm {
        public:
          PyObject_HEAD
          PolynomialFunctionNewtonForm object;
          static PyObject *wrap_Object(const PolynomialFunctionNewtonForm&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
