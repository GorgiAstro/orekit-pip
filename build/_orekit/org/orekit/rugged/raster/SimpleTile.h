#ifndef org_orekit_rugged_raster_SimpleTile_H
#define org_orekit_rugged_raster_SimpleTile_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        class NormalizedGeodeticPoint;
      }
      namespace raster {
        class Tile$Location;
        class Tile;
      }
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
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        class SimpleTile : public ::java::lang::Object {
         public:
          enum {
            mid_cellIntersection_9786a4c652387487,
            mid_getElevationAtIndices_21b81d54c06b64b0,
            mid_getFloorLatitudeIndex_abbeb9db7144ca23,
            mid_getFloorLongitudeIndex_abbeb9db7144ca23,
            mid_getLatitudeAtIndex_69cfb132c661aca4,
            mid_getLatitudeRows_412668abc8d889e9,
            mid_getLatitudeStep_557b8123390d8d0c,
            mid_getLocation_f18cc9781bcd74eb,
            mid_getLongitudeAtIndex_69cfb132c661aca4,
            mid_getLongitudeColumns_412668abc8d889e9,
            mid_getLongitudeStep_557b8123390d8d0c,
            mid_getMaxElevation_557b8123390d8d0c,
            mid_getMaxElevationLatitudeIndex_412668abc8d889e9,
            mid_getMaxElevationLongitudeIndex_412668abc8d889e9,
            mid_getMaximumLatitude_557b8123390d8d0c,
            mid_getMaximumLongitude_557b8123390d8d0c,
            mid_getMinElevation_557b8123390d8d0c,
            mid_getMinElevationLatitudeIndex_412668abc8d889e9,
            mid_getMinElevationLongitudeIndex_412668abc8d889e9,
            mid_getMinimumLatitude_557b8123390d8d0c,
            mid_getMinimumLongitude_557b8123390d8d0c,
            mid_interpolateElevation_2268d18be49a6087,
            mid_setElevation_754312f3734d6e2f,
            mid_setGeometry_865bb527118ba3d3,
            mid_tileUpdateCompleted_0640e6acf969ed28,
            mid_processUpdatedElevation_cc18240f4a737f14,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleTile(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleTile(const SimpleTile& obj) : ::java::lang::Object(obj) {}

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint cellIntersection(const ::org::orekit::rugged::utils::NormalizedGeodeticPoint &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jint, jint) const;
          jdouble getElevationAtIndices(jint, jint) const;
          jint getFloorLatitudeIndex(jdouble) const;
          jint getFloorLongitudeIndex(jdouble) const;
          jdouble getLatitudeAtIndex(jint) const;
          jint getLatitudeRows() const;
          jdouble getLatitudeStep() const;
          ::org::orekit::rugged::raster::Tile$Location getLocation(jdouble, jdouble) const;
          jdouble getLongitudeAtIndex(jint) const;
          jint getLongitudeColumns() const;
          jdouble getLongitudeStep() const;
          jdouble getMaxElevation() const;
          jint getMaxElevationLatitudeIndex() const;
          jint getMaxElevationLongitudeIndex() const;
          jdouble getMaximumLatitude() const;
          jdouble getMaximumLongitude() const;
          jdouble getMinElevation() const;
          jint getMinElevationLatitudeIndex() const;
          jint getMinElevationLongitudeIndex() const;
          jdouble getMinimumLatitude() const;
          jdouble getMinimumLongitude() const;
          jdouble interpolateElevation(jdouble, jdouble) const;
          void setElevation(jint, jint, jdouble) const;
          void setGeometry(jdouble, jdouble, jdouble, jdouble, jint, jint) const;
          void tileUpdateCompleted() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        extern PyType_Def PY_TYPE_DEF(SimpleTile);
        extern PyTypeObject *PY_TYPE(SimpleTile);

        class t_SimpleTile {
        public:
          PyObject_HEAD
          SimpleTile object;
          static PyObject *wrap_Object(const SimpleTile&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
