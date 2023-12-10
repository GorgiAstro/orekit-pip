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
              mid_setComparator_aba33752f2449599,
              mid_solveILS_191219eb4c75acaf,
              mid_getDiagReference_60c7040667a7dc5c,
              mid_getLowReference_60c7040667a7dc5c,
              mid_lIndex_819f91eddf220c5b,
              mid_integerGaussTransformation_6f37635c3285dbdf,
              mid_permutation_bb79ca80d85d0a66,
              mid_getMaxSolution_570ce0828f81a2c1,
              mid_getDecorrelatedReference_60c7040667a7dc5c,
              mid_addSolution_7a441056067c6c5b,
              mid_getSolutionsSize_570ce0828f81a2c1,
              mid_removeSolution_0fa09c18fee449d5,
              mid_ltdlDecomposition_0fa09c18fee449d5,
              mid_reduction_0fa09c18fee449d5,
              mid_discreteSearch_0fa09c18fee449d5,
              mid_inverseDecomposition_0fa09c18fee449d5,
              mid_recoverAmbiguities_1abcd8567321bdbe,
              mid_zIndex_819f91eddf220c5b,
              mid_getMaxDistance_dff5885c2c873297,
              mid_getZInverseTransformationReference_d0635cea09dc178c,
              mid_getSize_570ce0828f81a2c1,
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
