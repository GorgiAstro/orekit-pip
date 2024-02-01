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
            mid_init$_482ce33f82f91e55,
            mid_g_b443ba1cc794b916,
            mid_getDetector_ebd847a60689999d,
            mid_getFilter_25839fba67b73b37,
            mid_init_14deaae988292d42,
            mid_create_57e65758709f9697,
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
