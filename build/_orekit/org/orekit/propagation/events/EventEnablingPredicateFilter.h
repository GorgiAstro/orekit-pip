#ifndef org_orekit_propagation_events_EventEnablingPredicateFilter_H
#define org_orekit_propagation_events_EventEnablingPredicateFilter_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
        class EventEnablingPredicateFilter;
        class EnablingPredicate;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
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

        class EventEnablingPredicateFilter : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_0d6de5e0054391e3,
            mid_g_a17ea857ce74d258,
            mid_getDetector_9ada55f07f5a223c,
            mid_init_2d7f9a496c7e9781,
            mid_create_73ec0c06cb6291a8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EventEnablingPredicateFilter(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EventEnablingPredicateFilter(const EventEnablingPredicateFilter& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          EventEnablingPredicateFilter(const ::org::orekit::propagation::events::EventDetector &, const ::org::orekit::propagation::events::EnablingPredicate &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::propagation::events::EventDetector getDetector() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(EventEnablingPredicateFilter);
        extern PyTypeObject *PY_TYPE(EventEnablingPredicateFilter);

        class t_EventEnablingPredicateFilter {
        public:
          PyObject_HEAD
          EventEnablingPredicateFilter object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EventEnablingPredicateFilter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EventEnablingPredicateFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EventEnablingPredicateFilter&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
