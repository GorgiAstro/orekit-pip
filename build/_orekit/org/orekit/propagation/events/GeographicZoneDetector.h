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
            mid_init$_8e6e7fdc773af1b1,
            mid_init$_138030571468d4c5,
            mid_g_432f3d328c15ec82,
            mid_getBody_6f78da94fd048d9d,
            mid_getMargin_dff5885c2c873297,
            mid_getZone_5a6ba0b36fb0268c,
            mid_withMargin_a856946e5d132bd1,
            mid_create_81d7f5811fc3c1a9,
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
