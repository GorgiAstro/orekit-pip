#ifndef org_hipparchus_analysis_polynomials_PolynomialFunctionNewtonForm_H
#define org_hipparchus_analysis_polynomials_PolynomialFunctionNewtonForm_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace analysis {
      namespace differentiation {
        class Derivative;
        class UnivariateDifferentiableFunction;
      }
      class FieldUnivariateFunction;
    }
    namespace exception {
      class NullArgumentException;
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
    namespace analysis {
      namespace polynomials {

        class PolynomialFunctionNewtonForm : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e1f4b15468f5564a,
            mid_degree_570ce0828f81a2c1,
            mid_evaluate_81770d1e77838f28,
            mid_getCenters_60c7040667a7dc5c,
            mid_getCoefficients_60c7040667a7dc5c,
            mid_getNewtonCoefficients_60c7040667a7dc5c,
            mid_value_dcbc7ce2902fa136,
            mid_value_a4b1871f4d29e58b,
            mid_value_73d6acaa8ebd2b7d,
            mid_computeCoefficients_0fa09c18fee449d5,
            mid_verifyInputArray_e1f4b15468f5564a,
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
