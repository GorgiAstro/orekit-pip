#ifndef org_orekit_rugged_linesensor_SensorMeanPlaneCrossing$CrossingResult_H
#define org_orekit_rugged_linesensor_SensorMeanPlaneCrossing$CrossingResult_H

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
    namespace time {
      class AbsoluteDate;
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
            mid_init$_cf79ac3fac47228f,
            mid_getDate_c325492395d89b24,
            mid_getLine_b74f83833fdad017,
            mid_getTarget_8b724f8b4fdad1a2,
            mid_getTargetDirection_8b724f8b4fdad1a2,
            mid_getTargetDirectionDerivative_8b724f8b4fdad1a2,
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
