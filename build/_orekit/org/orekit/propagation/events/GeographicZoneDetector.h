#ifndef org_orekit_propagation_events_GeographicZoneDetector_H
#define org_orekit_propagation_events_GeographicZoneDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
    }
    namespace propagation {
      class SpacecraftState;
      namespace events {
        class GeographicZoneDetector;
      }
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
            mid_init$_fe907d784096cf52,
            mid_init$_f4844a1bc23e7008,
            mid_g_b443ba1cc794b916,
            mid_getBody_6f2d25f6f71d01ca,
            mid_getMargin_9981f74b2d109da6,
            mid_getZone_17b2f5c9c3ed683f,
            mid_withMargin_3ead346dc2613e5a,
            mid_create_0272f2dc6ff8f89b,
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
