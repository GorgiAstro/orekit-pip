#ifndef org_orekit_propagation_AbstractPropagator_H
#define org_orekit_propagation_AbstractPropagator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class AdditionalStateProvider;
      namespace sampling {
        class StepHandlerMultiplexer;
      }
      class MatricesHarvester;
      class Propagator;
      class SpacecraftState;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class DoubleArrayDictionary;
    }
    namespace frames {
      class Frame;
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
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class AbstractPropagator : public ::java::lang::Object {
       public:
        enum {
          mid_addAdditionalStateProvider_40bf76e2f8bcdb6f,
          mid_getAdditionalStateProviders_e62d3bb06d56d7e3,
          mid_getAttitudeProvider_331f12bb6017243b,
          mid_getFrame_2c51111cc6894ba1,
          mid_getInitialState_9d155cc8314c99cf,
          mid_getManagedAdditionalStates_0f94e41879ab7062,
          mid_getMultiplexer_ec3241005499cbfa,
          mid_getPVCoordinates_e5d15ef236cd9ffe,
          mid_isAdditionalStateManaged_cde6b28e15c96b75,
          mid_propagate_4f0008999861ca31,
          mid_resetInitialState_280c3390961e0a50,
          mid_setAttitudeProvider_8e4d3ea100bc0095,
          mid_setupMatricesComputation_353079da5ac9e8a7,
          mid_updateAdditionalStates_c3c52b1257139045,
          mid_initializePropagation_a1fa5dae97ea5ed2,
          mid_initializeAdditionalStates_02135a6ef25adb4b,
          mid_setStartDate_02135a6ef25adb4b,
          mid_createHarvester_f85b53b28e0fe6bb,
          mid_updateUnmanagedStates_c3c52b1257139045,
          mid_getStartDate_c325492395d89b24,
          mid_getHarvester_8381cda72e7e7fab,
          mid_stateChanged_280c3390961e0a50,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AbstractPropagator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AbstractPropagator(const AbstractPropagator& obj) : ::java::lang::Object(obj) {}

        void addAdditionalStateProvider(const ::org::orekit::propagation::AdditionalStateProvider &) const;
        ::java::util::List getAdditionalStateProviders() const;
        ::org::orekit::attitudes::AttitudeProvider getAttitudeProvider() const;
        ::org::orekit::frames::Frame getFrame() const;
        ::org::orekit::propagation::SpacecraftState getInitialState() const;
        JArray< ::java::lang::String > getManagedAdditionalStates() const;
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer getMultiplexer() const;
        ::org::orekit::utils::TimeStampedPVCoordinates getPVCoordinates(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        jboolean isAdditionalStateManaged(const ::java::lang::String &) const;
        ::org::orekit::propagation::SpacecraftState propagate(const ::org::orekit::time::AbsoluteDate &) const;
        void resetInitialState(const ::org::orekit::propagation::SpacecraftState &) const;
        void setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
        ::org::orekit::propagation::MatricesHarvester setupMatricesComputation(const ::java::lang::String &, const ::org::hipparchus::linear::RealMatrix &, const ::org::orekit::utils::DoubleArrayDictionary &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(AbstractPropagator);
      extern PyTypeObject *PY_TYPE(AbstractPropagator);

      class t_AbstractPropagator {
      public:
        PyObject_HEAD
        AbstractPropagator object;
        static PyObject *wrap_Object(const AbstractPropagator&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
