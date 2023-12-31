#ifndef org_orekit_propagation_events_EventSlopeFilter_H
#define org_orekit_propagation_events_EventSlopeFilter_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FilterType;
        class EventDetector;
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

        class EventSlopeFilter : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_ad8592156f0d09e7,
            mid_g_a17ea857ce74d258,
            mid_getDetector_9ada55f07f5a223c,
            mid_getFilter_1ad5d92370feb87a,
            mid_init_2d7f9a496c7e9781,
            mid_create_94951659c0c458e9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EventSlopeFilter(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EventSlopeFilter(const EventSlopeFilter& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          EventSlopeFilter(const ::org::orekit::propagation::events::EventDetector &, const ::org::orekit::propagation::events::FilterType &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::propagation::events::EventDetector getDetector() const;
          ::org::orekit::propagation::events::FilterType getFilter() const;
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
        extern PyType_Def PY_TYPE_DEF(EventSlopeFilter);
        extern PyTypeObject *PY_TYPE(EventSlopeFilter);

        class t_EventSlopeFilter {
        public:
          PyObject_HEAD
          EventSlopeFilter object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EventSlopeFilter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EventSlopeFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EventSlopeFilter&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
