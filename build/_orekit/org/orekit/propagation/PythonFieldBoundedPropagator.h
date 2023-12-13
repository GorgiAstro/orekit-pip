#ifndef org_orekit_propagation_PythonFieldBoundedPropagator_H
#define org_orekit_propagation_PythonFieldBoundedPropagator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
      }
      namespace sampling {
        class FieldStepHandlerMultiplexer;
      }
      class FieldAdditionalStateProvider;
      class FieldSpacecraftState;
      class FieldEphemerisGenerator;
      class FieldBoundedPropagator;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PythonFieldBoundedPropagator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_addAdditionalStateProvider_6f4fb3fe151ef989,
          mid_addEventDetector_ca1d91eb6a3ce219,
          mid_clearEventsDetectors_a1fa5dae97ea5ed2,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getAdditionalStateProviders_e62d3bb06d56d7e3,
          mid_getAttitudeProvider_331f12bb6017243b,
          mid_getEphemerisGenerator_afe29c55086c638f,
          mid_getEventsDetectors_cb666ea1a15f5210,
          mid_getFrame_2c51111cc6894ba1,
          mid_getInitialState_fba6d56f8dbc98d0,
          mid_getManagedAdditionalStates_0f94e41879ab7062,
          mid_getMaxDate_fa23a4301b9c83e7,
          mid_getMinDate_fa23a4301b9c83e7,
          mid_getMultiplexer_bf5be23258085f1c,
          mid_getPVCoordinates_294c5c99690f2356,
          mid_isAdditionalStateManaged_cde6b28e15c96b75,
          mid_propagate_70fecd201ca47d3b,
          mid_propagate_44f88f604c4d00f1,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
          mid_resetInitialState_54d9efbf99822980,
          mid_setAttitudeProvider_8e4d3ea100bc0095,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonFieldBoundedPropagator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonFieldBoundedPropagator(const PythonFieldBoundedPropagator& obj) : ::java::lang::Object(obj) {}

        PythonFieldBoundedPropagator();

        void addAdditionalStateProvider(const ::org::orekit::propagation::FieldAdditionalStateProvider &) const;
        void addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector &) const;
        void clearEventsDetectors() const;
        void finalize() const;
        ::java::util::List getAdditionalStateProviders() const;
        ::org::orekit::attitudes::AttitudeProvider getAttitudeProvider() const;
        ::org::orekit::propagation::FieldEphemerisGenerator getEphemerisGenerator() const;
        ::java::util::Collection getEventsDetectors() const;
        ::org::orekit::frames::Frame getFrame() const;
        ::org::orekit::propagation::FieldSpacecraftState getInitialState() const;
        JArray< ::java::lang::String > getManagedAdditionalStates() const;
        ::org::orekit::time::FieldAbsoluteDate getMaxDate() const;
        ::org::orekit::time::FieldAbsoluteDate getMinDate() const;
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer getMultiplexer() const;
        ::org::orekit::utils::TimeStampedFieldPVCoordinates getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        jboolean isAdditionalStateManaged(const ::java::lang::String &) const;
        ::org::orekit::propagation::FieldSpacecraftState propagate(const ::org::orekit::time::FieldAbsoluteDate &) const;
        ::org::orekit::propagation::FieldSpacecraftState propagate(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
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
      extern PyType_Def PY_TYPE_DEF(PythonFieldBoundedPropagator);
      extern PyTypeObject *PY_TYPE(PythonFieldBoundedPropagator);

      class t_PythonFieldBoundedPropagator {
      public:
        PyObject_HEAD
        PythonFieldBoundedPropagator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PythonFieldBoundedPropagator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonFieldBoundedPropagator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonFieldBoundedPropagator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
