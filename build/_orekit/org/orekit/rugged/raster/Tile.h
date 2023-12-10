#ifndef org_orekit_rugged_raster_Tile_H
#define org_orekit_rugged_raster_Tile_H

#include "org/orekit/rugged/raster/UpdatableTile.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        class Tile$Location;
      }
      namespace utils {
        class NormalizedGeodeticPoint;
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
            mid_cellIntersection_5824e1e5f0141611,
            mid_getElevationAtIndices_dbbe5f05149dbf73,
            mid_getFloorLatitudeIndex_4508852644846c83,
            mid_getFloorLongitudeIndex_4508852644846c83,
            mid_getLatitudeAtIndex_46f85b53d9aedd96,
            mid_getLatitudeRows_570ce0828f81a2c1,
            mid_getLatitudeStep_dff5885c2c873297,
            mid_getLocation_cc274332aee60547,
            mid_getLongitudeAtIndex_46f85b53d9aedd96,
            mid_getLongitudeColumns_570ce0828f81a2c1,
            mid_getLongitudeStep_dff5885c2c873297,
            mid_getMaxElevation_dff5885c2c873297,
            mid_getMaxElevationLatitudeIndex_570ce0828f81a2c1,
            mid_getMaxElevationLongitudeIndex_570ce0828f81a2c1,
            mid_getMaximumLatitude_dff5885c2c873297,
            mid_getMaximumLongitude_dff5885c2c873297,
            mid_getMinElevation_dff5885c2c873297,
            mid_getMinElevationLatitudeIndex_570ce0828f81a2c1,
            mid_getMinElevationLongitudeIndex_570ce0828f81a2c1,
            mid_getMinimumLatitude_dff5885c2c873297,
            mid_getMinimumLongitude_dff5885c2c873297,
            mid_interpolateElevation_86ffecc08a63eff0,
            mid_tileUpdateCompleted_0fa09c18fee449d5,
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
