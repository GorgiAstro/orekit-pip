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
            mid_init$_ff7cb6c242604316,
            mid_init$_1ad26e8c8c0cd65b,
            mid_calculateAdjustedRSquared_9981f74b2d109da6,
            mid_calculateHat_b2eebabce70526d8,
            mid_calculateRSquared_9981f74b2d109da6,
            mid_calculateResidualSumOfSquares_9981f74b2d109da6,
            mid_calculateTotalSumOfSquares_9981f74b2d109da6,
            mid_newSampleData_ef9c3ec1d213ea68,
            mid_newSampleData_40b495c766d36227,
            mid_calculateBeta_92d7e8d8d3f1dfcf,
            mid_calculateBetaVariance_b2eebabce70526d8,
            mid_newXSampleData_11ecdbb5af7ed67d,
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
