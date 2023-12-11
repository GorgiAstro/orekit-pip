#ifndef org_hipparchus_stat_regression_RegressionResults_H
#define org_hipparchus_stat_regression_RegressionResults_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Serializable;
  }
}
namespace org {
  namespace hipparchus {
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

        class RegressionResults : public ::java::lang::Object {
         public:
          enum {
            mid_init$_774e2a371b452292,
            mid_getAdjustedRSquared_557b8123390d8d0c,
            mid_getCovarianceOfParameters_21b81d54c06b64b0,
            mid_getErrorSumSquares_557b8123390d8d0c,
            mid_getMeanSquareError_557b8123390d8d0c,
            mid_getN_9e26256fb0d384a2,
            mid_getNumberOfParameters_412668abc8d889e9,
            mid_getParameterEstimate_69cfb132c661aca4,
            mid_getParameterEstimates_a53a7513ecedada2,
            mid_getRSquared_557b8123390d8d0c,
            mid_getRegressionSumSquares_557b8123390d8d0c,
            mid_getStdErrorOfEstimate_69cfb132c661aca4,
            mid_getStdErrorOfEstimates_a53a7513ecedada2,
            mid_getTotalSumSquares_557b8123390d8d0c,
            mid_hasIntercept_89b302893bdbe1f1,
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
