#ifndef org_orekit_estimation_sequential_PythonAbstractCovarianceMatrixProvider_H
#define org_orekit_estimation_sequential_PythonAbstractCovarianceMatrixProvider_H

#include "org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class PythonAbstractCovarianceMatrixProvider : public ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider {
         public:
          enum {
            mid_init$_f5364c9a9d9cbd53,
            mid_finalize_ff7cb6c242604316,
            mid_getProcessNoiseMatrix_70abd86226561523,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAbstractCovarianceMatrixProvider(jobject obj) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractCovarianceMatrixProvider(const PythonAbstractCovarianceMatrixProvider& obj) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(obj) {}

          PythonAbstractCovarianceMatrixProvider(const ::org::hipparchus::linear::RealMatrix &);

          void finalize() const;
          ::org::hipparchus::linear::RealMatrix getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::SpacecraftState &) const;
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
      namespace sequential {
        extern PyType_Def PY_TYPE_DEF(PythonAbstractCovarianceMatrixProvider);
        extern PyTypeObject *PY_TYPE(PythonAbstractCovarianceMatrixProvider);

        class t_PythonAbstractCovarianceMatrixProvider {
        public:
          PyObject_HEAD
          PythonAbstractCovarianceMatrixProvider object;
          static PyObject *wrap_Object(const PythonAbstractCovarianceMatrixProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
