#ifndef org_orekit_propagation_PythonBoundedPropagator_H
#define org_orekit_propagation_PythonBoundedPropagator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class AdditionalStateProvider;
      class EphemerisGenerator;
      namespace sampling {
        class StepHandlerMultiplexer;
      }
      class BoundedPropagator;
      namespace events {
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace attitudes {
      class AttitudeProvider;
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
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PythonBoundedPropagator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_addAdditionalStateProvider_40bf76e2f8bcdb6f,
          mid_addEventDetector_e13564f833403504,
          mid_clearEventsDetectors_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getAdditionalStateProviders_e62d3bb06d56d7e3,
          mid_getAttitudeProvider_331f12bb6017243b,
          mid_getEphemerisGenerator_5df44e253e7e7782,
          mid_getEventsDetectors_cb666ea1a15f5210,
          mid_getFrame_2c51111cc6894ba1,
          mid_getInitialState_9d155cc8314c99cf,
          mid_getManagedAdditionalStates_0f94e41879ab7062,
          mid_getMaxDate_c325492395d89b24,
          mid_getMinDate_c325492395d89b24,
          mid_getMultiplexer_ec3241005499cbfa,
          mid_getPVCoordinates_e5d15ef236cd9ffe,
          mid_isAdditionalStateManaged_cde6b28e15c96b75,
          mid_propagate_4f0008999861ca31,
          mid_propagate_6845ec704c846b03,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
          mid_resetInitialState_280c3390961e0a50,
          mid_setAttitudeProvider_8e4d3ea100bc0095,
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
