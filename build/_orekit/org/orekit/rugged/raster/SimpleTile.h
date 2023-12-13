#ifndef org_orekit_rugged_raster_SimpleTile_H
#define org_orekit_rugged_raster_SimpleTile_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        class Tile;
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

        class SimpleTile : public ::java::lang::Object {
         public:
          enum {
            mid_cellIntersection_4f0fb331517d0f4d,
            mid_getElevationAtIndices_cad98089d00f8a5b,
            mid_getFloorLatitudeIndex_2af4736545087009,
            mid_getFloorLongitudeIndex_2af4736545087009,
            mid_getLatitudeAtIndex_2afcbc21f4e57ab2,
            mid_getLatitudeRows_55546ef6a647f39b,
            mid_getLatitudeStep_b74f83833fdad017,
            mid_getLocation_0b4a238e5205c712,
            mid_getLongitudeAtIndex_2afcbc21f4e57ab2,
            mid_getLongitudeColumns_55546ef6a647f39b,
            mid_getLongitudeStep_b74f83833fdad017,
            mid_getMaxElevation_b74f83833fdad017,
            mid_getMaxElevationLatitudeIndex_55546ef6a647f39b,
            mid_getMaxElevationLongitudeIndex_55546ef6a647f39b,
            mid_getMaximumLatitude_b74f83833fdad017,
            mid_getMaximumLongitude_b74f83833fdad017,
            mid_getMinElevation_b74f83833fdad017,
            mid_getMinElevationLatitudeIndex_55546ef6a647f39b,
            mid_getMinElevationLongitudeIndex_55546ef6a647f39b,
            mid_getMinimumLatitude_b74f83833fdad017,
            mid_getMinimumLongitude_b74f83833fdad017,
            mid_interpolateElevation_99e3200dafc19573,
            mid_setElevation_94fe8d9ffeb50676,
            mid_setGeometry_e55884eaad2c5051,
            mid_tileUpdateCompleted_a1fa5dae97ea5ed2,
            mid_processUpdatedElevation_ab69da052b88f50c,
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
