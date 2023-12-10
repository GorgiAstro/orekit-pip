#ifndef org_orekit_propagation_integration_FieldAbstractIntegratedPropagator_H
#define org_orekit_propagation_integration_FieldAbstractIntegratedPropagator_H

#include "org/orekit/propagation/FieldAbstractPropagator.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      namespace integration {
        class FieldAdditionalDerivativesProvider;
      }
      class PropagationType;
      class FieldSpacecraftState;
      class FieldEphemerisGenerator;
      namespace events {
        class FieldEventDetector;
      }
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
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

        class FieldAbstractIntegratedPropagator : public ::org::orekit::propagation::FieldAbstractPropagator {
         public:
          enum {
            mid_addAdditionalDerivativesProvider_aee4c637cf10d4b6,
            mid_addEventDetector_f929ebd2a84dbfe7,
            mid_clearEventsDetectors_0fa09c18fee449d5,
            mid_getAdditionalDerivativesProviders_2afa36052df4765d,
            mid_getBasicDimension_570ce0828f81a2c1,
            mid_getCalls_570ce0828f81a2c1,
            mid_getEphemerisGenerator_54ac43f1e933cf20,
            mid_getEventsDetectors_37528d110cff6b74,
            mid_getIntegratorName_11b109bd155ca898,
            mid_getManagedAdditionalStates_692f4257baa8d3c3,
            mid_getMu_eba8e72a22c984ac,
            mid_getPropagationType_b2e499d9c793fc25,
            mid_getResetAtEnd_b108b35ef48e27bd,
            mid_isAdditionalStateManaged_7edad2c2f64f4d68,
            mid_propagate_f6f1ea8aef3019eb,
            mid_propagate_fc770c29e3468de8,
            mid_setAttitudeProvider_3cff7c75ea06698c,
            mid_setMu_072c8635f2164db9,
            mid_setResetAtEnd_bd04c9335fb9e4cf,
            mid_getPositionAngleType_8f17e83e5a86217c,
            mid_setUpEventDetector_847da6d9d3822865,
            mid_initMapper_484998d88974267b,
            mid_setOrbitType_48a062bf972c4ab5,
            mid_setPositionAngleType_4ca1644ed7c72fe3,
            mid_getOrbitType_e29360d311dc0e20,
            mid_isMeanOrbit_b2e499d9c793fc25,
            mid_getIntegrator_64366de6ee97364a,
            mid_beforeIntegration_8e8de2be1664674a,
            mid_afterIntegration_0fa09c18fee449d5,
            mid_getInitialIntegrationState_02cea343d9f71933,
            mid_createMapper_16c8184497a1d794,
            mid_getMainStateEquations_75bae68924620d17,
            mid_setUpUserEventDetectors_0fa09c18fee449d5,
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
