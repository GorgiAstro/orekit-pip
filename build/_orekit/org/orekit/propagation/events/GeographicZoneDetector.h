#ifndef org_orekit_propagation_events_GeographicZoneDetector_H
#define org_orekit_propagation_events_GeographicZoneDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class BodyShape;
    }
    namespace propagation {
      namespace events {
        class GeographicZoneDetector;
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

        class GeographicZoneDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_init$_bc1a55e394385453,
            mid_init$_e9509d28a9dc022e,
            mid_g_1bbf81d80c47ecdd,
            mid_getBody_f166528db337c659,
            mid_getMargin_557b8123390d8d0c,
            mid_getZone_1223d06efa3ccad7,
            mid_withMargin_86c82b696f99a1e1,
            mid_create_c137a22e12d2740e,
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
