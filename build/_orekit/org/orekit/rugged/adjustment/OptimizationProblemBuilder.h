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
            mid_build_2e2baa3c6f1b9087,
            mid_getDrivers_a6156df500549a58,
            mid_getNbParams_f2f64475e4580546,
            mid_getSensors_a6156df500549a58,
            mid_getGenerator_4fe5d9b7d76c7ece,
            mid_initMapping_7ae3461a92a43152,
            mid_createTargetAndWeight_7ae3461a92a43152,
            mid_getMeasurements_96e33d17abbc900e,
            mid_createFunction_b196da25fd980476,
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
