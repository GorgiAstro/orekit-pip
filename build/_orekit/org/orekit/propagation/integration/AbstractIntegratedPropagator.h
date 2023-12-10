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
      namespace events {
        class EventDetector;
      }
      class EphemerisGenerator;
      class PropagationType;
      namespace integration {
        class AdditionalDerivativesProvider;
      }
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class AbstractIntegratedPropagator : public ::org::orekit::propagation::AbstractPropagator {
         public:
          enum {
            mid_addAdditionalDerivativesProvider_3192623a36e6dd4e,
            mid_addEventDetector_efb7003d866d4523,
            mid_clearEventsDetectors_0fa09c18fee449d5,
            mid_getAdditionalDerivativesProviders_2afa36052df4765d,
            mid_getBasicDimension_570ce0828f81a2c1,
            mid_getCalls_570ce0828f81a2c1,
            mid_getEphemerisGenerator_18d439b26e70ccd0,
            mid_getEventsDetectors_37528d110cff6b74,
            mid_getIntegratorName_11b109bd155ca898,
            mid_getManagedAdditionalStates_692f4257baa8d3c3,
            mid_getMu_dff5885c2c873297,
            mid_getPropagationType_b2e499d9c793fc25,
            mid_getResetAtEnd_b108b35ef48e27bd,
            mid_isAdditionalStateManaged_7edad2c2f64f4d68,
            mid_propagate_fbff2ff5554d95e1,
            mid_propagate_a69ef29c3ea1e1fa,
            mid_setAttitudeProvider_3cff7c75ea06698c,
            mid_setMu_17db3a65980d3441,
            mid_setResetAtEnd_bd04c9335fb9e4cf,
            mid_getPositionAngleType_8f17e83e5a86217c,
            mid_setUpEventDetector_8fd0285b4661863e,
            mid_initMapper_0fa09c18fee449d5,
            mid_setOrbitType_48a062bf972c4ab5,
            mid_setPositionAngleType_4ca1644ed7c72fe3,
            mid_getOrbitType_e29360d311dc0e20,
            mid_getIntegrator_1a7e520947392fba,
            mid_beforeIntegration_826b4eda94da4e78,
            mid_afterIntegration_0fa09c18fee449d5,
            mid_getInitialIntegrationState_c6311115fea01a34,
            mid_createMapper_2bea84b26b1efc07,
            mid_getMainStateEquations_e1fa3ce287fe2655,
            mid_setUpUserEventDetectors_0fa09c18fee449d5,
            mid_setUpStmAndJacobianGenerators_0fa09c18fee449d5,
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
