#ifndef org_orekit_estimation_sequential_ConstantProcessNoise_H
#define org_orekit_estimation_sequential_ConstantProcessNoise_H

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
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class ConstantProcessNoise : public ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider {
         public:
          enum {
            mid_init$_f5364c9a9d9cbd53,
            mid_init$_c3bc1da258610908,
            mid_getProcessNoiseMatrix_70abd86226561523,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConstantProcessNoise(jobject obj) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConstantProcessNoise(const ConstantProcessNoise& obj) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(obj) {}

          ConstantProcessNoise(const ::org::hipparchus::linear::RealMatrix &);
          ConstantProcessNoise(const ::org::hipparchus::linear::RealMatrix &, const ::org::hipparchus::linear::RealMatrix &);

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
        extern PyType_Def PY_TYPE_DEF(ConstantProcessNoise);
        extern PyTypeObject *PY_TYPE(ConstantProcessNoise);

        class t_ConstantProcessNoise {
        public:
          PyObject_HEAD
          ConstantProcessNoise object;
          static PyObject *wrap_Object(const ConstantProcessNoise&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
