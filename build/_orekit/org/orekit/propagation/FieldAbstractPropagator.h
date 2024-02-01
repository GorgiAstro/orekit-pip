#ifndef org_orekit_propagation_FieldAbstractPropagator_H
#define org_orekit_propagation_FieldAbstractPropagator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class FieldAdditionalStateProvider;
      class FieldPropagator;
      namespace sampling {
        class FieldStepHandlerMultiplexer;
      }
      class FieldSpacecraftState;
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
          mid_addAdditionalStateProvider_546488029ed6e282,
          mid_getAdditionalStateProviders_d751c1a57012b438,
          mid_getAttitudeProvider_2f73d1f4460b8d6c,
          mid_getField_577649682b9910c1,
          mid_getFrame_cb151471db4570f0,
          mid_getInitialState_a74be2e38786f3b6,
          mid_getManagedAdditionalStates_f81c0644d57ae495,
          mid_getMultiplexer_8da2e06aa361bf03,
          mid_getPVCoordinates_1b1a4229447f7bf7,
          mid_isAdditionalStateManaged_df4c65b2aede5c41,
          mid_propagate_fb689a9c0f30b938,
          mid_resetInitialState_8062511934471166,
          mid_setAttitudeProvider_fddd0a7d9f33bafa,
          mid_setStartDate_421e631f14d32a8c,
          mid_getStartDate_1fea28374011eef5,
          mid_stateChanged_8062511934471166,
          mid_updateAdditionalStates_59bc90ab93a43079,
          mid_initializeAdditionalStates_421e631f14d32a8c,
          mid_initializePropagation_ff7cb6c242604316,
          mid_updateUnmanagedStates_59bc90ab93a43079,
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
