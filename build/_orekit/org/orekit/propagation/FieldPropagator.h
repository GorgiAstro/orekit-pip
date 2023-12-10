#ifndef org_orekit_propagation_FieldPropagator_H
#define org_orekit_propagation_FieldPropagator_H

#include "org/orekit/utils/FieldPVCoordinatesProvider.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class FieldStepHandlerMultiplexer;
        class FieldOrekitFixedStepHandler;
        class FieldOrekitStepHandler;
      }
      class FieldEphemerisGenerator;
      class FieldSpacecraftState;
      class FieldAdditionalStateProvider;
      namespace events {
        class FieldEventDetector;
      }
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
          mid_addAdditionalStateProvider_2c8cec257f03501f,
          mid_addEventDetector_f929ebd2a84dbfe7,
          mid_clearEventsDetectors_0fa09c18fee449d5,
          mid_clearStepHandlers_0fa09c18fee449d5,
          mid_getAdditionalStateProviders_2afa36052df4765d,
          mid_getAttitudeProvider_a904f3d015a354a0,
          mid_getEphemerisGenerator_54ac43f1e933cf20,
          mid_getEventsDetectors_37528d110cff6b74,
          mid_getFrame_b86f9f61d97a7244,
          mid_getInitialState_02cea343d9f71933,
          mid_getManagedAdditionalStates_692f4257baa8d3c3,
          mid_getMultiplexer_805c1ec2ab9b09dd,
          mid_isAdditionalStateManaged_7edad2c2f64f4d68,
          mid_propagate_f6f1ea8aef3019eb,
          mid_propagate_fc770c29e3468de8,
          mid_resetInitialState_1463d3d0d52f94dd,
          mid_setAttitudeProvider_3cff7c75ea06698c,
          mid_setStepHandler_16d47a327666f5ff,
          mid_setStepHandler_465bcdb67e0beb29,
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
