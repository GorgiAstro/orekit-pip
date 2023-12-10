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
            mid_init$_e1f4b15468f5564a,
            mid_degree_570ce0828f81a2c1,
            mid_evaluate_81770d1e77838f28,
            mid_getCoefficients_60c7040667a7dc5c,
            mid_getInterpolatingPoints_60c7040667a7dc5c,
            mid_getInterpolatingValues_60c7040667a7dc5c,
            mid_value_dcbc7ce2902fa136,
            mid_verifyInterpolationArray_2a23e9f4a2692a23,
            mid_computeCoefficients_0fa09c18fee449d5,
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
