#ifndef org_hipparchus_ode_events_FieldEventSlopeFilter_H
#define org_hipparchus_ode_events_FieldEventSlopeFilter_H

#include "org/hipparchus/ode/events/AbstractFieldODEDetector.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace ode {
      class FieldODEStateAndDerivative;
      namespace events {
        class FieldODEEventDetector;
        class FilterType;
      }
    }
    class Field;
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

        class FieldEventSlopeFilter : public ::org::hipparchus::ode::events::AbstractFieldODEDetector {
         public:
          enum {
            mid_init$_8edc6a8bb7ed5c55,
            mid_g_2fe24792561bd145,
            mid_getDetector_ef99357700ee5799,
            mid_init_81b5dd1fb920fdc1,
            mid_create_e6c26a872f3eba32,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldEventSlopeFilter(jobject obj) : ::org::hipparchus::ode::events::AbstractFieldODEDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldEventSlopeFilter(const FieldEventSlopeFilter& obj) : ::org::hipparchus::ode::events::AbstractFieldODEDetector(obj) {}

          FieldEventSlopeFilter(const ::org::hipparchus::Field &, const ::org::hipparchus::ode::events::FieldODEEventDetector &, const ::org::hipparchus::ode::events::FilterType &);

          ::org::hipparchus::CalculusFieldElement g(const ::org::hipparchus::ode::FieldODEStateAndDerivative &) const;
          ::org::hipparchus::ode::events::FieldODEEventDetector getDetector() const;
          void init(const ::org::hipparchus::ode::FieldODEStateAndDerivative &, const ::org::hipparchus::CalculusFieldElement &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldEventSlopeFilter);
        extern PyTypeObject *PY_TYPE(FieldEventSlopeFilter);

        class t_FieldEventSlopeFilter {
        public:
          PyObject_HEAD
          FieldEventSlopeFilter object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_FieldEventSlopeFilter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldEventSlopeFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldEventSlopeFilter&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
