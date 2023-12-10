#ifndef org_orekit_rugged_raster_SimpleTile_H
#define org_orekit_rugged_raster_SimpleTile_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        class Tile$Location;
        class Tile;
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
            mid_cellIntersection_2421dbb15f4ac362,
            mid_getElevationAtIndices_a84e4ee1da3f1ab8,
            mid_getFloorLatitudeIndex_12ebab281ee35c98,
            mid_getFloorLongitudeIndex_12ebab281ee35c98,
            mid_getLatitudeAtIndex_b772323fc98b7293,
            mid_getLatitudeRows_f2f64475e4580546,
            mid_getLatitudeStep_456d9a2f64d6b28d,
            mid_getLocation_fb92501bac4b7f46,
            mid_getLongitudeAtIndex_b772323fc98b7293,
            mid_getLongitudeColumns_f2f64475e4580546,
            mid_getLongitudeStep_456d9a2f64d6b28d,
            mid_getMaxElevation_456d9a2f64d6b28d,
            mid_getMaxElevationLatitudeIndex_f2f64475e4580546,
            mid_getMaxElevationLongitudeIndex_f2f64475e4580546,
            mid_getMaximumLatitude_456d9a2f64d6b28d,
            mid_getMaximumLongitude_456d9a2f64d6b28d,
            mid_getMinElevation_456d9a2f64d6b28d,
            mid_getMinElevationLatitudeIndex_f2f64475e4580546,
            mid_getMinElevationLongitudeIndex_f2f64475e4580546,
            mid_getMinimumLatitude_456d9a2f64d6b28d,
            mid_getMinimumLongitude_456d9a2f64d6b28d,
            mid_interpolateElevation_824133ce4aec3505,
            mid_setElevation_78e41e7b5124a628,
            mid_setGeometry_a18a8bf2dc472ce4,
            mid_tileUpdateCompleted_7ae3461a92a43152,
            mid_processUpdatedElevation_ebc26dcaf4761286,
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
