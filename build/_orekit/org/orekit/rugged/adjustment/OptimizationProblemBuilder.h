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
            mid_build_fb782eefc76cd888,
            mid_getDrivers_2afa36052df4765d,
            mid_getNbParams_570ce0828f81a2c1,
            mid_createTargetAndWeight_0fa09c18fee449d5,
            mid_initMapping_0fa09c18fee449d5,
            mid_getSensors_2afa36052df4765d,
            mid_getGenerator_6b50c0d68a5b89d6,
            mid_getMeasurements_bb4e7fe961703150,
            mid_createFunction_9751b2e3b68b45ea,
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
