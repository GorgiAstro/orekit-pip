#ifndef org_orekit_estimation_leastsquares_BatchLSObserver_H
#define org_orekit_estimation_leastsquares_BatchLSObserver_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class LeastSquaresProblem$Evaluation;
          }
        }
      }
    }
  }
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimationsProvider;
      }
    }
    namespace orbits {
      class Orbit;
    }
    namespace utils {
      class ParameterDriversList;
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

        class BatchLSObserver : public ::java::lang::Object {
         public:
          enum {
            mid_evaluationPerformed_1c346acaad15e94a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BatchLSObserver(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BatchLSObserver(const BatchLSObserver& obj) : ::java::lang::Object(obj) {}

          void evaluationPerformed(jint, jint, const JArray< ::org::orekit::orbits::Orbit > &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::measurements::EstimationsProvider &, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation &) const;
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
        extern PyType_Def PY_TYPE_DEF(BatchLSObserver);
        extern PyTypeObject *PY_TYPE(BatchLSObserver);

        class t_BatchLSObserver {
        public:
          PyObject_HEAD
          BatchLSObserver object;
          static PyObject *wrap_Object(const BatchLSObserver&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
