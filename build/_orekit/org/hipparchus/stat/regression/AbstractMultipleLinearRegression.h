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
            mid_init$_ff7cb6c242604316,
            mid_estimateErrorVariance_9981f74b2d109da6,
            mid_estimateRegressandVariance_9981f74b2d109da6,
            mid_estimateRegressionParameters_be783177b060994b,
            mid_estimateRegressionParametersStandardErrors_be783177b060994b,
            mid_estimateRegressionParametersVariance_eda3f19b8225f78f,
            mid_estimateRegressionStandardError_9981f74b2d109da6,
            mid_estimateResiduals_be783177b060994b,
            mid_isNoIntercept_eee3de00fe971136,
            mid_newSampleData_40b495c766d36227,
            mid_setNoIntercept_b35db77cae58639e,
            mid_getX_b2eebabce70526d8,
            mid_getY_92d7e8d8d3f1dfcf,
            mid_calculateBeta_92d7e8d8d3f1dfcf,
            mid_calculateBetaVariance_b2eebabce70526d8,
            mid_calculateErrorVariance_9981f74b2d109da6,
            mid_validateSampleData_f1517d9a21833345,
            mid_newYSampleData_a71c45509eaf92d1,
            mid_newXSampleData_11ecdbb5af7ed67d,
            mid_validateCovarianceData_5a4cd41298d36845,
            mid_calculateResiduals_92d7e8d8d3f1dfcf,
            mid_calculateYVariance_9981f74b2d109da6,
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
