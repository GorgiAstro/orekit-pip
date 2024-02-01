#ifndef org_orekit_estimation_leastsquares_BatchLSEstimator_H
#define org_orekit_estimation_leastsquares_BatchLSEstimator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class ConvergenceChecker;
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresOptimizer$Optimum;
            class LeastSquaresOptimizer;
            class LeastSquaresProblem$Evaluation;
          }
        }
      }
    }
    namespace linear {
      class RealMatrix;
    }
  }
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
    }
    namespace propagation {
      class Propagator;
      namespace conversion {
        class PropagatorBuilder;
      }
    }
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
      }
      namespace leastsquares {
        class BatchLSObserver;
      }
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
            mid_init$_8ee4d79a31166120,
            mid_addMeasurement_ccec3dc40c67aef1,
            mid_estimate_af093bf37101b796,
            mid_getEvaluationsCount_d6ab429752e7c267,
            mid_getIterationsCount_d6ab429752e7c267,
            mid_getLastEstimations_dbcb8bbac6b35e0d,
            mid_getMeasurementsParametersDrivers_abc0e43715b72da1,
            mid_getOptimum_e6c3e173aec0ba47,
            mid_getOrbitalParametersDrivers_abc0e43715b72da1,
            mid_getPhysicalCovariances_d5a7c13c36e5009c,
            mid_getPropagatorParametersDrivers_abc0e43715b72da1,
            mid_setConvergenceChecker_3c3ab50d4a5913f8,
            mid_setMaxEvaluations_8fd427ab23829bf5,
            mid_setMaxIterations_8fd427ab23829bf5,
            mid_setObserver_9818f9ffb87bd135,
            mid_setParametersConvergenceThreshold_1ad26e8c8c0cd65b,
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
