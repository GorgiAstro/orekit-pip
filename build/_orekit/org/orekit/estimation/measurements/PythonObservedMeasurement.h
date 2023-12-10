#ifndef org_orekit_estimation_measurements_PythonObservedMeasurement_H
#define org_orekit_estimation_measurements_PythonObservedMeasurement_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class ComparableMeasurement;
        class ObservedMeasurement;
        class EstimationModifier;
        class ObservableSatellite;
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
            mid_init$_0fa09c18fee449d5,
            mid_addModifier_baf3397e6fffc21d,
            mid_compareTo_aa79741dc73b1207,
            mid_estimate_27ef5cc84ad0852b,
            mid_estimateWithoutDerivatives_e32883476b3d9b22,
            mid_finalize_0fa09c18fee449d5,
            mid_getBaseWeight_60c7040667a7dc5c,
            mid_getDate_85703d13e302437e,
            mid_getDimension_570ce0828f81a2c1,
            mid_getMeasurementType_11b109bd155ca898,
            mid_getModifiers_2afa36052df4765d,
            mid_getObservedValue_60c7040667a7dc5c,
            mid_getParametersDrivers_2afa36052df4765d,
            mid_getSatellites_2afa36052df4765d,
            mid_getTheoreticalStandardDeviation_60c7040667a7dc5c,
            mid_isEnabled_b108b35ef48e27bd,
            mid_pythonDecRef_0fa09c18fee449d5,
            mid_pythonExtension_492808a339bfa35f,
            mid_pythonExtension_3a8e7649f31fdb20,
            mid_setEnabled_bd04c9335fb9e4cf,
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
