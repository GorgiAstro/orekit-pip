#ifndef org_hipparchus_ode_events_FieldEventState_H
#define org_hipparchus_ode_events_FieldEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class FieldEventOccurrence;
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

        class FieldEventState : public ::java::lang::Object {
         public:
          enum {
            mid_doEvent_bb679c793e33809e,
            mid_evaluateStep_0c45e83e8206e2a1,
            mid_getEventTime_08d37e3f77b7239d,
            mid_init_2a077928ff78cfcb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldEventState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldEventState(const FieldEventState& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::ode::events::FieldEventOccurrence doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative &) const;
          jboolean evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator &) const;
          ::org::hipparchus::CalculusFieldElement getEventTime() const;
          void init(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldEventState);
        extern PyTypeObject *PY_TYPE(FieldEventState);

        class t_FieldEventState {
        public:
          PyObject_HEAD
          FieldEventState object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldEventState *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldEventState&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldEventState&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
