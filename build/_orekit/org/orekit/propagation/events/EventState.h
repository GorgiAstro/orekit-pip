#ifndef org_orekit_propagation_events_EventState_H
#define org_orekit_propagation_events_EventState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
        class EventState$EventOccurrence;
      }
      namespace sampling {
        class OrekitStepInterpolator;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class EventState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_efb7003d866d4523,
            mid_doEvent_0ff7e42fc3e2c973,
            mid_evaluateStep_f179962aca2c851b,
            mid_getEventDate_85703d13e302437e,
            mid_getEventDetector_d73bb985ffde4156,
            mid_init_826b4eda94da4e78,
            mid_reinitializeBegin_aa75aa80a734fb3b,
            mid_tryAdvance_c5785ef0069e6131,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EventState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EventState(const EventState& obj) : ::java::lang::Object(obj) {}

          EventState(const ::org::orekit::propagation::events::EventDetector &);

          ::org::orekit::propagation::events::EventState$EventOccurrence doEvent(const ::org::orekit::propagation::SpacecraftState &) const;
          jboolean evaluateStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator &) const;
          ::org::orekit::time::AbsoluteDate getEventDate() const;
          ::org::orekit::propagation::events::EventDetector getEventDetector() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
          void reinitializeBegin(const ::org::orekit::propagation::sampling::OrekitStepInterpolator &) const;
          jboolean tryAdvance(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::sampling::OrekitStepInterpolator &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(EventState);
        extern PyTypeObject *PY_TYPE(EventState);

        class t_EventState {
        public:
          PyObject_HEAD
          EventState object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EventState *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EventState&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EventState&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
