#ifndef org_orekit_propagation_FieldPropagator_H
#define org_orekit_propagation_FieldPropagator_H

#include "org/orekit/utils/FieldPVCoordinatesProvider.h"

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
      namespace sampling {
        class FieldStepHandlerMultiplexer;
        class FieldOrekitFixedStepHandler;
        class FieldOrekitStepHandler;
      }
      namespace events {
        class FieldEventDetector;
      }
      class FieldEphemerisGenerator;
      class FieldSpacecraftState;
      class FieldAdditionalStateProvider;
    }
    namespace frames {
      class Frame;
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

      class FieldPropagator : public ::org::orekit::utils::FieldPVCoordinatesProvider {
       public:
        enum {
          mid_addAdditionalStateProvider_a97b38ef37f9ad9f,
          mid_addEventDetector_1843b26af41f9c8e,
          mid_clearEventsDetectors_7ae3461a92a43152,
          mid_clearStepHandlers_7ae3461a92a43152,
          mid_getAdditionalStateProviders_a6156df500549a58,
          mid_getAttitudeProvider_5cce95036ae870ba,
          mid_getEphemerisGenerator_a9ea70419e870eb4,
          mid_getEventsDetectors_cfcfd130f9013e3e,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getInitialState_a553824829fc2514,
          mid_getManagedAdditionalStates_0f62ccf08eef5924,
          mid_getMultiplexer_e40bff2c3349a3fd,
          mid_isAdditionalStateManaged_6b161f495ea569b8,
          mid_propagate_85b5a3e9101d7c1f,
          mid_propagate_195e701ebc75aca3,
          mid_resetInitialState_52154b94d63e10ed,
          mid_setAttitudeProvider_8109c1a27d4471d3,
          mid_setStepHandler_94968e6ff3f0c115,
          mid_setStepHandler_d41b45a1d6944ab5,
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
