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
            mid_init$_ab4840ba016ef1da,
            mid_degree_412668abc8d889e9,
            mid_evaluate_abf45904c34f3045,
            mid_getCenters_a53a7513ecedada2,
            mid_getCoefficients_a53a7513ecedada2,
            mid_getNewtonCoefficients_a53a7513ecedada2,
            mid_value_7e960cd6eee376d8,
            mid_value_6672ad854985cb64,
            mid_value_3eb2b84dba0ab7d2,
            mid_computeCoefficients_0640e6acf969ed28,
            mid_verifyInputArray_ab4840ba016ef1da,
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
