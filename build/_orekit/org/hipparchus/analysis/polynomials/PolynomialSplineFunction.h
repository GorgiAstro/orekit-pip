#ifndef org_hipparchus_analysis_polynomials_PolynomialSplineFunction_H
#define org_hipparchus_analysis_polynomials_PolynomialSplineFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class PolynomialFunction;
        class PolynomialSplineFunction;
      }
      class FieldUnivariateFunction;
      namespace differentiation {
        class Derivative;
        class UnivariateDifferentiableFunction;
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
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        class PolynomialSplineFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_93b81a7dc415befa,
            mid_getKnots_7cdc325af0834901,
            mid_getN_f2f64475e4580546,
            mid_getPolynomials_4abf9ec9946ee32d,
            mid_isValidPoint_e18fb1101b70dcca,
            mid_polynomialSplineDerivative_0ca61ecfbea37c0e,
            mid_value_0ba5fed9597b693e,
            mid_value_d3398190482814dc,
            mid_value_1f22c1881e72229d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PolynomialSplineFunction(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PolynomialSplineFunction(const PolynomialSplineFunction& obj) : ::java::lang::Object(obj) {}

          PolynomialSplineFunction(const JArray< jdouble > &, const JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > &);

          JArray< jdouble > getKnots() const;
          jint getN() const;
          JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > getPolynomials() const;
          jboolean isValidPoint(jdouble) const;
          PolynomialSplineFunction polynomialSplineDerivative() const;
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
        extern PyType_Def PY_TYPE_DEF(PolynomialSplineFunction);
        extern PyTypeObject *PY_TYPE(PolynomialSplineFunction);

        class t_PolynomialSplineFunction {
        public:
          PyObject_HEAD
          PolynomialSplineFunction object;
          static PyObject *wrap_Object(const PolynomialSplineFunction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
