#ifndef org_orekit_propagation_events_FootprintOverlapDetector_H
#define org_orekit_propagation_events_FootprintOverlapDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class OneAxisEllipsoid;
      class BodyShape;
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
            mid_init$_244c55273fe6bb9d,
            mid_g_66a2f071e6ed0c06,
            mid_getBody_883d26889ee03ca8,
            mid_getFOV_f51bf66c035a133c,
            mid_getZone_b554ba4417ec0cb0,
            mid_create_77e4d91b625a79d6,
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
