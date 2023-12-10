#ifndef org_hipparchus_ode_events_EventSlopeFilter_H
#define org_hipparchus_ode_events_EventSlopeFilter_H

#include "org/hipparchus/ode/events/AbstractODEDetector.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      class ODEStateAndDerivative;
      namespace events {
        class FilterType;
        class ODEEventDetector;
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

        class EventSlopeFilter : public ::org::hipparchus::ode::events::AbstractODEDetector {
         public:
          enum {
            mid_init$_4a7d9c21a0b13716,
            mid_g_021b54f582f9e537,
            mid_getDetector_d3000cf67fb1b23b,
            mid_init_5aaadc62bce8a394,
            mid_create_957305d388f058d5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EventSlopeFilter(jobject obj) : ::org::hipparchus::ode::events::AbstractODEDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EventSlopeFilter(const EventSlopeFilter& obj) : ::org::hipparchus::ode::events::AbstractODEDetector(obj) {}

          EventSlopeFilter(const ::org::hipparchus::ode::events::ODEEventDetector &, const ::org::hipparchus::ode::events::FilterType &);

          jdouble g(const ::org::hipparchus::ode::ODEStateAndDerivative &) const;
          ::org::hipparchus::ode::events::ODEEventDetector getDetector() const;
          void init(const ::org::hipparchus::ode::ODEStateAndDerivative &, jdouble) const;
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
