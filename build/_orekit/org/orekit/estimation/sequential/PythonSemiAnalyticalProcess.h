#ifndef org_orekit_estimation_sequential_PythonSemiAnalyticalProcess_H
#define org_orekit_estimation_sequential_PythonSemiAnalyticalProcess_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {
        class KalmanObserver;
        class SemiAnalyticalProcess;
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
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class PythonSemiAnalyticalProcess : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_finalizeEstimation_32b51ab222e72e59,
            mid_finalizeOperationsObservationGrid_ff7cb6c242604316,
            mid_getObserver_6e4d0b03328febe6,
            mid_initializeShortPeriodicTerms_72b846eb87f3af9a,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_updateNominalSpacecraftState_72b846eb87f3af9a,
            mid_updateShortPeriods_72b846eb87f3af9a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonSemiAnalyticalProcess(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonSemiAnalyticalProcess(const PythonSemiAnalyticalProcess& obj) : ::java::lang::Object(obj) {}

          PythonSemiAnalyticalProcess();

          void finalize() const;
          void finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement &, const ::org::hipparchus::filtering::kalman::ProcessEstimate &) const;
          void finalizeOperationsObservationGrid() const;
          ::org::orekit::estimation::sequential::KalmanObserver getObserver() const;
          void initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState &) const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonSemiAnalyticalProcess);
        extern PyTypeObject *PY_TYPE(PythonSemiAnalyticalProcess);

        class t_PythonSemiAnalyticalProcess {
        public:
          PyObject_HEAD
          PythonSemiAnalyticalProcess object;
          static PyObject *wrap_Object(const PythonSemiAnalyticalProcess&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
