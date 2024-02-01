#ifndef org_orekit_propagation_PythonPropagator_H
#define org_orekit_propagation_PythonPropagator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class AdditionalStateProvider;
      class EphemerisGenerator;
      namespace events {
        class EventDetector;
      }
      class MatricesHarvester;
      namespace sampling {
        class OrekitStepHandler;
        class StepHandlerMultiplexer;
      }
      class SpacecraftState;
      class Propagator;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class DoubleArrayDictionary;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
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
    class Throwable;
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

      class PythonPropagator : public ::java::lang::Object {
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
          mid_setEphemerisModeHandler_a99d5b52ca8703a8,
          mid_setupMatricesComputation_0a26c8b4f543ed52,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonPropagator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonPropagator(const PythonPropagator& obj) : ::java::lang::Object(obj) {}

        PythonPropagator();

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
        void setEphemerisModeHandler(const ::org::orekit::propagation::sampling::OrekitStepHandler &) const;
        ::org::orekit::propagation::MatricesHarvester setupMatricesComputation(const ::java::lang::String &, const ::org::hipparchus::linear::RealMatrix &, const ::org::orekit::utils::DoubleArrayDictionary &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(PythonPropagator);
      extern PyTypeObject *PY_TYPE(PythonPropagator);

      class t_PythonPropagator {
      public:
        PyObject_HEAD
        PythonPropagator object;
        static PyObject *wrap_Object(const PythonPropagator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
