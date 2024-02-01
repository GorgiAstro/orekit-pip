#ifndef org_orekit_estimation_measurements_ObservedMeasurement_H
#define org_orekit_estimation_measurements_ObservedMeasurement_H

#include "org/orekit/estimation/measurements/ComparableMeasurement.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriversProvider;
    }
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
        class ObservableSatellite;
        class EstimationModifier;
        class EstimatedMeasurement;
      }
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
            mid_addModifier_a3bed5360bec47d0,
            mid_estimate_eda25b8c88791d9a,
            mid_estimateWithoutDerivatives_59954f62fc64aef2,
            mid_getBaseWeight_be783177b060994b,
            mid_getDimension_d6ab429752e7c267,
            mid_getMeasurementType_d2c8eb4129821f0e,
            mid_getModifiers_d751c1a57012b438,
            mid_getSatellites_d751c1a57012b438,
            mid_getTheoreticalStandardDeviation_be783177b060994b,
            mid_isEnabled_eee3de00fe971136,
            mid_setEnabled_b35db77cae58639e,
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
