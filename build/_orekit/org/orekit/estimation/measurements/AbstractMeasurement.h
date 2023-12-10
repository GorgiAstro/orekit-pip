#ifndef org_orekit_estimation_measurements_AbstractMeasurement_H
#define org_orekit_estimation_measurements_AbstractMeasurement_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurement;
        class EstimatedMeasurementBase;
        class ObservedMeasurement;
        class EstimationModifier;
        class ObservableSatellite;
      }
    }
    namespace utils {
      class ParameterDriver;
      class TimeStampedPVCoordinates;
      class TimeStampedFieldPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
            mid_addModifier_baf3397e6fffc21d,
            mid_estimate_27ef5cc84ad0852b,
            mid_estimateWithoutDerivatives_e32883476b3d9b22,
            mid_getBaseWeight_60c7040667a7dc5c,
            mid_getCoordinates_d3c60b51295c1a91,
            mid_getDate_85703d13e302437e,
            mid_getDimension_570ce0828f81a2c1,
            mid_getModifiers_2afa36052df4765d,
            mid_getObservedValue_60c7040667a7dc5c,
            mid_getParametersDrivers_2afa36052df4765d,
            mid_getSatellites_2afa36052df4765d,
            mid_getTheoreticalStandardDeviation_60c7040667a7dc5c,
            mid_isEnabled_b108b35ef48e27bd,
            mid_setEnabled_bd04c9335fb9e4cf,
            mid_signalTimeOfFlight_b8a7d6bc618d5fd6,
            mid_signalTimeOfFlight_1fa9729545cf47a9,
            mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22,
            mid_theoreticalEvaluation_27ef5cc84ad0852b,
            mid_addParameterDriver_01a5c4b8230d6f04,
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
