#ifndef org_orekit_estimation_sequential_KalmanEstimator_H
#define org_orekit_estimation_sequential_KalmanEstimator_H

#include "org/orekit/estimation/sequential/AbstractKalmanEstimator.h"

namespace java {
  namespace lang {
    class Iterable;
    class Class;
    class Object;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        class KalmanObserver;
      }
      namespace measurements {
        class ObservedMeasurement;
      }
    }
    namespace propagation {
      class Propagator;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class KalmanEstimator : public ::org::orekit::estimation::sequential::AbstractKalmanEstimator {
         public:
          enum {
            mid_estimationStep_9988f04cca62e28c,
            mid_processMeasurements_3bf4a9b896d49678,
            mid_setObserver_578d9ba5b3b8b483,
            mid_getKalmanEstimation_10690b877ea302f7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KalmanEstimator(jobject obj) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KalmanEstimator(const KalmanEstimator& obj) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(obj) {}

          JArray< ::org::orekit::propagation::Propagator > estimationStep(const ::org::orekit::estimation::measurements::ObservedMeasurement &) const;
          JArray< ::org::orekit::propagation::Propagator > processMeasurements(const ::java::lang::Iterable &) const;
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
        extern PyType_Def PY_TYPE_DEF(KalmanEstimator);
        extern PyTypeObject *PY_TYPE(KalmanEstimator);

        class t_KalmanEstimator {
        public:
          PyObject_HEAD
          KalmanEstimator object;
          static PyObject *wrap_Object(const KalmanEstimator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
