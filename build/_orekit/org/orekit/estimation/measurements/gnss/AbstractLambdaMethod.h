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
          class IntegerLeastSquareSolution;
          class IntegerLeastSquareSolver;
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
              mid_setComparator_bee08e6612998c92,
              mid_solveILS_c875ff52e2e6fa6c,
              mid_inverseDecomposition_ff7cb6c242604316,
              mid_getDiagReference_be783177b060994b,
              mid_getLowReference_be783177b060994b,
              mid_getZInverseTransformationReference_d6f20bd740dd34cd,
              mid_getDecorrelatedReference_be783177b060994b,
              mid_zIndex_91b9e1e34b2235d5,
              mid_lIndex_91b9e1e34b2235d5,
              mid_integerGaussTransformation_b5d23e6c0858e8ed,
              mid_permutation_4320462275d66e78,
              mid_getMaxSolution_d6ab429752e7c267,
              mid_addSolution_0119d689bc5a4d60,
              mid_getMaxDistance_9981f74b2d109da6,
              mid_removeSolution_ff7cb6c242604316,
              mid_getSolutionsSize_d6ab429752e7c267,
              mid_ltdlDecomposition_ff7cb6c242604316,
              mid_reduction_ff7cb6c242604316,
              mid_discreteSearch_ff7cb6c242604316,
              mid_recoverAmbiguities_bc28affeaa2339a4,
              mid_getSize_d6ab429752e7c267,
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
