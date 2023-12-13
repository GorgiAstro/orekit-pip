#ifndef org_orekit_estimation_measurements_EstimatedMeasurementBase_H
#define org_orekit_estimation_measurements_EstimatedMeasurementBase_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase$Status;
        class ObservedMeasurement;
        class ComparableMeasurement;
      }
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
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
            mid_init$_1751916beaa99c3d,
            mid_getCount_55546ef6a647f39b,
            mid_getDate_c325492395d89b24,
            mid_getEstimatedValue_25e1757a36c4dde2,
            mid_getIteration_55546ef6a647f39b,
            mid_getObservedMeasurement_a902d8547365f415,
            mid_getObservedValue_25e1757a36c4dde2,
            mid_getParticipants_352b3a127c5ae4d9,
            mid_getStates_3807ff088e7ce821,
            mid_getStatus_33e10db37ee6c7fc,
            mid_getTimeOffset_b74f83833fdad017,
            mid_setEstimatedValue_ab69da052b88f50c,
            mid_setStatus_0feae6c71af38e56,
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
