#ifndef org_orekit_estimation_sequential_UnscentedKalmanEstimator_H
#define org_orekit_estimation_sequential_UnscentedKalmanEstimator_H

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

        class UnscentedKalmanEstimator : public ::org::orekit::estimation::sequential::AbstractKalmanEstimator {
         public:
          enum {
            mid_estimationStep_a6cfa97380122d5a,
            mid_processMeasurements_87799e9d173bae53,
            mid_setObserver_2002169216358a3a,
            mid_getKalmanEstimation_e73dd18a212e3cd0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnscentedKalmanEstimator(jobject obj) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnscentedKalmanEstimator(const UnscentedKalmanEstimator& obj) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(obj) {}

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
        extern PyType_Def PY_TYPE_DEF(UnscentedKalmanEstimator);
        extern PyTypeObject *PY_TYPE(UnscentedKalmanEstimator);

        class t_UnscentedKalmanEstimator {
        public:
          PyObject_HEAD
          UnscentedKalmanEstimator object;
          static PyObject *wrap_Object(const UnscentedKalmanEstimator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
