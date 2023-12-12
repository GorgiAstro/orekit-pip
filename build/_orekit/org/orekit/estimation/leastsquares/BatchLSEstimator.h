#ifndef org_orekit_estimation_leastsquares_BatchLSEstimator_H
#define org_orekit_estimation_leastsquares_BatchLSEstimator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
      class Propagator;
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
    namespace utils {
      class ParameterDriversList;
    }
  }
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresOptimizer;
            class LeastSquaresOptimizer$Optimum;
            class LeastSquaresProblem$Evaluation;
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
            mid_init$_e1196493cd3809bc,
            mid_addMeasurement_4063373aad443d2b,
            mid_estimate_2d0616b730e7ec0f,
            mid_getEvaluationsCount_412668abc8d889e9,
            mid_getIterationsCount_412668abc8d889e9,
            mid_getLastEstimations_1e62c2f73fbdd1c4,
            mid_getMeasurementsParametersDrivers_4f6dd8cf21dd8817,
            mid_getOptimum_7e2f60993e150a77,
            mid_getOrbitalParametersDrivers_4f6dd8cf21dd8817,
            mid_getPhysicalCovariances_e95e381257af03e9,
            mid_getPropagatorParametersDrivers_4f6dd8cf21dd8817,
            mid_setConvergenceChecker_38783cba7e493c69,
            mid_setMaxEvaluations_a3da1a935cb37f7b,
            mid_setMaxIterations_a3da1a935cb37f7b,
            mid_setObserver_677f6e1bcad1374b,
            mid_setParametersConvergenceThreshold_10f281d777284cea,
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
