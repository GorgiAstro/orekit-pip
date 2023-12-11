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
            mid_init$_0640e6acf969ed28,
            mid_newSampleData_392243885d3ba752,
            mid_calculateBeta_75d50d73180655b4,
            mid_calculateBetaVariance_70a207fcbc031df2,
            mid_calculateErrorVariance_557b8123390d8d0c,
            mid_newCovarianceData_edb361bfdd1ad9ae,
            mid_getOmegaInverse_70a207fcbc031df2,
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
