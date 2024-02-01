#ifndef org_orekit_propagation_events_FieldEventState_H
#define org_orekit_propagation_events_FieldEventState_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      class MathRuntimeException;
    }
  }
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class FieldEventState$EventOccurrence;
      }
      namespace sampling {
        class FieldOrekitStepInterpolator;
      }
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
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
            mid_init$_bb8991c4a46cf56d,
            mid_doEvent_51a1afdc630db44c,
            mid_evaluateStep_321a11228d45c3a6,
            mid_getEventDate_1fea28374011eef5,
            mid_getEventDetector_3146cd1129cf853c,
            mid_getPendingEvent_eee3de00fe971136,
            mid_init_357211ab77703f3f,
            mid_reinitializeBegin_33c76379cdb8499a,
            mid_tryAdvance_af3e718ba412502f,
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
