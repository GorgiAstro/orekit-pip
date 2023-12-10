#ifndef org_orekit_estimation_sequential_AbstractCovarianceMatrixProvider_H
#define org_orekit_estimation_sequential_AbstractCovarianceMatrixProvider_H

#include "java/lang/Object.h"

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

        class AbstractCovarianceMatrixProvider : public ::java::lang::Object {
         public:
          enum {
            mid_getInitialCovarianceMatrix_9483b2ac438718ce,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractCovarianceMatrixProvider(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractCovarianceMatrixProvider(const AbstractCovarianceMatrixProvider& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::linear::RealMatrix getInitialCovarianceMatrix(const ::org::orekit::propagation::SpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(AbstractCovarianceMatrixProvider);
        extern PyTypeObject *PY_TYPE(AbstractCovarianceMatrixProvider);

        class t_AbstractCovarianceMatrixProvider {
        public:
          PyObject_HEAD
          AbstractCovarianceMatrixProvider object;
          static PyObject *wrap_Object(const AbstractCovarianceMatrixProvider&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
