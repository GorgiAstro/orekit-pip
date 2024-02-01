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
            mid_init$_ff7cb6c242604316,
            mid_newSampleData_52f805717cb5edb7,
            mid_newCovarianceData_11ecdbb5af7ed67d,
            mid_getOmegaInverse_b2eebabce70526d8,
            mid_calculateBeta_92d7e8d8d3f1dfcf,
            mid_calculateBetaVariance_b2eebabce70526d8,
            mid_calculateErrorVariance_9981f74b2d109da6,
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
