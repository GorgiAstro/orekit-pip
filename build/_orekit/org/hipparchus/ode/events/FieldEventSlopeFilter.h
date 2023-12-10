#ifndef org_hipparchus_ode_events_FieldEventSlopeFilter_H
#define org_hipparchus_ode_events_FieldEventSlopeFilter_H

#include "org/hipparchus/ode/events/AbstractFieldODEDetector.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        class FilterType;
        class FieldODEEventDetector;
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
            mid_init$_e397e577465cf077,
            mid_g_ca2be72fa188dbd5,
            mid_getDetector_da01eb6db2e32536,
            mid_init_e6d23212b178b64e,
            mid_create_2ea6f0c8aa0e16b0,
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
