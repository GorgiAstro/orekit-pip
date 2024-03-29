#ifndef org_hipparchus_ode_events_EventSlopeFilter_H
#define org_hipparchus_ode_events_EventSlopeFilter_H

#include "org/hipparchus/ode/events/AbstractODEDetector.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class ODEEventDetector;
        class FilterType;
      }
      class ODEStateAndDerivative;
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
            mid_init$_680da09f037488f6,
            mid_g_c9c83b182b4bb0ba,
            mid_getDetector_da847cbf3fa2cbbf,
            mid_init_25005604bcb94d07,
            mid_create_deadf5ed6b743e1b,
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
