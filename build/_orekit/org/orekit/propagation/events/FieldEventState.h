#ifndef org_orekit_propagation_events_FieldEventState_H
#define org_orekit_propagation_events_FieldEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class FieldOrekitStepInterpolator;
      }
      class FieldSpacecraftState;
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
            mid_init$_f929ebd2a84dbfe7,
            mid_doEvent_64e3f7fbad9633b0,
            mid_evaluateStep_9e297a99a072e460,
            mid_getEventDate_51da00d5b8a3b5df,
            mid_getEventDetector_4fe06ecc019ea51d,
            mid_getPendingEvent_b108b35ef48e27bd,
            mid_init_8e8de2be1664674a,
            mid_reinitializeBegin_edb529c141e8d4a9,
            mid_tryAdvance_0c4e1f72634cc9b1,
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
