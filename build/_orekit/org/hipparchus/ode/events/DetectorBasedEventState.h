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
        class EventOccurrence;
        class ODEEventDetector;
        class EventState;
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
            mid_init$_4cad2771a2849140,
            mid_doEvent_85cb4cee6c2ee34d,
            mid_evaluateStep_a2d4078e6169b71f,
            mid_getEventDetector_da847cbf3fa2cbbf,
            mid_getEventTime_9981f74b2d109da6,
            mid_init_25005604bcb94d07,
            mid_reinitializeBegin_4f79f5048423f318,
            mid_tryAdvance_62fc75c986772aad,
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
