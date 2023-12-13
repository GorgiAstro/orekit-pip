#ifndef org_hipparchus_analysis_polynomials_PolynomialFunctionNewtonForm_H
#define org_hipparchus_analysis_polynomials_PolynomialFunctionNewtonForm_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDifferentiableFunction;
        class Derivative;
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
            mid_init$_b15baa0161a4e9c7,
            mid_degree_55546ef6a647f39b,
            mid_evaluate_5427cadc72cd59f7,
            mid_getCenters_25e1757a36c4dde2,
            mid_getCoefficients_25e1757a36c4dde2,
            mid_getNewtonCoefficients_25e1757a36c4dde2,
            mid_value_04fd0666b613d2ab,
            mid_value_6e00dc5eb352fe51,
            mid_value_a5332de4d4d64b08,
            mid_computeCoefficients_a1fa5dae97ea5ed2,
            mid_verifyInputArray_b15baa0161a4e9c7,
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
