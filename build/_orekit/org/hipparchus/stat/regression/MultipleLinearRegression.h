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
            mid_estimateRegressandVariance_b74f83833fdad017,
            mid_estimateRegressionParameters_25e1757a36c4dde2,
            mid_estimateRegressionParametersStandardErrors_25e1757a36c4dde2,
            mid_estimateRegressionParametersVariance_3b7b373db8e7887f,
            mid_estimateResiduals_25e1757a36c4dde2,
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
