#ifndef org_orekit_rugged_raster_PythonTile_H
#define org_orekit_rugged_raster_PythonTile_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        class PythonTile : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_cellIntersection_7e043202c789e76d,
            mid_finalize_ff7cb6c242604316,
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
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_setElevation_e98d7b3e971b6087,
            mid_setGeometry_d690bb44b994cfa6,
            mid_tileUpdateCompleted_ff7cb6c242604316,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonTile(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonTile(const PythonTile& obj) : ::java::lang::Object(obj) {}

          PythonTile();

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint cellIntersection(const ::org::orekit::rugged::utils::NormalizedGeodeticPoint &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jint, jint) const;
          void finalize() const;
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
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonTile);
        extern PyTypeObject *PY_TYPE(PythonTile);

        class t_PythonTile {
        public:
          PyObject_HEAD
          PythonTile object;
          static PyObject *wrap_Object(const PythonTile&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
