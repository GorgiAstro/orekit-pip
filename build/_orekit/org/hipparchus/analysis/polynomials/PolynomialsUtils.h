#ifndef org_hipparchus_analysis_polynomials_PolynomialsUtils_H
#define org_hipparchus_analysis_polynomials_PolynomialsUtils_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class PolynomialFunction;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        class PolynomialsUtils : public ::java::lang::Object {
         public:
          enum {
            mid_createChebyshevPolynomial_4f5b8bf5df9f3665,
            mid_createHermitePolynomial_4f5b8bf5df9f3665,
            mid_createJacobiPolynomial_8c67abe8da27c9da,
            mid_createLaguerrePolynomial_4f5b8bf5df9f3665,
            mid_createLegendrePolynomial_4f5b8bf5df9f3665,
            mid_shift_ffc9125fb767957a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PolynomialsUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PolynomialsUtils(const PolynomialsUtils& obj) : ::java::lang::Object(obj) {}

          static ::org::hipparchus::analysis::polynomials::PolynomialFunction createChebyshevPolynomial(jint);
          static ::org::hipparchus::analysis::polynomials::PolynomialFunction createHermitePolynomial(jint);
          static ::org::hipparchus::analysis::polynomials::PolynomialFunction createJacobiPolynomial(jint, jint, jint);
          static ::org::hipparchus::analysis::polynomials::PolynomialFunction createLaguerrePolynomial(jint);
          static ::org::hipparchus::analysis::polynomials::PolynomialFunction createLegendrePolynomial(jint);
          static JArray< jdouble > shift(const JArray< jdouble > &, jdouble);
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
        extern PyType_Def PY_TYPE_DEF(PolynomialsUtils);
        extern PyTypeObject *PY_TYPE(PolynomialsUtils);

        class t_PolynomialsUtils {
        public:
          PyObject_HEAD
          PolynomialsUtils object;
          static PyObject *wrap_Object(const PolynomialsUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
