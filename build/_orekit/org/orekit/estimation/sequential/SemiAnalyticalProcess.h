#ifndef org_orekit_estimation_sequential_SemiAnalyticalProcess_H
#define org_orekit_estimation_sequential_SemiAnalyticalProcess_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
      }
      namespace sequential {
        class KalmanObserver;
      }
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        class ProcessEstimate;
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

        class SemiAnalyticalProcess : public ::java::lang::Object {
         public:
          enum {
            mid_finalizeEstimation_6f886d47d0124943,
            mid_finalizeOperationsObservationGrid_0640e6acf969ed28,
            mid_getObserver_25fab8044126746b,
            mid_initializeShortPeriodicTerms_8655761ebf04b503,
            mid_updateNominalSpacecraftState_8655761ebf04b503,
            mid_updateShortPeriods_8655761ebf04b503,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SemiAnalyticalProcess(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SemiAnalyticalProcess(const SemiAnalyticalProcess& obj) : ::java::lang::Object(obj) {}

          void finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement &, const ::org::hipparchus::filtering::kalman::ProcessEstimate &) const;
          void finalizeOperationsObservationGrid() const;
          ::org::orekit::estimation::sequential::KalmanObserver getObserver() const;
          void initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState &) const;
          void updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState &) const;
          void updateShortPeriods(const ::org::orekit::propagation::SpacecraftState &) const;
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
        extern PyType_Def PY_TYPE_DEF(SemiAnalyticalProcess);
        extern PyTypeObject *PY_TYPE(SemiAnalyticalProcess);

        class t_SemiAnalyticalProcess {
        public:
          PyObject_HEAD
          SemiAnalyticalProcess object;
          static PyObject *wrap_Object(const SemiAnalyticalProcess&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
