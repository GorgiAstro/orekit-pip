#ifndef org_hipparchus_analysis_polynomials_PolynomialSplineFunction_H
#define org_hipparchus_analysis_polynomials_PolynomialSplineFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace analysis {
      class FieldUnivariateFunction;
      namespace differentiation {
        class Derivative;
        class UnivariateDifferentiableFunction;
      }
      namespace polynomials {
        class PolynomialFunction;
        class PolynomialSplineFunction;
      }
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

        class PolynomialSplineFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9018bf358367e5d6,
            mid_getKnots_60c7040667a7dc5c,
            mid_getN_570ce0828f81a2c1,
            mid_getPolynomials_02eeb9e6c0dfd60f,
            mid_isValidPoint_2e401133981893e4,
            mid_polynomialSplineDerivative_0dc7302672c3994b,
            mid_value_dcbc7ce2902fa136,
            mid_value_a4b1871f4d29e58b,
            mid_value_73d6acaa8ebd2b7d,
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
