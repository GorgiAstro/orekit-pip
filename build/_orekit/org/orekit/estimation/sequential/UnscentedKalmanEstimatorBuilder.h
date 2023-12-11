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
    namespace utils {
      class ParameterDriversList;
    }
    namespace estimation {
      namespace sequential {
        class UnscentedKalmanEstimator;
        class UnscentedKalmanEstimatorBuilder;
        class CovarianceMatrixProvider;
      }
    }
  }
  namespace hipparchus {
    namespace linear {
      class MatrixDecomposer;
    }
    namespace util {
      class UnscentedTransformProvider;
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
            mid_init$_0640e6acf969ed28,
            mid_addPropagationConfiguration_910d9b705ae177cf,
            mid_build_99c6e345eb94588e,
            mid_decomposer_d9ee1fe18fb8546c,
            mid_estimatedMeasurementsParameters_8c50f82de329d511,
            mid_unscentedTransformProvider_961c88377e177f40,
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
