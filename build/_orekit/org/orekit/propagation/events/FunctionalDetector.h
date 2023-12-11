#ifndef org_orekit_propagation_events_FunctionalDetector_H
#define org_orekit_propagation_events_FunctionalDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class FunctionalDetector;
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

        class FunctionalDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_g_1bbf81d80c47ecdd,
            mid_create_0e4ff63693df6596,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FunctionalDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FunctionalDetector(const FunctionalDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          FunctionalDetector();

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
        extern PyType_Def PY_TYPE_DEF(FunctionalDetector);
        extern PyTypeObject *PY_TYPE(FunctionalDetector);

        class t_FunctionalDetector {
        public:
          PyObject_HEAD
          FunctionalDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FunctionalDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FunctionalDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FunctionalDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
