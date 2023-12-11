#ifndef org_orekit_estimation_sequential_PythonAbstractCovarianceMatrixProvider_H
#define org_orekit_estimation_sequential_PythonAbstractCovarianceMatrixProvider_H

#include "org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
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
            mid_init$_f3731847577f13e6,
            mid_finalize_0640e6acf969ed28,
            mid_getProcessNoiseMatrix_158686209bf6089c,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
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
