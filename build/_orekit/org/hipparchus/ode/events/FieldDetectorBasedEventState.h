#ifndef org_hipparchus_ode_events_FieldDetectorBasedEventState_H
#define org_hipparchus_ode_events_FieldDetectorBasedEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class FieldEventState;
        class FieldODEEventDetector;
        class FieldEventOccurrence;
      }
      namespace sampling {
        class FieldODEStateInterpolator;
      }
      class FieldODEStateAndDerivative;
    }
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
    class CalculusFieldElement;
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

        class FieldDetectorBasedEventState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_51c8f19515e56fc6,
            mid_doEvent_9a5ac4ec8957dcbf,
            mid_evaluateStep_68d98c2570e5130d,
            mid_getEventDetector_da01eb6db2e32536,
            mid_getEventTime_e6d4d3215c30992a,
            mid_init_e6d23212b178b64e,
            mid_reinitializeBegin_bcb27fe1570581e2,
            mid_tryAdvance_1de30ef49dbfdc7b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldDetectorBasedEventState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldDetectorBasedEventState(const FieldDetectorBasedEventState& obj) : ::java::lang::Object(obj) {}

          FieldDetectorBasedEventState(const ::org::hipparchus::ode::events::FieldODEEventDetector &);

          ::org::hipparchus::ode::events::FieldEventOccurrence doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative &) const;
          jboolean evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator &) const;
          ::org::hipparchus::ode::events::FieldODEEventDetector getEventDetector() const;
          ::org::hipparchus::CalculusFieldElement getEventTime() const;
          void init(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::CalculusFieldElement &) const;
          void reinitializeBegin(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator &) const;
          jboolean tryAdvance(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldDetectorBasedEventState);
        extern PyTypeObject *PY_TYPE(FieldDetectorBasedEventState);

        class t_FieldDetectorBasedEventState {
        public:
          PyObject_HEAD
          FieldDetectorBasedEventState object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldDetectorBasedEventState *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldDetectorBasedEventState&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldDetectorBasedEventState&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
