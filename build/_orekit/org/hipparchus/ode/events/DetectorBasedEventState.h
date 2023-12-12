#ifndef org_hipparchus_ode_events_DetectorBasedEventState_H
#define org_hipparchus_ode_events_DetectorBasedEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
    }
    namespace ode {
      namespace sampling {
        class ODEStateInterpolator;
      }
      namespace events {
        class EventState;
        class EventOccurrence;
        class ODEEventDetector;
      }
      class ODEStateAndDerivative;
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
            mid_init$_a2423f3286456e55,
            mid_doEvent_6006b945607419cb,
            mid_evaluateStep_8380759ad65b5b06,
            mid_getEventDetector_4e8fbf7207a2f82a,
            mid_getEventTime_557b8123390d8d0c,
            mid_init_7e69c83de8052a2b,
            mid_reinitializeBegin_b272ebb5ead79c81,
            mid_tryAdvance_0c59e8c3e20edac8,
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
