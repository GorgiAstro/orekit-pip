#ifndef org_orekit_estimation_measurements_EstimatedMeasurementBase_H
#define org_orekit_estimation_measurements_EstimatedMeasurementBase_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class ComparableMeasurement;
        class ObservedMeasurement;
        class EstimatedMeasurementBase$Status;
      }
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class EstimatedMeasurementBase : public ::java::lang::Object {
         public:
          enum {
            mid_init$_928a9f4df476de65,
            mid_getCount_f2f64475e4580546,
            mid_getDate_aaa854c403487cf3,
            mid_getEstimatedValue_7cdc325af0834901,
            mid_getIteration_f2f64475e4580546,
            mid_getObservedMeasurement_cad4d6aea977e795,
            mid_getObservedValue_7cdc325af0834901,
            mid_getParticipants_4e88474af2ad6bb8,
            mid_getStates_a4eb258dd7a1e164,
            mid_getStatus_0136d00f07a6d9f8,
            mid_getTimeOffset_456d9a2f64d6b28d,
            mid_setEstimatedValue_ebc26dcaf4761286,
            mid_setStatus_4406454e8781a429,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EstimatedMeasurementBase(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EstimatedMeasurementBase(const EstimatedMeasurementBase& obj) : ::java::lang::Object(obj) {}

          EstimatedMeasurementBase(const ::org::orekit::estimation::measurements::ObservedMeasurement &, jint, jint, const JArray< ::org::orekit::propagation::SpacecraftState > &, const JArray< ::org::orekit::utils::TimeStampedPVCoordinates > &);

          jint getCount() const;
          ::org::orekit::time::AbsoluteDate getDate() const;
          JArray< jdouble > getEstimatedValue() const;
          jint getIteration() const;
          ::org::orekit::estimation::measurements::ObservedMeasurement getObservedMeasurement() const;
          JArray< jdouble > getObservedValue() const;
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > getParticipants() const;
          JArray< ::org::orekit::propagation::SpacecraftState > getStates() const;
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status getStatus() const;
          jdouble getTimeOffset() const;
          void setEstimatedValue(const JArray< jdouble > &) const;
          void setStatus(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status &) const;
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
        extern PyType_Def PY_TYPE_DEF(EstimatedMeasurementBase);
        extern PyTypeObject *PY_TYPE(EstimatedMeasurementBase);

        class t_EstimatedMeasurementBase {
        public:
          PyObject_HEAD
          EstimatedMeasurementBase object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_EstimatedMeasurementBase *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const EstimatedMeasurementBase&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const EstimatedMeasurementBase&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
