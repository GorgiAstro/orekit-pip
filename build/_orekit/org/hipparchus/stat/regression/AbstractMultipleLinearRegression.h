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
            mid_init$_0640e6acf969ed28,
            mid_estimateErrorVariance_557b8123390d8d0c,
            mid_estimateRegressandVariance_557b8123390d8d0c,
            mid_estimateRegressionParameters_a53a7513ecedada2,
            mid_estimateRegressionParametersStandardErrors_a53a7513ecedada2,
            mid_estimateRegressionParametersVariance_8cf5267aa13a77f3,
            mid_estimateRegressionStandardError_557b8123390d8d0c,
            mid_estimateResiduals_a53a7513ecedada2,
            mid_isNoIntercept_89b302893bdbe1f1,
            mid_newSampleData_91b51b3c05127ead,
            mid_setNoIntercept_ed2afdb8506b9742,
            mid_getX_70a207fcbc031df2,
            mid_getY_75d50d73180655b4,
            mid_newYSampleData_cc18240f4a737f14,
            mid_newXSampleData_edb361bfdd1ad9ae,
            mid_validateSampleData_122207bd161e9ddc,
            mid_validateCovarianceData_a22031f826f9fdb5,
            mid_calculateBeta_75d50d73180655b4,
            mid_calculateBetaVariance_70a207fcbc031df2,
            mid_calculateYVariance_557b8123390d8d0c,
            mid_calculateErrorVariance_557b8123390d8d0c,
            mid_calculateResiduals_75d50d73180655b4,
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
