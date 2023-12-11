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
        class ObservableSatellite;
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
      }
    }
    namespace utils {
      class ParameterDriver;
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

        class PythonAbstractMeasurement : public ::org::orekit::estimation::measurements::AbstractMeasurement {
         public:
          enum {
            mid_init$_5871f304bea5be3f,
            mid_addParameterDriver_558cfe74a49f563f,
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
