#ifndef org_orekit_estimation_measurements_AbstractMeasurement_H
#define org_orekit_estimation_measurements_AbstractMeasurement_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ObservedMeasurement;
        class ObservableSatellite;
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class EstimationModifier;
      }
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
      class ParameterDriver;
      class TimeStampedPVCoordinates;
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
            mid_addModifier_6f472135bf397672,
            mid_estimate_eae039ee8c8a4a4d,
            mid_estimateWithoutDerivatives_71d69ca0f7c280a7,
            mid_getBaseWeight_a53a7513ecedada2,
            mid_getCoordinates_35bdb952e4a028e2,
            mid_getDate_7a97f7e149e79afb,
            mid_getDimension_412668abc8d889e9,
            mid_getModifiers_0d9551367f7ecdef,
            mid_getObservedValue_a53a7513ecedada2,
            mid_getParametersDrivers_0d9551367f7ecdef,
            mid_getSatellites_0d9551367f7ecdef,
            mid_getTheoreticalStandardDeviation_a53a7513ecedada2,
            mid_isEnabled_89b302893bdbe1f1,
            mid_setEnabled_ed2afdb8506b9742,
            mid_signalTimeOfFlight_8b2d535c90fd2ca6,
            mid_signalTimeOfFlight_9011d63fcb2c1242,
            mid_addParameterDriver_558cfe74a49f563f,
            mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7,
            mid_theoreticalEvaluation_eae039ee8c8a4a4d,
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
