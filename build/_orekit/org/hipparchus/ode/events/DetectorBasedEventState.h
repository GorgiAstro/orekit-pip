#ifndef org_hipparchus_ode_events_DetectorBasedEventState_H
#define org_hipparchus_ode_events_DetectorBasedEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class EventState;
        class EventOccurrence;
        class ODEEventDetector;
      }
      namespace sampling {
        class ODEStateInterpolator;
      }
      class ODEStateAndDerivative;
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
            mid_init$_95ad63d6e12b665a,
            mid_doEvent_786b2ff82ce4b0ff,
            mid_evaluateStep_31e05790c4db57cc,
            mid_getEventDetector_8a6f4259e80e096f,
            mid_getEventTime_456d9a2f64d6b28d,
            mid_init_85808f3d6374b436,
            mid_reinitializeBegin_7f7ea329b6669cd2,
            mid_tryAdvance_6a90482ad4740a55,
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
