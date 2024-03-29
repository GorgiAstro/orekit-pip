#ifndef org_orekit_rugged_adjustment_GroundOptimizationProblemBuilder_H
#define org_orekit_rugged_adjustment_GroundOptimizationProblemBuilder_H

#include "org/orekit/rugged/adjustment/OptimizationProblemBuilder.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        class LineSensor;
      }
      namespace api {
        class Rugged;
      }
      namespace adjustment {
        namespace measurements {
          class Observables;
        }
      }
    }
  }
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

        class GroundOptimizationProblemBuilder : public ::org::orekit::rugged::adjustment::OptimizationProblemBuilder {
         public:
          enum {
            mid_init$_68f8199f5a6d5879,
            mid_build_fabe1e3047de884e,
            mid_createTargetAndWeight_ff7cb6c242604316,
            mid_initMapping_ff7cb6c242604316,
            mid_createFunction_b9638c47db64ddc7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GroundOptimizationProblemBuilder(jobject obj) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GroundOptimizationProblemBuilder(const GroundOptimizationProblemBuilder& obj) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(obj) {}

          GroundOptimizationProblemBuilder(const ::java::util::List &, const ::org::orekit::rugged::adjustment::measurements::Observables &, const ::org::orekit::rugged::api::Rugged &);

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
        extern PyType_Def PY_TYPE_DEF(GroundOptimizationProblemBuilder);
        extern PyTypeObject *PY_TYPE(GroundOptimizationProblemBuilder);

        class t_GroundOptimizationProblemBuilder {
        public:
          PyObject_HEAD
          GroundOptimizationProblemBuilder object;
          static PyObject *wrap_Object(const GroundOptimizationProblemBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
