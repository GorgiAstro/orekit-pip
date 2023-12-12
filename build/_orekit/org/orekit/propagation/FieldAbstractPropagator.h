#ifndef org_orekit_propagation_FieldAbstractPropagator_H
#define org_orekit_propagation_FieldAbstractPropagator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldPropagator;
      class FieldSpacecraftState;
      namespace sampling {
        class FieldStepHandlerMultiplexer;
      }
      class FieldAdditionalStateProvider;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
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
          mid_addAdditionalStateProvider_1dbe9cc03f00d454,
          mid_getAdditionalStateProviders_0d9551367f7ecdef,
          mid_getAttitudeProvider_6df6b78ab9377151,
          mid_getField_20f98801541dcec1,
          mid_getFrame_6c9bc0a928c56d4e,
          mid_getInitialState_381b3e011cde018d,
          mid_getManagedAdditionalStates_5d7d8c500345981d,
          mid_getMultiplexer_da8c64c8d63a3f9a,
          mid_getPVCoordinates_4ac52e75113a03db,
          mid_isAdditionalStateManaged_fd2162b8a05a22fe,
          mid_propagate_5324cbf9e5ce58fe,
          mid_resetInitialState_b66c84a5711243d5,
          mid_setAttitudeProvider_8fa6c0c067ead7b2,
          mid_setStartDate_96f1f04e218525b7,
          mid_updateAdditionalStates_4f12774dd382c6f4,
          mid_initializePropagation_0640e6acf969ed28,
          mid_initializeAdditionalStates_96f1f04e218525b7,
          mid_updateUnmanagedStates_4f12774dd382c6f4,
          mid_getStartDate_f1fe4daf77c66560,
          mid_stateChanged_b66c84a5711243d5,
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
