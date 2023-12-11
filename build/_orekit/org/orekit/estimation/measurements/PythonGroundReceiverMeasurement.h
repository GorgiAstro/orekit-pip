#ifndef org_orekit_estimation_measurements_PythonGroundReceiverMeasurement_H
#define org_orekit_estimation_measurements_PythonGroundReceiverMeasurement_H

#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class GroundStation;
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class PythonGroundReceiverMeasurement : public ::org::orekit::estimation::measurements::GroundReceiverMeasurement {
         public:
          enum {
            mid_init$_0c97652d522ed1b8,
            mid_finalize_0640e6acf969ed28,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            mid_theoreticalEvaluation_eae039ee8c8a4a4d,
            mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonGroundReceiverMeasurement(jobject obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonGroundReceiverMeasurement(const PythonGroundReceiverMeasurement& obj) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(obj) {}

          PythonGroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation &, jboolean, const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, const ::org::orekit::estimation::measurements::ObservableSatellite &);

          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement theoreticalEvaluation(jint, jint, const JArray< ::org::orekit::propagation::SpacecraftState > &) const;
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase theoreticalEvaluationWithoutDerivatives(jint, jint, const JArray< ::org::orekit::propagation::SpacecraftState > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        extern PyType_Def PY_TYPE_DEF(PythonGroundReceiverMeasurement);
        extern PyTypeObject *PY_TYPE(PythonGroundReceiverMeasurement);

        class t_PythonGroundReceiverMeasurement {
        public:
          PyObject_HEAD
          PythonGroundReceiverMeasurement object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonGroundReceiverMeasurement *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonGroundReceiverMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonGroundReceiverMeasurement&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
