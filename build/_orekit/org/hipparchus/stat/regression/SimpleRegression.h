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
        class RegressionResults;
        class UpdatingMultipleLinearRegression;
        class SimpleRegression;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_init$_fcb96c98de6fad04,
            mid_addData_07adb42ffaa97d31,
            mid_addData_369b4c97255d5afa,
            mid_addObservation_334f245ec9cee46b,
            mid_addObservations_8a9d29a6bd2c9070,
            mid_append_ea73a073becde592,
            mid_clear_a1fa5dae97ea5ed2,
            mid_getIntercept_b74f83833fdad017,
            mid_getInterceptStdErr_b74f83833fdad017,
            mid_getMeanSquareError_b74f83833fdad017,
            mid_getN_6c0ce7e438e5ded4,
            mid_getR_b74f83833fdad017,
            mid_getRSquare_b74f83833fdad017,
            mid_getRegressionSumSquares_b74f83833fdad017,
            mid_getSignificance_b74f83833fdad017,
            mid_getSlope_b74f83833fdad017,
            mid_getSlopeConfidenceInterval_b74f83833fdad017,
            mid_getSlopeConfidenceInterval_04fd0666b613d2ab,
            mid_getSlopeStdErr_b74f83833fdad017,
            mid_getSumOfCrossProducts_b74f83833fdad017,
            mid_getSumSquaredErrors_b74f83833fdad017,
            mid_getTotalSumSquares_b74f83833fdad017,
            mid_getXSumSquares_b74f83833fdad017,
            mid_hasIntercept_9ab94ac1dc23b105,
            mid_predict_04fd0666b613d2ab,
            mid_regress_d38bcfe2c0d5b843,
            mid_regress_6d4269f398dcfc41,
            mid_removeData_07adb42ffaa97d31,
            mid_removeData_369b4c97255d5afa,
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
