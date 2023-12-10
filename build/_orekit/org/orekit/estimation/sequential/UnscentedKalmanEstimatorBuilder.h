#ifndef org_orekit_estimation_sequential_UnscentedKalmanEstimatorBuilder_H
#define org_orekit_estimation_sequential_UnscentedKalmanEstimatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
    }
    namespace estimation {
      namespace sequential {
        class UnscentedKalmanEstimator;
        class UnscentedKalmanEstimatorBuilder;
        class CovarianceMatrixProvider;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
  }
  namespace hipparchus {
    namespace util {
      class UnscentedTransformProvider;
    }
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

        class UnscentedKalmanEstimatorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_addPropagationConfiguration_4f0222b06fa4311a,
            mid_build_a5b48003a865cd83,
            mid_decomposer_e93e2b79e62135b3,
            mid_estimatedMeasurementsParameters_a8e81bedebfdb55c,
            mid_unscentedTransformProvider_a5c354e7e08b95e2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnscentedKalmanEstimatorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnscentedKalmanEstimatorBuilder(const UnscentedKalmanEstimatorBuilder& obj) : ::java::lang::Object(obj) {}

          UnscentedKalmanEstimatorBuilder();

          UnscentedKalmanEstimatorBuilder addPropagationConfiguration(const ::org::orekit::propagation::conversion::PropagatorBuilder &, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider &) const;
          ::org::orekit::estimation::sequential::UnscentedKalmanEstimator build() const;
          UnscentedKalmanEstimatorBuilder decomposer(const ::org::hipparchus::linear::MatrixDecomposer &) const;
          UnscentedKalmanEstimatorBuilder estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider &) const;
          UnscentedKalmanEstimatorBuilder unscentedTransformProvider(const ::org::hipparchus::util::UnscentedTransformProvider &) const;
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
        extern PyType_Def PY_TYPE_DEF(UnscentedKalmanEstimatorBuilder);
        extern PyTypeObject *PY_TYPE(UnscentedKalmanEstimatorBuilder);

        class t_UnscentedKalmanEstimatorBuilder {
        public:
          PyObject_HEAD
          UnscentedKalmanEstimatorBuilder object;
          static PyObject *wrap_Object(const UnscentedKalmanEstimatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
