#ifndef org_orekit_estimation_sequential_SemiAnalyticalUnscentedKalmanEstimatorBuilder_H
#define org_orekit_estimation_sequential_SemiAnalyticalUnscentedKalmanEstimatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace util {
      class UnscentedTransformProvider;
    }
    namespace linear {
      class MatrixDecomposer;
    }
  }
  namespace orekit {
    namespace estimation {
      namespace sequential {
        class SemiAnalyticalUnscentedKalmanEstimatorBuilder;
        class SemiAnalyticalUnscentedKalmanEstimator;
        class CovarianceMatrixProvider;
      }
    }
    namespace propagation {
      namespace conversion {
        class DSSTPropagatorBuilder;
      }
    }
    namespace utils {
      class ParameterDriversList;
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
            mid_init$_0fa09c18fee449d5,
            mid_addPropagationConfiguration_86329c5f4a01e02e,
            mid_build_2ad50f34092a6263,
            mid_decomposer_2672ee664c9ea093,
            mid_estimatedMeasurementsParameters_5f8d73a0acd88fd1,
            mid_unscentedTransformProvider_05ab9b440dd924ef,
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
