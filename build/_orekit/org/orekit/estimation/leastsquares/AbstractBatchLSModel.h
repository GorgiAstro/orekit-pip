#ifndef org_orekit_estimation_leastsquares_AbstractBatchLSModel_H
#define org_orekit_estimation_leastsquares_AbstractBatchLSModel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
      class Incrementor;
    }
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
  }
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
        class ModelObserver;
      }
    }
    namespace propagation {
      class Propagator;
      namespace conversion {
        class PropagatorBuilder;
      }
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
            mid_init$_244486d6f58d6cbc,
            mid_createPropagators_eea2f4f2cdf6f801,
            mid_fetchEvaluatedMeasurement_e26746051feca807,
            mid_getEvaluationsCount_55546ef6a647f39b,
            mid_getIterationsCount_55546ef6a647f39b,
            mid_getSelectedOrbitalParametersDriversForBuilder_d30ee09a585504b1,
            mid_getSelectedPropagationDriversForBuilder_d30ee09a585504b1,
            mid_isForwardPropagation_9ab94ac1dc23b105,
            mid_setEvaluationsCounter_29712264b86e4d61,
            mid_setIterationsCounter_29712264b86e4d61,
            mid_value_75baf79414a7355b,
            mid_configureHarvester_dafc362fdc9e50eb,
            mid_configureOrbits_3575848f266bfbed,
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
