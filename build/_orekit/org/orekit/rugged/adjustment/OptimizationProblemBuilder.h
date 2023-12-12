#ifndef org_orekit_rugged_adjustment_OptimizationProblemBuilder_H
#define org_orekit_rugged_adjustment_OptimizationProblemBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresProblem;
          }
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
      namespace adjustment {

        class OptimizationProblemBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_build_d4732481b9968791,
            mid_getDrivers_0d9551367f7ecdef,
            mid_getNbParams_412668abc8d889e9,
            mid_getSensors_0d9551367f7ecdef,
            mid_getMeasurements_e8a9e616d9a15f91,
            mid_getGenerator_288f48cc056758ad,
            mid_initMapping_0640e6acf969ed28,
            mid_createTargetAndWeight_0640e6acf969ed28,
            mid_createFunction_e31bcbfb9203b3a6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OptimizationProblemBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OptimizationProblemBuilder(const OptimizationProblemBuilder& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem build(jint, jdouble) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        extern PyType_Def PY_TYPE_DEF(OptimizationProblemBuilder);
        extern PyTypeObject *PY_TYPE(OptimizationProblemBuilder);

        class t_OptimizationProblemBuilder {
        public:
          PyObject_HEAD
          OptimizationProblemBuilder object;
          static PyObject *wrap_Object(const OptimizationProblemBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
