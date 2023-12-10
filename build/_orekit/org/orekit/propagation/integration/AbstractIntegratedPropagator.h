#ifndef org_orekit_propagation_integration_AbstractIntegratedPropagator_H
#define org_orekit_propagation_integration_AbstractIntegratedPropagator_H

#include "org/orekit/propagation/AbstractPropagator.h"

namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      class EphemerisGenerator;
      namespace integration {
        class AdditionalDerivativesProvider;
      }
      namespace events {
        class EventDetector;
      }
      class SpacecraftState;
      class PropagationType;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class AbstractIntegratedPropagator : public ::org::orekit::propagation::AbstractPropagator {
         public:
          enum {
            mid_addAdditionalDerivativesProvider_de58ca8034102d77,
            mid_addEventDetector_8ef30a2ad40caceb,
            mid_clearEventsDetectors_7ae3461a92a43152,
            mid_getAdditionalDerivativesProviders_a6156df500549a58,
            mid_getBasicDimension_f2f64475e4580546,
            mid_getCalls_f2f64475e4580546,
            mid_getEphemerisGenerator_dd0e78d2be8aaf34,
            mid_getEventsDetectors_cfcfd130f9013e3e,
            mid_getIntegratorName_0090f7797e403f43,
            mid_getManagedAdditionalStates_0f62ccf08eef5924,
            mid_getMu_456d9a2f64d6b28d,
            mid_getPropagationType_cb6f177f3e3f8613,
            mid_getResetAtEnd_e470b6d9e0d979db,
            mid_isAdditionalStateManaged_6b161f495ea569b8,
            mid_propagate_889031abe87f3b14,
            mid_propagate_afc18c81ed763a96,
            mid_setAttitudeProvider_8109c1a27d4471d3,
            mid_setMu_77e0f9a1f260e2e5,
            mid_setResetAtEnd_50a2e0b139e80a58,
            mid_getPositionAngleType_2571e8fe1cede425,
            mid_getOrbitType_63ea5cd020bf7bf1,
            mid_setPositionAngleType_07350e8db766ef51,
            mid_setUpStmAndJacobianGenerators_7ae3461a92a43152,
            mid_beforeIntegration_3d13474d79f5e7bc,
            mid_afterIntegration_7ae3461a92a43152,
            mid_getInitialIntegrationState_dd3e4a8d51055f1f,
            mid_createMapper_083e2bc1612e9def,
            mid_getMainStateEquations_9c7da9606951e4f0,
            mid_setUpEventDetector_be1a944c726f9d5c,
            mid_initMapper_7ae3461a92a43152,
            mid_setOrbitType_bbd02639b41d4055,
            mid_getIntegrator_8d1d211a59943275,
            mid_setUpUserEventDetectors_7ae3461a92a43152,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractIntegratedPropagator(jobject obj) : ::org::orekit::propagation::AbstractPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractIntegratedPropagator(const AbstractIntegratedPropagator& obj) : ::org::orekit::propagation::AbstractPropagator(obj) {}

          void addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::AdditionalDerivativesProvider &) const;
          void addEventDetector(const ::org::orekit::propagation::events::EventDetector &) const;
          void clearEventsDetectors() const;
          ::java::util::List getAdditionalDerivativesProviders() const;
          jint getBasicDimension() const;
          jint getCalls() const;
          ::org::orekit::propagation::EphemerisGenerator getEphemerisGenerator() const;
          ::java::util::Collection getEventsDetectors() const;
          ::java::lang::String getIntegratorName() const;
          JArray< ::java::lang::String > getManagedAdditionalStates() const;
          jdouble getMu() const;
          ::org::orekit::propagation::PropagationType getPropagationType() const;
          jboolean getResetAtEnd() const;
          jboolean isAdditionalStateManaged(const ::java::lang::String &) const;
          ::org::orekit::propagation::SpacecraftState propagate(const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::propagation::SpacecraftState propagate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
          void setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
          void setMu(jdouble) const;
          void setResetAtEnd(jboolean) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        extern PyType_Def PY_TYPE_DEF(AbstractIntegratedPropagator);
        extern PyTypeObject *PY_TYPE(AbstractIntegratedPropagator);

        class t_AbstractIntegratedPropagator {
        public:
          PyObject_HEAD
          AbstractIntegratedPropagator object;
          static PyObject *wrap_Object(const AbstractIntegratedPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
