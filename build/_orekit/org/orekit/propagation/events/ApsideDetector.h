#ifndef org_orekit_propagation_events_ApsideDetector_H
#define org_orekit_propagation_events_ApsideDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace orbits {
      class Orbit;
    }
    namespace propagation {
      namespace events {
        class ApsideDetector;
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

        class ApsideDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_e5b8a6a44355183e,
            mid_init$_cabf1e33b54f56ee,
            mid_g_66a2f071e6ed0c06,
            mid_create_70aca8d6a1e7bff2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ApsideDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ApsideDetector(const ApsideDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          ApsideDetector(const ::org::orekit::orbits::Orbit &);
          ApsideDetector(jdouble, const ::org::orekit::orbits::Orbit &);

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
        extern PyType_Def PY_TYPE_DEF(ApsideDetector);
        extern PyTypeObject *PY_TYPE(ApsideDetector);

        class t_ApsideDetector {
        public:
          PyObject_HEAD
          ApsideDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ApsideDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ApsideDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ApsideDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
