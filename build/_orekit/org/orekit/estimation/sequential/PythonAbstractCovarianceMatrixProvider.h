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
            mid_init$_84bd15e0995d0c79,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getProcessNoiseMatrix_18b28191c1378912,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
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
