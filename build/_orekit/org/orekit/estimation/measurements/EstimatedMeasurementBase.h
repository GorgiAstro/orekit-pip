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
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
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
            mid_init$_f92fd0d275c4d59c,
            mid_getCount_412668abc8d889e9,
            mid_getDate_7a97f7e149e79afb,
            mid_getEstimatedValue_a53a7513ecedada2,
            mid_getIteration_412668abc8d889e9,
            mid_getObservedMeasurement_1217c497a513de4c,
            mid_getObservedValue_a53a7513ecedada2,
            mid_getParticipants_94d7c40250738b28,
            mid_getStates_5dccf571345671af,
            mid_getStatus_0bf93a0304e8d453,
            mid_getTimeOffset_557b8123390d8d0c,
            mid_setEstimatedValue_cc18240f4a737f14,
            mid_setStatus_340c6e935d582f0c,
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
