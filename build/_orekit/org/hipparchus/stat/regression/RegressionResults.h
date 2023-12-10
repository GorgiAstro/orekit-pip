#ifndef org_hipparchus_stat_regression_RegressionResults_H
#define org_hipparchus_stat_regression_RegressionResults_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        class RegressionResults : public ::java::lang::Object {
         public:
          enum {
            mid_init$_21e47bb2683cf2f8,
            mid_getAdjustedRSquared_456d9a2f64d6b28d,
            mid_getCovarianceOfParameters_a84e4ee1da3f1ab8,
            mid_getErrorSumSquares_456d9a2f64d6b28d,
            mid_getMeanSquareError_456d9a2f64d6b28d,
            mid_getN_a27fc9afd27e559d,
            mid_getNumberOfParameters_f2f64475e4580546,
            mid_getParameterEstimate_b772323fc98b7293,
            mid_getParameterEstimates_7cdc325af0834901,
            mid_getRSquared_456d9a2f64d6b28d,
            mid_getRegressionSumSquares_456d9a2f64d6b28d,
            mid_getStdErrorOfEstimate_b772323fc98b7293,
            mid_getStdErrorOfEstimates_7cdc325af0834901,
            mid_getTotalSumSquares_456d9a2f64d6b28d,
            mid_hasIntercept_e470b6d9e0d979db,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RegressionResults(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RegressionResults(const RegressionResults& obj) : ::java::lang::Object(obj) {}

          RegressionResults(const JArray< jdouble > &, const JArray< JArray< jdouble > > &, jboolean, jlong, jint, jdouble, jdouble, jdouble, jboolean, jboolean);

          jdouble getAdjustedRSquared() const;
          jdouble getCovarianceOfParameters(jint, jint) const;
          jdouble getErrorSumSquares() const;
          jdouble getMeanSquareError() const;
          jlong getN() const;
          jint getNumberOfParameters() const;
          jdouble getParameterEstimate(jint) const;
          JArray< jdouble > getParameterEstimates() const;
          jdouble getRSquared() const;
          jdouble getRegressionSumSquares() const;
          jdouble getStdErrorOfEstimate(jint) const;
          JArray< jdouble > getStdErrorOfEstimates() const;
          jdouble getTotalSumSquares() const;
          jboolean hasIntercept() const;
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
        extern PyType_Def PY_TYPE_DEF(RegressionResults);
        extern PyTypeObject *PY_TYPE(RegressionResults);

        class t_RegressionResults {
        public:
          PyObject_HEAD
          RegressionResults object;
          static PyObject *wrap_Object(const RegressionResults&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
