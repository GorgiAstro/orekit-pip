#ifndef org_hipparchus_analysis_polynomials_PolynomialsUtils_H
#define org_hipparchus_analysis_polynomials_PolynomialsUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        class PolynomialFunction;
      }
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

        class PolynomialsUtils : public ::java::lang::Object {
         public:
          enum {
            mid_createChebyshevPolynomial_5bd8ce1674c86e4e,
            mid_createHermitePolynomial_5bd8ce1674c86e4e,
            mid_createJacobiPolynomial_03ef4c1eb023d2c0,
            mid_createLaguerrePolynomial_5bd8ce1674c86e4e,
            mid_createLegendrePolynomial_5bd8ce1674c86e4e,
            mid_shift_7c03fc65848ac490,
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
