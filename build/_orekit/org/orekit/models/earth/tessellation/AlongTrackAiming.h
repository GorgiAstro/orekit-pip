#ifndef org_orekit_models_earth_tessellation_AlongTrackAiming_H
#define org_orekit_models_earth_tessellation_AlongTrackAiming_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {
          class TileAiming;
        }
      }
    }
    namespace bodies {
      class OneAxisEllipsoid;
      class GeodeticPoint;
    }
    namespace orbits {
      class Orbit;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          class AlongTrackAiming : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ad9ae6d9b489002f,
              mid_alongTileDirection_c57b22dac91cacbc,
              mid_getSingularPoints_a6156df500549a58,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AlongTrackAiming(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AlongTrackAiming(const AlongTrackAiming& obj) : ::java::lang::Object(obj) {}

            AlongTrackAiming(const ::org::orekit::bodies::OneAxisEllipsoid &, const ::org::orekit::orbits::Orbit &, jboolean);

            ::org::hipparchus::geometry::euclidean::threed::Vector3D alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::bodies::GeodeticPoint &) const;
            ::java::util::List getSingularPoints() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {
          extern PyType_Def PY_TYPE_DEF(AlongTrackAiming);
          extern PyTypeObject *PY_TYPE(AlongTrackAiming);

          class t_AlongTrackAiming {
          public:
            PyObject_HEAD
            AlongTrackAiming object;
            static PyObject *wrap_Object(const AlongTrackAiming&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
