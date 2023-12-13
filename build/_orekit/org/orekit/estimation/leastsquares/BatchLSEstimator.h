#ifndef org_orekit_estimation_leastsquares_BatchLSEstimator_H
#define org_orekit_estimation_leastsquares_BatchLSEstimator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
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
    namespace propagation {
      class Propagator;
      namespace conversion {
        class PropagatorBuilder;
      }
    }
  }
  namespace hipparchus {
    namespace optim {
      class ConvergenceChecker;
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresOptimizer;
            class LeastSquaresProblem$Evaluation;
            class LeastSquaresOptimizer$Optimum;
          }
        }
      }
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
            mid_init$_4ea528b84c668043,
            mid_addMeasurement_1640bf51befb0c77,
            mid_estimate_17493e4ff0ba8a7f,
            mid_getEvaluationsCount_55546ef6a647f39b,
            mid_getIterationsCount_55546ef6a647f39b,
            mid_getLastEstimations_810bed48fafb0b9a,
            mid_getMeasurementsParametersDrivers_f4ab92625193d439,
            mid_getOptimum_ae37d9c1ca8671a9,
            mid_getOrbitalParametersDrivers_f4ab92625193d439,
            mid_getPhysicalCovariances_f5dd9d6021dc9dae,
            mid_getPropagatorParametersDrivers_f4ab92625193d439,
            mid_setConvergenceChecker_faeab0ed0f5e2304,
            mid_setMaxEvaluations_44ed599e93e8a30c,
            mid_setMaxIterations_44ed599e93e8a30c,
            mid_setObserver_656e84af1aeac1c9,
            mid_setParametersConvergenceThreshold_8ba9fe7a847cecad,
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
