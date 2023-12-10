#ifndef org_orekit_propagation_events_ApsideDetector_H
#define org_orekit_propagation_events_ApsideDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class ApsideDetector;
      }
    }
    namespace orbits {
      class Orbit;
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
            mid_init$_6219f6b430651d68,
            mid_init$_487615206f927568,
            mid_g_432f3d328c15ec82,
            mid_create_0efb55e20fece899,
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
