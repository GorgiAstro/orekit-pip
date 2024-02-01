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
        class PolynomialSplineFunction;
        class PolynomialFunction;
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
            mid_init$_68b421771a5e77dc,
            mid_getKnots_be783177b060994b,
            mid_getN_d6ab429752e7c267,
            mid_getPolynomials_a2c0c7b172d95f6c,
            mid_isValidPoint_7bc657d327f0f830,
            mid_polynomialSplineDerivative_04eec7d35214b344,
            mid_value_bf28ed64d6e8576b,
            mid_value_a3b854adede8eaaa,
            mid_value_ba85b555c6f0b809,
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
