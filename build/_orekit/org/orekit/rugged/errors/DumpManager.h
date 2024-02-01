#ifndef org_orekit_rugged_errors_DumpManager_H
#define org_orekit_rugged_errors_DumpManager_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {
        class AlgorithmId;
      }
      namespace linesensor {
        class LineSensor;
        class SensorPixel;
        class SensorMeanPlaneCrossing;
      }
      namespace utils {
        class ExtendedEllipsoid;
        class SpacecraftToObservedBody;
      }
      namespace raster {
        class Tile;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class Transform;
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
            mid_activate_44d81342f3d8a712,
            mid_deactivate_ff7cb6c242604316,
            mid_dumpAlgorithm_65176271965491fa,
            mid_dumpAlgorithm_e11894221e750207,
            mid_dumpDirectLocation_540ea62e8e0f3832,
            mid_dumpDirectLocationResult_1ef3ae5bc44c9ecc,
            mid_dumpEllipsoid_669bd2fe21c4893e,
            mid_dumpInverseLocation_80885c8da95da0fd,
            mid_dumpInverseLocationResult_0b33f8be05e1ae42,
            mid_dumpSensorDatation_2c90ca3870824978,
            mid_dumpSensorLOS_a83f84fc2b2b427a,
            mid_dumpSensorMeanPlane_9befa7185f3ed3e6,
            mid_dumpSensorRate_3d13afbeee0dc169,
            mid_dumpTileCell_d7e47d69b20de341,
            mid_dumpTransform_23a631f1ef960f5e,
            mid_endNicely_ff7cb6c242604316,
            mid_isActive_eee3de00fe971136,
            mid_resume_787cc3f8b789a31f,
            mid_suspend_b55c3109c27b90e3,
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
