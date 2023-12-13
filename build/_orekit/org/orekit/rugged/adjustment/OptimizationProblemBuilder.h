#ifndef org_orekit_rugged_adjustment_OptimizationProblemBuilder_H
#define org_orekit_rugged_adjustment_OptimizationProblemBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        class OptimizationProblemBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_build_6f03ef14ae36f9b3,
            mid_getGenerator_a7f0ca7283ee2186,
            mid_getDrivers_e62d3bb06d56d7e3,
            mid_getNbParams_55546ef6a647f39b,
            mid_createTargetAndWeight_a1fa5dae97ea5ed2,
            mid_initMapping_a1fa5dae97ea5ed2,
            mid_getSensors_e62d3bb06d56d7e3,
            mid_getMeasurements_6a6f7250e840c7f1,
            mid_createFunction_6a20d4ddc607b9bb,
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
