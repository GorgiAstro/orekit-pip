#ifndef org_orekit_estimation_sequential_CovarianceMatrixProvider_H
#define org_orekit_estimation_sequential_CovarianceMatrixProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
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

        class CovarianceMatrixProvider : public ::java::lang::Object {
         public:
          enum {
            mid_getInitialCovarianceMatrix_63aee3ce1e412e46,
            mid_getProcessNoiseMatrix_dc7483997a2e9c4d,
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
