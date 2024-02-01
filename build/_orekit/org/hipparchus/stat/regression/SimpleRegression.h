#ifndef org_hipparchus_stat_regression_SimpleRegression_H
#define org_hipparchus_stat_regression_SimpleRegression_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
    namespace stat {
      namespace regression {
        class RegressionResults;
        class UpdatingMultipleLinearRegression;
        class SimpleRegression;
      }
    }
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
            mid_init$_ff7cb6c242604316,
            mid_init$_b35db77cae58639e,
            mid_addData_11ecdbb5af7ed67d,
            mid_addData_13edac039e8cc967,
            mid_addObservation_19a01fdb4baa56b0,
            mid_addObservations_f1517d9a21833345,
            mid_append_039d27bf3973f473,
            mid_clear_ff7cb6c242604316,
            mid_getIntercept_9981f74b2d109da6,
            mid_getInterceptStdErr_9981f74b2d109da6,
            mid_getMeanSquareError_9981f74b2d109da6,
            mid_getN_42c72b98e3c2e08a,
            mid_getR_9981f74b2d109da6,
            mid_getRSquare_9981f74b2d109da6,
            mid_getRegressionSumSquares_9981f74b2d109da6,
            mid_getSignificance_9981f74b2d109da6,
            mid_getSlope_9981f74b2d109da6,
            mid_getSlopeConfidenceInterval_9981f74b2d109da6,
            mid_getSlopeConfidenceInterval_bf28ed64d6e8576b,
            mid_getSlopeStdErr_9981f74b2d109da6,
            mid_getSumOfCrossProducts_9981f74b2d109da6,
            mid_getSumSquaredErrors_9981f74b2d109da6,
            mid_getTotalSumSquares_9981f74b2d109da6,
            mid_getXSumSquares_9981f74b2d109da6,
            mid_hasIntercept_eee3de00fe971136,
            mid_predict_bf28ed64d6e8576b,
            mid_regress_b2f062f0fff197c0,
            mid_regress_54420be6ab2acfca,
            mid_removeData_11ecdbb5af7ed67d,
            mid_removeData_13edac039e8cc967,
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
