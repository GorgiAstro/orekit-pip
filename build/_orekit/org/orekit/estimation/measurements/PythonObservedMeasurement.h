#ifndef org_orekit_estimation_measurements_PythonObservedMeasurement_H
#define org_orekit_estimation_measurements_PythonObservedMeasurement_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class ObservableSatellite;
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class ComparableMeasurement;
        class EstimationModifier;
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
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class PythonObservedMeasurement : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_addModifier_6f472135bf397672,
            mid_compareTo_0a393ed00cc2801f,
            mid_estimate_eae039ee8c8a4a4d,
            mid_estimateWithoutDerivatives_71d69ca0f7c280a7,
            mid_finalize_0640e6acf969ed28,
            mid_getBaseWeight_a53a7513ecedada2,
            mid_getDate_7a97f7e149e79afb,
            mid_getDimension_412668abc8d889e9,
            mid_getMeasurementType_3cffd47377eca18a,
            mid_getModifiers_0d9551367f7ecdef,
            mid_getObservedValue_a53a7513ecedada2,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_getSatellites_0d9551367f7ecdef,
            mid_getTheoreticalStandardDeviation_a53a7513ecedada2,
            mid_isEnabled_89b302893bdbe1f1,
            mid_pythonDecRef_0640e6acf969ed28,
            mid_pythonExtension_9e26256fb0d384a2,
            mid_pythonExtension_3cd6a6b354c6aa22,
            mid_setEnabled_ed2afdb8506b9742,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonObservedMeasurement(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonObservedMeasurement(const PythonObservedMeasurement& obj) : ::java::lang::Object(obj) {}

          PythonObservedMeasurement();

          void addModifier(const ::org::orekit::estimation::measurements::EstimationModifier &) const;
          jint compareTo(const ::org::orekit::estimation::measurements::ComparableMeasurement &) const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement estimate(jint, jint, const JArray< ::org::orekit::propagation::SpacecraftState > &) const;
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase estimateWithoutDerivatives(jint, jint, const JArray< ::org::orekit::propagation::SpacecraftState > &) const;
          void finalize() const;
          JArray< jdouble > getBaseWeight() const;
          ::org::orekit::time::AbsoluteDate getDate() const;
          jint getDimension() const;
          ::java::lang::String getMeasurementType() const;
          ::java::util::List getModifiers() const;
          JArray< jdouble > getObservedValue() const;
          ::java::util::List getParametersDrivers() const;
          ::java::util::List getSatellites() const;
          JArray< jdouble > getTheoreticalStandardDeviation() const;
          jboolean isEnabled() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          void setEnabled(jboolean) const;
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
        extern PyType_Def PY_TYPE_DEF(PythonObservedMeasurement);
        extern PyTypeObject *PY_TYPE(PythonObservedMeasurement);

        class t_PythonObservedMeasurement {
        public:
          PyObject_HEAD
          PythonObservedMeasurement object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PythonObservedMeasurement *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PythonObservedMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PythonObservedMeasurement&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
