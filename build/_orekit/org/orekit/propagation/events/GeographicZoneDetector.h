#ifndef org_orekit_propagation_events_GeographicZoneDetector_H
#define org_orekit_propagation_events_GeographicZoneDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class GeographicZoneDetector;
      }
      class SpacecraftState;
    }
    namespace bodies {
      class BodyShape;
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

        class GeographicZoneDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_3f8cca398652dcac,
            mid_init$_943820d6b2353729,
            mid_g_66a2f071e6ed0c06,
            mid_getBody_883d26889ee03ca8,
            mid_getMargin_456d9a2f64d6b28d,
            mid_getZone_b554ba4417ec0cb0,
            mid_withMargin_5f50bae2d0bd9755,
            mid_create_b47647f22aa8e7cc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GeographicZoneDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GeographicZoneDetector(const GeographicZoneDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          GeographicZoneDetector(const ::org::orekit::bodies::BodyShape &, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet &, jdouble);
          GeographicZoneDetector(jdouble, jdouble, const ::org::orekit::bodies::BodyShape &, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet &, jdouble);

          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::bodies::BodyShape getBody() const;
          jdouble getMargin() const;
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet getZone() const;
          GeographicZoneDetector withMargin(jdouble) const;
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
        extern PyType_Def PY_TYPE_DEF(GeographicZoneDetector);
        extern PyTypeObject *PY_TYPE(GeographicZoneDetector);

        class t_GeographicZoneDetector {
        public:
          PyObject_HEAD
          GeographicZoneDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_GeographicZoneDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const GeographicZoneDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const GeographicZoneDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
