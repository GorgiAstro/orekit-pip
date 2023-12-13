#ifndef org_hipparchus_stat_regression_AbstractMultipleLinearRegression_H
#define org_hipparchus_stat_regression_AbstractMultipleLinearRegression_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {
        class MultipleLinearRegression;
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
    namespace stat {
      namespace regression {

        class AbstractMultipleLinearRegression : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_estimateErrorVariance_b74f83833fdad017,
            mid_estimateRegressandVariance_b74f83833fdad017,
            mid_estimateRegressionParameters_25e1757a36c4dde2,
            mid_estimateRegressionParametersStandardErrors_25e1757a36c4dde2,
            mid_estimateRegressionParametersVariance_3b7b373db8e7887f,
            mid_estimateRegressionStandardError_b74f83833fdad017,
            mid_estimateResiduals_25e1757a36c4dde2,
            mid_isNoIntercept_9ab94ac1dc23b105,
            mid_newSampleData_4484ad1f15b73c7a,
            mid_setNoIntercept_fcb96c98de6fad04,
            mid_getY_3a10cc75bd070d84,
            mid_getX_f77d745f2128c391,
            mid_newXSampleData_07adb42ffaa97d31,
            mid_calculateBeta_3a10cc75bd070d84,
            mid_calculateBetaVariance_f77d745f2128c391,
            mid_validateSampleData_8a9d29a6bd2c9070,
            mid_newYSampleData_ab69da052b88f50c,
            mid_calculateResiduals_3a10cc75bd070d84,
            mid_validateCovarianceData_32c2259f7dd7bcaf,
            mid_calculateYVariance_b74f83833fdad017,
            mid_calculateErrorVariance_b74f83833fdad017,
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
