#ifndef org_hipparchus_ode_events_DetectorBasedEventState_H
#define org_hipparchus_ode_events_DetectorBasedEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        class ODEStateInterpolator;
      }
      namespace events {
        class EventState;
        class ODEEventDetector;
        class EventOccurrence;
      }
      class ODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
            mid_init$_b3037e2992b522fb,
            mid_doEvent_1eca994d89f760c7,
            mid_evaluateStep_f2bd5620f6269916,
            mid_getEventDetector_4cf067cf8dc74d67,
            mid_getEventTime_b74f83833fdad017,
            mid_init_a7556bd72cab73f1,
            mid_reinitializeBegin_197c5aaefd855810,
            mid_tryAdvance_709063baedbc9642,
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
