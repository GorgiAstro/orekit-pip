#ifndef org_orekit_estimation_leastsquares_AbstractBatchLSModel_H
#define org_orekit_estimation_leastsquares_AbstractBatchLSModel_H

#include "java/lang/Object.h"

namespace org {
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
    namespace util {
      class Incrementor;
      class Pair;
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
    namespace linear {
      class RealVector;
      class RealMatrix;
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
            mid_init$_013b9b75e2d29096,
            mid_createPropagators_47cc2992b4c6c152,
            mid_fetchEvaluatedMeasurement_de3fd4c2c4a341a7,
            mid_getEvaluationsCount_570ce0828f81a2c1,
            mid_getIterationsCount_570ce0828f81a2c1,
            mid_getSelectedOrbitalParametersDriversForBuilder_e970077e9411a499,
            mid_getSelectedPropagationDriversForBuilder_e970077e9411a499,
            mid_isForwardPropagation_b108b35ef48e27bd,
            mid_setEvaluationsCounter_97761a13d2e9faa2,
            mid_setIterationsCounter_97761a13d2e9faa2,
            mid_value_f3b8dd3e226035d1,
            mid_configureHarvester_e80966db3f120c01,
            mid_configureOrbits_e5faaf40266e83a3,
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
