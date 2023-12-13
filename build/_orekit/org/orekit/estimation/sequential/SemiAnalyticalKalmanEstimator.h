#ifndef org_orekit_estimation_sequential_SemiAnalyticalKalmanEstimator_H
#define org_orekit_estimation_sequential_SemiAnalyticalKalmanEstimator_H

#include "org/orekit/estimation/sequential/AbstractKalmanEstimator.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversList;
    }
    namespace propagation {
      namespace conversion {
        class DSSTPropagatorBuilder;
      }
      namespace semianalytical {
        namespace dsst {
          class DSSTPropagator;
        }
      }
    }
    namespace estimation {
      namespace sequential {
        class CovarianceMatrixProvider;
        class KalmanObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
  }
  namespace hipparchus {
    namespace linear {
      class MatrixDecomposer;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class SemiAnalyticalKalmanEstimator : public ::org::orekit::estimation::sequential::AbstractKalmanEstimator {
         public:
          enum {
            mid_init$_71c06d037b2269e4,
            mid_processMeasurements_63b6806abfbbcee4,
            mid_setObserver_578d9ba5b3b8b483,
            mid_getKalmanEstimation_10690b877ea302f7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SemiAnalyticalKalmanEstimator(jobject obj) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SemiAnalyticalKalmanEstimator(const SemiAnalyticalKalmanEstimator& obj) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(obj) {}

          SemiAnalyticalKalmanEstimator(const ::org::hipparchus::linear::MatrixDecomposer &, const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder &, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider &, const ::org::orekit::utils::ParameterDriversList &, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider &);

          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator processMeasurements(const ::java::util::List &) const;
          void setObserver(const ::org::orekit::estimation::sequential::KalmanObserver &) const;
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
        extern PyType_Def PY_TYPE_DEF(SemiAnalyticalKalmanEstimator);
        extern PyTypeObject *PY_TYPE(SemiAnalyticalKalmanEstimator);

        class t_SemiAnalyticalKalmanEstimator {
        public:
          PyObject_HEAD
          SemiAnalyticalKalmanEstimator object;
          static PyObject *wrap_Object(const SemiAnalyticalKalmanEstimator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
