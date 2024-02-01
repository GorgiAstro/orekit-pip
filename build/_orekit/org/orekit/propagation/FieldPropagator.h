#ifndef org_orekit_propagation_FieldPropagator_H
#define org_orekit_propagation_FieldPropagator_H

#include "org/orekit/utils/FieldPVCoordinatesProvider.h"

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
      class FieldAdditionalStateProvider;
      namespace sampling {
        class FieldStepHandlerMultiplexer;
        class FieldOrekitStepHandler;
        class FieldOrekitFixedStepHandler;
      }
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
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
          mid_addAdditionalStateProvider_546488029ed6e282,
          mid_addEventDetector_bb8991c4a46cf56d,
          mid_clearEventsDetectors_ff7cb6c242604316,
          mid_clearStepHandlers_ff7cb6c242604316,
          mid_getAdditionalStateProviders_d751c1a57012b438,
          mid_getAttitudeProvider_2f73d1f4460b8d6c,
          mid_getEphemerisGenerator_96c2c30a0b0ad9e4,
          mid_getEventsDetectors_3bfef5c77ceb081a,
          mid_getFrame_cb151471db4570f0,
          mid_getInitialState_a74be2e38786f3b6,
          mid_getManagedAdditionalStates_f81c0644d57ae495,
          mid_getMultiplexer_8da2e06aa361bf03,
          mid_isAdditionalStateManaged_df4c65b2aede5c41,
          mid_propagate_fb689a9c0f30b938,
          mid_propagate_bcf793a6168805e3,
          mid_resetInitialState_8062511934471166,
          mid_setAttitudeProvider_fddd0a7d9f33bafa,
          mid_setStepHandler_a9c3be9ee399328f,
          mid_setStepHandler_b6d4e0fa68ea09a5,
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
