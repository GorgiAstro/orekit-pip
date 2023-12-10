#ifndef org_orekit_estimation_leastsquares_SequentialBatchLSEstimator_H
#define org_orekit_estimation_leastsquares_SequentialBatchLSEstimator_H

#include "org/orekit/estimation/leastsquares/BatchLSEstimator.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class SequentialGaussNewtonOptimizer;
          }
        }
      }
    }
  }
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
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
    namespace estimation {
      namespace leastsquares {

        class SequentialBatchLSEstimator : public ::org::orekit::estimation::leastsquares::BatchLSEstimator {
         public:
          enum {
            mid_init$_1b4891c95e09500c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SequentialBatchLSEstimator(jobject obj) : ::org::orekit::estimation::leastsquares::BatchLSEstimator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SequentialBatchLSEstimator(const SequentialBatchLSEstimator& obj) : ::org::orekit::estimation::leastsquares::BatchLSEstimator(obj) {}

          SequentialBatchLSEstimator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer &, const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {
        extern PyType_Def PY_TYPE_DEF(SequentialBatchLSEstimator);
        extern PyTypeObject *PY_TYPE(SequentialBatchLSEstimator);

        class t_SequentialBatchLSEstimator {
        public:
          PyObject_HEAD
          SequentialBatchLSEstimator object;
          static PyObject *wrap_Object(const SequentialBatchLSEstimator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
