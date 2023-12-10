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
    namespace frames {
      class Frame;
    }
    namespace propagation {
      namespace events {
        class GroundFieldOfViewDetector;
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

        class GroundFieldOfViewDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_1159ffe950bd889c,
            mid_g_432f3d328c15ec82,
            mid_getFOV_8e0c5ec4b28dcc17,
            mid_getFrame_b86f9f61d97a7244,
            mid_create_ca163c3511aa8748,
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
