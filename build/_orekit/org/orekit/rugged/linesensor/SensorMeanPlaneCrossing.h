#ifndef org_orekit_rugged_linesensor_SensorMeanPlaneCrossing_H
#define org_orekit_rugged_linesensor_SensorMeanPlaneCrossing_H

#include "java/lang/Object.h"

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
namespace org {
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
      namespace linesensor {

        class SensorMeanPlaneCrossing : public ::java::lang::Object {
         public:
          enum {
            mid_init$_59bbb07cdad689df,
            mid_init$_cd0bb1e3ab180aa0,
            mid_find_ce491b6a117d4860,
            mid_getAccuracy_9981f74b2d109da6,
            mid_getCachedResults_11e4ca8182c1933d,
            mid_getMaxEval_d6ab429752e7c267,
            mid_getMaxLine_d6ab429752e7c267,
            mid_getMeanPlaneNormal_032312bdeb3f2f93,
            mid_getMinLine_d6ab429752e7c267,
            mid_getScToBody_a784fa07890a0e9f,
            mid_getSensor_98f3dfe0c28ffc3c,
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
