#ifndef org_orekit_propagation_analytical_FieldAbstractAnalyticalPropagator_H
#define org_orekit_propagation_analytical_FieldAbstractAnalyticalPropagator_H

#include "org/orekit/propagation/FieldAbstractPropagator.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
      }
      class FieldEphemerisGenerator;
      class FieldSpacecraftState;
    }
    namespace utils {
      class ParameterDriversProvider;
      class FieldPVCoordinatesProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
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
            mid_addEventDetector_1843b26af41f9c8e,
            mid_clearEventsDetectors_7ae3461a92a43152,
            mid_getEphemerisGenerator_a9ea70419e870eb4,
            mid_getEventsDetectors_cfcfd130f9013e3e,
            mid_getPvProvider_d265659654cb169e,
            mid_propagate_195e701ebc75aca3,
            mid_acceptStep_e9cb6d3ab49cffdb,
            mid_getMass_7bc0fd76ee915b72,
            mid_resetIntermediateState_c76342d42407aa3d,
            mid_propagateOrbit_edf76d94987be4ff,
            mid_basicPropagate_85b5a3e9101d7c1f,
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
