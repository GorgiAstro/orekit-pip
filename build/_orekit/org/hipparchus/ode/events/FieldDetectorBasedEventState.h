#ifndef org_hipparchus_ode_events_FieldDetectorBasedEventState_H
#define org_hipparchus_ode_events_FieldDetectorBasedEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class FieldODEEventDetector;
        class FieldEventOccurrence;
        class FieldEventState;
      }
      namespace sampling {
        class FieldODEStateInterpolator;
      }
      class FieldODEStateAndDerivative;
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
            mid_init$_1ffd39265a0e340d,
            mid_doEvent_bb679c793e33809e,
            mid_evaluateStep_0c45e83e8206e2a1,
            mid_getEventDetector_99863455dd1dde70,
            mid_getEventTime_08d37e3f77b7239d,
            mid_init_2a077928ff78cfcb,
            mid_reinitializeBegin_d5c9193ad6d936b3,
            mid_tryAdvance_b9fb6e2da7f242f8,
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
