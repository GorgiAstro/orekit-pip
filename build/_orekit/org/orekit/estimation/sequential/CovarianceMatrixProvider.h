#ifndef org_orekit_estimation_sequential_CovarianceMatrixProvider_H
#define org_orekit_estimation_sequential_CovarianceMatrixProvider_H

#include "java/lang/Object.h"

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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class CovarianceMatrixProvider : public ::java::lang::Object {
         public:
          enum {
            mid_getInitialCovarianceMatrix_b7aa5791b069a41f,
            mid_getProcessNoiseMatrix_18b28191c1378912,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CovarianceMatrixProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CovarianceMatrixProvider(const CovarianceMatrixProvider& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::linear::RealMatrix getInitialCovarianceMatrix(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::hipparchus::linear::RealMatrix getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::SpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(CovarianceMatrixProvider);
        extern PyTypeObject *PY_TYPE(CovarianceMatrixProvider);

        class t_CovarianceMatrixProvider {
        public:
          PyObject_HEAD
          CovarianceMatrixProvider object;
          static PyObject *wrap_Object(const CovarianceMatrixProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
