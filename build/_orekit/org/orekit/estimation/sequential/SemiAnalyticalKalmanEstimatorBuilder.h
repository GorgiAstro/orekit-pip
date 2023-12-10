#ifndef org_orekit_estimation_sequential_SemiAnalyticalKalmanEstimatorBuilder_H
#define org_orekit_estimation_sequential_SemiAnalyticalKalmanEstimatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class DSSTPropagatorBuilder;
      }
    }
    namespace estimation {
      namespace sequential {
        class SemiAnalyticalKalmanEstimator;
        class CovarianceMatrixProvider;
        class SemiAnalyticalKalmanEstimatorBuilder;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
  }
  namespace hipparchus {
    namespace linear {
      class MatrixDecomposer;
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

        class SemiAnalyticalKalmanEstimatorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_addPropagationConfiguration_a0202e99d0775bad,
            mid_build_e3d61a41bb3656f1,
            mid_decomposer_e8882f7224afb4ba,
            mid_estimatedMeasurementsParameters_f23737f930d5c195,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SemiAnalyticalKalmanEstimatorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SemiAnalyticalKalmanEstimatorBuilder(const SemiAnalyticalKalmanEstimatorBuilder& obj) : ::java::lang::Object(obj) {}

          SemiAnalyticalKalmanEstimatorBuilder();

          SemiAnalyticalKalmanEstimatorBuilder addPropagationConfiguration(const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder &, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider &) const;
          ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator build() const;
          SemiAnalyticalKalmanEstimatorBuilder decomposer(const ::org::hipparchus::linear::MatrixDecomposer &) const;
          SemiAnalyticalKalmanEstimatorBuilder estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider &) const;
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
        extern PyType_Def PY_TYPE_DEF(SemiAnalyticalKalmanEstimatorBuilder);
        extern PyTypeObject *PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder);

        class t_SemiAnalyticalKalmanEstimatorBuilder {
        public:
          PyObject_HEAD
          SemiAnalyticalKalmanEstimatorBuilder object;
          static PyObject *wrap_Object(const SemiAnalyticalKalmanEstimatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
