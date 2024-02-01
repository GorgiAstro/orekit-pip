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
            mid_build_fabe1e3047de884e,
            mid_getSensors_d751c1a57012b438,
            mid_getDrivers_d751c1a57012b438,
            mid_getNbParams_d6ab429752e7c267,
            mid_getGenerator_59ec2baea1fab58e,
            mid_getMeasurements_8a09f92731ab04fb,
            mid_createTargetAndWeight_ff7cb6c242604316,
            mid_initMapping_ff7cb6c242604316,
            mid_createFunction_b9638c47db64ddc7,
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
