#ifndef org_orekit_propagation_conversion_PythonAbstractPropagatorConverter_H
#define org_orekit_propagation_conversion_PythonAbstractPropagatorConverter_H

#include "org/orekit/propagation/conversion/AbstractPropagatorConverter.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
    }
  }
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            class MultivariateJacobianFunction;
          }
        }
      }
    }
    namespace analysis {
      class MultivariateVectorFunction;
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
            mid_init$_2a2776403255b5f4,
            mid_finalize_0640e6acf969ed28,
            mid_getModel_e31bcbfb9203b3a6,
            mid_getObjectiveFunction_88ca328d89915cf7,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
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
