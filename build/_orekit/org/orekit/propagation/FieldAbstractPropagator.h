#ifndef org_orekit_propagation_FieldAbstractPropagator_H
#define org_orekit_propagation_FieldAbstractPropagator_H

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
      namespace sampling {
        class FieldStepHandlerMultiplexer;
      }
      class FieldPropagator;
      class FieldSpacecraftState;
      class FieldAdditionalStateProvider;
    }
    namespace frames {
      class Frame;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class Field;
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class FieldAbstractPropagator : public ::java::lang::Object {
       public:
        enum {
          mid_addAdditionalStateProvider_a97b38ef37f9ad9f,
          mid_getAdditionalStateProviders_a6156df500549a58,
          mid_getAttitudeProvider_5cce95036ae870ba,
          mid_getField_70b4bbd3fa378d6b,
          mid_getFrame_c8fe21bcdac65bf6,
          mid_getInitialState_a553824829fc2514,
          mid_getManagedAdditionalStates_0f62ccf08eef5924,
          mid_getMultiplexer_e40bff2c3349a3fd,
          mid_getPVCoordinates_0e277b7d6a64b75a,
          mid_isAdditionalStateManaged_6b161f495ea569b8,
          mid_propagate_85b5a3e9101d7c1f,
          mid_resetInitialState_52154b94d63e10ed,
          mid_setAttitudeProvider_8109c1a27d4471d3,
          mid_setStartDate_fa8a1245db18b643,
          mid_updateAdditionalStates_db7b9ef879f5b135,
          mid_initializePropagation_7ae3461a92a43152,
          mid_initializeAdditionalStates_fa8a1245db18b643,
          mid_getStartDate_09b0a926600dfc14,
          mid_updateUnmanagedStates_db7b9ef879f5b135,
          mid_stateChanged_52154b94d63e10ed,
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
