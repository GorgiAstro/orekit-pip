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
            mid_init$_1d715fa3b7b756e1,
            mid_g_66a2f071e6ed0c06,
            mid_create_be9fff2230cd79f9,
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
