#ifndef org_orekit_estimation_measurements_PythonAbstractMeasurement_H
#define org_orekit_estimation_measurements_PythonAbstractMeasurement_H

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class EstimatedMeasurement;
        class ObservableSatellite;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class ParameterDriver;
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

        class PythonAbstractMeasurement : public ::org::orekit::estimation::measurements::AbstractMeasurement {
         public:
          enum {
            mid_init$_1b561c9d2427f59f,
            mid_addParameterDriver_5791d10af4720a8e,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            mid_theoreticalEvaluation_d598991c5cac8ab0,
            mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a,
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
