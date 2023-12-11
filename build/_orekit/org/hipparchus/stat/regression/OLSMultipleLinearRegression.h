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
            mid_init$_0640e6acf969ed28,
            mid_init$_10f281d777284cea,
            mid_calculateAdjustedRSquared_557b8123390d8d0c,
            mid_calculateHat_70a207fcbc031df2,
            mid_calculateRSquared_557b8123390d8d0c,
            mid_calculateResidualSumOfSquares_557b8123390d8d0c,
            mid_calculateTotalSumOfSquares_557b8123390d8d0c,
            mid_newSampleData_d28c10701e55f94c,
            mid_newSampleData_91b51b3c05127ead,
            mid_newXSampleData_edb361bfdd1ad9ae,
            mid_calculateBeta_75d50d73180655b4,
            mid_calculateBetaVariance_70a207fcbc031df2,
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
