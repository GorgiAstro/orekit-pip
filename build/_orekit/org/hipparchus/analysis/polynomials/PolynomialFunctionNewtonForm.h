#ifndef org_hipparchus_analysis_polynomials_PolynomialFunctionNewtonForm_H
#define org_hipparchus_analysis_polynomials_PolynomialFunctionNewtonForm_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class NullArgumentException;
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
    namespace analysis {
      class FieldUnivariateFunction;
      namespace differentiation {
        class Derivative;
        class UnivariateDifferentiableFunction;
      }
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
    namespace analysis {
      namespace polynomials {

        class PolynomialFunctionNewtonForm : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0d03c8a1d7f56f02,
            mid_degree_f2f64475e4580546,
            mid_evaluate_568f42d2326d41b5,
            mid_getCenters_7cdc325af0834901,
            mid_getCoefficients_7cdc325af0834901,
            mid_getNewtonCoefficients_7cdc325af0834901,
            mid_value_0ba5fed9597b693e,
            mid_value_d3398190482814dc,
            mid_value_1f22c1881e72229d,
            mid_computeCoefficients_7ae3461a92a43152,
            mid_verifyInputArray_0d03c8a1d7f56f02,
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
