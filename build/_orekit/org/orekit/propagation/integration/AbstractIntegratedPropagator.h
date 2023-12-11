#ifndef org_orekit_propagation_integration_AbstractIntegratedPropagator_H
#define org_orekit_propagation_integration_AbstractIntegratedPropagator_H

#include "org/orekit/propagation/AbstractPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class PropagationType;
      namespace integration {
        class AdditionalDerivativesProvider;
      }
      namespace events {
        class EventDetector;
      }
      class EphemerisGenerator;
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class AbstractIntegratedPropagator : public ::org::orekit::propagation::AbstractPropagator {
         public:
          enum {
            mid_addAdditionalDerivativesProvider_34784b387edde43d,
            mid_addEventDetector_2e2dfaf38ed50d1d,
            mid_clearEventsDetectors_0640e6acf969ed28,
            mid_getAdditionalDerivativesProviders_0d9551367f7ecdef,
            mid_getBasicDimension_412668abc8d889e9,
            mid_getCalls_412668abc8d889e9,
            mid_getEphemerisGenerator_6a3edfe13bcee780,
            mid_getEventsDetectors_12ee61573a18f417,
            mid_getIntegratorName_3cffd47377eca18a,
            mid_getManagedAdditionalStates_5d7d8c500345981d,
            mid_getMu_557b8123390d8d0c,
            mid_getPropagationType_81e4bfcfa9059f10,
            mid_getResetAtEnd_89b302893bdbe1f1,
            mid_isAdditionalStateManaged_fd2162b8a05a22fe,
            mid_propagate_15e0d02372b1347b,
            mid_propagate_b96c0d97a162784d,
            mid_setAttitudeProvider_8fa6c0c067ead7b2,
            mid_setMu_10f281d777284cea,
            mid_setResetAtEnd_ed2afdb8506b9742,
            mid_getOrbitType_2cea2a2cb3e02091,
            mid_getPositionAngleType_f4984aee71df4c19,
            mid_setPositionAngleType_44c283653315b1a7,
            mid_createMapper_31b084497c320ed2,
            mid_setUpEventDetector_a8d3aa9c250ffc52,
            mid_setUpUserEventDetectors_0640e6acf969ed28,
            mid_getInitialIntegrationState_15e85d5301b90ef8,
            mid_beforeIntegration_0472264ad6f40bc2,
            mid_afterIntegration_0640e6acf969ed28,
            mid_getMainStateEquations_4a2f137b7a0c1747,
            mid_initMapper_0640e6acf969ed28,
            mid_setOrbitType_6ccfc646a24c9722,
            mid_getIntegrator_7df926536e4d0676,
            mid_setUpStmAndJacobianGenerators_0640e6acf969ed28,
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
