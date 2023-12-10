#ifndef org_orekit_rugged_linesensor_SensorMeanPlaneCrossing_H
#define org_orekit_rugged_linesensor_SensorMeanPlaneCrossing_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        class SensorMeanPlaneCrossing$CrossingResult;
        class LineSensor;
      }
      namespace utils {
        class SpacecraftToObservedBody;
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
  namespace util {
    namespace stream {
      class Stream;
    }
  }
  namespace lang {
    class Class;
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
            mid_init$_8fb19dc0a619421b,
            mid_init$_96cf0cbbd44dbb20,
            mid_find_bb3829bef233d8dc,
            mid_getAccuracy_456d9a2f64d6b28d,
            mid_getCachedResults_a68a17dd093f796d,
            mid_getMaxEval_f2f64475e4580546,
            mid_getMaxLine_f2f64475e4580546,
            mid_getMeanPlaneNormal_17a952530a808943,
            mid_getMinLine_f2f64475e4580546,
            mid_getScToBody_38f80fac5aafac2a,
            mid_getSensor_6a6fc27bf32a43cf,
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
