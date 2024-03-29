#ifndef org_orekit_estimation_measurements_PythonAbstractMeasurement_H
#define org_orekit_estimation_measurements_PythonAbstractMeasurement_H

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class ObservableSatellite;
        class EstimatedMeasurement;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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

        class PythonAbstractMeasurement : public ::org::orekit::estimation::measurements::AbstractMeasurement {
         public:
          enum {
            mid_init$_1960ea2732bb7cd6,
            mid_addParameterDriver_680e005705d5f0aa,
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

          explicit PythonAbstractMeasurement(jobject obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAbstractMeasurement(const PythonAbstractMeasurement& obj) : ::org::orekit::estimation::measurements::AbstractMeasurement(obj) {}

          PythonAbstractMeasurement(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, const ::java::util::List &);

          void addParameterDriver(const ::org::orekit::utils::ParameterDriver &) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonAbstractMeasurement);
        extern PyTypeObject *PY_TYPE(PythonAbstractMeasurement);

        class t_PythonAbstractMeasurement {
        public:
          PyObject_HEAD
          PythonAbstractMeasurement object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonAbstractMeasurement *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonAbstractMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonAbstractMeasurement&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
