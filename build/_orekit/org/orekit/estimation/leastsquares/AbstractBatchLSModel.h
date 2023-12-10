#ifndef org_orekit_estimation_leastsquares_AbstractBatchLSModel_H
#define org_orekit_estimation_leastsquares_AbstractBatchLSModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealVector;
      class RealMatrix;
    }
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class MultivariateJacobianFunction;
          }
        }
      }
    }
    namespace util {
      class Incrementor;
      class Pair;
    }
  }
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class ObservedMeasurement;
      }
      namespace leastsquares {
        class ModelObserver;
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
    class List;
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

        class AbstractBatchLSModel : public ::java::lang::Object {
         public:
          enum {
            mid_init$_cea2a98fe3ea59d1,
            mid_createPropagators_ba27c0a798c66bed,
            mid_fetchEvaluatedMeasurement_d5a7028bdf1b2c93,
            mid_getEvaluationsCount_f2f64475e4580546,
            mid_getIterationsCount_f2f64475e4580546,
            mid_getSelectedOrbitalParametersDriversForBuilder_ace385640a2723ff,
            mid_getSelectedPropagationDriversForBuilder_ace385640a2723ff,
            mid_isForwardPropagation_e470b6d9e0d979db,
            mid_setEvaluationsCounter_33deb2f2de655904,
            mid_setIterationsCounter_33deb2f2de655904,
            mid_value_f8e49be09d1e1247,
            mid_configureHarvester_f80d2a02173b5959,
            mid_configureOrbits_9e53ad80ae898100,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractBatchLSModel(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractBatchLSModel(const AbstractBatchLSModel& obj) : ::java::lang::Object(obj) {}

          AbstractBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &, const ::java::util::List &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::leastsquares::ModelObserver &);

          JArray< ::org::orekit::propagation::Propagator > createPropagators(const ::org::hipparchus::linear::RealVector &) const;
          void fetchEvaluatedMeasurement(jint, const ::org::orekit::estimation::measurements::EstimatedMeasurement &) const;
          jint getEvaluationsCount() const;
          jint getIterationsCount() const;
          ::org::orekit::utils::ParameterDriversList getSelectedOrbitalParametersDriversForBuilder(jint) const;
          ::org::orekit::utils::ParameterDriversList getSelectedPropagationDriversForBuilder(jint) const;
          jboolean isForwardPropagation() const;
          void setEvaluationsCounter(const ::org::hipparchus::util::Incrementor &) const;
          void setIterationsCounter(const ::org::hipparchus::util::Incrementor &) const;
          ::org::hipparchus::util::Pair value(const ::org::hipparchus::linear::RealVector &) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractBatchLSModel);
        extern PyTypeObject *PY_TYPE(AbstractBatchLSModel);

        class t_AbstractBatchLSModel {
        public:
          PyObject_HEAD
          AbstractBatchLSModel object;
          static PyObject *wrap_Object(const AbstractBatchLSModel&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
