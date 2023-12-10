#ifndef org_hipparchus_analysis_polynomials_PolynomialFunctionLagrangeForm_H
#define org_hipparchus_analysis_polynomials_PolynomialFunctionLagrangeForm_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace analysis {
      class UnivariateFunction;
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
            mid_init$_0d03c8a1d7f56f02,
            mid_degree_f2f64475e4580546,
            mid_evaluate_568f42d2326d41b5,
            mid_getCoefficients_7cdc325af0834901,
            mid_getInterpolatingPoints_7cdc325af0834901,
            mid_getInterpolatingValues_7cdc325af0834901,
            mid_value_0ba5fed9597b693e,
            mid_verifyInterpolationArray_265c50ede9c0384f,
            mid_computeCoefficients_7ae3461a92a43152,
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
