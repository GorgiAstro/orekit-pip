#ifndef org_orekit_estimation_sequential_PythonSemiAnalyticalProcess_H
#define org_orekit_estimation_sequential_PythonSemiAnalyticalProcess_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        class PythonSemiAnalyticalProcess : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_finalizeEstimation_aef7db4b13ced902,
            mid_finalizeOperationsObservationGrid_a1fa5dae97ea5ed2,
            mid_getObserver_f666564f549c2e32,
            mid_initializeShortPeriodicTerms_280c3390961e0a50,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            mid_updateNominalSpacecraftState_280c3390961e0a50,
            mid_updateShortPeriods_280c3390961e0a50,
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
