#ifndef org_hipparchus_analysis_polynomials_PolynomialFunctionLagrangeForm_H
#define org_hipparchus_analysis_polynomials_PolynomialFunctionLagrangeForm_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class UnivariateFunction;
    }
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
    namespace analysis {
      namespace polynomials {

        class PolynomialFunctionLagrangeForm : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ab4840ba016ef1da,
            mid_degree_412668abc8d889e9,
            mid_evaluate_abf45904c34f3045,
            mid_getCoefficients_a53a7513ecedada2,
            mid_getInterpolatingPoints_a53a7513ecedada2,
            mid_getInterpolatingValues_a53a7513ecedada2,
            mid_value_7e960cd6eee376d8,
            mid_verifyInterpolationArray_e4da1fc662513bd0,
            mid_computeCoefficients_0640e6acf969ed28,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PolynomialFunctionLagrangeForm(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PolynomialFunctionLagrangeForm(const PolynomialFunctionLagrangeForm& obj) : ::java::lang::Object(obj) {}

          PolynomialFunctionLagrangeForm(const JArray< jdouble > &, const JArray< jdouble > &);

          jint degree() const;
          static jdouble evaluate(const JArray< jdouble > &, const JArray< jdouble > &, jdouble);
          JArray< jdouble > getCoefficients() const;
          JArray< jdouble > getInterpolatingPoints() const;
          JArray< jdouble > getInterpolatingValues() const;
          jdouble value(jdouble) const;
          static jboolean verifyInterpolationArray(const JArray< jdouble > &, const JArray< jdouble > &, jboolean);
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
        extern PyType_Def PY_TYPE_DEF(PolynomialFunctionLagrangeForm);
        extern PyTypeObject *PY_TYPE(PolynomialFunctionLagrangeForm);

        class t_PolynomialFunctionLagrangeForm {
        public:
          PyObject_HEAD
          PolynomialFunctionLagrangeForm object;
          static PyObject *wrap_Object(const PolynomialFunctionLagrangeForm&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
