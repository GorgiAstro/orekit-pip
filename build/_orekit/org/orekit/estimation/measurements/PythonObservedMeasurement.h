#ifndef org_orekit_estimation_measurements_PythonObservedMeasurement_H
#define org_orekit_estimation_measurements_PythonObservedMeasurement_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class ObservableSatellite;
        class EstimationModifier;
        class EstimatedMeasurement;
        class ComparableMeasurement;
        class ObservedMeasurement;
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
            mid_init$_ff7cb6c242604316,
            mid_addModifier_a3bed5360bec47d0,
            mid_compareTo_abfadd9b92595ff6,
            mid_estimate_eda25b8c88791d9a,
            mid_estimateWithoutDerivatives_59954f62fc64aef2,
            mid_finalize_ff7cb6c242604316,
            mid_getBaseWeight_be783177b060994b,
            mid_getDate_80e11148db499dda,
            mid_getDimension_d6ab429752e7c267,
            mid_getMeasurementType_d2c8eb4129821f0e,
            mid_getModifiers_d751c1a57012b438,
            mid_getObservedValue_be783177b060994b,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_getSatellites_d751c1a57012b438,
            mid_getTheoreticalStandardDeviation_be783177b060994b,
            mid_isEnabled_eee3de00fe971136,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_setEnabled_b35db77cae58639e,
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
