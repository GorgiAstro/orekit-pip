#ifndef org_orekit_propagation_AbstractPropagator_H
#define org_orekit_propagation_AbstractPropagator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class AdditionalStateProvider;
      namespace sampling {
        class StepHandlerMultiplexer;
      }
      class Propagator;
      class SpacecraftState;
      class MatricesHarvester;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class DoubleArrayDictionary;
      class TimeStampedPVCoordinates;
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
          mid_addAdditionalStateProvider_b928bf8cc239d256,
          mid_getAdditionalStateProviders_d751c1a57012b438,
          mid_getAttitudeProvider_2f73d1f4460b8d6c,
          mid_getFrame_cb151471db4570f0,
          mid_getInitialState_8fbfa58855031235,
          mid_getManagedAdditionalStates_f81c0644d57ae495,
          mid_getMultiplexer_ddcdca7ad3c7f5e9,
          mid_getPVCoordinates_6236a35378ed47a5,
          mid_isAdditionalStateManaged_df4c65b2aede5c41,
          mid_propagate_1e982279849c3b65,
          mid_resetInitialState_72b846eb87f3af9a,
          mid_setAttitudeProvider_fddd0a7d9f33bafa,
          mid_setupMatricesComputation_0a26c8b4f543ed52,
          mid_createHarvester_d0aee1b2c15f4d53,
          mid_setStartDate_8497861b879c83f7,
          mid_getHarvester_f86b7e72bfd6b6e9,
          mid_getStartDate_80e11148db499dda,
          mid_stateChanged_72b846eb87f3af9a,
          mid_updateAdditionalStates_ed3fe207e6fde26f,
          mid_initializeAdditionalStates_8497861b879c83f7,
          mid_initializePropagation_ff7cb6c242604316,
          mid_updateUnmanagedStates_ed3fe207e6fde26f,
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
