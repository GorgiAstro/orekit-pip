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
            mid_init$_38a4c1f2780f9e8e,
            mid_getAdjustedRSquared_dff5885c2c873297,
            mid_getCovarianceOfParameters_dbbe5f05149dbf73,
            mid_getErrorSumSquares_dff5885c2c873297,
            mid_getMeanSquareError_dff5885c2c873297,
            mid_getN_492808a339bfa35f,
            mid_getNumberOfParameters_570ce0828f81a2c1,
            mid_getParameterEstimate_46f85b53d9aedd96,
            mid_getParameterEstimates_60c7040667a7dc5c,
            mid_getRSquared_dff5885c2c873297,
            mid_getRegressionSumSquares_dff5885c2c873297,
            mid_getStdErrorOfEstimate_46f85b53d9aedd96,
            mid_getStdErrorOfEstimates_60c7040667a7dc5c,
            mid_getTotalSumSquares_dff5885c2c873297,
            mid_hasIntercept_b108b35ef48e27bd,
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
