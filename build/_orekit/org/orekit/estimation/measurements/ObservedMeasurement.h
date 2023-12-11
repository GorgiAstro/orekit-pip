#ifndef org_orekit_estimation_measurements_ObservedMeasurement_H
#define org_orekit_estimation_measurements_ObservedMeasurement_H

#include "org/orekit/estimation/measurements/ComparableMeasurement.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class ObservedMeasurement : public ::org::orekit::estimation::measurements::ComparableMeasurement {
         public:
          enum {
            mid_addModifier_6f472135bf397672,
            mid_estimate_eae039ee8c8a4a4d,
            mid_estimateWithoutDerivatives_71d69ca0f7c280a7,
            mid_getBaseWeight_a53a7513ecedada2,
            mid_getDimension_412668abc8d889e9,
            mid_getMeasurementType_3cffd47377eca18a,
            mid_getModifiers_0d9551367f7ecdef,
            mid_getSatellites_0d9551367f7ecdef,
            mid_getTheoreticalStandardDeviation_a53a7513ecedada2,
            mid_isEnabled_89b302893bdbe1f1,
            mid_setEnabled_ed2afdb8506b9742,
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
