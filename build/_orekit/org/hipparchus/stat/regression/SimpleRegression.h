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
    namespace stat {
      namespace regression {
        class UpdatingMultipleLinearRegression;
        class SimpleRegression;
        class RegressionResults;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
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
            mid_init$_7ae3461a92a43152,
            mid_init$_50a2e0b139e80a58,
            mid_addData_d660c7a97bf55272,
            mid_addData_1d715fa3b7b756e1,
            mid_addObservation_caadaecfce5fba2f,
            mid_addObservations_f51b12ef24067352,
            mid_append_28845c69a6d4c8e4,
            mid_clear_7ae3461a92a43152,
            mid_getIntercept_456d9a2f64d6b28d,
            mid_getInterceptStdErr_456d9a2f64d6b28d,
            mid_getMeanSquareError_456d9a2f64d6b28d,
            mid_getN_a27fc9afd27e559d,
            mid_getR_456d9a2f64d6b28d,
            mid_getRSquare_456d9a2f64d6b28d,
            mid_getRegressionSumSquares_456d9a2f64d6b28d,
            mid_getSignificance_456d9a2f64d6b28d,
            mid_getSlope_456d9a2f64d6b28d,
            mid_getSlopeConfidenceInterval_456d9a2f64d6b28d,
            mid_getSlopeConfidenceInterval_0ba5fed9597b693e,
            mid_getSlopeStdErr_456d9a2f64d6b28d,
            mid_getSumOfCrossProducts_456d9a2f64d6b28d,
            mid_getSumSquaredErrors_456d9a2f64d6b28d,
            mid_getTotalSumSquares_456d9a2f64d6b28d,
            mid_getXSumSquares_456d9a2f64d6b28d,
            mid_hasIntercept_e470b6d9e0d979db,
            mid_predict_0ba5fed9597b693e,
            mid_regress_b84c99961a7276a9,
            mid_regress_d722bd798e38d351,
            mid_removeData_d660c7a97bf55272,
            mid_removeData_1d715fa3b7b756e1,
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
