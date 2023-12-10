#ifndef org_orekit_estimation_sequential_PythonCovarianceMatrixProvider_H
#define org_orekit_estimation_sequential_PythonCovarianceMatrixProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
  namespace orekit {
    namespace estimation {
      namespace sequential {
        class CovarianceMatrixProvider;
      }
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class PythonCovarianceMatrixProvider : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_finalize_0fa09c18fee449d5,
            mid_getInitialCovarianceMatrix_9483b2ac438718ce,
            mid_getProcessNoiseMatrix_26148f4ae87f73a3,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonCovarianceMatrixProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonCovarianceMatrixProvider(const PythonCovarianceMatrixProvider& obj) : ::java::lang::Object(obj) {}

          PythonCovarianceMatrixProvider();

          void finalize() const;
          ::org::hipparchus::linear::RealMatrix getInitialCovarianceMatrix(const ::org::orekit::propagation::SpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonCovarianceMatrixProvider);
        extern PyTypeObject *PY_TYPE(PythonCovarianceMatrixProvider);

        class t_PythonCovarianceMatrixProvider {
        public:
          PyObject_HEAD
          PythonCovarianceMatrixProvider object;
          static PyObject *wrap_Object(const PythonCovarianceMatrixProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
