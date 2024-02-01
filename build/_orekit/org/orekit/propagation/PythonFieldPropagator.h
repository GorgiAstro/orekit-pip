#ifndef org_orekit_propagation_PythonFieldPropagator_H
#define org_orekit_propagation_PythonFieldPropagator_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
      }
      class FieldEphemerisGenerator;
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

      class PythonFieldPropagator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_addAdditionalStateProvider_546488029ed6e282,
          mid_addEventDetector_bb8991c4a46cf56d,
          mid_clearEventsDetectors_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getAdditionalStateProviders_d751c1a57012b438,
          mid_getAttitudeProvider_2f73d1f4460b8d6c,
          mid_getEphemerisGenerator_96c2c30a0b0ad9e4,
          mid_getEventsDetectors_3bfef5c77ceb081a,
          mid_getFrame_cb151471db4570f0,
          mid_getInitialState_a74be2e38786f3b6,
          mid_getManagedAdditionalStates_f81c0644d57ae495,
          mid_getMultiplexer_8da2e06aa361bf03,
          mid_getPVCoordinates_1b1a4229447f7bf7,
          mid_isAdditionalStateManaged_df4c65b2aede5c41,
          mid_propagate_fb689a9c0f30b938,
          mid_propagate_bcf793a6168805e3,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          mid_resetInitialState_8062511934471166,
          mid_setAttitudeProvider_fddd0a7d9f33bafa,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonFieldPropagator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonFieldPropagator(const PythonFieldPropagator& obj) : ::java::lang::Object(obj) {}

        PythonFieldPropagator();

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
      extern PyType_Def PY_TYPE_DEF(PythonFieldPropagator);
      extern PyTypeObject *PY_TYPE(PythonFieldPropagator);

      class t_PythonFieldPropagator {
      public:
        PyObject_HEAD
        PythonFieldPropagator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PythonFieldPropagator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonFieldPropagator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonFieldPropagator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
