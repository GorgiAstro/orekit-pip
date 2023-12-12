#ifndef org_orekit_estimation_leastsquares_AbstractBatchLSModel_H
#define org_orekit_estimation_leastsquares_AbstractBatchLSModel_H

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
      namespace leastsquares {
        class ModelObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
        class EstimatedMeasurement;
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
            class MultivariateJacobianFunction;
          }
        }
      }
    }
    namespace util {
      class Incrementor;
      class Pair;
    }
    namespace linear {
      class RealMatrix;
      class RealVector;
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
            mid_init$_2406e4cf7f21e166,
            mid_createPropagators_04da9f6cb19def2d,
            mid_fetchEvaluatedMeasurement_e484126dd163b386,
            mid_getEvaluationsCount_412668abc8d889e9,
            mid_getIterationsCount_412668abc8d889e9,
            mid_getSelectedOrbitalParametersDriversForBuilder_b63a8ff72f9e46a4,
            mid_getSelectedPropagationDriversForBuilder_b63a8ff72f9e46a4,
            mid_isForwardPropagation_89b302893bdbe1f1,
            mid_setEvaluationsCounter_7852dd173b858d1b,
            mid_setIterationsCounter_7852dd173b858d1b,
            mid_value_77538fd880505017,
            mid_configureHarvester_58ff847451f5cf92,
            mid_configureOrbits_614fe55969c9646f,
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
