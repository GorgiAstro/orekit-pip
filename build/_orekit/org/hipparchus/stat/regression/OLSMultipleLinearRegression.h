#ifndef org_hipparchus_stat_regression_OLSMultipleLinearRegression_H
#define org_hipparchus_stat_regression_OLSMultipleLinearRegression_H

#include "org/hipparchus/stat/regression/AbstractMultipleLinearRegression.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
    namespace exception {
      class MathIllegalArgumentException;
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
            mid_init$_0fa09c18fee449d5,
            mid_init$_17db3a65980d3441,
            mid_calculateAdjustedRSquared_dff5885c2c873297,
            mid_calculateHat_688b496048ff947b,
            mid_calculateRSquared_dff5885c2c873297,
            mid_calculateResidualSumOfSquares_dff5885c2c873297,
            mid_calculateTotalSumOfSquares_dff5885c2c873297,
            mid_newSampleData_0942607a80e88c17,
            mid_newSampleData_12aca76acb10f1af,
            mid_calculateBeta_aab4fbf77867daa8,
            mid_calculateBetaVariance_688b496048ff947b,
            mid_newXSampleData_a0befc7f3dc19e41,
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
