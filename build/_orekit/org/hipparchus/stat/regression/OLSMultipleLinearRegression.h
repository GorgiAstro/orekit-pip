#ifndef org_hipparchus_stat_regression_OLSMultipleLinearRegression_H
#define org_hipparchus_stat_regression_OLSMultipleLinearRegression_H

#include "org/hipparchus/stat/regression/AbstractMultipleLinearRegression.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace linear {
      class RealMatrix;
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

        class OLSMultipleLinearRegression : public ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_8ba9fe7a847cecad,
            mid_calculateAdjustedRSquared_b74f83833fdad017,
            mid_calculateHat_f77d745f2128c391,
            mid_calculateRSquared_b74f83833fdad017,
            mid_calculateResidualSumOfSquares_b74f83833fdad017,
            mid_calculateTotalSumOfSquares_b74f83833fdad017,
            mid_newSampleData_134a5d9f7619d4a2,
            mid_newSampleData_4484ad1f15b73c7a,
            mid_newXSampleData_07adb42ffaa97d31,
            mid_calculateBeta_3a10cc75bd070d84,
            mid_calculateBetaVariance_f77d745f2128c391,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OLSMultipleLinearRegression(jobject obj) : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OLSMultipleLinearRegression(const OLSMultipleLinearRegression& obj) : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(obj) {}

          OLSMultipleLinearRegression();
          OLSMultipleLinearRegression(jdouble);

          jdouble calculateAdjustedRSquared() const;
          ::org::hipparchus::linear::RealMatrix calculateHat() const;
          jdouble calculateRSquared() const;
          jdouble calculateResidualSumOfSquares() const;
          jdouble calculateTotalSumOfSquares() const;
          void newSampleData(const JArray< jdouble > &, const JArray< JArray< jdouble > > &) const;
          void newSampleData(const JArray< jdouble > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(OLSMultipleLinearRegression);
        extern PyTypeObject *PY_TYPE(OLSMultipleLinearRegression);

        class t_OLSMultipleLinearRegression {
        public:
          PyObject_HEAD
          OLSMultipleLinearRegression object;
          static PyObject *wrap_Object(const OLSMultipleLinearRegression&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
