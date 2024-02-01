#ifndef org_orekit_estimation_sequential_SemiAnalyticalProcess_H
#define org_orekit_estimation_sequential_SemiAnalyticalProcess_H

#include "java/lang/Object.h"

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
            mid_finalizeEstimation_32b51ab222e72e59,
            mid_finalizeOperationsObservationGrid_ff7cb6c242604316,
            mid_getObserver_6e4d0b03328febe6,
            mid_initializeShortPeriodicTerms_72b846eb87f3af9a,
            mid_updateNominalSpacecraftState_72b846eb87f3af9a,
            mid_updateShortPeriods_72b846eb87f3af9a,
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
