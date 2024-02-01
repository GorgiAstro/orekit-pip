#ifndef org_hipparchus_ode_events_FieldEventSlopeFilter_H
#define org_hipparchus_ode_events_FieldEventSlopeFilter_H

#include "org/hipparchus/ode/events/AbstractFieldODEDetector.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class FieldODEEventDetector;
        class FilterType;
      }
      class FieldODEStateAndDerivative;
    }
    class Field;
    class CalculusFieldElement;
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
            mid_init$_27f5b9f874ab26c9,
            mid_g_455ff24598d85771,
            mid_getDetector_99863455dd1dde70,
            mid_init_2a077928ff78cfcb,
            mid_create_7ae46bf9328f5ad7,
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
