#ifndef org_hipparchus_ode_events_FieldDetectorBasedEventState_H
#define org_hipparchus_ode_events_FieldDetectorBasedEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class FieldODEStateAndDerivative;
      namespace events {
        class FieldEventOccurrence;
        class FieldODEEventDetector;
        class FieldEventState;
      }
      namespace sampling {
        class FieldODEStateInterpolator;
      }
    }
    class CalculusFieldElement;
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

        class FieldDetectorBasedEventState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7d036dd73a796a18,
            mid_doEvent_0f4d16424f907056,
            mid_evaluateStep_ebd2aaa9f3eddd1a,
            mid_getEventDetector_12e77528668ead99,
            mid_getEventTime_81520b552cb3fa26,
            mid_init_55fdeef582303a99,
            mid_reinitializeBegin_bd804f650c074774,
            mid_tryAdvance_9830f84dd6c34f32,
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
