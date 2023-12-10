#ifndef org_hipparchus_optim_linear_LinearOptimizer_H
#define org_hipparchus_optim_linear_LinearOptimizer_H

#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      class PointValuePair;
      class OptimizationData;
    }
    namespace exception {
      class MathIllegalStateException;
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
  namespace hipparchus {
    namespace optim {
      namespace linear {

        class LinearOptimizer : public ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer {
         public:
          enum {
            mid_optimize_02ecb87ce66bcfc1,
            mid_parseOptimizationData_a5cd04a701a45f77,
            mid_getConstraints_cfcfd130f9013e3e,
            mid_isRestrictedToNonNegative_e470b6d9e0d979db,
            mid_getFunction_00f5d364ee1debe7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LinearOptimizer(jobject obj) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LinearOptimizer(const LinearOptimizer& obj) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(obj) {}

          ::org::hipparchus::optim::PointValuePair optimize(const JArray< ::org::hipparchus::optim::OptimizationData > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {
        extern PyType_Def PY_TYPE_DEF(LinearOptimizer);
        extern PyTypeObject *PY_TYPE(LinearOptimizer);

        class t_LinearOptimizer {
        public:
          PyObject_HEAD
          LinearOptimizer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_LinearOptimizer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const LinearOptimizer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const LinearOptimizer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
