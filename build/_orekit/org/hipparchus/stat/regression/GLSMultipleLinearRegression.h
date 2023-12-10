#ifndef org_hipparchus_stat_regression_GLSMultipleLinearRegression_H
#define org_hipparchus_stat_regression_GLSMultipleLinearRegression_H

#include "org/hipparchus/stat/regression/AbstractMultipleLinearRegression.h"

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

        class GLSMultipleLinearRegression : public ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_newSampleData_1b32d195c9ba81f9,
            mid_calculateBeta_6d9adf1d5b463928,
            mid_calculateBetaVariance_7116bbecdd8ceb21,
            mid_calculateErrorVariance_456d9a2f64d6b28d,
            mid_newCovarianceData_d660c7a97bf55272,
            mid_getOmegaInverse_7116bbecdd8ceb21,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GLSMultipleLinearRegression(jobject obj) : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GLSMultipleLinearRegression(const GLSMultipleLinearRegression& obj) : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(obj) {}

          GLSMultipleLinearRegression();

          void newSampleData(const JArray< jdouble > &, const JArray< JArray< jdouble > > &, const JArray< JArray< jdouble > > &) const;
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
        extern PyType_Def PY_TYPE_DEF(GLSMultipleLinearRegression);
        extern PyTypeObject *PY_TYPE(GLSMultipleLinearRegression);

        class t_GLSMultipleLinearRegression {
        public:
          PyObject_HEAD
          GLSMultipleLinearRegression object;
          static PyObject *wrap_Object(const GLSMultipleLinearRegression&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
