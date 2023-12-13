#ifndef org_orekit_rugged_linesensor_SensorMeanPlaneCrossing_H
#define org_orekit_rugged_linesensor_SensorMeanPlaneCrossing_H

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
        class SensorMeanPlaneCrossing$CrossingResult;
      }
      namespace utils {
        class SpacecraftToObservedBody;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    namespace stream {
      class Stream;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        class SensorMeanPlaneCrossing : public ::java::lang::Object {
         public:
          enum {
            mid_init$_6c53ed6f01ef0ff8,
            mid_init$_81e166046bd5bbc1,
            mid_find_3adb4906e4611107,
            mid_getAccuracy_b74f83833fdad017,
            mid_getCachedResults_14e21bf777ff0ccf,
            mid_getMaxEval_55546ef6a647f39b,
            mid_getMaxLine_55546ef6a647f39b,
            mid_getMeanPlaneNormal_8b724f8b4fdad1a2,
            mid_getMinLine_55546ef6a647f39b,
            mid_getScToBody_cf686ec38ae38bec,
            mid_getSensor_57f8f535e0c09b7f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SensorMeanPlaneCrossing(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SensorMeanPlaneCrossing(const SensorMeanPlaneCrossing& obj) : ::java::lang::Object(obj) {}

          SensorMeanPlaneCrossing(const ::org::orekit::rugged::linesensor::LineSensor &, const ::org::orekit::rugged::utils::SpacecraftToObservedBody &, jint, jint, jboolean, jboolean, jint, jdouble);
          SensorMeanPlaneCrossing(const ::org::orekit::rugged::linesensor::LineSensor &, const ::org::orekit::rugged::utils::SpacecraftToObservedBody &, jint, jint, jboolean, jboolean, jint, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::java::util::stream::Stream &);

          ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult find(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          jdouble getAccuracy() const;
          ::java::util::stream::Stream getCachedResults() const;
          jint getMaxEval() const;
          jint getMaxLine() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getMeanPlaneNormal() const;
          jint getMinLine() const;
          ::org::orekit::rugged::utils::SpacecraftToObservedBody getScToBody() const;
          ::org::orekit::rugged::linesensor::LineSensor getSensor() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        extern PyType_Def PY_TYPE_DEF(SensorMeanPlaneCrossing);
        extern PyTypeObject *PY_TYPE(SensorMeanPlaneCrossing);

        class t_SensorMeanPlaneCrossing {
        public:
          PyObject_HEAD
          SensorMeanPlaneCrossing object;
          static PyObject *wrap_Object(const SensorMeanPlaneCrossing&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
