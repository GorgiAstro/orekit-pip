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
            mid_init$_78073cb29f7a4fd8,
            mid_finalize_0fa09c18fee449d5,
            mid_getModel_9751b2e3b68b45ea,
            mid_getObjectiveFunction_18d8e6aab2238577,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
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
