#ifndef org_orekit_rugged_linesensor_SensorMeanPlaneCrossing$CrossingResult_H
#define org_orekit_rugged_linesensor_SensorMeanPlaneCrossing$CrossingResult_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        class SensorMeanPlaneCrossing$CrossingResult : public ::java::lang::Object {
         public:
          enum {
            mid_init$_5ee75d1abe7eae30,
            mid_getDate_7a97f7e149e79afb,
            mid_getLine_557b8123390d8d0c,
            mid_getTarget_f88961cca75a2c0a,
            mid_getTargetDirection_f88961cca75a2c0a,
            mid_getTargetDirectionDerivative_f88961cca75a2c0a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SensorMeanPlaneCrossing$CrossingResult(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SensorMeanPlaneCrossing$CrossingResult(const SensorMeanPlaneCrossing$CrossingResult& obj) : ::java::lang::Object(obj) {}

          SensorMeanPlaneCrossing$CrossingResult(const ::org::orekit::time::AbsoluteDate &, jdouble, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &);

          ::org::orekit::time::AbsoluteDate getDate() const;
          jdouble getLine() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getTarget() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getTargetDirection() const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D getTargetDirectionDerivative() const;
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
        extern PyType_Def PY_TYPE_DEF(SensorMeanPlaneCrossing$CrossingResult);
        extern PyTypeObject *PY_TYPE(SensorMeanPlaneCrossing$CrossingResult);

        class t_SensorMeanPlaneCrossing$CrossingResult {
        public:
          PyObject_HEAD
          SensorMeanPlaneCrossing$CrossingResult object;
          static PyObject *wrap_Object(const SensorMeanPlaneCrossing$CrossingResult&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
