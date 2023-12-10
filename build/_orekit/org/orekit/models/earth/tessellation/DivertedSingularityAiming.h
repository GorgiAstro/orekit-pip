#ifndef org_orekit_models_earth_tessellation_DivertedSingularityAiming_H
#define org_orekit_models_earth_tessellation_DivertedSingularityAiming_H

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
      class GeodeticPoint;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
      namespace spherical {
        namespace twod {
          class SphericalPolygonsSet;
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

          class DivertedSingularityAiming : public ::java::lang::Object {
           public:
            enum {
              mid_init$_babed981d6ef92a1,
              mid_alongTileDirection_c57b22dac91cacbc,
              mid_getSingularPoints_a6156df500549a58,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DivertedSingularityAiming(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DivertedSingularityAiming(const DivertedSingularityAiming& obj) : ::java::lang::Object(obj) {}

            DivertedSingularityAiming(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet &);

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
          extern PyType_Def PY_TYPE_DEF(DivertedSingularityAiming);
          extern PyTypeObject *PY_TYPE(DivertedSingularityAiming);

          class t_DivertedSingularityAiming {
          public:
            PyObject_HEAD
            DivertedSingularityAiming object;
            static PyObject *wrap_Object(const DivertedSingularityAiming&);
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
