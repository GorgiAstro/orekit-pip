#ifndef org_orekit_estimation_measurements_PythonObservedMeasurement_H
#define org_orekit_estimation_measurements_PythonObservedMeasurement_H

#include "java/lang/Object.h"

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
namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimationModifier;
        class EstimatedMeasurementBase;
        class ObservedMeasurement;
        class EstimatedMeasurement;
        class ObservableSatellite;
        class ComparableMeasurement;
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

        class PythonObservedMeasurement : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a1fa5dae97ea5ed2,
            mid_addModifier_cb38ed914ba48f20,
            mid_compareTo_6343361fedc17b25,
            mid_estimate_d598991c5cac8ab0,
            mid_estimateWithoutDerivatives_9347cf3b1f0dd85a,
            mid_finalize_a1fa5dae97ea5ed2,
            mid_getBaseWeight_25e1757a36c4dde2,
            mid_getDate_c325492395d89b24,
            mid_getDimension_55546ef6a647f39b,
            mid_getMeasurementType_1c1fa1e935d6cdcf,
            mid_getModifiers_e62d3bb06d56d7e3,
            mid_getObservedValue_25e1757a36c4dde2,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
            mid_getSatellites_e62d3bb06d56d7e3,
            mid_getTheoreticalStandardDeviation_25e1757a36c4dde2,
            mid_isEnabled_9ab94ac1dc23b105,
            mid_pythonDecRef_a1fa5dae97ea5ed2,
            mid_pythonExtension_6c0ce7e438e5ded4,
            mid_pythonExtension_3d7dd2314a0dd456,
            mid_setEnabled_fcb96c98de6fad04,
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
