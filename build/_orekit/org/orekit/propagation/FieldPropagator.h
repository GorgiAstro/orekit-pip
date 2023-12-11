#ifndef org_orekit_propagation_FieldPropagator_H
#define org_orekit_propagation_FieldPropagator_H

#include "org/orekit/utils/FieldPVCoordinatesProvider.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class FieldOrekitFixedStepHandler;
        class FieldStepHandlerMultiplexer;
        class FieldOrekitStepHandler;
      }
      class FieldSpacecraftState;
      namespace events {
        class FieldEventDetector;
      }
      class FieldEphemerisGenerator;
      class FieldAdditionalStateProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
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

      class FieldPropagator : public ::org::orekit::utils::FieldPVCoordinatesProvider {
       public:
        enum {
          mid_addAdditionalStateProvider_1dbe9cc03f00d454,
          mid_addEventDetector_2ffeff0ffaf1deef,
          mid_clearEventsDetectors_0640e6acf969ed28,
          mid_clearStepHandlers_0640e6acf969ed28,
          mid_getAdditionalStateProviders_0d9551367f7ecdef,
          mid_getAttitudeProvider_6df6b78ab9377151,
          mid_getEphemerisGenerator_07866493eb3b3f17,
          mid_getEventsDetectors_12ee61573a18f417,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getInitialState_381b3e011cde018d,
          mid_getManagedAdditionalStates_5d7d8c500345981d,
          mid_getMultiplexer_da8c64c8d63a3f9a,
          mid_isAdditionalStateManaged_fd2162b8a05a22fe,
          mid_propagate_5324cbf9e5ce58fe,
          mid_propagate_78f4b3ee8066e6b6,
          mid_resetInitialState_b66c84a5711243d5,
          mid_setAttitudeProvider_8fa6c0c067ead7b2,
          mid_setStepHandler_69a7e501f9a938a3,
          mid_setStepHandler_c9f4018f814d2514,
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
