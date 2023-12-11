#ifndef org_orekit_rugged_errors_DumpManager_H
#define org_orekit_rugged_errors_DumpManager_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        class AlgorithmId;
      }
      namespace utils {
        class ExtendedEllipsoid;
        class SpacecraftToObservedBody;
      }
      namespace linesensor {
        class SensorPixel;
        class LineSensor;
        class SensorMeanPlaneCrossing;
      }
      namespace raster {
        class Tile;
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
            mid_activate_5d6bcca91ae998ee,
            mid_deactivate_0640e6acf969ed28,
            mid_dumpAlgorithm_7627dde45c73f8d7,
            mid_dumpAlgorithm_dfd3548ae6c4432e,
            mid_dumpDirectLocation_cc308f3f1d1cf703,
            mid_dumpDirectLocationResult_fbf2547e3e819d1a,
            mid_dumpEllipsoid_224b23f8eb5eaad9,
            mid_dumpInverseLocation_4ecf9e7f7daff38b,
            mid_dumpInverseLocationResult_fc8156a42573cb8b,
            mid_dumpSensorDatation_c7f68f6699a398f6,
            mid_dumpSensorLOS_aa726d47a4c117cc,
            mid_dumpSensorMeanPlane_6139d52cdd0ebd03,
            mid_dumpSensorRate_4fe1c16a241adb22,
            mid_dumpTileCell_20f37c4dfc02e214,
            mid_dumpTransform_481fc23d59ffdfac,
            mid_endNicely_0640e6acf969ed28,
            mid_isActive_89b302893bdbe1f1,
            mid_resume_63dc8f8ce091e3e5,
            mid_suspend_adef4ca621ef1c5e,
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
