#ifndef org_hipparchus_stat_regression_SimpleRegression_H
#define org_hipparchus_stat_regression_SimpleRegression_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {
        class SimpleRegression;
        class UpdatingMultipleLinearRegression;
        class RegressionResults;
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
            mid_init$_0640e6acf969ed28,
            mid_init$_ed2afdb8506b9742,
            mid_addData_edb361bfdd1ad9ae,
            mid_addData_ab23f4ae0fb33968,
            mid_addObservation_3682f2e0c8382fe5,
            mid_addObservations_122207bd161e9ddc,
            mid_append_e6378b3609f57f95,
            mid_clear_0640e6acf969ed28,
            mid_getIntercept_557b8123390d8d0c,
            mid_getInterceptStdErr_557b8123390d8d0c,
            mid_getMeanSquareError_557b8123390d8d0c,
            mid_getN_9e26256fb0d384a2,
            mid_getR_557b8123390d8d0c,
            mid_getRSquare_557b8123390d8d0c,
            mid_getRegressionSumSquares_557b8123390d8d0c,
            mid_getSignificance_557b8123390d8d0c,
            mid_getSlope_557b8123390d8d0c,
            mid_getSlopeConfidenceInterval_557b8123390d8d0c,
            mid_getSlopeConfidenceInterval_7e960cd6eee376d8,
            mid_getSlopeStdErr_557b8123390d8d0c,
            mid_getSumOfCrossProducts_557b8123390d8d0c,
            mid_getSumSquaredErrors_557b8123390d8d0c,
            mid_getTotalSumSquares_557b8123390d8d0c,
            mid_getXSumSquares_557b8123390d8d0c,
            mid_hasIntercept_89b302893bdbe1f1,
            mid_predict_7e960cd6eee376d8,
            mid_regress_2f78c8eefa6215e0,
            mid_regress_bfd11e26913ff479,
            mid_removeData_edb361bfdd1ad9ae,
            mid_removeData_ab23f4ae0fb33968,
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
