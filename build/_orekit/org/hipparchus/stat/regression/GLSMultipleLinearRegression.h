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
            mid_init$_0fa09c18fee449d5,
            mid_newSampleData_6faea01a29e89571,
            mid_newCovarianceData_a0befc7f3dc19e41,
            mid_getOmegaInverse_688b496048ff947b,
            mid_calculateBeta_aab4fbf77867daa8,
            mid_calculateBetaVariance_688b496048ff947b,
            mid_calculateErrorVariance_dff5885c2c873297,
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
