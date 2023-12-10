#ifndef org_orekit_propagation_FieldAbstractPropagator_H
#define org_orekit_propagation_FieldAbstractPropagator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    class Field;
  }
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
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
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

      class FieldAbstractPropagator : public ::java::lang::Object {
       public:
        enum {
          mid_addAdditionalStateProvider_2c8cec257f03501f,
          mid_getAdditionalStateProviders_2afa36052df4765d,
          mid_getAttitudeProvider_a904f3d015a354a0,
          mid_getField_5b28be2d3632a5dc,
          mid_getFrame_b86f9f61d97a7244,
          mid_getInitialState_02cea343d9f71933,
          mid_getManagedAdditionalStates_692f4257baa8d3c3,
          mid_getMultiplexer_805c1ec2ab9b09dd,
          mid_getPVCoordinates_2cdae1c350dc3e9a,
          mid_isAdditionalStateManaged_7edad2c2f64f4d68,
          mid_propagate_f6f1ea8aef3019eb,
          mid_resetInitialState_1463d3d0d52f94dd,
          mid_setAttitudeProvider_3cff7c75ea06698c,
          mid_updateAdditionalStates_25e81e971666cba6,
          mid_initializePropagation_0fa09c18fee449d5,
          mid_initializeAdditionalStates_d17277e76a7ead14,
          mid_setStartDate_d17277e76a7ead14,
          mid_updateUnmanagedStates_25e81e971666cba6,
          mid_getStartDate_51da00d5b8a3b5df,
          mid_stateChanged_1463d3d0d52f94dd,
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
