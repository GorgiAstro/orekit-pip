#ifndef org_orekit_estimation_leastsquares_BatchLSEstimator_H
#define org_orekit_estimation_leastsquares_BatchLSEstimator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresProblem$Evaluation;
            class LeastSquaresOptimizer$Optimum;
            class LeastSquaresOptimizer;
          }
        }
      }
      class ConvergenceChecker;
    }
    namespace linear {
      class RealMatrix;
    }
  }
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class ObservedMeasurement;
      }
      namespace leastsquares {
        class BatchLSObserver;
      }
    }
    namespace propagation {
      class Propagator;
      namespace conversion {
        class PropagatorBuilder;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        class BatchLSEstimator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_b2039c712d4cf408,
            mid_addMeasurement_54d78f04ce23dff7,
            mid_estimate_bba03978f79693ea,
            mid_getEvaluationsCount_f2f64475e4580546,
            mid_getIterationsCount_f2f64475e4580546,
            mid_getLastEstimations_d6753b7055940a54,
            mid_getMeasurementsParametersDrivers_2ede96f23730e099,
            mid_getOptimum_0e63047000e1d3fd,
            mid_getOrbitalParametersDrivers_2ede96f23730e099,
            mid_getPhysicalCovariances_2461b653ab91779b,
            mid_getPropagatorParametersDrivers_2ede96f23730e099,
            mid_setConvergenceChecker_762e7504cd26f616,
            mid_setMaxEvaluations_0a2a1ac2721c0336,
            mid_setMaxIterations_0a2a1ac2721c0336,
            mid_setObserver_4e3ea99915cc2d2b,
            mid_setParametersConvergenceThreshold_77e0f9a1f260e2e5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BatchLSEstimator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BatchLSEstimator(const BatchLSEstimator& obj) : ::java::lang::Object(obj) {}

          BatchLSEstimator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer &, const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &);

          void addMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement &) const;
          JArray< ::org::orekit::propagation::Propagator > estimate() const;
          jint getEvaluationsCount() const;
          jint getIterationsCount() const;
          ::java::util::Map getLastEstimations() const;
          ::org::orekit::utils::ParameterDriversList getMeasurementsParametersDrivers(jboolean) const;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum getOptimum() const;
          ::org::orekit::utils::ParameterDriversList getOrbitalParametersDrivers(jboolean) const;
          ::org::hipparchus::linear::RealMatrix getPhysicalCovariances(jdouble) const;
          ::org::orekit::utils::ParameterDriversList getPropagatorParametersDrivers(jboolean) const;
          void setConvergenceChecker(const ::org::hipparchus::optim::ConvergenceChecker &) const;
          void setMaxEvaluations(jint) const;
          void setMaxIterations(jint) const;
          void setObserver(const ::org::orekit::estimation::leastsquares::BatchLSObserver &) const;
          void setParametersConvergenceThreshold(jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {
        extern PyType_Def PY_TYPE_DEF(BatchLSEstimator);
        extern PyTypeObject *PY_TYPE(BatchLSEstimator);

        class t_BatchLSEstimator {
        public:
          PyObject_HEAD
          BatchLSEstimator object;
          static PyObject *wrap_Object(const BatchLSEstimator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
