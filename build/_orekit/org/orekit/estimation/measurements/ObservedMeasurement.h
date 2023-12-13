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
        class EstimationModifier;
        class EstimatedMeasurementBase;
        class EstimatedMeasurement;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class ObservedMeasurement : public ::org::orekit::estimation::measurements::ComparableMeasurement {
         public:
          enum {
            mid_addModifier_cb38ed914ba48f20,
            mid_estimate_d598991c5cac8ab0,
            mid_estimateWithoutDerivatives_9347cf3b1f0dd85a,
            mid_getBaseWeight_25e1757a36c4dde2,
            mid_getDimension_55546ef6a647f39b,
            mid_getMeasurementType_1c1fa1e935d6cdcf,
            mid_getModifiers_e62d3bb06d56d7e3,
            mid_getSatellites_e62d3bb06d56d7e3,
            mid_getTheoreticalStandardDeviation_25e1757a36c4dde2,
            mid_isEnabled_9ab94ac1dc23b105,
            mid_setEnabled_fcb96c98de6fad04,
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
