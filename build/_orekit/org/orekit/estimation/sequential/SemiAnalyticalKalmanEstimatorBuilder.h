#ifndef org_orekit_estimation_sequential_SemiAnalyticalKalmanEstimatorBuilder_H
#define org_orekit_estimation_sequential_SemiAnalyticalKalmanEstimatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        class SemiAnalyticalKalmanEstimator;
        class SemiAnalyticalKalmanEstimatorBuilder;
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
            mid_init$_0640e6acf969ed28,
            mid_addPropagationConfiguration_6fe2b5afb594b4e3,
            mid_build_edfcb27d4dad6e67,
            mid_decomposer_032ccc0017a05cb8,
            mid_estimatedMeasurementsParameters_79d89206611a8ec8,
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
