#ifndef org_orekit_propagation_integration_AbstractIntegratedPropagator_H
#define org_orekit_propagation_integration_AbstractIntegratedPropagator_H

#include "org/orekit/propagation/AbstractPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace integration {
        class AdditionalDerivativesProvider;
      }
      class EphemerisGenerator;
      class PropagationType;
      class SpacecraftState;
      namespace events {
        class EventDetector;
      }
    }
    namespace time {
      class AbsoluteDate;
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
            mid_addAdditionalDerivativesProvider_0b9db0c63a43ba8a,
            mid_addEventDetector_d5d8be0538a03d97,
            mid_clearEventsDetectors_ff7cb6c242604316,
            mid_getAdditionalDerivativesProviders_d751c1a57012b438,
            mid_getBasicDimension_d6ab429752e7c267,
            mid_getCalls_d6ab429752e7c267,
            mid_getEphemerisGenerator_9f3d902ece22e1af,
            mid_getEventsDetectors_3bfef5c77ceb081a,
            mid_getIntegratorName_d2c8eb4129821f0e,
            mid_getManagedAdditionalStates_f81c0644d57ae495,
            mid_getMu_9981f74b2d109da6,
            mid_getPropagationType_fa97d40fdfd0f5fb,
            mid_getResetAtEnd_eee3de00fe971136,
            mid_isAdditionalStateManaged_df4c65b2aede5c41,
            mid_propagate_1e982279849c3b65,
            mid_propagate_aaae977c62060398,
            mid_setAttitudeProvider_fddd0a7d9f33bafa,
            mid_setMu_1ad26e8c8c0cd65b,
            mid_setResetAtEnd_b35db77cae58639e,
            mid_getPositionAngleType_a6db4e6edefda4be,
            mid_setUpStmAndJacobianGenerators_ff7cb6c242604316,
            mid_getOrbitType_495f818d3570b7f5,
            mid_beforeIntegration_14deaae988292d42,
            mid_afterIntegration_ff7cb6c242604316,
            mid_getInitialIntegrationState_8fbfa58855031235,
            mid_createMapper_5f8935bd082b8966,
            mid_getMainStateEquations_97764934e3fe735c,
            mid_setUpEventDetector_1ad9fe3c0dae9948,
            mid_initMapper_ff7cb6c242604316,
            mid_setOrbitType_faf186fbb93ad060,
            mid_setPositionAngleType_266be23fd67cbce4,
            mid_getIntegrator_5f35958883823593,
            mid_setUpUserEventDetectors_ff7cb6c242604316,
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
