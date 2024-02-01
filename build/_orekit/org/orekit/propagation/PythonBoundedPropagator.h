#ifndef org_orekit_propagation_PythonBoundedPropagator_H
#define org_orekit_propagation_PythonBoundedPropagator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class AdditionalStateProvider;
      class EphemerisGenerator;
      namespace sampling {
        class StepHandlerMultiplexer;
      }
      class BoundedPropagator;
      class SpacecraftState;
      namespace events {
        class EventDetector;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
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
          mid_init$_ff7cb6c242604316,
          mid_addAdditionalStateProvider_b928bf8cc239d256,
          mid_addEventDetector_d5d8be0538a03d97,
          mid_clearEventsDetectors_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getAdditionalStateProviders_d751c1a57012b438,
          mid_getAttitudeProvider_2f73d1f4460b8d6c,
          mid_getEphemerisGenerator_9f3d902ece22e1af,
          mid_getEventsDetectors_3bfef5c77ceb081a,
          mid_getFrame_cb151471db4570f0,
          mid_getInitialState_8fbfa58855031235,
          mid_getManagedAdditionalStates_f81c0644d57ae495,
          mid_getMaxDate_80e11148db499dda,
          mid_getMinDate_80e11148db499dda,
          mid_getMultiplexer_ddcdca7ad3c7f5e9,
          mid_getPVCoordinates_6236a35378ed47a5,
          mid_isAdditionalStateManaged_df4c65b2aede5c41,
          mid_propagate_1e982279849c3b65,
          mid_propagate_aaae977c62060398,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          mid_resetInitialState_72b846eb87f3af9a,
          mid_setAttitudeProvider_fddd0a7d9f33bafa,
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
