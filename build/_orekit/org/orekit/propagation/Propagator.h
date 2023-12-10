#ifndef org_orekit_propagation_Propagator_H
#define org_orekit_propagation_Propagator_H

#include "org/orekit/utils/PVCoordinatesProvider.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
      namespace sampling {
        class OrekitFixedStepHandler;
        class StepHandlerMultiplexer;
        class OrekitStepHandler;
      }
      class EphemerisGenerator;
      class AdditionalStateProvider;
      namespace events {
        class EventDetector;
      }
      class MatricesHarvester;
    }
    namespace time {
      class AbsoluteDate;
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
          mid_addAdditionalStateProvider_7dfba37c14ed8f7a,
          mid_addEventDetector_8ef30a2ad40caceb,
          mid_clearEventsDetectors_7ae3461a92a43152,
          mid_clearStepHandlers_7ae3461a92a43152,
          mid_getAdditionalStateProviders_a6156df500549a58,
          mid_getAttitudeProvider_5cce95036ae870ba,
          mid_getDefaultLaw_2e3626f022f9d980,
          mid_getEphemerisGenerator_dd0e78d2be8aaf34,
          mid_getEventsDetectors_cfcfd130f9013e3e,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getInitialState_dd3e4a8d51055f1f,
          mid_getManagedAdditionalStates_0f62ccf08eef5924,
          mid_getMultiplexer_a44bf32d2051f26b,
          mid_isAdditionalStateManaged_6b161f495ea569b8,
          mid_propagate_889031abe87f3b14,
          mid_propagate_afc18c81ed763a96,
          mid_resetInitialState_2b88003f931f70a7,
          mid_setAttitudeProvider_8109c1a27d4471d3,
          mid_setStepHandler_dbe30cb4a191086d,
          mid_setStepHandler_ae887d6ebf6ba107,
          mid_setupMatricesComputation_01864381ad74adf6,
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
