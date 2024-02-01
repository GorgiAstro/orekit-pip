#ifndef org_orekit_estimation_sequential_SemiAnalyticalKalmanEstimatorBuilder_H
#define org_orekit_estimation_sequential_SemiAnalyticalKalmanEstimatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class MatrixDecomposer;
    }
  }
  namespace orekit {
    namespace estimation {
      namespace sequential {
        class SemiAnalyticalKalmanEstimator;
        class SemiAnalyticalKalmanEstimatorBuilder;
        class CovarianceMatrixProvider;
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

        class SemiAnalyticalKalmanEstimatorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_addPropagationConfiguration_1e734c57d386c277,
            mid_build_005e47daab5d946d,
            mid_decomposer_9824308623963869,
            mid_estimatedMeasurementsParameters_1eba90d963c3b750,
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
