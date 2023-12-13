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
      namespace linesensor {
        class LineSensor;
        class SensorMeanPlaneCrossing;
        class SensorPixel;
      }
      namespace raster {
        class Tile;
      }
      namespace utils {
        class ExtendedEllipsoid;
        class SpacecraftToObservedBody;
      }
      namespace api {
        class AlgorithmId;
      }
    }
    namespace bodies {
      class GeodeticPoint;
    }
    namespace frames {
      class Transform;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace io {
    class File;
  }
  namespace lang {
    class Boolean;
    class Class;
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
            mid_activate_7e1d51614d5d6a43,
            mid_deactivate_a1fa5dae97ea5ed2,
            mid_dumpAlgorithm_8b1167f41ac4ce3c,
            mid_dumpAlgorithm_ab51bbc09b28ea88,
            mid_dumpDirectLocation_e523f1929c3efad0,
            mid_dumpDirectLocationResult_4515bd5fa75778ac,
            mid_dumpEllipsoid_035235491296adca,
            mid_dumpInverseLocation_17488db61991a7ac,
            mid_dumpInverseLocationResult_adfd45e8c3ea1507,
            mid_dumpSensorDatation_ecb00474cdf7cdff,
            mid_dumpSensorLOS_ae8482ec24eee2cc,
            mid_dumpSensorMeanPlane_8124db4aebed32fc,
            mid_dumpSensorRate_ee79a3ff95b4595f,
            mid_dumpTileCell_70369aea716d047a,
            mid_dumpTransform_67d08d7069a2753f,
            mid_endNicely_a1fa5dae97ea5ed2,
            mid_isActive_9ab94ac1dc23b105,
            mid_resume_55ba007fb2374d45,
            mid_suspend_34d396f05e4572d8,
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
