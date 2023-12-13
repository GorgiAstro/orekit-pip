#ifndef org_orekit_propagation_events_HaloXZPlaneCrossingDetector_H
#define org_orekit_propagation_events_HaloXZPlaneCrossingDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class HaloXZPlaneCrossingDetector;
      }
      class SpacecraftState;
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
  namespace orekit {
    namespace propagation {
      namespace events {

        class HaloXZPlaneCrossingDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_369b4c97255d5afa,
            mid_g_a17ea857ce74d258,
            mid_create_b260a96814d5039d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit HaloXZPlaneCrossingDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          HaloXZPlaneCrossingDetector(const HaloXZPlaneCrossingDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          HaloXZPlaneCrossingDetector(jdouble, jdouble);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(HaloXZPlaneCrossingDetector);
        extern PyTypeObject *PY_TYPE(HaloXZPlaneCrossingDetector);

        class t_HaloXZPlaneCrossingDetector {
        public:
          PyObject_HEAD
          HaloXZPlaneCrossingDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_HaloXZPlaneCrossingDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const HaloXZPlaneCrossingDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const HaloXZPlaneCrossingDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
