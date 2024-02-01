#ifndef org_orekit_estimation_measurements_AbstractMeasurement_H
#define org_orekit_estimation_measurements_AbstractMeasurement_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class EstimatedMeasurementBase;
        class EstimationModifier;
        class EstimatedMeasurement;
        class ObservedMeasurement;
      }
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
      class TimeStampedFieldPVCoordinates;
      class ParameterDriver;
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
            mid_addModifier_a3bed5360bec47d0,
            mid_estimate_eda25b8c88791d9a,
            mid_estimateWithoutDerivatives_59954f62fc64aef2,
            mid_getBaseWeight_be783177b060994b,
            mid_getCoordinates_8b861b31a49c2b7e,
            mid_getDate_80e11148db499dda,
            mid_getDimension_d6ab429752e7c267,
            mid_getModifiers_d751c1a57012b438,
            mid_getObservedValue_be783177b060994b,
            mid_getParametersDrivers_d751c1a57012b438,
            mid_getSatellites_d751c1a57012b438,
            mid_getTheoreticalStandardDeviation_be783177b060994b,
            mid_isEnabled_eee3de00fe971136,
            mid_setEnabled_b35db77cae58639e,
            mid_signalTimeOfFlight_85a9d161d0b12c2d,
            mid_signalTimeOfFlight_274967c07d63ac06,
            mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2,
            mid_theoreticalEvaluation_eda25b8c88791d9a,
            mid_addParameterDriver_680e005705d5f0aa,
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
          static jdouble signalTimeOfFlight(const ::org::orekit::utils::TimeStampedPVCoordinates &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::time::AbsoluteDate &);
          static ::org::hipparchus::CalculusFieldElement signalTimeOfFlight(const ::org::orekit::utils::TimeStampedFieldPVCoordinates &, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::time::FieldAbsoluteDate &);
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
