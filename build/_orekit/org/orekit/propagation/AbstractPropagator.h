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
      class MatricesHarvester;
      namespace sampling {
        class StepHandlerMultiplexer;
      }
      class Propagator;
      class SpacecraftState;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class DoubleArrayDictionary;
      class TimeStampedPVCoordinates;
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
          mid_addAdditionalStateProvider_81bc0d009507f0f4,
          mid_getAdditionalStateProviders_2afa36052df4765d,
          mid_getAttitudeProvider_a904f3d015a354a0,
          mid_getFrame_b86f9f61d97a7244,
          mid_getInitialState_c6311115fea01a34,
          mid_getManagedAdditionalStates_692f4257baa8d3c3,
          mid_getMultiplexer_808e9f10a9e4927b,
          mid_getPVCoordinates_cfeec55f7c63ec64,
          mid_isAdditionalStateManaged_7edad2c2f64f4d68,
          mid_propagate_fbff2ff5554d95e1,
          mid_resetInitialState_0ee5c56004643a2e,
          mid_setAttitudeProvider_3cff7c75ea06698c,
          mid_setupMatricesComputation_ae2572b7a98390d4,
          mid_updateAdditionalStates_f43130c50e9fafeb,
          mid_initializePropagation_0fa09c18fee449d5,
          mid_initializeAdditionalStates_600a2a61652bc473,
          mid_setStartDate_600a2a61652bc473,
          mid_updateUnmanagedStates_f43130c50e9fafeb,
          mid_getStartDate_85703d13e302437e,
          mid_stateChanged_0ee5c56004643a2e,
          mid_createHarvester_5cfd2a13971b74c7,
          mid_getHarvester_c46c094dc8f7c2fc,
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
