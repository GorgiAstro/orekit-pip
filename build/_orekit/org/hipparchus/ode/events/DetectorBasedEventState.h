#ifndef org_hipparchus_ode_events_DetectorBasedEventState_H
#define org_hipparchus_ode_events_DetectorBasedEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class EventOccurrence;
        class EventState;
        class ODEEventDetector;
      }
      class ODEStateAndDerivative;
      namespace sampling {
        class ODEStateInterpolator;
      }
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
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
  namespace hipparchus {
    namespace ode {
      namespace events {

        class DetectorBasedEventState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1acd9de872b3c9bd,
            mid_doEvent_f67305c017c9762e,
            mid_evaluateStep_37ca30d971b4fe79,
            mid_getEventDetector_d3000cf67fb1b23b,
            mid_getEventTime_dff5885c2c873297,
            mid_init_5aaadc62bce8a394,
            mid_reinitializeBegin_8c00288d760ba078,
            mid_tryAdvance_094255e133ccdcf3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DetectorBasedEventState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DetectorBasedEventState(const DetectorBasedEventState& obj) : ::java::lang::Object(obj) {}

          DetectorBasedEventState(const ::org::hipparchus::ode::events::ODEEventDetector &);

          ::org::hipparchus::ode::events::EventOccurrence doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
          jboolean evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator &) const;
          ::org::hipparchus::ode::events::ODEEventDetector getEventDetector() const;
          jdouble getEventTime() const;
          void init(const ::org::hipparchus::ode::ODEStateAndDerivative &, jdouble) const;
          void reinitializeBegin(const ::org::hipparchus::ode::sampling::ODEStateInterpolator &) const;
          jboolean tryAdvance(const ::org::hipparchus::ode::ODEStateAndDerivative &, const ::org::hipparchus::ode::sampling::ODEStateInterpolator &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(DetectorBasedEventState);
        extern PyTypeObject *PY_TYPE(DetectorBasedEventState);

        class t_DetectorBasedEventState {
        public:
          PyObject_HEAD
          DetectorBasedEventState object;
          static PyObject *wrap_Object(const DetectorBasedEventState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
