#ifndef org_orekit_estimation_measurements_ObservedMeasurement_H
#define org_orekit_estimation_measurements_ObservedMeasurement_H

#include "org/orekit/estimation/measurements/ComparableMeasurement.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class EstimationModifier;
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
            mid_addModifier_fc816f44bfa3d437,
            mid_estimate_9d5a7270ffb14a9e,
            mid_estimateWithoutDerivatives_c188a3b50efa39a5,
            mid_getBaseWeight_7cdc325af0834901,
            mid_getDimension_f2f64475e4580546,
            mid_getMeasurementType_0090f7797e403f43,
            mid_getModifiers_a6156df500549a58,
            mid_getSatellites_a6156df500549a58,
            mid_getTheoreticalStandardDeviation_7cdc325af0834901,
            mid_isEnabled_e470b6d9e0d979db,
            mid_setEnabled_50a2e0b139e80a58,
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
