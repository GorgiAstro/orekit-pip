#ifndef org_orekit_propagation_PythonPropagator_H
#define org_orekit_propagation_PythonPropagator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class DoubleArrayDictionary;
      class TimeStampedPVCoordinates;
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
      class Propagator;
      namespace sampling {
        class OrekitStepHandler;
        class StepHandlerMultiplexer;
      }
      class EphemerisGenerator;
      class MatricesHarvester;
    }
    namespace frames {
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
          mid_init$_0fa09c18fee449d5,
          mid_addAdditionalStateProvider_81bc0d009507f0f4,
          mid_addEventDetector_efb7003d866d4523,
          mid_clearEventsDetectors_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getAdditionalStateProviders_2afa36052df4765d,
          mid_getAttitudeProvider_a904f3d015a354a0,
          mid_getEphemerisGenerator_18d439b26e70ccd0,
          mid_getEventsDetectors_37528d110cff6b74,
          mid_getFrame_b86f9f61d97a7244,
          mid_getInitialState_c6311115fea01a34,
          mid_getManagedAdditionalStates_692f4257baa8d3c3,
          mid_getMultiplexer_808e9f10a9e4927b,
          mid_getPVCoordinates_cfeec55f7c63ec64,
          mid_isAdditionalStateManaged_7edad2c2f64f4d68,
          mid_propagate_fbff2ff5554d95e1,
          mid_propagate_a69ef29c3ea1e1fa,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          mid_resetInitialState_0ee5c56004643a2e,
          mid_setAttitudeProvider_3cff7c75ea06698c,
          mid_setEphemerisModeHandler_bacb99df21c3a796,
          mid_setupMatricesComputation_ae2572b7a98390d4,
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
