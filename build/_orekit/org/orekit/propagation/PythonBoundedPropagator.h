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
      namespace events {
        class EventDetector;
      }
      class EphemerisGenerator;
      namespace sampling {
        class StepHandlerMultiplexer;
      }
      class BoundedPropagator;
      class SpacecraftState;
      class AdditionalStateProvider;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
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
          mid_init$_0640e6acf969ed28,
          mid_addAdditionalStateProvider_8af102d28e19f725,
          mid_addEventDetector_2e2dfaf38ed50d1d,
          mid_clearEventsDetectors_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getAdditionalStateProviders_0d9551367f7ecdef,
          mid_getAttitudeProvider_6df6b78ab9377151,
          mid_getEphemerisGenerator_6a3edfe13bcee780,
          mid_getEventsDetectors_12ee61573a18f417,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getInitialState_15e85d5301b90ef8,
          mid_getManagedAdditionalStates_5d7d8c500345981d,
          mid_getMaxDate_7a97f7e149e79afb,
          mid_getMinDate_7a97f7e149e79afb,
          mid_getMultiplexer_82f3fa0ddb2ba923,
          mid_getPVCoordinates_17742a9a6655bdb1,
          mid_isAdditionalStateManaged_fd2162b8a05a22fe,
          mid_propagate_15e0d02372b1347b,
          mid_propagate_b96c0d97a162784d,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          mid_resetInitialState_8655761ebf04b503,
          mid_setAttitudeProvider_8fa6c0c067ead7b2,
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
