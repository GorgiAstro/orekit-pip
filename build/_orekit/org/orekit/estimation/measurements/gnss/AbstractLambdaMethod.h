#ifndef org_orekit_estimation_measurements_gnss_AbstractLambdaMethod_H
#define org_orekit_estimation_measurements_gnss_AbstractLambdaMethod_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class IntegerLeastSquareSolver;
          class IntegerLeastSquareSolution;
        }
      }
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class AbstractLambdaMethod : public ::java::lang::Object {
           public:
            enum {
              mid_setComparator_349032d04af23bed,
              mid_solveILS_1580c6ee6b7d56ce,
              mid_zIndex_5625cf3db98dadc1,
              mid_getDiagReference_a53a7513ecedada2,
              mid_getLowReference_a53a7513ecedada2,
              mid_getDecorrelatedReference_a53a7513ecedada2,
              mid_getZInverseTransformationReference_1b41cf9ebf653611,
              mid_lIndex_5625cf3db98dadc1,
              mid_discreteSearch_0640e6acf969ed28,
              mid_recoverAmbiguities_152c52200b30dda4,
              mid_permutation_89aad365fb0ed8da,
              mid_integerGaussTransformation_a84c9a223722150c,
              mid_getMaxSolution_412668abc8d889e9,
              mid_addSolution_c71cb41dee20c1a0,
              mid_getSolutionsSize_412668abc8d889e9,
              mid_removeSolution_0640e6acf969ed28,
              mid_ltdlDecomposition_0640e6acf969ed28,
              mid_reduction_0640e6acf969ed28,
              mid_inverseDecomposition_0640e6acf969ed28,
              mid_getMaxDistance_557b8123390d8d0c,
              mid_getSize_412668abc8d889e9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractLambdaMethod(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractLambdaMethod(const AbstractLambdaMethod& obj) : ::java::lang::Object(obj) {}

            void setComparator(const ::java::util::Comparator &) const;
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > solveILS(jint, const JArray< jdouble > &, const JArray< jint > &, const ::org::hipparchus::linear::RealMatrix &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(AbstractLambdaMethod);
          extern PyTypeObject *PY_TYPE(AbstractLambdaMethod);

          class t_AbstractLambdaMethod {
          public:
            PyObject_HEAD
            AbstractLambdaMethod object;
            static PyObject *wrap_Object(const AbstractLambdaMethod&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
