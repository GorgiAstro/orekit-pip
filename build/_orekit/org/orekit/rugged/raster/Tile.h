#ifndef org_orekit_rugged_raster_Tile_H
#define org_orekit_rugged_raster_Tile_H

#include "org/orekit/rugged/raster/UpdatableTile.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        class NormalizedGeodeticPoint;
      }
      namespace raster {
        class Tile$Location;
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

        class Tile : public ::org::orekit::rugged::raster::UpdatableTile {
         public:
          enum {
            mid_cellIntersection_7e043202c789e76d,
            mid_getElevationAtIndices_6d920aab27f0a3d2,
            mid_getFloorLatitudeIndex_9e72cb20adb363fb,
            mid_getFloorLongitudeIndex_9e72cb20adb363fb,
            mid_getLatitudeAtIndex_ce4c02d583456bc9,
            mid_getLatitudeRows_d6ab429752e7c267,
            mid_getLatitudeStep_9981f74b2d109da6,
            mid_getLocation_bb268b89f4ba5b33,
            mid_getLongitudeAtIndex_ce4c02d583456bc9,
            mid_getLongitudeColumns_d6ab429752e7c267,
            mid_getLongitudeStep_9981f74b2d109da6,
            mid_getMaxElevation_9981f74b2d109da6,
            mid_getMaxElevationLatitudeIndex_d6ab429752e7c267,
            mid_getMaxElevationLongitudeIndex_d6ab429752e7c267,
            mid_getMaximumLatitude_9981f74b2d109da6,
            mid_getMaximumLongitude_9981f74b2d109da6,
            mid_getMinElevation_9981f74b2d109da6,
            mid_getMinElevationLatitudeIndex_d6ab429752e7c267,
            mid_getMinElevationLongitudeIndex_d6ab429752e7c267,
            mid_getMinimumLatitude_9981f74b2d109da6,
            mid_getMinimumLongitude_9981f74b2d109da6,
            mid_interpolateElevation_82f92590f4247da1,
            mid_tileUpdateCompleted_ff7cb6c242604316,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Tile(jobject obj) : ::org::orekit::rugged::raster::UpdatableTile(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Tile(const Tile& obj) : ::org::orekit::rugged::raster::UpdatableTile(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(Tile);
        extern PyTypeObject *PY_TYPE(Tile);

        class t_Tile {
        public:
          PyObject_HEAD
          Tile object;
          static PyObject *wrap_Object(const Tile&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
