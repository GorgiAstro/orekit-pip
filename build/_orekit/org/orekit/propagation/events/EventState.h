#ifndef org_orekit_propagation_events_EventState_H
#define org_orekit_propagation_events_EventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
    }
  }
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventState$EventOccurrence;
        class EventDetector;
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
            mid_init$_d5d8be0538a03d97,
            mid_doEvent_92392b21662535dc,
            mid_evaluateStep_cf0615f6b6c30b8a,
            mid_getEventDate_80e11148db499dda,
            mid_getEventDetector_ebd847a60689999d,
            mid_init_14deaae988292d42,
            mid_reinitializeBegin_9db9d9fe85cac7f9,
            mid_tryAdvance_22e96c41589acd28,
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
