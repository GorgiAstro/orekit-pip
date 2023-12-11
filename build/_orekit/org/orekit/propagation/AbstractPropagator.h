#ifndef org_orekit_propagation_AbstractPropagator_H
#define org_orekit_propagation_AbstractPropagator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      class MatricesHarvester;
      class Propagator;
      namespace sampling {
        class StepHandlerMultiplexer;
      }
      class SpacecraftState;
      class AdditionalStateProvider;
    }
    namespace utils {
      class DoubleArrayDictionary;
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
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class AbstractPropagator : public ::java::lang::Object {
       public:
        enum {
          mid_addAdditionalStateProvider_8af102d28e19f725,
          mid_getAdditionalStateProviders_0d9551367f7ecdef,
          mid_getAttitudeProvider_6df6b78ab9377151,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getInitialState_15e85d5301b90ef8,
          mid_getManagedAdditionalStates_5d7d8c500345981d,
          mid_getMultiplexer_82f3fa0ddb2ba923,
          mid_getPVCoordinates_17742a9a6655bdb1,
          mid_isAdditionalStateManaged_fd2162b8a05a22fe,
          mid_propagate_15e0d02372b1347b,
          mid_resetInitialState_8655761ebf04b503,
          mid_setAttitudeProvider_8fa6c0c067ead7b2,
          mid_setupMatricesComputation_31c2066d459d0537,
          mid_setStartDate_20affcbd28542333,
          mid_createHarvester_5f0409a66c29e9c1,
          mid_updateAdditionalStates_2c4cc16b11f79a6c,
          mid_initializePropagation_0640e6acf969ed28,
          mid_initializeAdditionalStates_20affcbd28542333,
          mid_updateUnmanagedStates_2c4cc16b11f79a6c,
          mid_getStartDate_7a97f7e149e79afb,
          mid_getHarvester_34a1db86ec41ca99,
          mid_stateChanged_8655761ebf04b503,
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
