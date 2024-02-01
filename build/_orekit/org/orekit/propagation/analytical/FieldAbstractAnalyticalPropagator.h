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
      namespace events {
        class FieldEventDetector;
      }
      class FieldEphemerisGenerator;
      class FieldSpacecraftState;
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
            mid_addEventDetector_bb8991c4a46cf56d,
            mid_clearEventsDetectors_ff7cb6c242604316,
            mid_getEphemerisGenerator_96c2c30a0b0ad9e4,
            mid_getEventsDetectors_3bfef5c77ceb081a,
            mid_getPvProvider_ed886b943b6de8d9,
            mid_propagate_bcf793a6168805e3,
            mid_getMass_cf010978f3c5a913,
            mid_acceptStep_b3f40e8786c1fe19,
            mid_propagateOrbit_78985b34baac5c8e,
            mid_basicPropagate_fb689a9c0f30b938,
            mid_resetIntermediateState_e90aea08a7a0ab5e,
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
