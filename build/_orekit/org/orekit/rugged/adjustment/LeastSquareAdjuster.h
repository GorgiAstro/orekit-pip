#ifndef org_orekit_rugged_adjustment_LeastSquareAdjuster_H
#define org_orekit_rugged_adjustment_LeastSquareAdjuster_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresProblem;
            class LeastSquaresOptimizer$Optimum;
          }
        }
      }
    }
  }
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        class OptimizerId;
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

        class LeastSquareAdjuster : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_init$_3baa1ef9d5c66967,
            mid_optimize_45e9e6e9254f21c4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LeastSquareAdjuster(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LeastSquareAdjuster(const LeastSquareAdjuster& obj) : ::java::lang::Object(obj) {}

          LeastSquareAdjuster();
          LeastSquareAdjuster(const ::org::orekit::rugged::adjustment::OptimizerId &);

          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem &) const;
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
        extern PyType_Def PY_TYPE_DEF(LeastSquareAdjuster);
        extern PyTypeObject *PY_TYPE(LeastSquareAdjuster);

        class t_LeastSquareAdjuster {
        public:
          PyObject_HEAD
          LeastSquareAdjuster object;
          static PyObject *wrap_Object(const LeastSquareAdjuster&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
