#ifndef org_hipparchus_stat_regression_AbstractMultipleLinearRegression_H
#define org_hipparchus_stat_regression_AbstractMultipleLinearRegression_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {
        class MultipleLinearRegression;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        class AbstractMultipleLinearRegression : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_estimateErrorVariance_456d9a2f64d6b28d,
            mid_estimateRegressandVariance_456d9a2f64d6b28d,
            mid_estimateRegressionParameters_7cdc325af0834901,
            mid_estimateRegressionParametersStandardErrors_7cdc325af0834901,
            mid_estimateRegressionParametersVariance_43de1192439efa92,
            mid_estimateRegressionStandardError_456d9a2f64d6b28d,
            mid_estimateResiduals_7cdc325af0834901,
            mid_isNoIntercept_e470b6d9e0d979db,
            mid_newSampleData_d3508f432c1d798d,
            mid_setNoIntercept_50a2e0b139e80a58,
            mid_getX_7116bbecdd8ceb21,
            mid_getY_6d9adf1d5b463928,
            mid_newYSampleData_ebc26dcaf4761286,
            mid_newXSampleData_d660c7a97bf55272,
            mid_validateSampleData_f51b12ef24067352,
            mid_validateCovarianceData_394848609b22ec5b,
            mid_calculateBeta_6d9adf1d5b463928,
            mid_calculateBetaVariance_7116bbecdd8ceb21,
            mid_calculateYVariance_456d9a2f64d6b28d,
            mid_calculateResiduals_6d9adf1d5b463928,
            mid_calculateErrorVariance_456d9a2f64d6b28d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractMultipleLinearRegression(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractMultipleLinearRegression(const AbstractMultipleLinearRegression& obj) : ::java::lang::Object(obj) {}

          AbstractMultipleLinearRegression();

          jdouble estimateErrorVariance() const;
          jdouble estimateRegressandVariance() const;
          JArray< jdouble > estimateRegressionParameters() const;
          JArray< jdouble > estimateRegressionParametersStandardErrors() const;
          JArray< JArray< jdouble > > estimateRegressionParametersVariance() const;
          jdouble estimateRegressionStandardError() const;
          JArray< jdouble > estimateResiduals() const;
          jboolean isNoIntercept() const;
          void newSampleData(const JArray< jdouble > &, jint, jint) const;
          void setNoIntercept(jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractMultipleLinearRegression);
        extern PyTypeObject *PY_TYPE(AbstractMultipleLinearRegression);

        class t_AbstractMultipleLinearRegression {
        public:
          PyObject_HEAD
          AbstractMultipleLinearRegression object;
          static PyObject *wrap_Object(const AbstractMultipleLinearRegression&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
