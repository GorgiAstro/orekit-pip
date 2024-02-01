#ifndef org_hipparchus_stat_regression_MultipleLinearRegression_H
#define org_hipparchus_stat_regression_MultipleLinearRegression_H

#include "java/lang/Object.h"

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

        class MultipleLinearRegression : public ::java::lang::Object {
         public:
          enum {
            mid_estimateRegressandVariance_9981f74b2d109da6,
            mid_estimateRegressionParameters_be783177b060994b,
            mid_estimateRegressionParametersStandardErrors_be783177b060994b,
            mid_estimateRegressionParametersVariance_eda3f19b8225f78f,
            mid_estimateResiduals_be783177b060994b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultipleLinearRegression(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultipleLinearRegression(const MultipleLinearRegression& obj) : ::java::lang::Object(obj) {}

          jdouble estimateRegressandVariance() const;
          JArray< jdouble > estimateRegressionParameters() const;
          JArray< jdouble > estimateRegressionParametersStandardErrors() const;
          JArray< JArray< jdouble > > estimateRegressionParametersVariance() const;
          JArray< jdouble > estimateResiduals() const;
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
        extern PyType_Def PY_TYPE_DEF(MultipleLinearRegression);
        extern PyTypeObject *PY_TYPE(MultipleLinearRegression);

        class t_MultipleLinearRegression {
        public:
          PyObject_HEAD
          MultipleLinearRegression object;
          static PyObject *wrap_Object(const MultipleLinearRegression&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
