#ifndef org_orekit_propagation_FieldPropagator_H
#define org_orekit_propagation_FieldPropagator_H

#include "org/orekit/utils/FieldPVCoordinatesProvider.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      namespace sampling {
        class FieldOrekitFixedStepHandler;
        class FieldOrekitStepHandler;
        class FieldStepHandlerMultiplexer;
      }
      namespace events {
        class FieldEventDetector;
      }
      class FieldAdditionalStateProvider;
      class FieldSpacecraftState;
      class FieldEphemerisGenerator;
    }
    namespace frames {
      class Frame;
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

      class FieldPropagator : public ::org::orekit::utils::FieldPVCoordinatesProvider {
       public:
        enum {
          mid_addAdditionalStateProvider_6f4fb3fe151ef989,
          mid_addEventDetector_ca1d91eb6a3ce219,
          mid_clearEventsDetectors_a1fa5dae97ea5ed2,
          mid_clearStepHandlers_a1fa5dae97ea5ed2,
          mid_getAdditionalStateProviders_e62d3bb06d56d7e3,
          mid_getAttitudeProvider_331f12bb6017243b,
          mid_getEphemerisGenerator_afe29c55086c638f,
          mid_getEventsDetectors_cb666ea1a15f5210,
          mid_getFrame_2c51111cc6894ba1,
          mid_getInitialState_fba6d56f8dbc98d0,
          mid_getManagedAdditionalStates_0f94e41879ab7062,
          mid_getMultiplexer_bf5be23258085f1c,
          mid_isAdditionalStateManaged_cde6b28e15c96b75,
          mid_propagate_70fecd201ca47d3b,
          mid_propagate_44f88f604c4d00f1,
          mid_resetInitialState_54d9efbf99822980,
          mid_setAttitudeProvider_8e4d3ea100bc0095,
          mid_setStepHandler_a80810763ccddce2,
          mid_setStepHandler_73fc248bc2640832,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldPropagator(jobject obj) : ::org::orekit::utils::FieldPVCoordinatesProvider(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldPropagator(const FieldPropagator& obj) : ::org::orekit::utils::FieldPVCoordinatesProvider(obj) {}

        static jdouble DEFAULT_MASS;

        void addAdditionalStateProvider(const ::org::orekit::propagation::FieldAdditionalStateProvider &) const;
        void addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector &) const;
        void clearEventsDetectors() const;
        void clearStepHandlers() const;
        ::java::util::List getAdditionalStateProviders() const;
        ::org::orekit::attitudes::AttitudeProvider getAttitudeProvider() const;
        ::org::orekit::propagation::FieldEphemerisGenerator getEphemerisGenerator() const;
        ::java::util::Collection getEventsDetectors() const;
        ::org::orekit::frames::Frame getFrame() const;
        ::org::orekit::propagation::FieldSpacecraftState getInitialState() const;
        JArray< ::java::lang::String > getManagedAdditionalStates() const;
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer getMultiplexer() const;
        jboolean isAdditionalStateManaged(const ::java::lang::String &) const;
        ::org::orekit::propagation::FieldSpacecraftState propagate(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::propagation::FieldSpacecraftState propagate(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        void resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
        void setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
        void setStepHandler(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler &) const;
        void setStepHandler(const ::org::hipparchus::CalculusFieldElement &, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(FieldPropagator);
      extern PyTypeObject *PY_TYPE(FieldPropagator);

      class t_FieldPropagator {
      public:
        PyObject_HEAD
        FieldPropagator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldPropagator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldPropagator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldPropagator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
