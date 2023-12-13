#ifndef org_orekit_estimation_measurements_AbstractMeasurement_H
#define org_orekit_estimation_measurements_AbstractMeasurement_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimationModifier;
        class EstimatedMeasurementBase;
        class ObservedMeasurement;
        class EstimatedMeasurement;
        class ObservableSatellite;
      }
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class ParameterDriver;
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class FieldAbsoluteDate;
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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class AbstractMeasurement : public ::java::lang::Object {
         public:
          enum {
            mid_addModifier_cb38ed914ba48f20,
            mid_estimate_d598991c5cac8ab0,
            mid_estimateWithoutDerivatives_9347cf3b1f0dd85a,
            mid_getBaseWeight_25e1757a36c4dde2,
            mid_getCoordinates_52bdf6f6bc7acbc0,
            mid_getDate_c325492395d89b24,
            mid_getDimension_55546ef6a647f39b,
            mid_getModifiers_e62d3bb06d56d7e3,
            mid_getObservedValue_25e1757a36c4dde2,
            mid_getParametersDrivers_e62d3bb06d56d7e3,
            mid_getSatellites_e62d3bb06d56d7e3,
            mid_getTheoreticalStandardDeviation_25e1757a36c4dde2,
            mid_isEnabled_9ab94ac1dc23b105,
            mid_setEnabled_fcb96c98de6fad04,
            mid_signalTimeOfFlight_b6a0c46623a5e65d,
            mid_signalTimeOfFlight_61d200a26515a6ab,
            mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a,
            mid_theoreticalEvaluation_d598991c5cac8ab0,
            mid_addParameterDriver_5791d10af4720a8e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AbstractMeasurement(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AbstractMeasurement(const AbstractMeasurement& obj) : ::java::lang::Object(obj) {}

          void addModifier(const ::org::orekit::estimation::measurements::EstimationModifier &) const;
          ::org::orekit::estimation::measurements::EstimatedMeasurement estimate(jint, jint, const JArray< ::org::orekit::propagation::SpacecraftState > &) const;
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase estimateWithoutDerivatives(jint, jint, const JArray< ::org::orekit::propagation::SpacecraftState > &) const;
          JArray< jdouble > getBaseWeight() const;
          static ::org::orekit::utils::TimeStampedFieldPVCoordinates getCoordinates(const ::org::orekit::propagation::SpacecraftState &, jint, jint);
          ::org::orekit::time::AbsoluteDate getDate() const;
          jint getDimension() const;
          ::java::util::List getModifiers() const;
          JArray< jdouble > getObservedValue() const;
          ::java::util::List getParametersDrivers() const;
          ::java::util::List getSatellites() const;
          JArray< jdouble > getTheoreticalStandardDeviation() const;
          jboolean isEnabled() const;
          void setEnabled(jboolean) const;
          static ::org::hipparchus::CalculusFieldElement signalTimeOfFlight(const ::org::orekit::utils::TimeStampedFieldPVCoordinates &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::time::FieldAbsoluteDate &);
          static jdouble signalTimeOfFlight(const ::org::orekit::utils::TimeStampedPVCoordinates &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &);
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
        extern PyType_Def PY_TYPE_DEF(AbstractMeasurement);
        extern PyTypeObject *PY_TYPE(AbstractMeasurement);

        class t_AbstractMeasurement {
        public:
          PyObject_HEAD
          AbstractMeasurement object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_AbstractMeasurement *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const AbstractMeasurement&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const AbstractMeasurement&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
