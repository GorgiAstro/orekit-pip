#ifndef org_orekit_estimation_measurements_PythonGroundReceiverMeasurement_H
#define org_orekit_estimation_measurements_PythonGroundReceiverMeasurement_H

#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class ObservableSatellite;
        class GroundStation;
        class EstimatedMeasurement;
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
      namespace measurements {

        class PythonGroundReceiverMeasurement : public ::org::orekit::estimation::measurements::GroundReceiverMeasurement {
         public:
          enum {
            mid_init$_c2b759d1b43bb582,
            mid_finalize_ff7cb6c242604316,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_theoreticalEvaluation_eda25b8c88791d9a,
            mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2,
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
