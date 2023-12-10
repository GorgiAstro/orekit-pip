#ifndef org_orekit_propagation_analytical_FieldAbstractAnalyticalPropagator_H
#define org_orekit_propagation_analytical_FieldAbstractAnalyticalPropagator_H

#include "org/orekit/propagation/FieldAbstractPropagator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace propagation {
      class FieldSpacecraftState;
      class FieldEphemerisGenerator;
      namespace events {
        class FieldEventDetector;
      }
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        class FieldAbstractAnalyticalPropagator : public ::org::orekit::propagation::FieldAbstractPropagator {
         public:
          enum {
            mid_addEventDetector_f929ebd2a84dbfe7,
            mid_clearEventsDetectors_0fa09c18fee449d5,
            mid_getEphemerisGenerator_54ac43f1e933cf20,
            mid_getEventsDetectors_37528d110cff6b74,
            mid_getPvProvider_d973c40fc0211a5b,
            mid_propagate_fc770c29e3468de8,
            mid_acceptStep_cd5c14894c08dcb4,
            mid_propagateOrbit_3de5e0312fd3e848,
            mid_getMass_2a5f05be83ff251d,
            mid_resetIntermediateState_33f1c56ea7775d4e,
            mid_basicPropagate_f6f1ea8aef3019eb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldAbstractAnalyticalPropagator(jobject obj) : ::org::orekit::propagation::FieldAbstractPropagator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldAbstractAnalyticalPropagator(const FieldAbstractAnalyticalPropagator& obj) : ::org::orekit::propagation::FieldAbstractPropagator(obj) {}

          void addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector &) const;
          void clearEventsDetectors() const;
          ::org::orekit::propagation::FieldEphemerisGenerator getEphemerisGenerator() const;
          ::java::util::Collection getEventsDetectors() const;
          ::org::orekit::utils::FieldPVCoordinatesProvider getPvProvider() const;
          ::org::orekit::propagation::FieldSpacecraftState propagate(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        extern PyType_Def PY_TYPE_DEF(FieldAbstractAnalyticalPropagator);
        extern PyTypeObject *PY_TYPE(FieldAbstractAnalyticalPropagator);

        class t_FieldAbstractAnalyticalPropagator {
        public:
          PyObject_HEAD
          FieldAbstractAnalyticalPropagator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldAbstractAnalyticalPropagator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldAbstractAnalyticalPropagator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldAbstractAnalyticalPropagator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
