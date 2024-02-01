#ifndef org_orekit_estimation_sequential_UnscentedKalmanEstimatorBuilder_H
#define org_orekit_estimation_sequential_UnscentedKalmanEstimatorBuilder_H

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
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
      }
    }
    namespace utils {
      class ParameterDriversList;
    }
    namespace estimation {
      namespace sequential {
        class CovarianceMatrixProvider;
        class UnscentedKalmanEstimatorBuilder;
        class UnscentedKalmanEstimator;
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

        class UnscentedKalmanEstimatorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_addPropagationConfiguration_0a0f4d7c6b86a306,
            mid_build_cd5842dd9bb0ec1c,
            mid_decomposer_b5d4791a2c21fe82,
            mid_estimatedMeasurementsParameters_8b0abcedc4102e54,
            mid_unscentedTransformProvider_cecfa6a1a35a2223,
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
