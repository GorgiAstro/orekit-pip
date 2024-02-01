#ifndef org_orekit_propagation_integration_FieldAbstractIntegratedPropagator_H
#define org_orekit_propagation_integration_FieldAbstractIntegratedPropagator_H

#include "org/orekit/propagation/FieldAbstractPropagator.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
      }
      class FieldEphemerisGenerator;
      namespace integration {
        class FieldAdditionalDerivativesProvider;
      }
      class PropagationType;
      class FieldSpacecraftState;
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
            mid_addAdditionalDerivativesProvider_487f01f14e35b1cf,
            mid_addEventDetector_bb8991c4a46cf56d,
            mid_clearEventsDetectors_ff7cb6c242604316,
            mid_getAdditionalDerivativesProviders_d751c1a57012b438,
            mid_getBasicDimension_d6ab429752e7c267,
            mid_getCalls_d6ab429752e7c267,
            mid_getEphemerisGenerator_96c2c30a0b0ad9e4,
            mid_getEventsDetectors_3bfef5c77ceb081a,
            mid_getIntegratorName_d2c8eb4129821f0e,
            mid_getManagedAdditionalStates_f81c0644d57ae495,
            mid_getMu_08d37e3f77b7239d,
            mid_getPropagationType_fa97d40fdfd0f5fb,
            mid_getResetAtEnd_eee3de00fe971136,
            mid_isAdditionalStateManaged_df4c65b2aede5c41,
            mid_propagate_fb689a9c0f30b938,
            mid_propagate_bcf793a6168805e3,
            mid_setAttitudeProvider_fddd0a7d9f33bafa,
            mid_setMu_f63ca9e3185c722e,
            mid_setResetAtEnd_b35db77cae58639e,
            mid_getPositionAngleType_a6db4e6edefda4be,
            mid_getOrbitType_495f818d3570b7f5,
            mid_beforeIntegration_357211ab77703f3f,
            mid_afterIntegration_ff7cb6c242604316,
            mid_getInitialIntegrationState_a74be2e38786f3b6,
            mid_createMapper_ebf7e979efef9b20,
            mid_getMainStateEquations_3bc41c7526b7eb7c,
            mid_setUpEventDetector_0fd72636e2a4d5b2,
            mid_initMapper_a44abdd035f01345,
            mid_setOrbitType_faf186fbb93ad060,
            mid_setPositionAngleType_266be23fd67cbce4,
            mid_getIntegrator_a0df2acc30cad91d,
            mid_setUpUserEventDetectors_ff7cb6c242604316,
            mid_isMeanOrbit_fa97d40fdfd0f5fb,
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
