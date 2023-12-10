#ifndef org_orekit_estimation_measurements_PythonObservedMeasurement_H
#define org_orekit_estimation_measurements_PythonObservedMeasurement_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class EstimatedMeasurement;
        class ComparableMeasurement;
        class EstimatedMeasurementBase;
        class ObservedMeasurement;
        class EstimationModifier;
      }
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_7ae3461a92a43152,
            mid_addModifier_fc816f44bfa3d437,
            mid_compareTo_5d68114462a4e82e,
            mid_estimate_9d5a7270ffb14a9e,
            mid_estimateWithoutDerivatives_c188a3b50efa39a5,
            mid_finalize_7ae3461a92a43152,
            mid_getBaseWeight_7cdc325af0834901,
            mid_getDate_aaa854c403487cf3,
            mid_getDimension_f2f64475e4580546,
            mid_getMeasurementType_0090f7797e403f43,
            mid_getModifiers_a6156df500549a58,
            mid_getObservedValue_7cdc325af0834901,
            mid_getParametersDrivers_a6156df500549a58,
            mid_getSatellites_a6156df500549a58,
            mid_getTheoreticalStandardDeviation_7cdc325af0834901,
            mid_isEnabled_e470b6d9e0d979db,
            mid_pythonDecRef_7ae3461a92a43152,
            mid_pythonExtension_a27fc9afd27e559d,
            mid_pythonExtension_fefb08975c10f0a1,
            mid_setEnabled_50a2e0b139e80a58,
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
