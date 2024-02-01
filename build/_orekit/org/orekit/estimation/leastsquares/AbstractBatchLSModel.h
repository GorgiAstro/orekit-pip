#ifndef org_orekit_estimation_leastsquares_AbstractBatchLSModel_H
#define org_orekit_estimation_leastsquares_AbstractBatchLSModel_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
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
      class RealMatrix;
      class RealVector;
    }
  }
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
    }
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
        class ModelObserver;
      }
    }
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
            mid_init$_f278310556712c73,
            mid_createPropagators_8b118ba88c8efb0c,
            mid_fetchEvaluatedMeasurement_80131b0affbf5420,
            mid_getEvaluationsCount_d6ab429752e7c267,
            mid_getIterationsCount_d6ab429752e7c267,
            mid_getSelectedOrbitalParametersDriversForBuilder_9ad7d1bd3e8916dc,
            mid_getSelectedPropagationDriversForBuilder_9ad7d1bd3e8916dc,
            mid_isForwardPropagation_eee3de00fe971136,
            mid_setEvaluationsCounter_98cb188ac0868226,
            mid_setIterationsCounter_98cb188ac0868226,
            mid_value_f5f9cd0684e2ab5e,
            mid_configureHarvester_1a5b9825e639ffce,
            mid_configureOrbits_88ee223eb65bb3ed,
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
