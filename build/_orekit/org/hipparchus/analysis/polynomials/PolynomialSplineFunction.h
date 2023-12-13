#ifndef org_hipparchus_analysis_polynomials_PolynomialSplineFunction_H
#define org_hipparchus_analysis_polynomials_PolynomialSplineFunction_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class UnivariateDifferentiableFunction;
        class Derivative;
      }
      namespace polynomials {
        class PolynomialSplineFunction;
        class PolynomialFunction;
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

        class PolynomialSplineFunction : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ea512a9f7292ec68,
            mid_getKnots_25e1757a36c4dde2,
            mid_getN_55546ef6a647f39b,
            mid_getPolynomials_6893f2a8a1a47500,
            mid_isValidPoint_716249baa52d209e,
            mid_polynomialSplineDerivative_8bbee61439e598b7,
            mid_value_04fd0666b613d2ab,
            mid_value_6e00dc5eb352fe51,
            mid_value_a5332de4d4d64b08,
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
