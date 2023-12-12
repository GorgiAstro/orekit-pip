#ifndef org_orekit_propagation_Propagator_H
#define org_orekit_propagation_Propagator_H

#include "org/orekit/utils/PVCoordinatesProvider.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class MatricesHarvester;
      namespace sampling {
        class OrekitStepHandler;
        class StepHandlerMultiplexer;
        class OrekitFixedStepHandler;
      }
      class SpacecraftState;
      namespace events {
        class EventDetector;
      }
      class AdditionalStateProvider;
      class EphemerisGenerator;
    }
    namespace utils {
      class DoubleArrayDictionary;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace frames {
      class Frames;
      class Frame;
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
          mid_addAdditionalStateProvider_8af102d28e19f725,
          mid_addEventDetector_2e2dfaf38ed50d1d,
          mid_clearEventsDetectors_0640e6acf969ed28,
          mid_clearStepHandlers_0640e6acf969ed28,
          mid_getAdditionalStateProviders_0d9551367f7ecdef,
          mid_getAttitudeProvider_6df6b78ab9377151,
          mid_getDefaultLaw_347a56c6b495e64d,
          mid_getEphemerisGenerator_6a3edfe13bcee780,
          mid_getEventsDetectors_12ee61573a18f417,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getInitialState_15e85d5301b90ef8,
          mid_getManagedAdditionalStates_5d7d8c500345981d,
          mid_getMultiplexer_82f3fa0ddb2ba923,
          mid_isAdditionalStateManaged_fd2162b8a05a22fe,
          mid_propagate_15e0d02372b1347b,
          mid_propagate_b96c0d97a162784d,
          mid_resetInitialState_8655761ebf04b503,
          mid_setAttitudeProvider_8fa6c0c067ead7b2,
          mid_setStepHandler_94f65743c8fc9296,
          mid_setStepHandler_53f2c5a5fdcdc0f4,
          mid_setupMatricesComputation_31c2066d459d0537,
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
