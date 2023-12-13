#ifndef org_orekit_propagation_events_FieldEventState_H
#define org_orekit_propagation_events_FieldEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class FieldEventState$EventOccurrence;
      }
      class FieldSpacecraftState;
      namespace sampling {
        class FieldOrekitStepInterpolator;
      }
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
            mid_init$_ca1d91eb6a3ce219,
            mid_doEvent_a0a44322b5800790,
            mid_evaluateStep_ed8f8b343c93190f,
            mid_getEventDate_fa23a4301b9c83e7,
            mid_getEventDetector_e78af9d734a5fbe1,
            mid_getPendingEvent_9ab94ac1dc23b105,
            mid_init_96d019f392abf918,
            mid_reinitializeBegin_fa82adff12d70536,
            mid_tryAdvance_a2d04bc21b332743,
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
