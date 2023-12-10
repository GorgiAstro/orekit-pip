#ifndef org_orekit_estimation_measurements_ObservedMeasurement_H
#define org_orekit_estimation_measurements_ObservedMeasurement_H

#include "org/orekit/estimation/measurements/ComparableMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class EstimationModifier;
        class ObservableSatellite;
      }
    }
    namespace utils {
      class ParameterDriversProvider;
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
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class ObservedMeasurement : public ::org::orekit::estimation::measurements::ComparableMeasurement {
         public:
          enum {
            mid_addModifier_baf3397e6fffc21d,
            mid_estimate_27ef5cc84ad0852b,
            mid_estimateWithoutDerivatives_e32883476b3d9b22,
            mid_getBaseWeight_60c7040667a7dc5c,
            mid_getDimension_570ce0828f81a2c1,
            mid_getMeasurementType_11b109bd155ca898,
            mid_getModifiers_2afa36052df4765d,
            mid_getSatellites_2afa36052df4765d,
            mid_getTheoreticalStandardDeviation_60c7040667a7dc5c,
            mid_isEnabled_b108b35ef48e27bd,
            mid_setEnabled_bd04c9335fb9e4cf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ObservedMeasurement(jobject obj) : ::org::orekit::estimation::measurements::ComparableMeasurement(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ObservedMeasurement(const ObservedMeasurement& obj) : ::org::orekit::estimation::measurements::ComparableMeasurement(obj) {}

          void addModifier(const ::org::orekit::estimation::measurements::EstimationModifier &) const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement estimate(jint, jint, const JArray< ::org::orekit::propagation::SpacecraftState > &) const;
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase estimateWithoutDerivatives(jint, jint, const JArray< ::org::orekit::propagation::SpacecraftState > &) const;
          JArray< jdouble > getBaseWeight() const;
          jint getDimension() const;
          ::java::lang::String getMeasurementType() const;
          ::java::util::List getModifiers() const;
          ::java::util::List getSatellites() const;
          JArray< jdouble > getTheoreticalStandardDeviation() const;
          jboolean isEnabled() const;
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
        extern PyType_Def PY_TYPE_DEF(ObservedMeasurement);
        extern PyTypeObject *PY_TYPE(ObservedMeasurement);

        class t_ObservedMeasurement {
        public:
          PyObject_HEAD
          ObservedMeasurement object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ObservedMeasurement *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ObservedMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ObservedMeasurement&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
