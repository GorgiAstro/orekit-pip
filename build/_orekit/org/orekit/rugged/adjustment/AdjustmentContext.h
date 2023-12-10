#ifndef org_orekit_rugged_adjustment_AdjustmentContext_H
#define org_orekit_rugged_adjustment_AdjustmentContext_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          class Observables;
        }
        class OptimizerId;
      }
      namespace api {
        class Rugged;
      }
    }
  }
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresOptimizer$Optimum;
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        class AdjustmentContext : public ::java::lang::Object {
         public:
          enum {
            mid_init$_53a0040bd172c677,
            mid_estimateFreeParameters_f579bcabd6fa2037,
            mid_setOptimizer_63f13867ea40ee93,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AdjustmentContext(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AdjustmentContext(const AdjustmentContext& obj) : ::java::lang::Object(obj) {}

          AdjustmentContext(const ::java::util::Collection &, const ::org::orekit::rugged::adjustment::measurements::Observables &);

          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum estimateFreeParameters(const ::java::util::Collection &, jint, jdouble) const;
          void setOptimizer(const ::org::orekit::rugged::adjustment::OptimizerId &) const;
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
        extern PyType_Def PY_TYPE_DEF(AdjustmentContext);
        extern PyTypeObject *PY_TYPE(AdjustmentContext);

        class t_AdjustmentContext {
        public:
          PyObject_HEAD
          AdjustmentContext object;
          static PyObject *wrap_Object(const AdjustmentContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
