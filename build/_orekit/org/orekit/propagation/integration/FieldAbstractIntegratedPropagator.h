#ifndef org_orekit_propagation_integration_FieldAbstractIntegratedPropagator_H
#define org_orekit_propagation_integration_FieldAbstractIntegratedPropagator_H

#include "org/orekit/propagation/FieldAbstractPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        class FieldAdditionalDerivativesProvider;
      }
      class PropagationType;
      namespace events {
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
      class FieldEphemerisGenerator;
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

        class FieldAbstractIntegratedPropagator : public ::org::orekit::propagation::FieldAbstractPropagator {
         public:
          enum {
            mid_addAdditionalDerivativesProvider_168fd7c6ce232baa,
            mid_addEventDetector_ca1d91eb6a3ce219,
            mid_clearEventsDetectors_a1fa5dae97ea5ed2,
            mid_getAdditionalDerivativesProviders_e62d3bb06d56d7e3,
            mid_getBasicDimension_55546ef6a647f39b,
            mid_getCalls_55546ef6a647f39b,
            mid_getEphemerisGenerator_afe29c55086c638f,
            mid_getEventsDetectors_cb666ea1a15f5210,
            mid_getIntegratorName_1c1fa1e935d6cdcf,
            mid_getManagedAdditionalStates_0f94e41879ab7062,
            mid_getMu_81520b552cb3fa26,
            mid_getPropagationType_c479da51fc09a224,
            mid_getResetAtEnd_9ab94ac1dc23b105,
            mid_isAdditionalStateManaged_cde6b28e15c96b75,
            mid_propagate_70fecd201ca47d3b,
            mid_propagate_44f88f604c4d00f1,
            mid_setAttitudeProvider_8e4d3ea100bc0095,
            mid_setMu_f2b4bfa0af1007e8,
            mid_setResetAtEnd_fcb96c98de6fad04,
            mid_getOrbitType_c7d4737d7afca612,
            mid_getPositionAngleType_c25055891f180348,
            mid_isMeanOrbit_c479da51fc09a224,
            mid_createMapper_23e677752bbdcbdf,
            mid_getMainStateEquations_f48ddce9ae4b38bb,
            mid_setUpEventDetector_843524bf4fe696ca,
            mid_setUpUserEventDetectors_a1fa5dae97ea5ed2,
            mid_getInitialIntegrationState_fba6d56f8dbc98d0,
            mid_beforeIntegration_96d019f392abf918,
            mid_afterIntegration_a1fa5dae97ea5ed2,
            mid_initMapper_02ab84aa7626616d,
            mid_setOrbitType_2fa1f3b8966f0286,
            mid_setPositionAngleType_778d09854443b806,
            mid_getIntegrator_a6eac7a4d7009da9,
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
