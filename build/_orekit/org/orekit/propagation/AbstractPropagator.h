#ifndef org_orekit_propagation_AbstractPropagator_H
#define org_orekit_propagation_AbstractPropagator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class MatricesHarvester;
      namespace sampling {
        class StepHandlerMultiplexer;
      }
      class Propagator;
      class AdditionalStateProvider;
      class SpacecraftState;
    }
    namespace utils {
      class DoubleArrayDictionary;
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
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
          mid_addAdditionalStateProvider_7dfba37c14ed8f7a,
          mid_getAdditionalStateProviders_a6156df500549a58,
          mid_getAttitudeProvider_5cce95036ae870ba,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getInitialState_dd3e4a8d51055f1f,
          mid_getManagedAdditionalStates_0f62ccf08eef5924,
          mid_getMultiplexer_a44bf32d2051f26b,
          mid_getPVCoordinates_20557c175f7cd899,
          mid_isAdditionalStateManaged_6b161f495ea569b8,
          mid_propagate_889031abe87f3b14,
          mid_resetInitialState_2b88003f931f70a7,
          mid_setAttitudeProvider_8109c1a27d4471d3,
          mid_setupMatricesComputation_01864381ad74adf6,
          mid_createHarvester_d3d4ea925a699046,
          mid_setStartDate_e82d68cd9f886886,
          mid_updateAdditionalStates_81fc6fb6078d2aa7,
          mid_initializePropagation_7ae3461a92a43152,
          mid_initializeAdditionalStates_e82d68cd9f886886,
          mid_getStartDate_aaa854c403487cf3,
          mid_getHarvester_951a1d304cf6ca43,
          mid_updateUnmanagedStates_81fc6fb6078d2aa7,
          mid_stateChanged_2b88003f931f70a7,
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
