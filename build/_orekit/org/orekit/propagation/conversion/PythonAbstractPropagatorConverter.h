#ifndef org_orekit_propagation_conversion_PythonAbstractPropagatorConverter_H
#define org_orekit_propagation_conversion_PythonAbstractPropagatorConverter_H

#include "org/orekit/propagation/conversion/AbstractPropagatorConverter.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      class MultivariateVectorFunction;
    }
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class MultivariateJacobianFunction;
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
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        class PythonAbstractPropagatorConverter : public ::org::orekit::propagation::conversion::AbstractPropagatorConverter {
         public:
          enum {
            mid_init$_91f1a39ce0677121,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getModel_6a20d4ddc607b9bb,
            mid_getObjectiveFunction_72c2cddd79f92b83,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractPropagatorConverter(jobject obj) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractPropagatorConverter(const PythonAbstractPropagatorConverter& obj) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(obj) {}

          PythonAbstractPropagatorConverter(const ::org::orekit::propagation::conversion::PropagatorBuilder &, jdouble, jint);

          void finalize() const;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction getModel() const;
          ::org::hipparchus::analysis::MultivariateVectorFunction getObjectiveFunction() const;
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
    namespace propagation {
      namespace conversion {
        extern PyType_Def PY_TYPE_DEF(PythonAbstractPropagatorConverter);
        extern PyTypeObject *PY_TYPE(PythonAbstractPropagatorConverter);

        class t_PythonAbstractPropagatorConverter {
        public:
          PyObject_HEAD
          PythonAbstractPropagatorConverter object;
          static PyObject *wrap_Object(const PythonAbstractPropagatorConverter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
