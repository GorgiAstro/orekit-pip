#ifndef org_orekit_rugged_adjustment_GroundOptimizationProblemBuilder_H
#define org_orekit_rugged_adjustment_GroundOptimizationProblemBuilder_H

#include "org/orekit/rugged/adjustment/OptimizationProblemBuilder.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          class Observables;
        }
      }
      namespace api {
        class Rugged;
      }
      namespace linesensor {
        class LineSensor;
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
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
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
            mid_init$_3534ee2ed547a8c5,
            mid_build_fb782eefc76cd888,
            mid_createTargetAndWeight_0fa09c18fee449d5,
            mid_initMapping_0fa09c18fee449d5,
            mid_createFunction_9751b2e3b68b45ea,
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
