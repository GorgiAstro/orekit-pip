#ifndef org_hipparchus_stat_regression_SimpleRegression_H
#define org_hipparchus_stat_regression_SimpleRegression_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {
        class UpdatingMultipleLinearRegression;
        class RegressionResults;
        class SimpleRegression;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        class SimpleRegression : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_init$_bd04c9335fb9e4cf,
            mid_addData_a0befc7f3dc19e41,
            mid_addData_8f2e782d5278b131,
            mid_addObservation_bc1ff02eb3693128,
            mid_addObservations_38e689b845a7e4f9,
            mid_append_612d078f264bef5d,
            mid_clear_0fa09c18fee449d5,
            mid_getIntercept_dff5885c2c873297,
            mid_getInterceptStdErr_dff5885c2c873297,
            mid_getMeanSquareError_dff5885c2c873297,
            mid_getN_492808a339bfa35f,
            mid_getR_dff5885c2c873297,
            mid_getRSquare_dff5885c2c873297,
            mid_getRegressionSumSquares_dff5885c2c873297,
            mid_getSignificance_dff5885c2c873297,
            mid_getSlope_dff5885c2c873297,
            mid_getSlopeConfidenceInterval_dff5885c2c873297,
            mid_getSlopeConfidenceInterval_dcbc7ce2902fa136,
            mid_getSlopeStdErr_dff5885c2c873297,
            mid_getSumOfCrossProducts_dff5885c2c873297,
            mid_getSumSquaredErrors_dff5885c2c873297,
            mid_getTotalSumSquares_dff5885c2c873297,
            mid_getXSumSquares_dff5885c2c873297,
            mid_hasIntercept_b108b35ef48e27bd,
            mid_predict_dcbc7ce2902fa136,
            mid_regress_0142096ec696b4f7,
            mid_regress_7a5a137e3f3bf403,
            mid_removeData_a0befc7f3dc19e41,
            mid_removeData_8f2e782d5278b131,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleRegression(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleRegression(const SimpleRegression& obj) : ::java::lang::Object(obj) {}

          SimpleRegression();
          SimpleRegression(jboolean);

          void addData(const JArray< JArray< jdouble > > &) const;
          void addData(jdouble, jdouble) const;
          void addObservation(const JArray< jdouble > &, jdouble) const;
          void addObservations(const JArray< JArray< jdouble > > &, const JArray< jdouble > &) const;
          void append(const SimpleRegression &) const;
          void clear() const;
          jdouble getIntercept() const;
          jdouble getInterceptStdErr() const;
          jdouble getMeanSquareError() const;
          jlong getN() const;
          jdouble getR() const;
          jdouble getRSquare() const;
          jdouble getRegressionSumSquares() const;
          jdouble getSignificance() const;
          jdouble getSlope() const;
          jdouble getSlopeConfidenceInterval() const;
          jdouble getSlopeConfidenceInterval(jdouble) const;
          jdouble getSlopeStdErr() const;
          jdouble getSumOfCrossProducts() const;
          jdouble getSumSquaredErrors() const;
          jdouble getTotalSumSquares() const;
          jdouble getXSumSquares() const;
          jboolean hasIntercept() const;
          jdouble predict(jdouble) const;
          ::org::hipparchus::stat::regression::RegressionResults regress() const;
          ::org::hipparchus::stat::regression::RegressionResults regress(const JArray< jint > &) const;
          void removeData(const JArray< JArray< jdouble > > &) const;
          void removeData(jdouble, jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(SimpleRegression);
        extern PyTypeObject *PY_TYPE(SimpleRegression);

        class t_SimpleRegression {
        public:
          PyObject_HEAD
          SimpleRegression object;
          static PyObject *wrap_Object(const SimpleRegression&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
