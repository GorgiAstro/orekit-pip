#ifndef org_orekit_propagation_Propagator_H
#define org_orekit_propagation_Propagator_H

#include "org/orekit/utils/PVCoordinatesProvider.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
      }
      namespace sampling {
        class OrekitStepHandler;
        class StepHandlerMultiplexer;
        class OrekitFixedStepHandler;
      }
      class AdditionalStateProvider;
      class EphemerisGenerator;
      class MatricesHarvester;
      class SpacecraftState;
    }
    namespace utils {
      class DoubleArrayDictionary;
    }
    namespace frames {
      class Frame;
      class Frames;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class Propagator : public ::org::orekit::utils::PVCoordinatesProvider {
       public:
        enum {
          mid_addAdditionalStateProvider_40bf76e2f8bcdb6f,
          mid_addEventDetector_e13564f833403504,
          mid_clearEventsDetectors_a1fa5dae97ea5ed2,
          mid_clearStepHandlers_a1fa5dae97ea5ed2,
          mid_getAdditionalStateProviders_e62d3bb06d56d7e3,
          mid_getAttitudeProvider_331f12bb6017243b,
          mid_getDefaultLaw_1dc787509a959a6a,
          mid_getEphemerisGenerator_5df44e253e7e7782,
          mid_getEventsDetectors_cb666ea1a15f5210,
          mid_getFrame_2c51111cc6894ba1,
          mid_getInitialState_9d155cc8314c99cf,
          mid_getManagedAdditionalStates_0f94e41879ab7062,
          mid_getMultiplexer_ec3241005499cbfa,
          mid_isAdditionalStateManaged_cde6b28e15c96b75,
          mid_propagate_4f0008999861ca31,
          mid_propagate_6845ec704c846b03,
          mid_resetInitialState_280c3390961e0a50,
          mid_setAttitudeProvider_8e4d3ea100bc0095,
          mid_setStepHandler_3c714d0cca30d176,
          mid_setStepHandler_6e0fc70b103d8967,
          mid_setupMatricesComputation_353079da5ac9e8a7,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Propagator(jobject obj) : ::org::orekit::utils::PVCoordinatesProvider(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Propagator(const Propagator& obj) : ::org::orekit::utils::PVCoordinatesProvider(obj) {}

        static jdouble DEFAULT_MASS;

        void addAdditionalStateProvider(const ::org::orekit::propagation::AdditionalStateProvider &) const;
        void addEventDetector(const ::org::orekit::propagation::events::EventDetector &) const;
        void clearEventsDetectors() const;
        void clearStepHandlers() const;
        ::java::util::List getAdditionalStateProviders() const;
        ::org::orekit::attitudes::AttitudeProvider getAttitudeProvider() const;
        static ::org::orekit::attitudes::AttitudeProvider getDefaultLaw(const ::org::orekit::frames::Frames &);
        ::org::orekit::propagation::EphemerisGenerator getEphemerisGenerator() const;
        ::java::util::Collection getEventsDetectors() const;
        ::org::orekit::frames::Frame getFrame() const;
        ::org::orekit::propagation::SpacecraftState getInitialState() const;
        JArray< ::java::lang::String > getManagedAdditionalStates() const;
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer getMultiplexer() const;
        jboolean isAdditionalStateManaged(const ::java::lang::String &) const;
        ::org::orekit::propagation::SpacecraftState propagate(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::propagation::SpacecraftState propagate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
        void resetInitialState(const ::org::orekit::propagation::SpacecraftState &) const;
        void setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
        void setStepHandler(const ::org::orekit::propagation::sampling::OrekitStepHandler &) const;
        void setStepHandler(jdouble, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler &) const;
        ::org::orekit::propagation::MatricesHarvester setupMatricesComputation(const ::java::lang::String &, const ::org::hipparchus::linear::RealMatrix &, const ::org::orekit::utils::DoubleArrayDictionary &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(Propagator);
      extern PyTypeObject *PY_TYPE(Propagator);

      class t_Propagator {
      public:
        PyObject_HEAD
        Propagator object;
        static PyObject *wrap_Object(const Propagator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
