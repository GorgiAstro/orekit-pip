#ifndef org_orekit_estimation_measurements_EstimatedMeasurementBase_H
#define org_orekit_estimation_measurements_EstimatedMeasurementBase_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase$Status;
        class ComparableMeasurement;
        class ObservedMeasurement;
      }
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
            mid_init$_047f677485db459a,
            mid_getCount_d6ab429752e7c267,
            mid_getDate_80e11148db499dda,
            mid_getEstimatedValue_be783177b060994b,
            mid_getIteration_d6ab429752e7c267,
            mid_getObservedMeasurement_2198162c3cb7b73f,
            mid_getObservedValue_be783177b060994b,
            mid_getParticipants_be2ee2a4bff8d504,
            mid_getStates_598bcd058df23e79,
            mid_getStatus_abe76ff55126e323,
            mid_getTimeOffset_9981f74b2d109da6,
            mid_setEstimatedValue_a71c45509eaf92d1,
            mid_setStatus_ef35478ae2de02b1,
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
