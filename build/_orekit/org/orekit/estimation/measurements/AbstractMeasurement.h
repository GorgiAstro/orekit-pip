#ifndef org_orekit_estimation_measurements_AbstractMeasurement_H
#define org_orekit_estimation_measurements_AbstractMeasurement_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservableSatellite;
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class ObservedMeasurement;
        class EstimationModifier;
      }
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class ParameterDriver;
      class TimeStampedPVCoordinates;
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
        }
      }
    }
    class CalculusFieldElement;
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
            mid_addModifier_fc816f44bfa3d437,
            mid_estimate_9d5a7270ffb14a9e,
            mid_estimateWithoutDerivatives_c188a3b50efa39a5,
            mid_getBaseWeight_7cdc325af0834901,
            mid_getCoordinates_810e0038c590ccfe,
            mid_getDate_aaa854c403487cf3,
            mid_getDimension_f2f64475e4580546,
            mid_getModifiers_a6156df500549a58,
            mid_getObservedValue_7cdc325af0834901,
            mid_getParametersDrivers_a6156df500549a58,
            mid_getSatellites_a6156df500549a58,
            mid_getTheoreticalStandardDeviation_7cdc325af0834901,
            mid_isEnabled_e470b6d9e0d979db,
            mid_setEnabled_50a2e0b139e80a58,
            mid_signalTimeOfFlight_3034b58dad23b2f6,
            mid_signalTimeOfFlight_b1b80f2b159999ff,
            mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5,
            mid_theoreticalEvaluation_9d5a7270ffb14a9e,
            mid_addParameterDriver_a4c33e1e91b3ca8e,
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
