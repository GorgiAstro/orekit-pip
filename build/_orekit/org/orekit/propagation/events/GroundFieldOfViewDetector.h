#ifndef org_orekit_propagation_events_GroundFieldOfViewDetector_H
#define org_orekit_propagation_events_GroundFieldOfViewDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        class FieldOfView;
      }
    }
    namespace propagation {
      namespace events {
        class GroundFieldOfViewDetector;
      }
      class SpacecraftState;
    }
    namespace frames {
      class Frame;
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

        class GroundFieldOfViewDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_38a3c3a38499b272,
            mid_g_b443ba1cc794b916,
            mid_getFOV_6fdfc08762f52cd9,
            mid_getFrame_cb151471db4570f0,
            mid_create_7abdc816322416da,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GroundFieldOfViewDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GroundFieldOfViewDetector(const GroundFieldOfViewDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          GroundFieldOfViewDetector(const ::org::orekit::frames::Frame &, const ::org::orekit::geometry::fov::FieldOfView &);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::geometry::fov::FieldOfView getFOV() const;
          ::org::orekit::frames::Frame getFrame() const;
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
        extern PyType_Def PY_TYPE_DEF(GroundFieldOfViewDetector);
        extern PyTypeObject *PY_TYPE(GroundFieldOfViewDetector);

        class t_GroundFieldOfViewDetector {
        public:
          PyObject_HEAD
          GroundFieldOfViewDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_GroundFieldOfViewDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const GroundFieldOfViewDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const GroundFieldOfViewDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
