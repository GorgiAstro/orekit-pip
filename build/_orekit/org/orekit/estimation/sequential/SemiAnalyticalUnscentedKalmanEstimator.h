#ifndef org_orekit_estimation_sequential_SemiAnalyticalUnscentedKalmanEstimator_H
#define org_orekit_estimation_sequential_SemiAnalyticalUnscentedKalmanEstimator_H

#include "org/orekit/estimation/sequential/AbstractKalmanEstimator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          class DSSTPropagator;
        }
      }
    }
    namespace estimation {
      namespace sequential {
        class KalmanObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
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

        class SemiAnalyticalUnscentedKalmanEstimator : public ::org::orekit::estimation::sequential::AbstractKalmanEstimator {
         public:
          enum {
            mid_processMeasurements_7d4c616f81e4b6b1,
            mid_setObserver_2002169216358a3a,
            mid_getKalmanEstimation_e73dd18a212e3cd0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SemiAnalyticalUnscentedKalmanEstimator(jobject obj) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SemiAnalyticalUnscentedKalmanEstimator(const SemiAnalyticalUnscentedKalmanEstimator& obj) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanEstimator);
        extern PyTypeObject *PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator);

        class t_SemiAnalyticalUnscentedKalmanEstimator {
        public:
          PyObject_HEAD
          SemiAnalyticalUnscentedKalmanEstimator object;
          static PyObject *wrap_Object(const SemiAnalyticalUnscentedKalmanEstimator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
