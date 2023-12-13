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
              mid_setComparator_2c01874c65d2ef2f,
              mid_solveILS_78e4e9f588c2bfe0,
              mid_getDiagReference_25e1757a36c4dde2,
              mid_getLowReference_25e1757a36c4dde2,
              mid_getDecorrelatedReference_25e1757a36c4dde2,
              mid_getZInverseTransformationReference_4d095d7a08163110,
              mid_zIndex_92ecd94558bf0c68,
              mid_lIndex_92ecd94558bf0c68,
              mid_discreteSearch_a1fa5dae97ea5ed2,
              mid_recoverAmbiguities_992f722e5b5b80cb,
              mid_permutation_d5322b8b512aeb26,
              mid_integerGaussTransformation_3313c75e3e16c428,
              mid_getMaxSolution_55546ef6a647f39b,
              mid_addSolution_49319a360f3ed64e,
              mid_getSolutionsSize_55546ef6a647f39b,
              mid_removeSolution_a1fa5dae97ea5ed2,
              mid_ltdlDecomposition_a1fa5dae97ea5ed2,
              mid_reduction_a1fa5dae97ea5ed2,
              mid_inverseDecomposition_a1fa5dae97ea5ed2,
              mid_getMaxDistance_b74f83833fdad017,
              mid_getSize_55546ef6a647f39b,
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
