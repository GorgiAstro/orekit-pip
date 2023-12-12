#ifndef org_orekit_propagation_events_HaloXZPlaneCrossingDetector_H
#define org_orekit_propagation_events_HaloXZPlaneCrossingDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class HaloXZPlaneCrossingDetector;
      }
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
            mid_init$_ab23f4ae0fb33968,
            mid_g_1bbf81d80c47ecdd,
            mid_create_07b52a795a98dfa4,
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
