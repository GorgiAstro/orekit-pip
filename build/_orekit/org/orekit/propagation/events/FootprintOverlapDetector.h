#ifndef org_orekit_propagation_events_FootprintOverlapDetector_H
#define org_orekit_propagation_events_FootprintOverlapDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
      class OneAxisEllipsoid;
    }
    namespace geometry {
      namespace fov {
        class FieldOfView;
      }
    }
    namespace propagation {
      namespace events {
        class FootprintOverlapDetector;
      }
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {
          class SphericalPolygonsSet;
        }
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

        class FootprintOverlapDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_8e55a16f0253c2cf,
            mid_g_b443ba1cc794b916,
            mid_getBody_6f2d25f6f71d01ca,
            mid_getFOV_6fdfc08762f52cd9,
            mid_getZone_17b2f5c9c3ed683f,
            mid_create_62127083ddf4e895,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FootprintOverlapDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FootprintOverlapDetector(const FootprintOverlapDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          FootprintOverlapDetector(const ::org::orekit::geometry::fov::FieldOfView &, const ::org::orekit::bodies::OneAxisEllipsoid &, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet &, jdouble);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::bodies::BodyShape getBody() const;
          ::org::orekit::geometry::fov::FieldOfView getFOV() const;
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet getZone() const;
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
        extern PyType_Def PY_TYPE_DEF(FootprintOverlapDetector);
        extern PyTypeObject *PY_TYPE(FootprintOverlapDetector);

        class t_FootprintOverlapDetector {
        public:
          PyObject_HEAD
          FootprintOverlapDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FootprintOverlapDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FootprintOverlapDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FootprintOverlapDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
