#ifndef org_hipparchus_ode_events_FieldDetectorBasedEventState_H
#define org_hipparchus_ode_events_FieldDetectorBasedEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace exception {
      class MathIllegalStateException;
      class MathIllegalArgumentException;
    }
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
            mid_init$_cdac85baa1ddabb0,
            mid_doEvent_bdf842cbe214f2d2,
            mid_evaluateStep_92ced200eac51ce8,
            mid_getEventDetector_ef99357700ee5799,
            mid_getEventTime_eba8e72a22c984ac,
            mid_init_81b5dd1fb920fdc1,
            mid_reinitializeBegin_f31e7e3a46e05334,
            mid_tryAdvance_228f4f91cc03b520,
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
