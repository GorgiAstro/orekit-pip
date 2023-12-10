#ifndef org_orekit_propagation_integration_FieldAbstractIntegratedPropagator_H
#define org_orekit_propagation_integration_FieldAbstractIntegratedPropagator_H

#include "org/orekit/propagation/FieldAbstractPropagator.h"

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
      namespace integration {
        class FieldAdditionalDerivativesProvider;
      }
      namespace events {
        class FieldEventDetector;
      }
      class FieldEphemerisGenerator;
      class PropagationType;
      class FieldSpacecraftState;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        class FieldAbstractIntegratedPropagator : public ::org::orekit::propagation::FieldAbstractPropagator {
         public:
          enum {
            mid_addAdditionalDerivativesProvider_9a993a9a36b8e365,
            mid_addEventDetector_1843b26af41f9c8e,
            mid_clearEventsDetectors_7ae3461a92a43152,
            mid_getAdditionalDerivativesProviders_a6156df500549a58,
            mid_getBasicDimension_f2f64475e4580546,
            mid_getCalls_f2f64475e4580546,
            mid_getEphemerisGenerator_a9ea70419e870eb4,
            mid_getEventsDetectors_cfcfd130f9013e3e,
            mid_getIntegratorName_0090f7797e403f43,
            mid_getManagedAdditionalStates_0f62ccf08eef5924,
            mid_getMu_e6d4d3215c30992a,
            mid_getPropagationType_cb6f177f3e3f8613,
            mid_getResetAtEnd_e470b6d9e0d979db,
            mid_isAdditionalStateManaged_6b161f495ea569b8,
            mid_propagate_85b5a3e9101d7c1f,
            mid_propagate_195e701ebc75aca3,
            mid_setAttitudeProvider_8109c1a27d4471d3,
            mid_setMu_03a16642f77779e7,
            mid_setResetAtEnd_50a2e0b139e80a58,
            mid_getPositionAngleType_2571e8fe1cede425,
            mid_getOrbitType_63ea5cd020bf7bf1,
            mid_setPositionAngleType_07350e8db766ef51,
            mid_beforeIntegration_acdd8180a5dc1a8d,
            mid_afterIntegration_7ae3461a92a43152,
            mid_getInitialIntegrationState_a553824829fc2514,
            mid_createMapper_b12e4020688f2d3a,
            mid_getMainStateEquations_9199626b9ad748bb,
            mid_setUpEventDetector_90a65ad4a4031020,
            mid_initMapper_205c34b8e33cf33f,
            mid_setOrbitType_bbd02639b41d4055,
            mid_getIntegrator_b792653519a95a45,
            mid_setUpUserEventDetectors_7ae3461a92a43152,
            mid_isMeanOrbit_cb6f177f3e3f8613,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldAbstractIntegratedPropagator(jobject obj) : ::org::orekit::propagation::FieldAbstractPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldAbstractIntegratedPropagator(const FieldAbstractIntegratedPropagator& obj) : ::org::orekit::propagation::FieldAbstractPropagator(obj) {}

          void addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider &) const;
          void addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector &) const;
          void clearEventsDetectors() const;
          ::java::util::List getAdditionalDerivativesProviders() const;
          jint getBasicDimension() const;
          jint getCalls() const;
          ::org::orekit::propagation::FieldEphemerisGenerator getEphemerisGenerator() const;
          ::java::util::Collection getEventsDetectors() const;
          ::java::lang::String getIntegratorName() const;
          JArray< ::java::lang::String > getManagedAdditionalStates() const;
          ::org::hipparchus::CalculusFieldElement getMu() const;
          ::org::orekit::propagation::PropagationType getPropagationType() const;
          jboolean getResetAtEnd() const;
          jboolean isAdditionalStateManaged(const ::java::lang::String &) const;
          ::org::orekit::propagation::FieldSpacecraftState propagate(const ::org::orekit::time::FieldAbsoluteDate &) const;
          ::org::orekit::propagation::FieldSpacecraftState propagate(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          void setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
          void setMu(const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldAbstractIntegratedPropagator);
        extern PyTypeObject *PY_TYPE(FieldAbstractIntegratedPropagator);

        class t_FieldAbstractIntegratedPropagator {
        public:
          PyObject_HEAD
          FieldAbstractIntegratedPropagator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldAbstractIntegratedPropagator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldAbstractIntegratedPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldAbstractIntegratedPropagator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
