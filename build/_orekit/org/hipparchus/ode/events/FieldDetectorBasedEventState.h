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
      class FieldODEStateAndDerivative;
      namespace sampling {
        class FieldODEStateInterpolator;
      }
    }
    namespace exception {
      class MathIllegalArgumentException;
      class MathIllegalStateException;
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
            mid_init$_7951513ad7dd1f46,
            mid_doEvent_0c16f01e69648df7,
            mid_evaluateStep_568d6c99e8870196,
            mid_getEventDetector_b8a6828b51da0153,
            mid_getEventTime_613c8f46c659f636,
            mid_init_f808a4f21f8be825,
            mid_reinitializeBegin_e7d5f5a81e2a2b8e,
            mid_tryAdvance_84ac34d0cc679299,
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
