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
            mid_init$_ba46eb41ed43e894,
            mid_getDate_85703d13e302437e,
            mid_getLine_dff5885c2c873297,
            mid_getTarget_d52645e0d4c07563,
            mid_getTargetDirection_d52645e0d4c07563,
            mid_getTargetDirectionDerivative_d52645e0d4c07563,
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
