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
            mid_init$_0fa09c18fee449d5,
            mid_finalize_0fa09c18fee449d5,
            mid_finalizeEstimation_da0919b7ae9816a3,
            mid_finalizeOperationsObservationGrid_0fa09c18fee449d5,
            mid_getObserver_fc89aee73878aefd,
            mid_initializeShortPeriodicTerms_0ee5c56004643a2e,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            mid_updateNominalSpacecraftState_0ee5c56004643a2e,
            mid_updateShortPeriods_0ee5c56004643a2e,
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
