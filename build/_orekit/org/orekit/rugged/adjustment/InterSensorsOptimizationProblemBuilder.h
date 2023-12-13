#ifndef org_orekit_rugged_adjustment_InterSensorsOptimizationProblemBuilder_H
#define org_orekit_rugged_adjustment_InterSensorsOptimizationProblemBuilder_H

#include "org/orekit/rugged/adjustment/OptimizationProblemBuilder.h"

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
namespace java {
  namespace util {
    class List;
    class Collection;
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

        class InterSensorsOptimizationProblemBuilder : public ::org::orekit::rugged::adjustment::OptimizationProblemBuilder {
         public:
          enum {
            mid_init$_23873f288a542707,
            mid_build_6f03ef14ae36f9b3,
            mid_createTargetAndWeight_a1fa5dae97ea5ed2,
            mid_initMapping_a1fa5dae97ea5ed2,
            mid_createFunction_6a20d4ddc607b9bb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InterSensorsOptimizationProblemBuilder(jobject obj) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InterSensorsOptimizationProblemBuilder(const InterSensorsOptimizationProblemBuilder& obj) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(obj) {}

          InterSensorsOptimizationProblemBuilder(const ::java::util::List &, const ::org::orekit::rugged::adjustment::measurements::Observables &, const ::java::util::Collection &);

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
        extern PyType_Def PY_TYPE_DEF(InterSensorsOptimizationProblemBuilder);
        extern PyTypeObject *PY_TYPE(InterSensorsOptimizationProblemBuilder);

        class t_InterSensorsOptimizationProblemBuilder {
        public:
          PyObject_HEAD
          InterSensorsOptimizationProblemBuilder object;
          static PyObject *wrap_Object(const InterSensorsOptimizationProblemBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
