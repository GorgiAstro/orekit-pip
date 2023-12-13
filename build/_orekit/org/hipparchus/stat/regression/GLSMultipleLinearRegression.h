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
            mid_init$_a1fa5dae97ea5ed2,
            mid_newSampleData_cb88912e99c935c1,
            mid_calculateBeta_3a10cc75bd070d84,
            mid_calculateBetaVariance_f77d745f2128c391,
            mid_calculateErrorVariance_b74f83833fdad017,
            mid_newCovarianceData_07adb42ffaa97d31,
            mid_getOmegaInverse_f77d745f2128c391,
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
