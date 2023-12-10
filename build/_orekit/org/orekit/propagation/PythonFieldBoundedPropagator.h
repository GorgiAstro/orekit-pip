#ifndef org_orekit_propagation_PythonFieldBoundedPropagator_H
#define org_orekit_propagation_PythonFieldBoundedPropagator_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      class FieldBoundedPropagator;
      namespace sampling {
        class FieldStepHandlerMultiplexer;
      }
      class FieldSpacecraftState;
      class FieldEphemerisGenerator;
      class FieldAdditionalStateProvider;
      namespace events {
        class FieldEventDetector;
      }
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
          mid_init$_0fa09c18fee449d5,
          mid_addAdditionalStateProvider_2c8cec257f03501f,
          mid_addEventDetector_f929ebd2a84dbfe7,
          mid_clearEventsDetectors_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getAdditionalStateProviders_2afa36052df4765d,
          mid_getAttitudeProvider_a904f3d015a354a0,
          mid_getEphemerisGenerator_54ac43f1e933cf20,
          mid_getEventsDetectors_37528d110cff6b74,
          mid_getFrame_b86f9f61d97a7244,
          mid_getInitialState_02cea343d9f71933,
          mid_getManagedAdditionalStates_692f4257baa8d3c3,
          mid_getMaxDate_51da00d5b8a3b5df,
          mid_getMinDate_51da00d5b8a3b5df,
          mid_getMultiplexer_805c1ec2ab9b09dd,
          mid_getPVCoordinates_2cdae1c350dc3e9a,
          mid_isAdditionalStateManaged_7edad2c2f64f4d68,
          mid_propagate_f6f1ea8aef3019eb,
          mid_propagate_fc770c29e3468de8,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          mid_resetInitialState_1463d3d0d52f94dd,
          mid_setAttitudeProvider_3cff7c75ea06698c,
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
