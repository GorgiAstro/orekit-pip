#ifndef org_orekit_propagation_analytical_FieldAbstractAnalyticalPropagator_H
#define org_orekit_propagation_analytical_FieldAbstractAnalyticalPropagator_H

#include "org/orekit/propagation/FieldAbstractPropagator.h"

namespace org {
  namespace orekit {
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
    namespace utils {
      class ParameterDriversProvider;
      class FieldPVCoordinatesProvider;
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
            mid_addEventDetector_2ffeff0ffaf1deef,
            mid_clearEventsDetectors_0640e6acf969ed28,
            mid_getEphemerisGenerator_07866493eb3b3f17,
            mid_getEventsDetectors_12ee61573a18f417,
            mid_getPvProvider_dffb82756006eef9,
            mid_propagate_78f4b3ee8066e6b6,
            mid_propagateOrbit_ec5b52b8a8c77d72,
            mid_resetIntermediateState_585702d5a402c590,
            mid_getMass_b884068a2c99f6ca,
            mid_basicPropagate_5324cbf9e5ce58fe,
            mid_acceptStep_12abab85b89cc2d0,
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
