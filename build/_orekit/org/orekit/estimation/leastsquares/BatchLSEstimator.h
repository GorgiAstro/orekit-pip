#ifndef org_orekit_estimation_leastsquares_BatchLSEstimator_H
#define org_orekit_estimation_leastsquares_BatchLSEstimator_H

#include "java/lang/Object.h"

namespace org {
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
      namespace conversion {
        class PropagatorBuilder;
      }
      class Propagator;
    }
    namespace utils {
      class ParameterDriversList;
    }
  }
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresOptimizer$Optimum;
            class LeastSquaresProblem$Evaluation;
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
            mid_init$_bd5efa1ff89b935a,
            mid_addMeasurement_558d7f8249b8a2bc,
            mid_estimate_4570675aa9d951bc,
            mid_getEvaluationsCount_570ce0828f81a2c1,
            mid_getIterationsCount_570ce0828f81a2c1,
            mid_getLastEstimations_6f5a75ccd8c04465,
            mid_getMeasurementsParametersDrivers_8357ebc867dea797,
            mid_getOptimum_4dc503511ffe30c5,
            mid_getOrbitalParametersDrivers_8357ebc867dea797,
            mid_getPhysicalCovariances_f21dcd9464c6e3c5,
            mid_getPropagatorParametersDrivers_8357ebc867dea797,
            mid_setConvergenceChecker_a5d0ffcf0a6327fe,
            mid_setMaxEvaluations_99803b0791f320ff,
            mid_setMaxIterations_99803b0791f320ff,
            mid_setObserver_6744390b0e26b959,
            mid_setParametersConvergenceThreshold_17db3a65980d3441,
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
