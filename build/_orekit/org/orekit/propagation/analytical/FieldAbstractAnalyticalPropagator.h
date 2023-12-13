#ifndef org_orekit_propagation_analytical_FieldAbstractAnalyticalPropagator_H
#define org_orekit_propagation_analytical_FieldAbstractAnalyticalPropagator_H

#include "org/orekit/propagation/FieldAbstractPropagator.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
      class FieldEphemerisGenerator;
    }
    namespace utils {
      class FieldPVCoordinatesProvider;
      class ParameterDriversProvider;
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
            mid_addEventDetector_ca1d91eb6a3ce219,
            mid_clearEventsDetectors_a1fa5dae97ea5ed2,
            mid_getEphemerisGenerator_afe29c55086c638f,
            mid_getEventsDetectors_cb666ea1a15f5210,
            mid_getPvProvider_0d134b6a2504033c,
            mid_propagate_44f88f604c4d00f1,
            mid_acceptStep_5fb3751baed4c305,
            mid_getMass_140b8964300ddedf,
            mid_basicPropagate_70fecd201ca47d3b,
            mid_resetIntermediateState_871885b409df9d57,
            mid_propagateOrbit_f34a7a94e111b112,
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
