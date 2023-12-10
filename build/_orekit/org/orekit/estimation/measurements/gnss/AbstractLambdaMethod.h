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
              mid_setComparator_4aed3eb33e58d2f7,
              mid_solveILS_fcede534b3836556,
              mid_permutation_987a5fb872043b12,
              mid_getSolutionsSize_f2f64475e4580546,
              mid_recoverAmbiguities_d6c5bc318d7188c2,
              mid_inverseDecomposition_7ae3461a92a43152,
              mid_reduction_7ae3461a92a43152,
              mid_discreteSearch_7ae3461a92a43152,
              mid_getDiagReference_7cdc325af0834901,
              mid_getLowReference_7cdc325af0834901,
              mid_getZInverseTransformationReference_d8ead0d90ce828b0,
              mid_getDecorrelatedReference_7cdc325af0834901,
              mid_zIndex_d9790ac9eecfe931,
              mid_lIndex_d9790ac9eecfe931,
              mid_integerGaussTransformation_8dbc1129a3c2557a,
              mid_getMaxSolution_f2f64475e4580546,
              mid_addSolution_bdab183810389f33,
              mid_getMaxDistance_456d9a2f64d6b28d,
              mid_removeSolution_7ae3461a92a43152,
              mid_ltdlDecomposition_7ae3461a92a43152,
              mid_getSize_f2f64475e4580546,
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
