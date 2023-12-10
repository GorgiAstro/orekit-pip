#ifndef org_orekit_propagation_Propagator_H
#define org_orekit_propagation_Propagator_H

#include "org/orekit/utils/PVCoordinatesProvider.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class Frames;
      class Frame;
    }
    namespace utils {
      class DoubleArrayDictionary;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class EventDetector;
      }
      class AdditionalStateProvider;
      namespace sampling {
        class OrekitStepHandler;
        class StepHandlerMultiplexer;
        class OrekitFixedStepHandler;
      }
      class EphemerisGenerator;
      class MatricesHarvester;
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
          mid_addAdditionalStateProvider_81bc0d009507f0f4,
          mid_addEventDetector_efb7003d866d4523,
          mid_clearEventsDetectors_0fa09c18fee449d5,
          mid_clearStepHandlers_0fa09c18fee449d5,
          mid_getAdditionalStateProviders_2afa36052df4765d,
          mid_getAttitudeProvider_a904f3d015a354a0,
          mid_getDefaultLaw_7a62213ff6ce3ce4,
          mid_getEphemerisGenerator_18d439b26e70ccd0,
          mid_getEventsDetectors_37528d110cff6b74,
          mid_getFrame_b86f9f61d97a7244,
          mid_getInitialState_c6311115fea01a34,
          mid_getManagedAdditionalStates_692f4257baa8d3c3,
          mid_getMultiplexer_808e9f10a9e4927b,
          mid_isAdditionalStateManaged_7edad2c2f64f4d68,
          mid_propagate_fbff2ff5554d95e1,
          mid_propagate_a69ef29c3ea1e1fa,
          mid_resetInitialState_0ee5c56004643a2e,
          mid_setAttitudeProvider_3cff7c75ea06698c,
          mid_setStepHandler_bacb99df21c3a796,
          mid_setStepHandler_768baea54d9d6ae5,
          mid_setupMatricesComputation_ae2572b7a98390d4,
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
