#ifndef org_orekit_rugged_adjustment_InterSensorsOptimizationProblemBuilder_H
#define org_orekit_rugged_adjustment_InterSensorsOptimizationProblemBuilder_H

#include "org/orekit/rugged/adjustment/OptimizationProblemBuilder.h"

namespace java {
  namespace util {
    class List;
    class Collection;
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

        class InterSensorsOptimizationProblemBuilder : public ::org::orekit::rugged::adjustment::OptimizationProblemBuilder {
         public:
          enum {
            mid_init$_f1db8e017d379650,
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
