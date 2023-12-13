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
            mid_init$_9d4bc8dcfca683ea,
            mid_getAdjustedRSquared_b74f83833fdad017,
            mid_getCovarianceOfParameters_cad98089d00f8a5b,
            mid_getErrorSumSquares_b74f83833fdad017,
            mid_getMeanSquareError_b74f83833fdad017,
            mid_getN_6c0ce7e438e5ded4,
            mid_getNumberOfParameters_55546ef6a647f39b,
            mid_getParameterEstimate_2afcbc21f4e57ab2,
            mid_getParameterEstimates_25e1757a36c4dde2,
            mid_getRSquared_b74f83833fdad017,
            mid_getRegressionSumSquares_b74f83833fdad017,
            mid_getStdErrorOfEstimate_2afcbc21f4e57ab2,
            mid_getStdErrorOfEstimates_25e1757a36c4dde2,
            mid_getTotalSumSquares_b74f83833fdad017,
            mid_hasIntercept_9ab94ac1dc23b105,
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
