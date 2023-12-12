#ifndef org_hipparchus_analysis_polynomials_PolynomialSplineFunction_H
#define org_hipparchus_analysis_polynomials_PolynomialSplineFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
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

        class PolynomialSplineFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0bdb57b79cecc140,
            mid_getKnots_a53a7513ecedada2,
            mid_getN_412668abc8d889e9,
            mid_getPolynomials_ab8ca1f1c6647c6c,
            mid_isValidPoint_dd69c3ab2404bb71,
            mid_polynomialSplineDerivative_0197192358cfcea9,
            mid_value_7e960cd6eee376d8,
            mid_value_6672ad854985cb64,
            mid_value_3eb2b84dba0ab7d2,
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
