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
            mid_init$_0fa09c18fee449d5,
            mid_estimateErrorVariance_dff5885c2c873297,
            mid_estimateRegressandVariance_dff5885c2c873297,
            mid_estimateRegressionParameters_60c7040667a7dc5c,
            mid_estimateRegressionParametersStandardErrors_60c7040667a7dc5c,
            mid_estimateRegressionParametersVariance_0358d8ea02f2cdb1,
            mid_estimateRegressionStandardError_dff5885c2c873297,
            mid_estimateResiduals_60c7040667a7dc5c,
            mid_isNoIntercept_b108b35ef48e27bd,
            mid_newSampleData_12aca76acb10f1af,
            mid_setNoIntercept_bd04c9335fb9e4cf,
            mid_getX_688b496048ff947b,
            mid_getY_aab4fbf77867daa8,
            mid_calculateBeta_aab4fbf77867daa8,
            mid_calculateBetaVariance_688b496048ff947b,
            mid_calculateErrorVariance_dff5885c2c873297,
            mid_validateSampleData_38e689b845a7e4f9,
            mid_newYSampleData_fa9d415d19f69361,
            mid_newXSampleData_a0befc7f3dc19e41,
            mid_validateCovarianceData_001acb08fd3b3c30,
            mid_calculateResiduals_aab4fbf77867daa8,
            mid_calculateYVariance_dff5885c2c873297,
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
