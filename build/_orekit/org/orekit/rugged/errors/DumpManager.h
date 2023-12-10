#ifndef org_orekit_rugged_errors_DumpManager_H
#define org_orekit_rugged_errors_DumpManager_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace rugged {
      namespace utils {
        class ExtendedEllipsoid;
        class SpacecraftToObservedBody;
      }
      namespace api {
        class AlgorithmId;
      }
      namespace linesensor {
        class SensorMeanPlaneCrossing;
        class SensorPixel;
        class LineSensor;
      }
      namespace raster {
        class Tile;
      }
    }
    namespace bodies {
      class GeodeticPoint;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class Transform;
    }
  }
}
namespace java {
  namespace io {
    class File;
  }
  namespace lang {
    class Class;
    class Boolean;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        class DumpManager : public ::java::lang::Object {
         public:
          enum {
            mid_activate_46e66c77c82c9a6b,
            mid_deactivate_7ae3461a92a43152,
            mid_dumpAlgorithm_7617e0dc8b479a43,
            mid_dumpAlgorithm_457e5a62486d41a2,
            mid_dumpDirectLocation_db599073dd91eb82,
            mid_dumpDirectLocationResult_e901f09a0b8554bd,
            mid_dumpEllipsoid_de42b33da926dabf,
            mid_dumpInverseLocation_cca31eb67820bbbc,
            mid_dumpInverseLocationResult_f611587b55cd2fe6,
            mid_dumpSensorDatation_5af65513ee4e934d,
            mid_dumpSensorLOS_e473049b34767c7c,
            mid_dumpSensorMeanPlane_2739a8dd5a6080b9,
            mid_dumpSensorRate_1139651494940895,
            mid_dumpTileCell_33172774d6ef32ea,
            mid_dumpTransform_0d73dc55a552eb68,
            mid_endNicely_7ae3461a92a43152,
            mid_isActive_e470b6d9e0d979db,
            mid_resume_837ebd2d6615d831,
            mid_suspend_cc0d8e7d471c2d45,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DumpManager(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DumpManager(const DumpManager& obj) : ::java::lang::Object(obj) {}

          static void activate(const ::java::io::File &);
          static void deactivate();
          static void dumpAlgorithm(const ::org::orekit::rugged::api::AlgorithmId &);
          static void dumpAlgorithm(const ::org::orekit::rugged::api::AlgorithmId &, jdouble);
          static void dumpDirectLocation(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jboolean, jboolean, jboolean);
          static void dumpDirectLocationResult(const ::org::orekit::bodies::GeodeticPoint &);
          static void dumpEllipsoid(const ::org::orekit::rugged::utils::ExtendedEllipsoid &);
          static void dumpInverseLocation(const ::org::orekit::rugged::linesensor::LineSensor &, const ::org::orekit::bodies::GeodeticPoint &, const ::org::orekit::rugged::utils::ExtendedEllipsoid &, jint, jint, jboolean, jboolean, jboolean);
          static void dumpInverseLocationResult(const ::org::orekit::rugged::linesensor::SensorPixel &);
          static void dumpSensorDatation(const ::org::orekit::rugged::linesensor::LineSensor &, jdouble, const ::org::orekit::time::AbsoluteDate &);
          static void dumpSensorLOS(const ::org::orekit::rugged::linesensor::LineSensor &, const ::org::orekit::time::AbsoluteDate &, jint, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);
          static void dumpSensorMeanPlane(const ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing &);
          static void dumpSensorRate(const ::org::orekit::rugged::linesensor::LineSensor &, jdouble, jdouble);
          static void dumpTileCell(const ::org::orekit::rugged::raster::Tile &, jint, jint, jdouble);
          static void dumpTransform(const ::org::orekit::rugged::utils::SpacecraftToObservedBody &, jint, const ::org::orekit::frames::Transform &, const ::org::orekit::frames::Transform &);
          static void endNicely();
          static jboolean isActive();
          static void resume(const ::java::lang::Boolean &);
          static ::java::lang::Boolean suspend();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        extern PyType_Def PY_TYPE_DEF(DumpManager);
        extern PyTypeObject *PY_TYPE(DumpManager);

        class t_DumpManager {
        public:
          PyObject_HEAD
          DumpManager object;
          static PyObject *wrap_Object(const DumpManager&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
