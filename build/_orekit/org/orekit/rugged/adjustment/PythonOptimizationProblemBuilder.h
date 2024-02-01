#ifndef org_orekit_rugged_adjustment_PythonOptimizationProblemBuilder_H
#define org_orekit_rugged_adjustment_PythonOptimizationProblemBuilder_H

#include "org/orekit/rugged/adjustment/OptimizationProblemBuilder.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresProblem;
            class MultivariateJacobianFunction;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        class PythonOptimizationProblemBuilder : public ::org::orekit::rugged::adjustment::OptimizationProblemBuilder {
         public:
          enum {
            mid_build_fabe1e3047de884e,
            mid_createFunction_b9638c47db64ddc7,
            mid_createTargetAndWeight_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_initMapping_ff7cb6c242604316,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonOptimizationProblemBuilder(jobject obj) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonOptimizationProblemBuilder(const PythonOptimizationProblemBuilder& obj) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(obj) {}

          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem build(jint, jdouble) const;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction createFunction() const;
          void createTargetAndWeight() const;
          void finalize() const;
          void initMapping() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonOptimizationProblemBuilder);
        extern PyTypeObject *PY_TYPE(PythonOptimizationProblemBuilder);

        class t_PythonOptimizationProblemBuilder {
        public:
          PyObject_HEAD
          PythonOptimizationProblemBuilder object;
          static PyObject *wrap_Object(const PythonOptimizationProblemBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
