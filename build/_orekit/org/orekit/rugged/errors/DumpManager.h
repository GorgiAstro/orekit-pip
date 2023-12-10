#ifndef org_orekit_rugged_errors_DumpManager_H
#define org_orekit_rugged_errors_DumpManager_H

#include "java/lang/Object.h"

namespace org {
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
        class LineSensor;
        class SensorPixel;
      }
      namespace raster {
        class Tile;
      }
    }
    namespace frames {
      class Transform;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_activate_0613af62f2ba5dba,
            mid_deactivate_0fa09c18fee449d5,
            mid_dumpAlgorithm_bf8b5dae4ed03a23,
            mid_dumpAlgorithm_ae3e3a99fa2baadd,
            mid_dumpDirectLocation_59f76e44cd6c2fd4,
            mid_dumpDirectLocationResult_083a0f582ac2c846,
            mid_dumpEllipsoid_323cca21b3806954,
            mid_dumpInverseLocation_8027d207ff6378d8,
            mid_dumpInverseLocationResult_0fc18d1cc8c4a1a6,
            mid_dumpSensorDatation_8ab2a5996db1732e,
            mid_dumpSensorLOS_0a886226d4f13cd0,
            mid_dumpSensorMeanPlane_2020c547641e3f1d,
            mid_dumpSensorRate_a06c5b9fb71931a3,
            mid_dumpTileCell_a38e6192c4ef3a41,
            mid_dumpTransform_221d25b63c6d70bd,
            mid_endNicely_0fa09c18fee449d5,
            mid_isActive_b108b35ef48e27bd,
            mid_resume_39ded4df2e865a26,
            mid_suspend_32e0a2327c4a0419,
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
