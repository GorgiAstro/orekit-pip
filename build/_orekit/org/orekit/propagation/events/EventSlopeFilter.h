#ifndef org_orekit_propagation_events_EventSlopeFilter_H
#define org_orekit_propagation_events_EventSlopeFilter_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class EventDetector;
        class FilterType;
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
            mid_init$_2e421142af66b60c,
            mid_g_1bbf81d80c47ecdd,
            mid_getDetector_0701b00b25822fff,
            mid_getFilter_2a6e755e9e4e94fa,
            mid_init_0472264ad6f40bc2,
            mid_create_c3f06491636058be,
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
