#ifndef org_orekit_propagation_FieldAbstractPropagator_H
#define org_orekit_propagation_FieldAbstractPropagator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldPropagator;
      namespace sampling {
        class FieldStepHandlerMultiplexer;
      }
      class FieldAdditionalStateProvider;
      class FieldSpacecraftState;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
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

      class FieldAbstractPropagator : public ::java::lang::Object {
       public:
        enum {
          mid_addAdditionalStateProvider_6f4fb3fe151ef989,
          mid_getAdditionalStateProviders_e62d3bb06d56d7e3,
          mid_getAttitudeProvider_331f12bb6017243b,
          mid_getField_04d1f63e17d5c5d4,
          mid_getFrame_2c51111cc6894ba1,
          mid_getInitialState_fba6d56f8dbc98d0,
          mid_getManagedAdditionalStates_0f94e41879ab7062,
          mid_getMultiplexer_bf5be23258085f1c,
          mid_getPVCoordinates_294c5c99690f2356,
          mid_isAdditionalStateManaged_cde6b28e15c96b75,
          mid_propagate_70fecd201ca47d3b,
          mid_resetInitialState_54d9efbf99822980,
          mid_setAttitudeProvider_8e4d3ea100bc0095,
          mid_updateAdditionalStates_370b1acde6244b7e,
          mid_initializePropagation_a1fa5dae97ea5ed2,
          mid_initializeAdditionalStates_382e93bb0508f0e4,
          mid_setStartDate_382e93bb0508f0e4,
          mid_updateUnmanagedStates_370b1acde6244b7e,
          mid_getStartDate_fa23a4301b9c83e7,
          mid_stateChanged_54d9efbf99822980,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldAbstractPropagator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldAbstractPropagator(const FieldAbstractPropagator& obj) : ::java::lang::Object(obj) {}

        void addAdditionalStateProvider(const ::org::orekit::propagation::FieldAdditionalStateProvider &) const;
        ::java::util::List getAdditionalStateProviders() const;
        ::org::orekit::attitudes::AttitudeProvider getAttitudeProvider() const;
        ::org::hipparchus::Field getField() const;
        ::org::orekit::frames::Frame getFrame() const;
        ::org::orekit::propagation::FieldSpacecraftState getInitialState() const;
        JArray< ::java::lang::String > getManagedAdditionalStates() const;
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer getMultiplexer() const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        jboolean isAdditionalStateManaged(const ::java::lang::String &) const;
        ::org::orekit::propagation::FieldSpacecraftState propagate(const ::org::orekit::time::FieldAbsoluteDate &) const;
        void resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
        void setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(FieldAbstractPropagator);
      extern PyTypeObject *PY_TYPE(FieldAbstractPropagator);

      class t_FieldAbstractPropagator {
      public:
        PyObject_HEAD
        FieldAbstractPropagator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldAbstractPropagator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldAbstractPropagator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldAbstractPropagator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
