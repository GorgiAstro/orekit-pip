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
            mid_init$_89d75cd07da19c78,
            mid_getAdjustedRSquared_9981f74b2d109da6,
            mid_getCovarianceOfParameters_6d920aab27f0a3d2,
            mid_getErrorSumSquares_9981f74b2d109da6,
            mid_getMeanSquareError_9981f74b2d109da6,
            mid_getN_42c72b98e3c2e08a,
            mid_getNumberOfParameters_d6ab429752e7c267,
            mid_getParameterEstimate_ce4c02d583456bc9,
            mid_getParameterEstimates_be783177b060994b,
            mid_getRSquared_9981f74b2d109da6,
            mid_getRegressionSumSquares_9981f74b2d109da6,
            mid_getStdErrorOfEstimate_ce4c02d583456bc9,
            mid_getStdErrorOfEstimates_be783177b060994b,
            mid_getTotalSumSquares_9981f74b2d109da6,
            mid_hasIntercept_eee3de00fe971136,
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
