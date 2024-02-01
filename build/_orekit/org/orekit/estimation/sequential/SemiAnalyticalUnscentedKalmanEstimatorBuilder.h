#ifndef org_orekit_estimation_sequential_SemiAnalyticalUnscentedKalmanEstimatorBuilder_H
#define org_orekit_estimation_sequential_SemiAnalyticalUnscentedKalmanEstimatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class MatrixDecomposer;
    }
    namespace util {
      class UnscentedTransformProvider;
    }
  }
  namespace orekit {
    namespace estimation {
      namespace sequential {
        class SemiAnalyticalUnscentedKalmanEstimatorBuilder;
        class CovarianceMatrixProvider;
        class SemiAnalyticalUnscentedKalmanEstimator;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace propagation {
      namespace conversion {
        class DSSTPropagatorBuilder;
      }
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

        class SemiAnalyticalUnscentedKalmanEstimatorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_addPropagationConfiguration_4bd0c73f0d7f7dff,
            mid_build_400f2c523278a7df,
            mid_decomposer_87734d07ecd23cc1,
            mid_estimatedMeasurementsParameters_c482870df7060608,
            mid_unscentedTransformProvider_1f51e89a0a81d5f8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SemiAnalyticalUnscentedKalmanEstimatorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SemiAnalyticalUnscentedKalmanEstimatorBuilder(const SemiAnalyticalUnscentedKalmanEstimatorBuilder& obj) : ::java::lang::Object(obj) {}

          SemiAnalyticalUnscentedKalmanEstimatorBuilder();

          SemiAnalyticalUnscentedKalmanEstimatorBuilder addPropagationConfiguration(const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder &, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider &) const;
          ::org::orekit::estimation::sequential::SemiAnalyticalUnscentedKalmanEstimator build() const;
          SemiAnalyticalUnscentedKalmanEstimatorBuilder decomposer(const ::org::hipparchus::linear::MatrixDecomposer &) const;
          SemiAnalyticalUnscentedKalmanEstimatorBuilder estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider &) const;
          SemiAnalyticalUnscentedKalmanEstimatorBuilder unscentedTransformProvider(const ::org::hipparchus::util::UnscentedTransformProvider &) const;
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
        extern PyType_Def PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanEstimatorBuilder);
        extern PyTypeObject *PY_TYPE(SemiAnalyticalUnscentedKalmanEstimatorBuilder);

        class t_SemiAnalyticalUnscentedKalmanEstimatorBuilder {
        public:
          PyObject_HEAD
          SemiAnalyticalUnscentedKalmanEstimatorBuilder object;
          static PyObject *wrap_Object(const SemiAnalyticalUnscentedKalmanEstimatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
