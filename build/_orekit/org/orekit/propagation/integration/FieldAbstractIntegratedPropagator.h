#ifndef org_orekit_propagation_integration_FieldAbstractIntegratedPropagator_H
#define org_orekit_propagation_integration_FieldAbstractIntegratedPropagator_H

#include "org/orekit/propagation/FieldAbstractPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class PropagationType;
      class FieldSpacecraftState;
      class FieldEphemerisGenerator;
      namespace integration {
        class FieldAdditionalDerivativesProvider;
      }
      namespace events {
        class FieldEventDetector;
      }
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
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
            mid_addAdditionalDerivativesProvider_937202f702b471fa,
            mid_addEventDetector_2ffeff0ffaf1deef,
            mid_clearEventsDetectors_0640e6acf969ed28,
            mid_getAdditionalDerivativesProviders_0d9551367f7ecdef,
            mid_getBasicDimension_412668abc8d889e9,
            mid_getCalls_412668abc8d889e9,
            mid_getEphemerisGenerator_07866493eb3b3f17,
            mid_getEventsDetectors_12ee61573a18f417,
            mid_getIntegratorName_3cffd47377eca18a,
            mid_getManagedAdditionalStates_5d7d8c500345981d,
            mid_getMu_613c8f46c659f636,
            mid_getPropagationType_81e4bfcfa9059f10,
            mid_getResetAtEnd_89b302893bdbe1f1,
            mid_isAdditionalStateManaged_fd2162b8a05a22fe,
            mid_propagate_5324cbf9e5ce58fe,
            mid_propagate_78f4b3ee8066e6b6,
            mid_setAttitudeProvider_8fa6c0c067ead7b2,
            mid_setMu_1ee4bed350fde589,
            mid_setResetAtEnd_ed2afdb8506b9742,
            mid_getOrbitType_2cea2a2cb3e02091,
            mid_getPositionAngleType_f4984aee71df4c19,
            mid_setPositionAngleType_44c283653315b1a7,
            mid_createMapper_ad7c2ac9dfe2008b,
            mid_setUpEventDetector_a8d25606874dccaf,
            mid_setUpUserEventDetectors_0640e6acf969ed28,
            mid_getInitialIntegrationState_381b3e011cde018d,
            mid_beforeIntegration_811e49dad2467b67,
            mid_afterIntegration_0640e6acf969ed28,
            mid_getMainStateEquations_c822d3b1a2fa150a,
            mid_initMapper_979ae7f57a96b096,
            mid_setOrbitType_6ccfc646a24c9722,
            mid_isMeanOrbit_81e4bfcfa9059f10,
            mid_getIntegrator_7ec434f55655b6ee,
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
