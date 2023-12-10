#ifndef org_hipparchus_stat_regression_OLSMultipleLinearRegression_H
#define org_hipparchus_stat_regression_OLSMultipleLinearRegression_H

#include "org/hipparchus/stat/regression/AbstractMultipleLinearRegression.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrix;
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
    namespace stat {
      namespace regression {

        class OLSMultipleLinearRegression : public ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_init$_77e0f9a1f260e2e5,
            mid_calculateAdjustedRSquared_456d9a2f64d6b28d,
            mid_calculateHat_7116bbecdd8ceb21,
            mid_calculateRSquared_456d9a2f64d6b28d,
            mid_calculateResidualSumOfSquares_456d9a2f64d6b28d,
            mid_calculateTotalSumOfSquares_456d9a2f64d6b28d,
            mid_newSampleData_cdae0ed71cfef3d1,
            mid_newSampleData_d3508f432c1d798d,
            mid_newXSampleData_d660c7a97bf55272,
            mid_calculateBeta_6d9adf1d5b463928,
            mid_calculateBetaVariance_7116bbecdd8ceb21,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OLSMultipleLinearRegression(jobject obj) : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OLSMultipleLinearRegression(const OLSMultipleLinearRegression& obj) : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(obj) {}

          OLSMultipleLinearRegression();
          OLSMultipleLinearRegression(jdouble);

          jdouble calculateAdjustedRSquared() const;
          ::org::hipparchus::linear::RealMatrix calculateHat() const;
          jdouble calculateRSquared() const;
          jdouble calculateResidualSumOfSquares() const;
          jdouble calculateTotalSumOfSquares() const;
          void newSampleData(const JArray< jdouble > &, const JArray< JArray< jdouble > > &) const;
          void newSampleData(const JArray< jdouble > &, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {
        extern PyType_Def PY_TYPE_DEF(OLSMultipleLinearRegression);
        extern PyTypeObject *PY_TYPE(OLSMultipleLinearRegression);

        class t_OLSMultipleLinearRegression {
        public:
          PyObject_HEAD
          OLSMultipleLinearRegression object;
          static PyObject *wrap_Object(const OLSMultipleLinearRegression&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
