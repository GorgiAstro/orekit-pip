#ifndef org_orekit_propagation_PythonBoundedPropagator_H
#define org_orekit_propagation_PythonBoundedPropagator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      class EphemerisGenerator;
      namespace sampling {
        class StepHandlerMultiplexer;
      }
      class AdditionalStateProvider;
      class SpacecraftState;
      class BoundedPropagator;
      namespace events {
        class EventDetector;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PythonBoundedPropagator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_addAdditionalStateProvider_7dfba37c14ed8f7a,
          mid_addEventDetector_8ef30a2ad40caceb,
          mid_clearEventsDetectors_7ae3461a92a43152,
          mid_finalize_7ae3461a92a43152,
          mid_getAdditionalStateProviders_a6156df500549a58,
          mid_getAttitudeProvider_5cce95036ae870ba,
          mid_getEphemerisGenerator_dd0e78d2be8aaf34,
          mid_getEventsDetectors_cfcfd130f9013e3e,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getInitialState_dd3e4a8d51055f1f,
          mid_getManagedAdditionalStates_0f62ccf08eef5924,
          mid_getMaxDate_aaa854c403487cf3,
          mid_getMinDate_aaa854c403487cf3,
          mid_getMultiplexer_a44bf32d2051f26b,
          mid_getPVCoordinates_20557c175f7cd899,
          mid_isAdditionalStateManaged_6b161f495ea569b8,
          mid_propagate_889031abe87f3b14,
          mid_propagate_afc18c81ed763a96,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
          mid_resetInitialState_2b88003f931f70a7,
          mid_setAttitudeProvider_8109c1a27d4471d3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonBoundedPropagator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonBoundedPropagator(const PythonBoundedPropagator& obj) : ::java::lang::Object(obj) {}

        PythonBoundedPropagator();

        void addAdditionalStateProvider(const ::org::orekit::propagation::AdditionalStateProvider &) const;
        void addEventDetector(const ::org::orekit::propagation::events::EventDetector &) const;
        void clearEventsDetectors() const;
        void finalize() const;
        ::java::util::List getAdditionalStateProviders() const;
        ::org::orekit::attitudes::AttitudeProvider getAttitudeProvider() const;
        ::org::orekit::propagation::EphemerisGenerator getEphemerisGenerator() const;
        ::java::util::Collection getEventsDetectors() const;
        ::org::orekit::frames::Frame getFrame() const;
        ::org::orekit::propagation::SpacecraftState getInitialState() const;
        JArray< ::java::lang::String > getManagedAdditionalStates() const;
        ::org::orekit::time::AbsoluteDate getMaxDate() const;
        ::org::orekit::time::AbsoluteDate getMinDate() const;
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer getMultiplexer() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        jboolean isAdditionalStateManaged(const ::java::lang::String &) const;
        ::org::orekit::propagation::SpacecraftState propagate(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::propagation::SpacecraftState propagate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        void resetInitialState(const ::org::orekit::propagation::SpacecraftState &) const;
        void setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(PythonBoundedPropagator);
      extern PyTypeObject *PY_TYPE(PythonBoundedPropagator);

      class t_PythonBoundedPropagator {
      public:
        PyObject_HEAD
        PythonBoundedPropagator object;
        static PyObject *wrap_Object(const PythonBoundedPropagator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif