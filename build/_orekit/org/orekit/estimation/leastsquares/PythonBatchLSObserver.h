#ifndef org_orekit_estimation_leastsquares_PythonBatchLSObserver_H
#define org_orekit_estimation_leastsquares_PythonBatchLSObserver_H

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
    namespace orbits {
      class Orbit;
    }
    namespace estimation {
      namespace leastsquares {
        class BatchLSObserver;
      }
      namespace measurements {
        class EstimationsProvider;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        class PythonBatchLSObserver : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_evaluationPerformed_385d95579a122c42,
            mid_finalize_7ae3461a92a43152,
            mid_pythonDecRef_7ae3461a92a43152,
            mid_pythonExtension_a27fc9afd27e559d,
            mid_pythonExtension_fefb08975c10f0a1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonBatchLSObserver(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonBatchLSObserver(const PythonBatchLSObserver& obj) : ::java::lang::Object(obj) {}

          PythonBatchLSObserver();

          void evaluationPerformed(jint, jint, const JArray< ::org::orekit::orbits::Orbit > &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::measurements::EstimationsProvider &, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation &) const;
          void finalize() const;
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
    namespace estimation {
      namespace leastsquares {
        extern PyType_Def PY_TYPE_DEF(PythonBatchLSObserver);
        extern PyTypeObject *PY_TYPE(PythonBatchLSObserver);

        class t_PythonBatchLSObserver {
        public:
          PyObject_HEAD
          PythonBatchLSObserver object;
          static PyObject *wrap_Object(const PythonBatchLSObserver&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
