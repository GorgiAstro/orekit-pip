#ifndef org_orekit_propagation_integration_AbstractIntegratedPropagator_H
#define org_orekit_propagation_integration_AbstractIntegratedPropagator_H

#include "org/orekit/propagation/AbstractPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class EphemerisGenerator;
      namespace integration {
        class AdditionalDerivativesProvider;
      }
      class PropagationType;
      namespace events {
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace attitudes {
      class AttitudeProvider;
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
            mid_addAdditionalDerivativesProvider_687860a192ef3b84,
            mid_addEventDetector_e13564f833403504,
            mid_clearEventsDetectors_a1fa5dae97ea5ed2,
            mid_getAdditionalDerivativesProviders_e62d3bb06d56d7e3,
            mid_getBasicDimension_55546ef6a647f39b,
            mid_getCalls_55546ef6a647f39b,
            mid_getEphemerisGenerator_5df44e253e7e7782,
            mid_getEventsDetectors_cb666ea1a15f5210,
            mid_getIntegratorName_1c1fa1e935d6cdcf,
            mid_getManagedAdditionalStates_0f94e41879ab7062,
            mid_getMu_b74f83833fdad017,
            mid_getPropagationType_c479da51fc09a224,
            mid_getResetAtEnd_9ab94ac1dc23b105,
            mid_isAdditionalStateManaged_cde6b28e15c96b75,
            mid_propagate_4f0008999861ca31,
            mid_propagate_6845ec704c846b03,
            mid_setAttitudeProvider_8e4d3ea100bc0095,
            mid_setMu_8ba9fe7a847cecad,
            mid_setResetAtEnd_fcb96c98de6fad04,
            mid_getOrbitType_c7d4737d7afca612,
            mid_getPositionAngleType_c25055891f180348,
            mid_createMapper_74f07e2c0845997b,
            mid_getMainStateEquations_8e0da39ae64099e8,
            mid_setUpEventDetector_2b05d9d8da210ff9,
            mid_setUpStmAndJacobianGenerators_a1fa5dae97ea5ed2,
            mid_setUpUserEventDetectors_a1fa5dae97ea5ed2,
            mid_getInitialIntegrationState_9d155cc8314c99cf,
            mid_beforeIntegration_2d7f9a496c7e9781,
            mid_afterIntegration_a1fa5dae97ea5ed2,
            mid_initMapper_a1fa5dae97ea5ed2,
            mid_setOrbitType_2fa1f3b8966f0286,
            mid_setPositionAngleType_778d09854443b806,
            mid_getIntegrator_6e08fde180cf79f8,
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
