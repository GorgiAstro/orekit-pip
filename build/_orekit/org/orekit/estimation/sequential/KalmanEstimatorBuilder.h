#ifndef org_orekit_estimation_sequential_KalmanEstimatorBuilder_H
#define org_orekit_estimation_sequential_KalmanEstimatorBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        class KalmanEstimator;
        class KalmanEstimatorBuilder;
        class CovarianceMatrixProvider;
      }
    }
    namespace propagation {
      namespace conversion {
        class PropagatorBuilder;
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

        class KalmanEstimatorBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_addPropagationConfiguration_61fe9d340683de4c,
            mid_build_55dabf57465c9f6d,
            mid_decomposer_1c41ab74406b8fc8,
            mid_estimatedMeasurementsParameters_07ea1a66b45abd16,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KalmanEstimatorBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KalmanEstimatorBuilder(const KalmanEstimatorBuilder& obj) : ::java::lang::Object(obj) {}

          KalmanEstimatorBuilder();

          KalmanEstimatorBuilder addPropagationConfiguration(const ::org::orekit::propagation::conversion::PropagatorBuilder &, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider &) const;
          ::org::orekit::estimation::sequential::KalmanEstimator build() const;
          KalmanEstimatorBuilder decomposer(const ::org::hipparchus::linear::MatrixDecomposer &) const;
          KalmanEstimatorBuilder estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider &) const;
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
        extern PyType_Def PY_TYPE_DEF(KalmanEstimatorBuilder);
        extern PyTypeObject *PY_TYPE(KalmanEstimatorBuilder);

        class t_KalmanEstimatorBuilder {
        public:
          PyObject_HEAD
          KalmanEstimatorBuilder object;
          static PyObject *wrap_Object(const KalmanEstimatorBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
