#ifndef org_orekit_propagation_events_FieldEventState_H
#define org_orekit_propagation_events_FieldEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace sampling {
        class FieldOrekitStepInterpolator;
      }
      namespace events {
        class FieldEventState$EventOccurrence;
        class FieldEventDetector;
      }
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
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
  namespace orekit {
    namespace propagation {
      namespace events {

        class FieldEventState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2ffeff0ffaf1deef,
            mid_doEvent_f05b1228908fdafd,
            mid_evaluateStep_5c5863fec6dd24f0,
            mid_getEventDate_f1fe4daf77c66560,
            mid_getEventDetector_07d9256595c42b86,
            mid_getPendingEvent_89b302893bdbe1f1,
            mid_init_811e49dad2467b67,
            mid_reinitializeBegin_c006764357a9d9b2,
            mid_tryAdvance_d2e09743b2212992,
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

          FieldEventState(const ::org::orekit::propagation::events::FieldEventDetector &);

          ::org::orekit::propagation::events::FieldEventState$EventOccurrence doEvent(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          jboolean evaluateStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator &) const;
          ::org::orekit::time::FieldAbsoluteDate getEventDate() const;
          ::org::orekit::propagation::events::FieldEventDetector getEventDetector() const;
          jboolean getPendingEvent() const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          void reinitializeBegin(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator &) const;
          jboolean tryAdvance(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(FieldEventState);
        extern PyTypeObject *PY_TYPE(FieldEventState);

        class t_FieldEventState {
        public:
          PyObject_HEAD
          FieldEventState object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_FieldEventState *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldEventState&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldEventState&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
